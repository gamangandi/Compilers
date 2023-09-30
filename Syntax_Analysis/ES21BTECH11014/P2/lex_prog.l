%{
    #include<stdio.h>
    #include<stdlib.h>
    #include<string.h>
    #include"yacc_prog.tab.h"
    FILE * pout;
%}


digit                       [0-9]
number                      {digit}+
id                          [a-zA-Z_][a-zA-Z0-9_]*

lcl                         ("local")
gbl                         ("global")
classkey                    ("class")
declare                     ("declare")
expr                        ("expr")
arithop                     ("add"|"sub"|"mul"|"div")
unaryop                     ("postincr"|"postdecr")
loop                        ("loop")
whilekey                    ("while")
forkey                      ("for")
dokey                       ("do")
booln                       ("true"|"false")
ifkey                       ("in case that")
elsekey                     ("otherwise")
returnkey                   ("return")
callkey                     ("call")
thiskey                     ("this")
relop                       ("lt"|"leq"|"gt"|"geq"|"eq"|"ne")
and                         ("and")
or                          ("or")
neg                         ("neg")
keywords                    ("local"|"global"|"in case that"|"otherwise"|"do"|"for"|"while"|"loop"|"gt"|"geq"|"lt"|"leq"|"ne"|"eq"|"neg"|"declare"|"expr"|"add"|"sub"|"mul"|"div"|"postincr"|"postdecr"|"return"|"call"|"class"|"and"|"or"|"true"|"false"|"this")

intkey                      ("int")
charkey                     ("char")
stringkey                   ("string")
boolkey                     ("bool")
voidkey                     ("void")
datatype                    ("int"|"char"|"string"|"bool"|"void")
operator                    ("=")

