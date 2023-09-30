/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "yacc_prog.y"

#include <stdio.h>

int yylex();
int yyerror(char *s);

extern FILE* yyin;
extern FILE* yyout;
extern FILE* pout;

int cnt = 0;


#line 85 "yacc_prog.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "yacc_prog.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_iden = 3,                       /* iden  */
  YYSYMBOL_number = 4,                     /* number  */
  YYSYMBOL_opensquare = 5,                 /* opensquare  */
  YYSYMBOL_closesquare = 6,                /* closesquare  */
  YYSYMBOL_openparan = 7,                  /* openparan  */
  YYSYMBOL_closeparan = 8,                 /* closeparan  */
  YYSYMBOL_opencurly = 9,                  /* opencurly  */
  YYSYMBOL_closecurly = 10,                /* closecurly  */
  YYSYMBOL_lcl = 11,                       /* lcl  */
  YYSYMBOL_gbl = 12,                       /* gbl  */
  YYSYMBOL_classkey = 13,                  /* classkey  */
  YYSYMBOL_comma = 14,                     /* comma  */
  YYSYMBOL_semicolon = 15,                 /* semicolon  */
  YYSYMBOL_declare = 16,                   /* declare  */
  YYSYMBOL_expr = 17,                      /* expr  */
  YYSYMBOL_assop = 18,                     /* assop  */
  YYSYMBOL_stringconst = 19,               /* stringconst  */
  YYSYMBOL_charconst = 20,                 /* charconst  */
  YYSYMBOL_arithop = 21,                   /* arithop  */
  YYSYMBOL_unaryop = 22,                   /* unaryop  */
  YYSYMBOL_whilekey = 23,                  /* whilekey  */
  YYSYMBOL_dokey = 24,                     /* dokey  */
  YYSYMBOL_loop = 25,                      /* loop  */
  YYSYMBOL_booln = 26,                     /* booln  */
  YYSYMBOL_forkey = 27,                    /* forkey  */
  YYSYMBOL_ifkey = 28,                     /* ifkey  */
  YYSYMBOL_elsekey = 29,                   /* elsekey  */
  YYSYMBOL_intkey = 30,                    /* intkey  */
  YYSYMBOL_charkey = 31,                   /* charkey  */
  YYSYMBOL_stringkey = 32,                 /* stringkey  */
  YYSYMBOL_boolkey = 33,                   /* boolkey  */
  YYSYMBOL_voidkey = 34,                   /* voidkey  */
  YYSYMBOL_returnkey = 35,                 /* returnkey  */
  YYSYMBOL_callkey = 36,                   /* callkey  */
  YYSYMBOL_thiskey = 37,                   /* thiskey  */
  YYSYMBOL_arrow = 38,                     /* arrow  */
  YYSYMBOL_relop = 39,                     /* relop  */
  YYSYMBOL_and = 40,                       /* and  */
  YYSYMBOL_or = 41,                        /* or  */
  YYSYMBOL_neg = 42,                       /* neg  */
  YYSYMBOL_YYACCEPT = 43,                  /* $accept  */
  YYSYMBOL_S = 44,                         /* S  */
  YYSYMBOL_func = 45,                      /* func  */
  YYSYMBOL_46_1 = 46,                      /* $@1  */
  YYSYMBOL_datatp = 47,                    /* datatp  */
  YYSYMBOL_datatype = 48,                  /* datatype  */
  YYSYMBOL_scopetype = 49,                 /* scopetype  */
  YYSYMBOL_X = 50,                         /* X  */
  YYSYMBOL_funcargs = 51,                  /* funcargs  */
  YYSYMBOL_Y = 52,                         /* Y  */
  YYSYMBOL_funcbody = 53,                  /* funcbody  */
  YYSYMBOL_stmt = 54,                      /* stmt  */
  YYSYMBOL_declaration = 55,               /* declaration  */
  YYSYMBOL_Z = 56,                         /* Z  */
  YYSYMBOL_expression = 57,                /* expression  */
  YYSYMBOL_RHS = 58,                       /* RHS  */
  YYSYMBOL_constant = 59,                  /* constant  */
  YYSYMBOL_bin = 60,                       /* bin  */
  YYSYMBOL_una = 61,                       /* una  */
  YYSYMBOL_A = 62,                         /* A  */
  YYSYMBOL_B = 63,                         /* B  */
  YYSYMBOL_loopstmt = 64,                  /* loopstmt  */
  YYSYMBOL_whileloop = 65,                 /* whileloop  */
  YYSYMBOL_66_2 = 66,                      /* $@2  */
  YYSYMBOL_whilebody = 67,                 /* whilebody  */
  YYSYMBOL_newcon = 68,                    /* newcon  */
  YYSYMBOL_logop = 69,                     /* logop  */
  YYSYMBOL_PredicatePart = 70,             /* PredicatePart  */
  YYSYMBOL_predicate = 71,                 /* predicate  */
  YYSYMBOL_forloop = 72,                   /* forloop  */
  YYSYMBOL_73_3 = 73,                      /* $@3  */
  YYSYMBOL_C = 74,                         /* C  */
  YYSYMBOL_forbody = 75,                   /* forbody  */
  YYSYMBOL_conditionals = 76,              /* conditionals  */
  YYSYMBOL_77_4 = 77,                      /* $@4  */
  YYSYMBOL_ifbody = 78,                    /* ifbody  */
  YYSYMBOL_D = 79,                         /* D  */
  YYSYMBOL_80_5 = 80,                      /* $@5  */
  YYSYMBOL_elsebody = 81,                  /* elsebody  */
  YYSYMBOL_cstmt = 82,                     /* cstmt  */
  YYSYMBOL_caller = 83,                    /* caller  */
  YYSYMBOL_unacall = 84,                   /* unacall  */
  YYSYMBOL_funormeth = 85,                 /* funormeth  */
  YYSYMBOL_funcall = 86,                   /* funcall  */
  YYSYMBOL_T = 87,                         /* T  */
  YYSYMBOL_args = 88,                      /* args  */
  YYSYMBOL_U = 89,                         /* U  */
  YYSYMBOL_W = 90,                         /* W  */
  YYSYMBOL_methcall = 91,                  /* methcall  */
  YYSYMBOL_V = 92,                         /* V  */
  YYSYMBOL_ret = 93,                       /* ret  */
  YYSYMBOL_Q = 94,                         /* Q  */
  YYSYMBOL_class = 95,                     /* class  */
  YYSYMBOL_96_6 = 96,                      /* $@6  */
  YYSYMBOL_F = 97,                         /* F  */
  YYSYMBOL_classbody = 98,                 /* classbody  */
  YYSYMBOL_G = 99                          /* G  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   253

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  57
/* YYNRULES -- Number of rules.  */
#define YYNRULES  120
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  227

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   297


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    21,    21,    22,    23,    25,    25,    26,    27,    29,
      30,    31,    32,    33,    35,    35,    37,    38,    40,    41,
      42,    44,    45,    47,    48,    49,    50,    51,    52,    53,
      54,    56,    57,    58,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    73,    74,    76,    76,
      77,    92,    93,    94,    95,    97,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     113,   114,   115,   116,   117,   118,   123,   123,   124,   125,
     126,   129,   129,   130,   131,   131,   132,   133,   135,   137,
     138,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   156,   157,   158,   161,   162,
     163,   164,   168,   168,   169,   170,   171,   172,   173,   174,
     175
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "iden", "number",
  "opensquare", "closesquare", "openparan", "closeparan", "opencurly",
  "closecurly", "lcl", "gbl", "classkey", "comma", "semicolon", "declare",
  "expr", "assop", "stringconst", "charconst", "arithop", "unaryop",
  "whilekey", "dokey", "loop", "booln", "forkey", "ifkey", "elsekey",
  "intkey", "charkey", "stringkey", "boolkey", "voidkey", "returnkey",
  "callkey", "thiskey", "arrow", "relop", "and", "or", "neg", "$accept",
  "S", "func", "$@1", "datatp", "datatype", "scopetype", "X", "funcargs",
  "Y", "funcbody", "stmt", "declaration", "Z", "expression", "RHS",
  "constant", "bin", "una", "A", "B", "loopstmt", "whileloop", "$@2",
  "whilebody", "newcon", "logop", "PredicatePart", "predicate", "forloop",
  "$@3", "C", "forbody", "conditionals", "$@4", "ifbody", "D", "$@5",
  "elsebody", "cstmt", "caller", "unacall", "funormeth", "funcall", "T",
  "args", "U", "W", "methcall", "V", "ret", "Q", "class", "$@6", "F",
  "classbody", "G", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-183)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      88,  -183,  -183,     8,    19,    88,    17,    88,    18,  -183,
    -183,  -183,  -183,  -183,  -183,  -183,  -183,    30,  -183,  -183,
      49,  -183,    38,    28,    33,    52,    62,  -183,  -183,    46,
      81,  -183,    69,    46,    17,  -183,  -183,    78,    46,    87,
     102,    99,   107,  -183,  -183,    17,   102,   111,   108,    97,
     114,   118,    10,     4,   116,   102,  -183,  -183,   121,  -183,
    -183,  -183,  -183,  -183,   125,  -183,  -183,  -183,   137,   149,
     153,   147,   146,    60,   158,   154,    86,  -183,  -183,   176,
    -183,  -183,   159,  -183,  -183,   166,  -183,  -183,  -183,  -183,
      44,  -183,  -183,   160,    90,  -183,  -183,  -183,  -183,   136,
    -183,  -183,  -183,  -183,   173,   162,   167,  -183,  -183,    60,
     174,  -183,  -183,    86,    86,   183,   103,   191,   192,   106,
      60,   115,    86,  -183,  -183,    86,  -183,   180,   193,  -183,
     204,   137,  -183,    17,  -183,   196,  -183,  -183,  -183,   205,
     199,  -183,    72,   186,  -183,  -183,   190,   200,   194,  -183,
    -183,    86,    86,  -183,  -183,   209,  -183,    90,  -183,  -183,
    -183,  -183,   195,   197,   210,   214,   215,   216,   217,   219,
     220,   221,    60,  -183,  -183,   223,  -183,   207,  -183,   224,
     225,  -183,  -183,  -183,  -183,  -183,  -183,  -183,  -183,   227,
     113,   228,  -183,   102,  -183,  -183,  -183,  -183,  -183,  -183,
    -183,   230,   222,   102,   231,  -183,   229,  -183,   113,  -183,
    -183,   232,   102,   212,   222,  -183,  -183,   233,  -183,  -183,
    -183,  -183,   235,   102,  -183,   236,  -183
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,    14,    15,     0,     0,     4,     0,     4,   115,     1,
       2,     8,     9,    10,    11,    12,    13,     0,     7,     3,
       0,   112,     0,     0,     0,     0,     0,     5,   114,   116,
       0,    17,     0,   116,     0,   119,   118,     0,   116,     0,
      22,     0,     0,   113,   117,     0,    22,     0,     0,     0,
       0,     0,    55,     0,     0,    22,    23,    24,     0,    25,
      47,    46,    26,    27,     0,    30,    28,   120,    33,     0,
       0,     0,     0,    55,     0,     0,    55,    60,    37,     0,
      38,    39,     0,    52,   109,    55,    51,    67,    66,    61,
      70,   110,   111,     0,   106,   107,    89,    91,    92,     0,
       6,    21,    90,    88,     0,     0,    20,    16,    29,    55,
       0,    44,    45,    55,    55,     0,     0,     0,     0,     0,
      55,    73,    55,    53,    54,    55,   108,     0,     0,    93,
       0,    33,    31,     0,    18,     0,    35,    36,    41,     0,
       0,    81,     0,     0,    69,    68,     0,     0,     0,    42,
      43,    55,    55,    71,    72,     0,    95,     0,    32,    19,
      34,    48,    79,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    55,    74,    75,     0,   105,     0,    78,     0,
       0,    56,    57,    62,    63,    59,    58,    65,    64,     0,
       0,     0,    76,    22,    40,    99,   102,   101,   104,   100,
     103,     0,    98,    22,     0,    83,     0,    94,     0,    96,
      50,     0,    22,    86,    98,    49,    80,     0,    84,    82,
      97,    77,     0,    22,    87,     0,    85
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -183,   155,   -17,  -183,     3,  -183,  -183,  -183,   100,  -183,
     -45,  -183,   -11,   117,   170,  -183,  -182,   -77,   -40,    75,
    -183,  -183,  -183,  -183,  -183,   -74,   -81,   164,   -48,  -183,
    -183,  -183,  -183,  -183,  -183,  -183,  -183,  -183,  -183,  -183,
     -49,  -183,  -183,  -183,    93,  -183,    37,    45,  -183,  -183,
    -183,  -183,  -183,  -183,  -183,    21,  -183
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,     5,    32,    69,    18,     6,    27,    70,   134,
      54,    55,    56,   105,    57,   135,    86,    87,    88,   148,
     110,    59,    60,   177,   211,    89,   125,    90,   149,    61,
     204,   179,   217,    62,   163,   206,   219,   222,   225,    63,
      64,    65,    96,    97,   129,   201,   209,   202,    98,    99,
      66,    93,     7,    24,    21,    37,    38
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      58,    71,   117,    92,    91,   119,    58,    94,   197,    17,
     101,     8,    35,    77,    78,    58,    35,    79,    36,     9,
      11,    35,    36,    20,   112,   111,   197,    36,   115,    80,
      81,    82,    48,    22,    28,   143,    83,    42,   147,   118,
     152,    95,    29,    25,    84,    26,    53,    12,    13,    14,
      15,    16,    85,    23,    41,    33,    30,     1,     2,    44,
     137,   136,    34,    77,    78,   139,   140,    79,   165,   167,
      31,   150,   169,   171,   153,   164,    78,   154,    40,    80,
      81,    82,    48,   122,   123,   124,    83,    39,    43,    77,
      78,    80,    81,    79,    45,   127,    53,   128,    83,     1,
       2,     3,    85,   173,   174,    80,    81,    82,    48,    67,
      68,    46,    83,   198,    72,    73,   195,    78,    34,    47,
      74,    75,   178,   150,    48,    76,   100,    49,    85,    50,
      51,   198,    80,    81,    82,    48,   102,    52,    53,   196,
     103,   200,   142,   123,   124,   146,   123,   124,   205,    53,
     199,   104,   106,    58,   151,   123,   124,   108,   210,   200,
      10,   107,    19,    58,   109,   113,   120,   216,   199,    77,
      78,    47,    58,    79,   130,   126,   131,   132,   224,   116,
      78,   133,   138,    58,   155,    80,    81,    82,    48,   166,
      78,   141,    83,   168,    78,    80,    81,    82,    48,   144,
     145,   156,    83,   170,    78,    80,    81,   157,   172,    80,
      81,   160,    83,   161,   162,   175,    83,    48,   181,    80,
      81,   180,   182,   183,   184,   185,    83,   186,   187,   188,
     190,   191,   192,   159,   193,   194,   208,   203,   207,   213,
     212,   218,   215,   221,   223,   114,   226,   189,   158,   121,
     176,   220,     0,   214
};

