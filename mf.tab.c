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
#line 2 "mf.y"

#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

extern FILE *yyin;
extern FILE *yyout;
extern int yylex();

int yyparse();
int yyerror(char *s)
{
	fprintf(stderr, "%s\n", s);
	return 0;
}

int cur_line = 0;
FILE* openFile();

#line 91 "mf.tab.c"

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

#include "mf.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_EOL = 3,                        /* EOL  */
  YYSYMBOL_ERROR = 4,                      /* ERROR  */
  YYSYMBOL_DEFINE = 5,                     /* DEFINE  */
  YYSYMBOL_DEFINELINE = 6,                 /* DEFINELINE  */
  YYSYMBOL_ENDEF = 7,                      /* ENDEF  */
  YYSYMBOL_INCLUDE = 8,                    /* INCLUDE  */
  YYSYMBOL_EXPORT = 9,                     /* EXPORT  */
  YYSYMBOL_IFDEF = 10,                     /* IFDEF  */
  YYSYMBOL_IFNDEF = 11,                    /* IFNDEF  */
  YYSYMBOL_IFEQ = 12,                      /* IFEQ  */
  YYSYMBOL_IFNEQ = 13,                     /* IFNEQ  */
  YYSYMBOL_ELSE = 14,                      /* ELSE  */
  YYSYMBOL_ENDIF = 15,                     /* ENDIF  */
  YYSYMBOL_TEMPLATE = 16,                  /* TEMPLATE  */
  YYSYMBOL_VAR_DEF = 17,                   /* VAR_DEF  */
  YYSYMBOL_PATH = 18,                      /* PATH  */
  YYSYMBOL_FUNCTION = 19,                  /* FUNCTION  */
  YYSYMBOL_VAR_AUT = 20,                   /* VAR_AUT  */
  YYSYMBOL_NAME = 21,                      /* NAME  */
  YYSYMBOL_FILE_NAME = 22,                 /* FILE_NAME  */
  YYSYMBOL_SPECIAL = 23,                   /* SPECIAL  */
  YYSYMBOL_COMMAND = 24,                   /* COMMAND  */
  YYSYMBOL_SHELL_COMMAND = 25,             /* SHELL_COMMAND  */
  YYSYMBOL_26_ = 26,                       /* ';'  */
  YYSYMBOL_27_ = 27,                       /* ':'  */
  YYSYMBOL_28_ = 28,                       /* '('  */
  YYSYMBOL_29_ = 29,                       /* ')'  */
  YYSYMBOL_30_ = 30,                       /* '{'  */
  YYSYMBOL_31_ = 31,                       /* '}'  */
  YYSYMBOL_32_ = 32,                       /* '\''  */
  YYSYMBOL_33_ = 33,                       /* '"'  */
  YYSYMBOL_34_ = 34,                       /* '|'  */
  YYSYMBOL_35_ = 35,                       /* '+'  */
  YYSYMBOL_36_ = 36,                       /* '/'  */
  YYSYMBOL_37_ = 37,                       /* '-'  */
  YYSYMBOL_38_ = 38,                       /* '&'  */
  YYSYMBOL_39_ = 39,                       /* '['  */
  YYSYMBOL_40_ = 40,                       /* ']'  */
  YYSYMBOL_41_ = 41,                       /* '<'  */
  YYSYMBOL_42_ = 42,                       /* '>'  */
  YYSYMBOL_43_ = 43,                       /* '$'  */
  YYSYMBOL_44_ = 44,                       /* ','  */
  YYSYMBOL_45_ = 45,                       /* '!'  */
  YYSYMBOL_YYACCEPT = 46,                  /* $accept  */
  YYSYMBOL_lines = 47,                     /* lines  */
  YYSYMBOL_line = 48,                      /* line  */
  YYSYMBOL_target = 49,                    /* target  */
  YYSYMBOL_target_is = 50,                 /* target_is  */
  YYSYMBOL_target_names = 51,              /* target_names  */
  YYSYMBOL_target_name = 52,               /* target_name  */
  YYSYMBOL_template = 53,                  /* template  */
  YYSYMBOL_prequisites = 54,               /* prequisites  */
  YYSYMBOL_prequisite = 55,                /* prequisite  */
  YYSYMBOL_var = 56,                       /* var  */
  YYSYMBOL_var_name = 57,                  /* var_name  */
  YYSYMBOL_var_units = 58,                 /* var_units  */
  YYSYMBOL_var_unit = 59,                  /* var_unit  */
  YYSYMBOL_var_oper = 60,                  /* var_oper  */
  YYSYMBOL_var_val = 61,                   /* var_val  */
  YYSYMBOL_cmd = 62,                       /* cmd  */
  YYSYMBOL_cond = 63,                      /* cond  */
  YYSYMBOL_if = 64,                        /* if  */
  YYSYMBOL_ifdef = 65,                     /* ifdef  */
  YYSYMBOL_conds = 66,                     /* conds  */
  YYSYMBOL_var_conds = 67,                 /* var_conds  */
  YYSYMBOL_var_cond = 68,                  /* var_cond  */
  YYSYMBOL_include = 69,                   /* include  */
  YYSYMBOL_define = 70,                    /* define  */
  YYSYMBOL_def_commands = 71,              /* def_commands  */
  YYSYMBOL_def_command = 72,               /* def_command  */
  YYSYMBOL_units = 73,                     /* units  */
  YYSYMBOL_unit = 74,                      /* unit  */
  YYSYMBOL_string_conds = 75,              /* string_conds  */
  YYSYMBOL_string_const = 76               /* string_const  */
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
#define YYFINAL  49
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   431

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  129
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  188

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   280


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
       2,     2,     2,    45,    33,     2,    43,     2,    38,    32,
      28,    29,     2,    35,    44,    37,     2,    36,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    27,    26,
      41,     2,    42,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    39,     2,    40,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    30,    34,    31,     2,     2,     2,     2,
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
      25
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    40,    40,    42,    44,    48,    50,    52,    54,    56,
      58,    60,    62,    66,    68,    74,    76,    78,    80,    82,
      88,    90,    96,    98,   100,   102,   108,   110,   116,   118,
     124,   126,   128,   130,   134,   136,   138,   140,   146,   152,
     154,   156,   158,   160,   162,   164,   166,   172,   174,   176,
     178,   180,   182,   184,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   192,   194,   196,
     198,   200,   202,   204,   206,   210,   212,   214,   216,   218,
     220,   224,   226,   230,   232,   235,   235,   237,   239,   243,
     245,   247,   249,   253,   255,   256,   261,   263,   269,   271,
     273,   275,   277,   279,   281,   283,   285,   287,   289,   289,
     289,   289,   289,   289,   289,   289,   289,   289,   289,   289,
     293,   295,   299,   301,   303,   305,   309,   311,   317,   319
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
  "\"end of file\"", "error", "\"invalid token\"", "EOL", "ERROR",
  "DEFINE", "DEFINELINE", "ENDEF", "INCLUDE", "EXPORT", "IFDEF", "IFNDEF",
  "IFEQ", "IFNEQ", "ELSE", "ENDIF", "TEMPLATE", "VAR_DEF", "PATH",
  "FUNCTION", "VAR_AUT", "NAME", "FILE_NAME", "SPECIAL", "COMMAND",
  "SHELL_COMMAND", "';'", "':'", "'('", "')'", "'{'", "'}'", "'\\''",
  "'\"'", "'|'", "'+'", "'/'", "'-'", "'&'", "'['", "']'", "'<'", "'>'",
  "'$'", "','", "'!'", "$accept", "lines", "line", "target", "target_is",
  "target_names", "target_name", "template", "prequisites", "prequisite",
  "var", "var_name", "var_units", "var_unit", "var_oper", "var_val", "cmd",
  "cond", "if", "ifdef", "conds", "var_conds", "var_cond", "include",
  "define", "def_commands", "def_command", "units", "unit", "string_conds",
  "string_const", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-98)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-127)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     354,   -98,   -98,   -12,    -7,   -11,    -3,   -98,   -98,   -98,
     -98,   -98,   -98,   -98,   -98,    13,   -98,    -8,    19,     0,
     228,   -98,   -98,    50,    -1,   -98,    29,   -98,    44,   -98,
     -98,   365,   -11,   -98,   -98,    55,   144,   -98,   -98,   -98,
      75,   -98,    52,   -98,    63,    66,    58,   -98,    57,   -98,
     -98,   -98,   -98,   -98,    41,   -98,   -98,   -98,    65,   -98,
     -98,    21,   -98,   -98,   370,    77,    78,    97,    60,   -98,
     -98,    43,    48,   105,   144,   -98,   -98,   -98,   -98,   -98,
     -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,
     -98,   -98,   -98,   -98,   -98,   -98,   106,   -98,   -98,   176,
     393,     7,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   108,
     -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,    92,    93,
     185,   -98,   -98,    88,    87,    98,   -98,   370,   -98,   -98,
     103,   -98,   -98,   104,   122,   101,   121,   -98,    69,    69,
     -98,   102,   120,   -98,   398,   -98,   -98,    69,   -98,    69,
      92,    93,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,
     -98,   -98,   398,   151,   -98,   -98,   -98,   -98,   152,   -98,
     -98,   -98,   -98,   -98,   288,   236,   -98,   -98,   -98,   314,
     262,   -98,   -98,   -98,     5,   -98,     2,   -98
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     5,    12,     0,     0,     0,     0,    83,    84,    81,
      82,    79,    80,    26,    23,    22,    24,     0,     0,     0,
       0,     3,     6,     0,     0,    20,    15,     7,     0,     8,
       9,     0,     0,    10,    11,     0,     0,   123,   122,   124,
       0,   125,     0,   120,    38,     0,    18,    75,     0,     1,
       4,    31,    30,    32,     0,    28,    33,    22,    16,    21,
      25,     0,    92,    90,     0,     0,     0,     0,    86,    87,
      89,    85,    91,     0,     0,   107,    98,   101,   103,   104,
     100,   106,    99,   114,   108,   109,   110,   111,   112,   113,
     115,   116,   117,   118,   119,   102,     0,   105,    67,     0,
       0,     0,    93,   121,    36,    37,    19,    27,    13,     0,
      29,    17,    34,    51,    53,    47,    50,    52,     0,     0,
       0,    39,    46,     0,     0,     0,    76,     0,   127,    78,
       0,    96,    95,     0,     0,     0,     0,    68,     0,     0,
      14,     0,     0,    35,     0,    60,    54,     0,    42,     0,
      66,    65,    55,    56,    57,    58,    59,    61,    62,    63,
      64,    40,     0,     0,   128,   129,    88,    91,     0,    97,
      69,    71,    70,    72,     0,     0,    48,    49,    43,     0,
       0,    41,    77,    94,    42,    74,    42,    45
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -98,   -98,   136,   -98,   -98,   -98,   133,   135,   -98,   111,
     161,   -98,    11,   -97,   -98,   -23,   -98,   -98,   -98,   -98,
     109,   -98,    45,   -98,   -98,   -98,   -70,   -98,    47,   -98,
     -30
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    20,    21,    22,    23,    24,    25,    26,    54,    55,
      27,    28,   120,   121,   162,    41,    29,    30,    31,    32,
      67,    68,    69,    33,    34,   130,    96,    42,    70,    71,
      97
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      56,    72,   134,   136,   131,   -44,     6,    37,   -73,    35,
      38,    39,   -73,    95,    36,    13,    48,    14,    44,    46,
      57,    16,    47,   161,   112,   -73,    58,    19,   137,   -73,
     -38,    56,    40,   -44,    72,   138,   -73,   139,   122,   113,
     114,   128,   115,   116,   108,   -25,   117,   178,   -73,   -73,
     -73,    95,    43,   118,   119,   102,   -25,   -25,    74,    51,
     169,    61,    52,    53,    40,   181,   104,   109,    51,   105,
      37,    52,    53,    38,    39,    65,    66,   161,   161,    73,
    -126,  -126,   161,   161,    40,   106,   107,   113,   114,   103,
     115,   116,   111,    40,   117,    40,    98,   167,   124,   125,
     126,   118,   119,    99,   127,   100,    75,    95,   129,   132,
     168,   140,    40,   141,   142,   122,   122,   163,   101,   164,
      76,    77,    78,    79,   122,    80,   122,    81,    82,    83,
      84,   165,   172,   170,   176,    65,    66,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    40,    75,    94,   174,
     175,   171,   173,   177,   182,   183,    50,    59,   179,    60,
     180,    76,    77,    78,    79,   110,    80,    45,    81,    82,
      83,    84,   166,   123,     0,     0,    65,    66,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    40,   143,    94,
       0,     0,     0,     0,   113,   114,     0,   133,   116,     0,
       0,   117,   144,   113,   114,     0,   115,   116,   118,   119,
     117,   145,   146,   147,   148,   149,     0,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,    49,     0,
       0,     1,     2,     3,     4,     0,     5,     6,     7,     8,
       9,    10,    11,    12,    13,     0,    14,     0,     0,    15,
      16,    17,    18,   144,   113,   114,    19,   115,   116,     0,
       0,   117,   145,   146,   147,   148,   149,   185,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   144,
     113,   114,     0,   115,   116,     0,     0,   117,   145,   146,
     147,   148,   149,   187,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   144,   113,   114,     0,   115,
     116,     0,     0,   117,   145,   146,   147,   184,   149,     0,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   144,   113,   114,     0,   115,   116,     0,     0,   117,
     145,   146,   147,   186,   149,     0,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,     1,     2,     3,
       4,     0,     5,     6,     7,     8,     9,    10,    11,    12,
      13,     0,    14,     0,     0,    15,    16,    17,    18,     0,
       0,     0,    19,    37,    62,    63,    38,    39,    37,    62,
      63,    38,    39,    64,     0,     0,     0,    65,    66,     0,
       0,     0,    65,    66,     0,     0,     0,     0,    40,     0,
       0,   113,   114,    40,   135,   116,   113,   114,   117,   115,
     116,     0,     0,   117,     0,   118,   119,     0,     0,     0,
     118,   119
};

