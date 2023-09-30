%{
#include <stdio.h>

int yylex();
int yyerror(char *s);

extern FILE* yyin;
extern FILE* yyout;
extern FILE* pout;

int cnt = 0;

%}

%token iden number opensquare closesquare openparan closeparan opencurly closecurly lcl gbl classkey comma semicolon declare
%token expr assop stringconst charconst arithop unaryop whilekey dokey loop booln forkey ifkey elsekey intkey charkey stringkey boolkey voidkey
%token returnkey callkey thiskey arrow relop and or neg

%%

S   : func S         
    | class S
    | ;

func    : scopetype datatp iden X {fprintf(pout," : function declaration");} opencurly funcbody closecurly {if(cnt == 0){yyerror("syntax error");return 1;}else{cnt = 0;}};
datatp  : datatype 
        | iden;

datatype : intkey
         | charkey
         | stringkey
         | boolkey
         | voidkey;

scopetype   : lcl | gbl;

X   : opensquare number closesquare openparan funcargs closeparan
    | openparan  closeparan;

funcargs    : datatp iden Y;
Y   : comma funcargs
    | ;

funcbody    : stmt funcbody
            | ;

stmt        : declaration                           {fprintf(pout," : decleration statement");}
            | expression                            {fprintf(pout," : expression statement");}
            | loopstmt
            | conditionals
            | cstmt                                {fprintf(pout," : call statement");}
            | ret                                   {fprintf(pout," : return statement"); cnt++;}
            | opencurly funcbody closecurly
            | unacall;
            
declaration    : declare datatp iden Z semicolon
Z   : comma iden Z
    | ;

expression    : expr iden assop RHS semicolon;
RHS   : predicate
      | caller;
constant    : number
            | stringconst
            | charconst;
bin : arithop openparan A comma A closeparan;
una : unaryop openparan B closeparan;
A   : predicate
    | caller;
B   : predicate
    | caller;

loopstmt   : forloop
           | whileloop;

whileloop   : loop whilekey openparan predicate closeparan {fprintf(pout," : loop");} dokey opencurly whilebody closecurly;
whilebody   : funcbody;

/* predicate   : alpha newT;
newT        : H newT
            | ;
alpha       : bin
            | una
            | iden
            | constant
            | openparan predicate closeparan
            | neg predicate
H   : and predicate
    | or predicate
    | relop predicate; */

newcon  : constant
        | booln;
logop   : and
        | or

PredicatePart : | openparan iden relop iden closeparan
                | openparan iden relop newcon closeparan 
                | openparan newcon relop newcon closeparan 
                | openparan newcon relop iden  closeparan
                | iden
                | newcon
                | openparan iden logop iden closeparan 
                | openparan iden logop newcon closeparan 
                | openparan newcon logop newcon closeparan 
                | openparan newcon logop iden closeparan  
                | una 
                | bin 
                | openparan una closeparan 
                | openparan bin closeparan


predicate : PredicatePart 
          | PredicatePart relop predicate 
          | PredicatePart logop predicate 
          | neg PredicatePart
          | neg PredicatePart relop predicate 
          | neg PredicatePart logop predicate  ;

            


forloop : forkey openparan expression predicate semicolon C closeparan {fprintf(pout," : loop");} opencurly forbody closecurly;
C   : una
    | ;
forbody : funcbody;


conditionals    : ifkey openparan predicate closeparan {fprintf(pout," : conditional statement");} dokey opencurly ifbody closecurly D;
ifbody  : funcbody;
D   : elsekey {fprintf(pout," : conditional statement");} opencurly elsebody closecurly
    | ;
elsebody    : funcbody;

cstmt : caller semicolon;

caller  : callkey funormeth; 
unacall : una semicolon                          {fprintf(pout," : call statement");} ;

funormeth : funcall
          | methcall;
funcall   : iden T;
T   : opensquare number closesquare openparan args closeparan
    | openparan closeparan;
args    : W U;
U   : comma W U
    | ;
W   : iden
    | una
    | constant
    | booln
    | caller
    | bin;


methcall    : V arrow iden T;
V   : iden
    | thiskey;


ret : returnkey Q semicolon;
Q   : voidkey
    | predicate
    | caller;



class   : classkey iden F {fprintf(pout," : class declaration");} opencurly classbody closecurly;
F   : opensquare number closesquare
    | ;
classbody   : 
            | G classbody;
G   : declaration           {fprintf(pout," : declaration statement");}
    | func
    | opencurly classbody closecurly;

%%

int yyerror(char *s)
{
	printf("%s\n", s);
    fprintf(pout," invalid statement");
	return 0;
}

int main(int argc, char *argv[])
{
    FILE *fp = fopen(argv[1],"r");
    yyin = fp;
    yyout = fopen("seq_tokens.txt","w");
    pout = fopen("parser_output.parsed","w");
    yyparse();

    fclose(fp);
    fclose(yyout);
    fclose(pout);
    
    return 0;
}