static const yytype_int16 yycheck[] =
{
      40,    46,    79,    52,    52,    79,    46,     3,   190,     6,
      55,     3,    29,     3,     4,    55,    33,     7,    29,     0,
       3,    38,    33,     5,    73,    73,   208,    38,    76,    19,
      20,    21,    22,     3,     6,   116,    26,    34,   119,    79,
     121,    37,     9,     5,    34,     7,    36,    30,    31,    32,
      33,    34,    42,     4,    33,     9,     4,    11,    12,    38,
     109,   109,    16,     3,     4,   113,   114,     7,   142,   143,
       8,   120,   146,   147,   122,     3,     4,   125,     9,    19,
      20,    21,    22,    39,    40,    41,    26,     6,    10,     3,
       4,    19,    20,     7,     7,     5,    36,     7,    26,    11,
      12,    13,    42,   151,   152,    19,    20,    21,    22,    10,
       3,     9,    26,   190,     3,     7,     3,     4,    16,    17,
      23,     7,   162,   172,    22,     7,    10,    25,    42,    27,
      28,   208,    19,    20,    21,    22,    15,    35,    36,    26,
      15,   190,    39,    40,    41,    39,    40,    41,   193,    36,
     190,    14,     3,   193,    39,    40,    41,    10,   203,   208,
       5,     8,     7,   203,    18,     7,     7,   212,   208,     3,
       4,    17,   212,     7,    38,    15,     3,    15,   223,     3,
       4,    14,     8,   223,     4,    19,    20,    21,    22,     3,
       4,     8,    26,     3,     4,    19,    20,    21,    22,     8,
       8,     8,    26,     3,     4,    19,    20,     3,    14,    19,
      20,    15,    26,     8,    15,     6,    26,    22,     8,    19,
      20,    24,     8,     8,     8,     8,    26,     8,     8,     8,
       7,    24,     8,   133,     9,     8,    14,     9,     8,    10,
       9,    29,    10,    10,     9,    75,    10,   172,   131,    85,
     157,   214,    -1,   208
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    11,    12,    13,    44,    45,    49,    95,     3,     0,
      44,     3,    30,    31,    32,    33,    34,    47,    48,    44,
       5,    97,     3,     4,    96,     5,     7,    50,     6,     9,
       4,     8,    46,     9,    16,    45,    55,    98,    99,     6,
       9,    98,    47,    10,    98,     7,     9,    17,    22,    25,
      27,    28,    35,    36,    53,    54,    55,    57,    61,    64,
      65,    72,    76,    82,    83,    84,    93,    10,     3,    47,
      51,    53,     3,     7,    23,     7,     7,     3,     4,     7,
      19,    20,    21,    26,    34,    42,    59,    60,    61,    68,
      70,    71,    83,    94,     3,    37,    85,    86,    91,    92,
      10,    53,    15,    15,    14,    56,     3,     8,    10,    18,
      63,    71,    83,     7,    57,    71,     3,    60,    61,    68,
       7,    70,    39,    40,    41,    69,    15,     5,     7,    87,
      38,     3,    15,    14,    52,    58,    71,    83,     8,    71,
      71,     8,    39,    69,     8,     8,    39,    69,    62,    71,
      83,    39,    69,    71,    71,     4,     8,     3,    56,    51,
      15,     8,    15,    77,     3,    68,     3,    68,     3,    68,
       3,    68,    14,    71,    71,     6,    87,    66,    61,    74,
      24,     8,     8,     8,     8,     8,     8,     8,     8,    62,
       7,    24,     8,     9,     8,     3,    26,    59,    60,    61,
      83,    88,    90,     9,    73,    53,    78,     8,    14,    89,
      53,    67,     9,    10,    90,    10,    53,    75,    29,    79,
      89,    10,    80,     9,    53,    81,    10
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    44,    44,    46,    45,    47,    47,    48,
      48,    48,    48,    48,    49,    49,    50,    50,    51,    52,
      52,    53,    53,    54,    54,    54,    54,    54,    54,    54,
      54,    55,    56,    56,    57,    58,    58,    59,    59,    59,
      60,    61,    62,    62,    63,    63,    64,    64,    66,    65,
      67,    68,    68,    69,    69,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      71,    71,    71,    71,    71,    71,    73,    72,    74,    74,
      75,    77,    76,    78,    80,    79,    79,    81,    82,    83,
      84,    85,    85,    86,    87,    87,    88,    89,    89,    90,
      90,    90,    90,    90,    90,    91,    92,    92,    93,    94,
      94,    94,    96,    95,    97,    97,    98,    98,    99,    99,
      99
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     0,     0,     8,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     6,     2,     3,     2,
       0,     2,     0,     1,     1,     1,     1,     1,     1,     3,
       1,     5,     3,     0,     5,     1,     1,     1,     1,     1,
       6,     4,     1,     1,     1,     1,     1,     1,     0,    10,
       1,     1,     1,     1,     1,     0,     5,     5,     5,     5,
       1,     1,     5,     5,     5,     5,     1,     1,     3,     3,
       1,     3,     3,     2,     4,     4,     0,    11,     1,     0,
       1,     0,    10,     1,     0,     5,     0,     1,     2,     2,
       2,     1,     1,     2,     6,     2,     2,     3,     0,     1,
       1,     1,     1,     1,     1,     4,     1,     1,     3,     1,
       1,     1,     0,     7,     3,     0,     0,     2,     1,     1,
       3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 5: /* $@1: %empty  */
#line 25 "yacc_prog.y"
                                  {fprintf(pout," : function declaration");}
#line 1336 "yacc_prog.tab.c"
    break;

  case 6: /* func: scopetype datatp iden X $@1 opencurly funcbody closecurly  */
#line 25 "yacc_prog.y"
                                                                                                           {if(cnt == 0){yyerror("syntax error");return 1;}else{cnt = 0;}}
#line 1342 "yacc_prog.tab.c"
    break;

  case 23: /* stmt: declaration  */
#line 47 "yacc_prog.y"
                                                    {fprintf(pout," : decleration statement");}
#line 1348 "yacc_prog.tab.c"
    break;

  case 24: /* stmt: expression  */
#line 48 "yacc_prog.y"
                                                    {fprintf(pout," : expression statement");}
#line 1354 "yacc_prog.tab.c"
    break;

  case 27: /* stmt: cstmt  */
#line 51 "yacc_prog.y"
                                                   {fprintf(pout," : call statement");}
#line 1360 "yacc_prog.tab.c"
    break;

  case 28: /* stmt: ret  */
#line 52 "yacc_prog.y"
                                                    {fprintf(pout," : return statement"); cnt++;}
#line 1366 "yacc_prog.tab.c"
    break;

  case 48: /* $@2: %empty  */
#line 76 "yacc_prog.y"
                                                           {fprintf(pout," : loop");}
#line 1372 "yacc_prog.tab.c"
    break;

  case 76: /* $@3: %empty  */
#line 123 "yacc_prog.y"
                                                                       {fprintf(pout," : loop");}
#line 1378 "yacc_prog.tab.c"
    break;

  case 81: /* $@4: %empty  */
#line 129 "yacc_prog.y"
                                                       {fprintf(pout," : conditional statement");}
#line 1384 "yacc_prog.tab.c"
    break;

  case 84: /* $@5: %empty  */
#line 131 "yacc_prog.y"
              {fprintf(pout," : conditional statement");}
#line 1390 "yacc_prog.tab.c"
    break;

  case 90: /* unacall: una semicolon  */
#line 138 "yacc_prog.y"
                                                 {fprintf(pout," : call statement");}
#line 1396 "yacc_prog.tab.c"
    break;

  case 112: /* $@6: %empty  */
#line 168 "yacc_prog.y"
                          {fprintf(pout," : class declaration");}
#line 1402 "yacc_prog.tab.c"
    break;

  case 118: /* G: declaration  */
#line 173 "yacc_prog.y"
                            {fprintf(pout," : declaration statement");}
#line 1408 "yacc_prog.tab.c"
    break;


#line 1412 "yacc_prog.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 177 "yacc_prog.y"


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
