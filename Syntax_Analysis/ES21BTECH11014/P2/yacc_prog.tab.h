/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_YACC_PROG_TAB_H_INCLUDED
# define YY_YY_YACC_PROG_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    iden = 258,                    /* iden  */
    number = 259,                  /* number  */
    opensquare = 260,              /* opensquare  */
    closesquare = 261,             /* closesquare  */
    openparan = 262,               /* openparan  */
    closeparan = 263,              /* closeparan  */
    opencurly = 264,               /* opencurly  */
    closecurly = 265,              /* closecurly  */
    lcl = 266,                     /* lcl  */
    gbl = 267,                     /* gbl  */
    classkey = 268,                /* classkey  */
    comma = 269,                   /* comma  */
    semicolon = 270,               /* semicolon  */
    declare = 271,                 /* declare  */
    expr = 272,                    /* expr  */
    assop = 273,                   /* assop  */
    stringconst = 274,             /* stringconst  */
    charconst = 275,               /* charconst  */
    arithop = 276,                 /* arithop  */
    unaryop = 277,                 /* unaryop  */
    whilekey = 278,                /* whilekey  */
    dokey = 279,                   /* dokey  */
    loop = 280,                    /* loop  */
    booln = 281,                   /* booln  */
    forkey = 282,                  /* forkey  */
    ifkey = 283,                   /* ifkey  */
    elsekey = 284,                 /* elsekey  */
    intkey = 285,                  /* intkey  */
    charkey = 286,                 /* charkey  */
    stringkey = 287,               /* stringkey  */
    boolkey = 288,                 /* boolkey  */
    voidkey = 289,                 /* voidkey  */
    returnkey = 290,               /* returnkey  */
    callkey = 291,                 /* callkey  */
    thiskey = 292,                 /* thiskey  */
    arrow = 293,                   /* arrow  */
    relop = 294,                   /* relop  */
    and = 295,                     /* and  */
    or = 296,                      /* or  */
    neg = 297                      /* neg  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_YACC_PROG_TAB_H_INCLUDED  */
