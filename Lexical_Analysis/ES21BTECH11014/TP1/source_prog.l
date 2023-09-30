%{
    
#include<stdio.h>
#include<stdlib.h>
FILE* pr;
int state = 0;

void iskeyword(char* s);
void isdatatype(char* s);
void isnumber(char* s);
void islabel(char* s);
void isstring(char* s);
void ischaracter(char* s);
void isidentifier(char* s);
void isoperator(char* s);
void ispunctuation(char* s);
void isspecialsymbol(char* s);
void isnewline();
void isspaceorblank(char* s);
void issquareroot(char* s);

%}

spec_char                   [-@#*+/\\:_]
letter                      [a-zA-Z]
digit                       [0-9]
number                      {digit}+
label                       ("pp"){number}
id                          {spec_char}({letter}|{digit})+|{digit}*{letter}+({letter}|{digit})*
keywords                    ("in case that"|"otherwise"|"do"|"jump to"|"gt"|"gteq"|"lt"|"lteq"|"eq"|"neq"|"and"|"or"|"return")
datatype                    ("integer_2"|"character_1"|"null"|"string")
operator                    ("-"|"+"|"*"|"/"|"_"|"=")
punctuation                 [,";:]
blank                       [ \t]+
spec_symbol                 ("["|"]"|"("|")")
string                      ["]([^"\\\n]|\\.|\\\n)*["]
character                   ['].[']
invalidid                   ({id}|{number}){spec_char}+({id}|{number})|({id}|{number}){spec_char}+|{spec_char}{spec_char}+({id}|{number})*
sqrt                        {id}{blank}[_]{blank}{number}

%%

{blank}                     {isspaceorblank(yytext);}
{keywords}                  {fprintf(yyout,"reserved keyword:    %s\n",yytext);iskeyword(yytext);}
{datatype}                  {fprintf(yyout,"datatype:    %s\n",yytext);isdatatype(yytext);}
{number}                    {fprintf(yyout,"constant:    %s\n",yytext);isnumber(yytext);}
{label}                     {fprintf(yyout,"label:    %s\n",yytext);islabel(yytext);}
{label}[:]                  {fprintf(yyout,"label:    ");for(int i=0;i<strlen(yytext)-1;i++){fprintf(yyout,"%c",yytext[i]);}fprintf(yyout,"\n");fprintf(yyout,"punctuation:    :\n");}
{string}                    {fprintf(yyout,"punctuation:    \"\n");fprintf(yyout,"constant:    ");for(int i=1;i<strlen(yytext)-1;i++){fprintf(yyout,"%c",yytext[i]);}fprintf(yyout,"\n");fprintf(yyout,"punctuation:    \"\n");isstring(yytext);}
{character}                 {fprintf(yyout,"punctuation:    \'\n");fprintf(yyout,"constant:    ");fprintf(yyout,"%c",yytext[1]);fprintf(yyout,"\n");fprintf(yyout,"punctuation:    \'\n");ischaracter(yytext);}
{invalidid}                 {fprintf(yyout,"error at pp%d\n",yylineno);return 0;}
{id}                        {fprintf(yyout,"ID:    %s\n",yytext);isidentifier(yytext);}
{operator}                  {fprintf(yyout,"operator:    %s\n",yytext);isoperator(yytext);}
{punctuation}               {fprintf(yyout,"punctuation:    %s\n",yytext);ispunctuation(yytext);}
{spec_char}                 {fprintf(yyout,"special character:    %s\n",yytext);}
{spec_symbol}               {fprintf(yyout,"special symbol:    %s\n",yytext);isspecialsymbol(yytext);}
{sqrt}                      {issquareroot(yytext);}
.                           {fprintf(yyout,"unidentified text:    %s\n",yytext);}
\n                          {yylineno++;isnewline();}

%%

int yywrap(){}

void iskeyword(char *s)
{
    if(s[0] == 'i')
    {
        //in case that
        fprintf(pr,"if");
        state = 1;
    }
    else if(s[0] == 'o' && strlen(s) == 2)
    {
        //or
        fprintf(pr,"||");
    }
    else if(s[0] == 'o')
    {
        //otherwise
        fprintf(pr,"else");
    }
    else if(s[0] == 'd')
    {
        //do
        fprintf(pr,"  ");
    }
    else if(s[0] == 'j')
    {
        //jump to
        fprintf(pr,"goto ");
    }
    else if(s[0] == 'g' && strlen(s) == 2)
    {
        //gt
        fprintf(pr,">");
    }
    else if(s[0] == 'g')
    {
        //gteq
        fprintf(pr,">=");
    }
    else if(s[0] == 'l' && strlen(s) == 2)
    {
        //lt
        fprintf(pr,"<");
    }
    else if(s[0] == 'l')
    {
        //lteq
        fprintf(pr,"<=");
    }
    else if(s[0] == 'e')
    {
        //eq
        fprintf(pr,"==");
    }
    else if(s[0] == 'n')
    {
        //neq
        fprintf(pr,"!=");
    }
    else if(s[0] == 'a')
    {
        //and
        fprintf(pr,"&&");
    }
    else if(s[0] == 'r')
    {
        //return
        fprintf(pr,"%s",s);
    }
}

void isdatatype(char* s)
{
    if(s[0] == 'i')
    {
        //integer_2
        fprintf(pr,"int");
    }
    else if(s[0] == 'c')
    {
        //character_1
        fprintf(pr,"char");
    }
    else if(s[0] == 's')
    {
        //string
        fprintf(pr,"char*");
    }
    else if(s[0] == 'n')
    {
        //null
        fprintf(pr,"void");
    }
}

void isnumber(char* s)
{
    fprintf(pr,"%s",s);
}

void islabel(char* s)
{
    //fprintf(pr,"\n");
}

void isstring(char* s)
{
    fprintf(pr,"%s",s);
}

void ischaracter(char* s)
{
    fprintf(pr,"%s",s);
}

void isidentifier(char* s)
{
    fprintf(pr,"%s",s);
}

void isoperator(char* s)
{
    if(s[0] != '_')
    {
        fprintf(pr,"%s",s);
    }
}

void ispunctuation(char* s)
{
    if(s[0] != ':')
    {
        fprintf(pr,"%s",s);
    }
}

void isspecialsymbol(char* s)
{
    if(s[0] == '[')
    {
        if(state == 0)
        {
            fprintf(pr,"{");
        }
        else
        {
            fprintf(pr,"(");
        }
    }
    else if(s[0] == ']')
    {
        if(state == 0)
        {
            fprintf(pr,"}");
        }
        else
        {
            fprintf(pr,")");
            state = 0;
        }
    }
    else if(s[0] == '(' || s[0] == ')')
    {
        fprintf(pr,"%s",s);
    }
}

void isnewline()
{
    fprintf(pr,"\n");
}

void isspaceorblank(char* s)
{
    fprintf(pr,"%s",s);
}

void issquareroot(char* s)
{
    int n = strlen(s);
    fprintf(yyout,"ID:    ");
    int i = 0;
    while(s[i] != ' ' && i < n)
    {
        fprintf(yyout,"%c",s[i]);
        i++;
    }
    fprintf(yyout,"\n");
    while(s[i] == ' ' && i < n)
    {
        i++;
    }
    fprintf(yyout,"operator:    _\n");
    i++;
    while(s[i] == ' ' && i < n)
    {
        i++;
    }
    fprintf(yyout,"ID:    ");
    while(s[i] != ' ' && i < n)
    {
        fprintf(yyout,"%c",s[i]);
        i++;
    }
    fprintf(yyout,"\n");

    i = 0;
    fprintf(pr,"sqrt(");
    while(s[i] != ' ' && i < n)
    {
        fprintf(pr,"%c",s[i]);
        i++;
    }
    fprintf(pr,")");
}

int main(int argc, char *argv[])
{

    FILE* inp = fopen(argv[1],"r");
    FILE* outp = fopen("tokens_output.txt","w");
    pr = fopen("C_output.txt","w");

    yyin = inp;
    yyout = outp;

    yylex();

    fclose(yyin);
    fclose(yyout);
    fclose(pr);

    return 0;
}