comma                       (",")
semicolon                   (";")
punctuation                 [,";:]

opensquare                  ("[")
closesquare                 ("]")
openparan                   ("(")
closeparan                  (")")
opencurly                   ("{")
closecurly                  ("}")
arrow                       ("->")
spec_symbol                 ("["|"]"|"("|")"|"\{"|"}"|"->")

string                      ["]([^"\\\n]|\\.|\\\n)*["]
character                   ['].[']
invalidid                   {digit}[a-zA-Z0-9_]+


%%

^[ ]*\n {yylineno++;}

[ ] {fprintf(pout, " ");}

[ ]* { }

\n {yylineno++; fprintf(pout, "\n");}
{lcl}                       {fprintf(yyout,"reserved keyword : %s\n",yytext); fprintf(pout,"%s",yytext); return lcl;}
{gbl}                       {fprintf(yyout,"reserved keyword : %s\n",yytext); fprintf(pout,"%s",yytext); return gbl;}
{classkey}                  {fprintf(yyout,"reserved keyword : %s\n",yytext); fprintf(pout,"%s",yytext); return classkey;}
{declare}                   {fprintf(yyout,"reserved keyword : %s\n",yytext); fprintf(pout,"%s",yytext); return declare;}
{expr}                      {fprintf(yyout,"reserved keyword : %s\n",yytext); fprintf(pout,"%s",yytext); return expr;}
{arithop}                   {fprintf(yyout,"reserved keyword : %s\n",yytext); fprintf(pout,"%s",yytext); return arithop;}
{unaryop}                   {fprintf(yyout,"reserved keyword : %s\n",yytext); fprintf(pout,"%s",yytext); return unaryop;}
{whilekey}                  {fprintf(yyout,"reserved keyword : %s\n",yytext); fprintf(pout,"%s",yytext); return whilekey;}
{dokey}                     {fprintf(yyout,"reserved keyword : %s\n",yytext); fprintf(pout,"%s",yytext); return dokey;}
{loop}                      {fprintf(yyout,"reserved keyword : %s\n",yytext); fprintf(pout,"%s",yytext); return loop;}
{booln}                     {fprintf(yyout,"reserved keyword : %s\n",yytext); fprintf(pout,"%s",yytext); return booln;}
{forkey}                    {fprintf(yyout,"reserved keyword : %s\n",yytext); fprintf(pout,"%s",yytext); return forkey;}
{ifkey}                     {fprintf(yyout,"reserved keyword : %s\n",yytext); fprintf(pout,"%s",yytext); return ifkey;}
{elsekey}                   {fprintf(yyout,"reserved keyword : %s\n",yytext); fprintf(pout,"%s",yytext); return elsekey;}
{returnkey}                 {fprintf(yyout,"reserved keyword : %s\n",yytext); fprintf(pout,"%s",yytext); return returnkey;}
{callkey}                   {fprintf(yyout,"reserved keyword : %s\n",yytext); fprintf(pout,"%s",yytext); return callkey;}
{thiskey}                   {fprintf(yyout,"reserved keyword : %s\n",yytext); fprintf(pout,"%s",yytext); return thiskey;}
{relop}                     {fprintf(yyout,"reserved keyword : %s\n",yytext); fprintf(pout,"%s",yytext); return relop;}
{and}                       {fprintf(yyout,"reserved keyword : %s\n",yytext); fprintf(pout,"%s",yytext); return and;}
{or}                        {fprintf(yyout,"reserved keyword : %s\n",yytext); fprintf(pout,"%s",yytext); return or;}
{neg}                       {fprintf(yyout,"reserved keyword : %s\n",yytext); fprintf(pout,"%s",yytext); return neg;}
{keywords}                  {fprintf(yyout,"reserved keyword : %s\n",yytext); fprintf(pout,"%s",yytext); }
{intkey}                    {fprintf(yyout,"datatype : %s\n",yytext); fprintf(pout,"%s",yytext); return intkey;}
{charkey}                   {fprintf(yyout,"datatype : %s\n",yytext); fprintf(pout,"%s",yytext); return charkey;}
{stringkey}                 {fprintf(yyout,"datatype : %s\n",yytext); fprintf(pout,"%s",yytext); return stringkey;}
{boolkey}                   {fprintf(yyout,"datatype : %s\n",yytext); fprintf(pout,"%s",yytext); return boolkey;}
{voidkey}                   {fprintf(yyout,"datatype : %s\n",yytext); fprintf(pout,"%s",yytext); return voidkey;}
{datatype}                  {fprintf(yyout,"datatype : %s\n",yytext); fprintf(pout,"%s",yytext); }
{number}                    {fprintf(yyout,"constant : %s\n",yytext); fprintf(pout,"%s",yytext); return number;}
{string}                    {fprintf(yyout,"punctuation : \"\n"); fprintf(pout,"%s",yytext); fprintf(yyout,"constant:    ");for(int i=1;i<strlen(yytext)-1;i++){fprintf(yyout,"%c",yytext[i]);}fprintf(yyout,"\n");fprintf(yyout,"punctuation:    \"\n"); return stringconst;}
{character}                 {fprintf(yyout,"punctuation : \'\n"); fprintf(pout,"%s",yytext); fprintf(yyout,"constant:    ");fprintf(yyout,"%c",yytext[1]);fprintf(yyout,"\n");fprintf(yyout,"punctuation:    \'\n"); return charconst;}
{invalidid}                 {fprintf(yyout,"lexical error at line %d\n",yylineno); fprintf(pout,"%s",yytext); return 0;}
{id}                        {fprintf(yyout,"ID : %s\n",yytext); fprintf(pout,"%s",yytext); return iden;}
{operator}                  {fprintf(yyout,"operator : %s\n",yytext); fprintf(pout,"%s",yytext); return assop;}
{comma}                     {fprintf(yyout,"punctuation : %s\n",yytext); fprintf(pout,"%s",yytext); return comma;}
{semicolon}                 {fprintf(yyout,"punctuation : %s\n",yytext); fprintf(pout,"%s",yytext); return semicolon;}
{punctuation}               {fprintf(yyout,"punctuation : %s\n",yytext); fprintf(pout,"%s",yytext); }
{opensquare}                {fprintf(yyout,"special symbol : %s\n",yytext); fprintf(pout,"%s",yytext); return opensquare;}
{closesquare}               {fprintf(yyout,"special symbol : %s\n",yytext); fprintf(pout,"%s",yytext); return closesquare;}
{openparan}                 {fprintf(yyout,"special symbol : %s\n",yytext); fprintf(pout,"%s",yytext); return openparan;}
{closeparan}                {fprintf(yyout,"special symbol : %s\n",yytext); fprintf(pout,"%s",yytext); return closeparan;}
{opencurly}                 {fprintf(yyout,"special symbol : %s\n",yytext); fprintf(pout,"%s",yytext); return opencurly;}
{closecurly}                {fprintf(yyout,"special symbol : %s\n",yytext); fprintf(pout,"%s",yytext); return closecurly;}
{arrow}                     {fprintf(yyout,"special symbol : %s\n",yytext); fprintf(pout,"%s",yytext); return arrow;}
{spec_symbol}               {fprintf(yyout,"special symbol : %s\n",yytext); fprintf(pout,"%s",yytext); }
.                           {fprintf(yyout,"unidentified text : %s\n",yytext); fprintf(pout,"%s",yytext); }


%%


int yywrap(){}