static const yytype_int16 yycheck[] =
{
      23,    31,    99,   100,    74,     3,     9,    18,     3,    21,
      21,    22,     7,    36,    21,    16,    16,    18,    21,    27,
      21,    22,     3,   120,     3,    20,    27,    28,    21,    24,
      17,    54,    43,    31,    64,    28,    31,    30,    61,    18,
      19,    71,    21,    22,     3,    16,    25,   144,    43,    44,
      45,    74,     5,    32,    33,     3,    27,    28,     3,    18,
     130,    17,    21,    22,    43,   162,     3,    26,    18,     3,
      18,    21,    22,    21,    22,    32,    33,   174,   175,    32,
      32,    33,   179,   180,    43,    27,    29,    18,    19,    42,
      21,    22,    27,    43,    25,    43,    21,   127,    21,    21,
       3,    32,    33,    28,    44,    30,     3,   130,     3,     3,
       7,     3,    43,    21,    21,   138,   139,    29,    43,    32,
      17,    18,    19,    20,   147,    22,   149,    24,    25,    26,
      27,    33,    31,    29,    32,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,     3,    45,   138,
     139,    29,    31,    33,     3,     3,    20,    24,   147,    24,
     149,    17,    18,    19,    20,    54,    22,     6,    24,    25,
      26,    27,   127,    64,    -1,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,     3,    45,
      -1,    -1,    -1,    -1,    18,    19,    -1,    21,    22,    -1,
      -1,    25,    17,    18,    19,    -1,    21,    22,    32,    33,
      25,    26,    27,    28,    29,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,     0,    -1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    -1,    -1,    21,
      22,    23,    24,    17,    18,    19,    28,    21,    22,    -1,
      -1,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    17,
      18,    19,    -1,    21,    22,    -1,    -1,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    17,    18,    19,    -1,    21,
      22,    -1,    -1,    25,    26,    27,    28,    29,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    17,    18,    19,    -1,    21,    22,    -1,    -1,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,     3,     4,     5,
       6,    -1,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    -1,    -1,    21,    22,    23,    24,    -1,
      -1,    -1,    28,    18,    19,    20,    21,    22,    18,    19,
      20,    21,    22,    28,    -1,    -1,    -1,    32,    33,    -1,
      -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    18,    19,    43,    21,    22,    18,    19,    25,    21,
      22,    -1,    -1,    25,    -1,    32,    33,    -1,    -1,    -1,
      32,    33
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    18,    21,    22,    23,    24,    28,
      47,    48,    49,    50,    51,    52,    53,    56,    57,    62,
      63,    64,    65,    69,    70,    21,    21,    18,    21,    22,
      43,    61,    73,    74,    21,    56,    27,     3,    16,     0,
      48,    18,    21,    22,    54,    55,    61,    21,    27,    52,
      53,    17,    19,    20,    28,    32,    33,    66,    67,    68,
      74,    75,    76,    74,     3,     3,    17,    18,    19,    20,
      22,    24,    25,    26,    27,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    45,    61,    72,    76,    21,    28,
      30,    43,     3,    74,     3,     3,    27,    29,     3,    26,
      55,    27,     3,    18,    19,    21,    22,    25,    32,    33,
      58,    59,    61,    66,    21,    21,     3,    44,    76,     3,
      71,    72,     3,    21,    59,    21,    59,    21,    28,    30,
       3,    21,    21,     3,    17,    26,    27,    28,    29,    30,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    59,    60,    29,    32,    33,    68,    76,     7,    72,
      29,    29,    31,    31,    58,    58,    32,    33,    59,    58,
      58,    59,     3,     3,    29,    31,    29,    31
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    46,    47,    47,    47,    48,    48,    48,    48,    48,
      48,    48,    48,    49,    49,    50,    50,    50,    50,    50,
      51,    51,    52,    52,    52,    52,    53,    53,    54,    54,
      55,    55,    55,    55,    56,    56,    56,    56,    57,    58,
      58,    58,    58,    58,    58,    58,    58,    59,    59,    59,
      59,    59,    59,    59,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    61,    61,    61,
      61,    61,    61,    61,    61,    62,    63,    63,    63,    63,
      63,    64,    64,    65,    65,    66,    66,    67,    67,    68,
      68,    68,    68,    69,    70,    70,    71,    71,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      73,    73,    74,    74,    74,    74,    75,    75,    76,    76
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     4,     1,     2,     3,     2,     3,
       1,     2,     1,     1,     1,     1,     1,     3,     1,     2,
       1,     1,     1,     1,     3,     4,     3,     3,     1,     1,
       2,     3,     2,     3,     4,     4,     1,     1,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     3,     4,
       4,     4,     4,     5,     5,     2,     3,     5,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     1,     3,     6,     4,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     1,     1,     1,     2,     3,     3
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
  case 5: /* line: EOL  */
#line 48 "mf.y"
            {cur_line++;}
#line 1335 "mf.tab.c"
    break;

  case 13: /* target: target_is prequisites EOL  */
#line 66 "mf.y"
                                  {cur_line++;}
#line 1341 "mf.tab.c"
    break;

  case 14: /* target: target_is prequisites ';' EOL  */
#line 68 "mf.y"
                                        {cur_line++;}
#line 1347 "mf.tab.c"
    break;

  case 18: /* target_is: SPECIAL ':'  */
#line 80 "mf.y"
                      {printf("special");}
#line 1353 "mf.tab.c"
    break;

  case 19: /* target_is: SPECIAL ':' ':'  */
#line 82 "mf.y"
                          {printf("special");}
#line 1359 "mf.tab.c"
    break;

  case 22: /* target_name: NAME  */
#line 96 "mf.y"
             {printf("target_name");}
#line 1365 "mf.tab.c"
    break;

  case 23: /* target_name: PATH  */
#line 98 "mf.y"
               {printf("target_path");}
#line 1371 "mf.tab.c"
    break;

  case 24: /* target_name: FILE_NAME  */
#line 100 "mf.y"
                    {printf("target_file");}
#line 1377 "mf.tab.c"
    break;

  case 26: /* template: TEMPLATE  */
#line 108 "mf.y"
                 {printf("template");}
#line 1383 "mf.tab.c"
    break;

  case 27: /* template: '(' TEMPLATE ')'  */
#line 110 "mf.y"
                           {printf("template");}
#line 1389 "mf.tab.c"
    break;

  case 30: /* prequisite: NAME  */
#line 124 "mf.y"
             {printf("prequisite_name");}
#line 1395 "mf.tab.c"
    break;

  case 31: /* prequisite: PATH  */
#line 126 "mf.y"
               {printf("prequisite_path");}
#line 1401 "mf.tab.c"
    break;

  case 32: /* prequisite: FILE_NAME  */
#line 128 "mf.y"
                    {printf("prequisite_file");}
#line 1407 "mf.tab.c"
    break;

  case 33: /* prequisite: var_val  */
#line 130 "mf.y"
                  {printf("prequisite_var_val");}
#line 1413 "mf.tab.c"
    break;

  case 38: /* var_name: NAME  */
#line 146 "mf.y"
             {printf("name");}
#line 1419 "mf.tab.c"
    break;

  case 53: /* var_unit: FUNCTION  */
#line 184 "mf.y"
                   {printf("function\n");}
#line 1425 "mf.tab.c"
    break;

  case 75: /* cmd: COMMAND EOL  */
#line 210 "mf.y"
                    {printf("command");}
#line 1431 "mf.tab.c"
    break;


#line 1435 "mf.tab.c"

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

#line 324 "mf.y"


FILE* openFile(int argc,char* argv[])
{
	FILE *f;
	if (argc == 1)
	{
		yyerror("Please write a file, we can't work without it.\n");
		return;
	}
	else if(argc == 2)
	{
		f = fopen(argv[1], "r");
		if(!f)
		{
			yyerror("Can't open your file.\n");
			return;
		}
		printf("File %s is opened\n", argv[1]);
		return f;
	}
}

int main(int argc, char* argv[])
{
	yyin = openFile(argc, argv);
	yyparse();
	fclose(yyin);
	return 0;
}

