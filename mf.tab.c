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
int cur_line = 0;
int errors = 0;
int cond = 0;
int yyerror(char *s)
{
	fprintf(stderr, "Line %d error is:%s\n", cur_line, s);
	return 0;
}

FILE* openFile();

#line 93 "mf.tab.c"

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
  YYSYMBOL_COMMENT = 5,                    /* COMMENT  */
  YYSYMBOL_COMMAND_FOR_SHELL = 6,          /* COMMAND_FOR_SHELL  */
  YYSYMBOL_DEFINE = 7,                     /* DEFINE  */
  YYSYMBOL_DEFINELINE = 8,                 /* DEFINELINE  */
  YYSYMBOL_ENDEF = 9,                      /* ENDEF  */
  YYSYMBOL_INCLUDE = 10,                   /* INCLUDE  */
  YYSYMBOL_EXPORT = 11,                    /* EXPORT  */
  YYSYMBOL_IFDEF = 12,                     /* IFDEF  */
  YYSYMBOL_IFNDEF = 13,                    /* IFNDEF  */
  YYSYMBOL_IFEQ = 14,                      /* IFEQ  */
  YYSYMBOL_IFNEQ = 15,                     /* IFNEQ  */
  YYSYMBOL_ELSE = 16,                      /* ELSE  */
  YYSYMBOL_ENDIF = 17,                     /* ENDIF  */
  YYSYMBOL_TEMPLATE = 18,                  /* TEMPLATE  */
  YYSYMBOL_VAR_DEF = 19,                   /* VAR_DEF  */
  YYSYMBOL_PATH = 20,                      /* PATH  */
  YYSYMBOL_FUNCTION = 21,                  /* FUNCTION  */
  YYSYMBOL_VAR_AUT = 22,                   /* VAR_AUT  */
  YYSYMBOL_NAME = 23,                      /* NAME  */
  YYSYMBOL_FILE_NAME = 24,                 /* FILE_NAME  */
  YYSYMBOL_SPECIAL = 25,                   /* SPECIAL  */
  YYSYMBOL_COMMAND = 26,                   /* COMMAND  */
  YYSYMBOL_SHELL_COMMAND = 27,             /* SHELL_COMMAND  */
  YYSYMBOL_28_ = 28,                       /* ';'  */
  YYSYMBOL_29_ = 29,                       /* ':'  */
  YYSYMBOL_30_ = 30,                       /* '/'  */
  YYSYMBOL_31_ = 31,                       /* '('  */
  YYSYMBOL_32_ = 32,                       /* ')'  */
  YYSYMBOL_33_ = 33,                       /* '{'  */
  YYSYMBOL_34_ = 34,                       /* '}'  */
  YYSYMBOL_35_ = 35,                       /* '|'  */
  YYSYMBOL_36_ = 36,                       /* '+'  */
  YYSYMBOL_37_ = 37,                       /* '-'  */
  YYSYMBOL_38_ = 38,                       /* '&'  */
  YYSYMBOL_39_ = 39,                       /* '['  */
  YYSYMBOL_40_ = 40,                       /* ']'  */
  YYSYMBOL_41_ = 41,                       /* '<'  */
  YYSYMBOL_42_ = 42,                       /* '>'  */
  YYSYMBOL_43_ = 43,                       /* '"'  */
  YYSYMBOL_44_ = 44,                       /* '\''  */
  YYSYMBOL_45_ = 45,                       /* ','  */
  YYSYMBOL_46_ = 46,                       /* '$'  */
  YYSYMBOL_47_ = 47,                       /* '!'  */
  YYSYMBOL_YYACCEPT = 48,                  /* $accept  */
  YYSYMBOL_lines = 49,                     /* lines  */
  YYSYMBOL_line = 50,                      /* line  */
  YYSYMBOL_target = 51,                    /* target  */
  YYSYMBOL_target_is = 52,                 /* target_is  */
  YYSYMBOL_target_names = 53,              /* target_names  */
  YYSYMBOL_target_name = 54,               /* target_name  */
  YYSYMBOL_template = 55,                  /* template  */
  YYSYMBOL_prequisites = 56,               /* prequisites  */
  YYSYMBOL_prequisite = 57,                /* prequisite  */
  YYSYMBOL_var = 58,                       /* var  */
  YYSYMBOL_var_name = 59,                  /* var_name  */
  YYSYMBOL_var_units = 60,                 /* var_units  */
  YYSYMBOL_var_unit = 61,                  /* var_unit  */
  YYSYMBOL_var_oper = 62,                  /* var_oper  */
  YYSYMBOL_var_val = 63,                   /* var_val  */
  YYSYMBOL_elems = 64,                     /* elems  */
  YYSYMBOL_elem = 65,                      /* elem  */
  YYSYMBOL_cmd = 66,                       /* cmd  */
  YYSYMBOL_cond = 67,                      /* cond  */
  YYSYMBOL_if = 68,                        /* if  */
  YYSYMBOL_ifdef = 69,                     /* ifdef  */
  YYSYMBOL_conds = 70,                     /* conds  */
  YYSYMBOL_var_conds = 71,                 /* var_conds  */
  YYSYMBOL_var_cond = 72,                  /* var_cond  */
  YYSYMBOL_include = 73,                   /* include  */
  YYSYMBOL_define = 74,                    /* define  */
  YYSYMBOL_def_commands = 75,              /* def_commands  */
  YYSYMBOL_def_command = 76,               /* def_command  */
  YYSYMBOL_units = 77,                     /* units  */
  YYSYMBOL_unit = 78,                      /* unit  */
  YYSYMBOL_string_conds = 79,              /* string_conds  */
  YYSYMBOL_string_const = 80,              /* string_const  */
  YYSYMBOL_end_of_line = 81                /* end_of_line  */
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
#define YYFINAL  57
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   562

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  134
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  207

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   282


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
       2,     2,     2,    47,    43,     2,    46,     2,    38,    44,
      31,    32,     2,    36,    45,    37,     2,    30,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    29,    28,
      41,     2,    42,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    39,     2,    40,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    33,    35,    34,     2,     2,     2,     2,
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
      25,    26,    27
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    42,    42,    44,    46,    52,    54,    56,    58,    60,
      62,    64,    66,    70,    72,    78,    80,    82,    84,    86,
      92,    94,    96,   102,   104,   110,   112,   118,   120,   122,
     124,   128,   130,   132,   136,   138,   140,   142,   148,   154,
     156,   158,   160,   162,   164,   166,   170,   174,   176,   178,
     182,   182,   182,   182,   182,   182,   182,   182,   182,   182,
     182,   182,   182,   182,   186,   188,   190,   192,   194,   196,
     198,   200,   203,   205,   209,   209,   209,   209,   211,   213,
     215,   217,   219,   221,   225,   225,   227,   227,   229,   229,
     231,   233,   237,   239,   241,   243,   247,   249,   251,   257,
     259,   265,   267,   269,   271,   273,   275,   277,   279,   281,
     283,   285,   285,   285,   285,   285,   285,   285,   285,   285,
     285,   285,   285,   289,   291,   295,   297,   299,   301,   305,
     307,   313,   315,   319,   319
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
  "COMMENT", "COMMAND_FOR_SHELL", "DEFINE", "DEFINELINE", "ENDEF",
  "INCLUDE", "EXPORT", "IFDEF", "IFNDEF", "IFEQ", "IFNEQ", "ELSE", "ENDIF",
  "TEMPLATE", "VAR_DEF", "PATH", "FUNCTION", "VAR_AUT", "NAME",
  "FILE_NAME", "SPECIAL", "COMMAND", "SHELL_COMMAND", "';'", "':'", "'/'",
  "'('", "')'", "'{'", "'}'", "'|'", "'+'", "'-'", "'&'", "'['", "']'",
  "'<'", "'>'", "'\"'", "'\\''", "','", "'$'", "'!'", "$accept", "lines",
  "line", "target", "target_is", "target_names", "target_name", "template",
  "prequisites", "prequisite", "var", "var_name", "var_units", "var_unit",
  "var_oper", "var_val", "elems", "elem", "cmd", "cond", "if", "ifdef",
  "conds", "var_conds", "var_cond", "include", "define", "def_commands",
  "def_command", "units", "unit", "string_conds", "string_const",
  "end_of_line", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-125)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-130)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     330,  -125,  -125,     4,    -4,    14,    68,    -6,  -125,  -125,
    -125,  -125,    53,    53,  -125,  -125,    11,  -125,    16,    53,
       5,   -15,   199,  -125,  -125,   137,     9,  -125,    55,  -125,
      30,  -125,  -125,  -125,   506,    68,  -125,  -125,  -125,  -125,
    -125,    53,   257,  -125,   112,  -125,    54,    70,  -125,  -125,
      37,  -125,    47,  -125,   516,   516,    63,  -125,  -125,   339,
    -125,   162,  -125,  -125,    79,   348,  -125,  -125,    75,  -125,
    -125,   511,    74,    89,    53,    88,  -125,  -125,    57,   108,
      53,   257,  -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,
    -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,
    -125,  -125,    53,  -125,  -125,  -125,  -125,    53,    53,  -125,
    -125,    96,  -125,  -125,  -125,     7,  -125,   516,   516,    47,
      92,    53,   339,  -125,  -125,  -125,  -125,   286,  -125,  -125,
     106,    77,    97,  -125,   511,  -125,  -125,   228,  -125,  -125,
    -125,  -125,    44,  -125,    44,  -125,   367,   395,  -125,  -125,
     111,   516,   516,  -125,  -125,  -125,   516,   516,  -125,  -125,
    -125,  -125,  -125,  -125,  -125,  -125,    74,    89,  -125,  -125,
     516,  -125,    53,  -125,  -125,  -125,  -125,    53,  -125,  -125,
    -125,  -125,  -125,   126,   123,   135,  -125,  -125,  -125,  -125,
     423,   451,   479,  -125,  -125,  -125,    44,    44,    44,  -125,
    -125,  -125,   124,  -125,   125,  -125,  -125
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,   133,    12,     0,     0,     0,     0,     0,    86,    87,
      84,    85,     0,     0,    25,   126,   125,   127,     0,     0,
       0,     0,     0,     3,     6,    31,     0,    20,    15,     7,
       0,   128,     8,     9,     0,     0,    10,    11,    23,     5,
     134,     0,     0,   125,     0,   123,    38,     0,    82,    83,
      18,    78,     0,    64,    46,    46,     0,     1,     4,    31,
      33,     0,    27,    32,    16,     0,    21,    24,    46,    95,
      93,     0,     0,     0,     0,    89,    90,    92,    88,    94,
       0,     0,   101,   104,   106,   107,   103,   109,   102,   117,
     111,   114,   112,   113,   115,   116,   118,   119,   120,   121,
     122,   105,     0,   108,   110,   124,    96,     0,     0,    19,
      26,     0,    49,    47,    48,     0,    65,    46,    46,     0,
       0,     0,    31,    29,    13,    17,    22,     0,    39,    34,
       0,     0,     0,    79,     0,   130,    81,     0,    99,    98,
      36,    37,     0,    66,     0,    67,     0,     0,    28,    14,
       0,    46,    46,    56,    50,    53,    46,    46,    51,    52,
      54,    55,    57,    58,    59,    60,    61,    62,    63,    40,
      46,    35,     0,   132,   131,    91,    94,     0,   100,    74,
      75,    77,    76,     0,    72,     0,    68,    69,    30,    43,
       0,     0,     0,    41,    80,    97,     0,     0,     0,    42,
      44,    45,     0,    73,     0,    70,    71
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -125,  -125,   140,  -125,  -125,  -125,   -17,    28,  -125,   -58,
     156,  -125,  -105,   -44,  -125,     0,  -124,   -26,  -125,  -125,
    -125,  -125,   102,  -125,    41,  -125,  -125,  -125,   -77,  -125,
     105,  -125,    35,     2
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    22,    23,    24,    25,    26,    27,   181,    61,    62,
      29,    30,   127,   128,   170,   112,   183,   184,    32,    33,
      34,    35,    74,    75,    76,    36,    37,   137,   102,    44,
     113,    78,   114,   104
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      31,   120,    39,   123,   138,     7,    31,    40,    53,    66,
     111,   115,   146,   147,    48,    49,    54,    46,    55,    41,
     185,    51,    31,    52,    39,    31,    31,    14,    28,    15,
     -38,    56,    43,    17,    31,    31,   144,    42,    64,    65,
      20,   145,   101,    81,    31,    50,   106,   190,   126,    68,
      28,   191,   192,    60,    67,    21,     1,   107,     3,    31,
     178,    31,    14,   124,   150,    31,   109,   179,   180,    79,
     129,    31,   202,   108,   204,    20,   133,   103,     1,   110,
       3,   101,   136,   169,   -24,   -24,   116,    60,    15,    60,
      21,    43,    17,    67,   117,    15,   118,   131,    43,    17,
      72,    73,   169,   169,   139,    38,    79,   189,   125,   140,
     141,    45,   132,   135,    21,     1,   103,     3,    72,    73,
     173,    21,    31,   149,   148,   142,   193,    38,   143,   171,
      63,    38,    15,   134,    31,    43,    17,   101,   172,    77,
      80,   174,   182,   188,   182,   196,   169,   169,   169,   105,
      60,  -129,  -129,   197,   198,    14,   205,    15,    21,   206,
      43,    17,    58,    47,    63,     1,    63,     3,    59,   176,
      38,   203,   103,   130,   194,   175,    77,     0,     0,   195,
      14,     0,    15,    21,     0,    43,    17,     0,     0,     0,
     121,     0,     0,   122,     0,     0,   182,   182,   182,    57,
       0,     0,     1,     2,     3,     0,     4,     5,    21,     6,
       7,     8,     9,    10,    11,    12,    13,    14,     0,    15,
       0,     0,    16,    17,    18,    19,     0,    63,     0,     0,
      20,     1,     0,     3,     0,     0,     0,   177,     0,    77,
       0,     0,     0,     0,     0,    21,     0,    82,    83,    84,
      85,     0,    86,     0,    87,    88,    89,    90,    91,     0,
       1,     0,     3,    92,    93,    94,    95,    96,    97,    98,
      99,    72,    73,     0,    21,   100,    82,    83,    84,    85,
       0,    86,     0,    87,    88,    89,    90,    91,     0,     1,
       0,     3,    92,    93,    94,    95,    96,    97,    98,    99,
      72,    73,     0,    21,   100,   151,    15,   152,     0,    43,
      17,     0,     0,     0,   153,   154,   155,   156,     0,   157,
       0,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,    21,     1,     2,     3,     0,     4,     5,     0,
       6,     7,     8,     9,    10,    11,    12,    13,    14,     0,
      15,     0,     0,    16,    17,    18,    19,   119,     0,    15,
       0,    20,    43,    17,     0,     0,    14,     0,    15,     0,
      20,    43,    17,     0,     0,     0,    21,     0,     0,    20,
       0,     0,     0,     0,     0,    21,   151,    15,   152,     0,
      43,    17,     0,     0,    21,   153,   154,   155,   156,   186,
     157,     0,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,    21,   151,    15,   152,     0,    43,    17,
       0,     0,     0,   153,   154,   155,   156,     0,   157,   187,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,    21,   151,    15,   152,     0,    43,    17,     0,     0,
       0,   153,   154,   155,   156,   199,   157,     0,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,    21,
     151,    15,   152,     0,    43,    17,     0,     0,     0,   153,
     154,   155,   156,   200,   157,     0,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,    21,   151,    15,
     152,     0,    43,    17,     0,     0,     0,   153,   154,   155,
     156,     0,   157,   201,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,    21,    15,    69,    70,    43,
      17,    15,    69,    70,    43,    17,    15,    71,     0,    43,
      17,     0,     0,     0,     0,     0,     0,     0,     0,    72,
      73,     0,    21,     0,    72,    73,     0,    21,     0,    72,
      73,     0,    21
};

static const yytype_int16 yycheck[] =
{
       0,    59,     0,    61,    81,    11,     6,     3,    23,    26,
      54,    55,   117,   118,    12,    13,    31,    23,    33,    23,
     144,    19,    22,    18,    22,    25,    26,    18,     0,    20,
      19,    46,    23,    24,    34,    35,    29,    23,    29,    30,
      31,    34,    42,    41,    44,    29,    44,   152,    65,    19,
      22,   156,   157,    25,    26,    46,     3,     3,     5,    59,
     137,    61,    18,    61,   122,    65,    29,    23,    24,    34,
      68,    71,   196,     3,   198,    31,    74,    42,     3,    32,
       5,    81,    80,   127,    29,    30,    23,    59,    20,    61,
      46,    23,    24,    65,    31,    20,    33,    23,    23,    24,
      43,    44,   146,   147,   102,     0,    71,   151,    29,   107,
     108,     6,    23,    78,    46,     3,    81,     5,    43,    44,
      43,    46,   122,   121,    32,    29,   170,    22,    32,   127,
      25,    26,    20,    45,   134,    23,    24,   137,    32,    34,
      35,    44,   142,    32,   144,    19,   190,   191,   192,    44,
     122,    43,    44,    30,    19,    18,    32,    20,    46,    34,
      23,    24,    22,     7,    59,     3,    61,     5,    31,   134,
      65,   197,   137,    71,   172,   134,    71,    -1,    -1,   177,
      18,    -1,    20,    46,    -1,    23,    24,    -1,    -1,    -1,
      28,    -1,    -1,    31,    -1,    -1,   196,   197,   198,     0,
      -1,    -1,     3,     4,     5,    -1,     7,     8,    46,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    20,
      -1,    -1,    23,    24,    25,    26,    -1,   122,    -1,    -1,
      31,     3,    -1,     5,    -1,    -1,    -1,     9,    -1,   134,
      -1,    -1,    -1,    -1,    -1,    46,    -1,    19,    20,    21,
      22,    -1,    24,    -1,    26,    27,    28,    29,    30,    -1,
       3,    -1,     5,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    -1,    46,    47,    19,    20,    21,    22,
      -1,    24,    -1,    26,    27,    28,    29,    30,    -1,     3,
      -1,     5,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    -1,    46,    47,    19,    20,    21,    -1,    23,
      24,    -1,    -1,    -1,    28,    29,    30,    31,    -1,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,     3,     4,     5,    -1,     7,     8,    -1,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      20,    -1,    -1,    23,    24,    25,    26,    18,    -1,    20,
      -1,    31,    23,    24,    -1,    -1,    18,    -1,    20,    -1,
      31,    23,    24,    -1,    -1,    -1,    46,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    46,    19,    20,    21,    -1,
      23,    24,    -1,    -1,    46,    28,    29,    30,    31,    32,
      33,    -1,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    19,    20,    21,    -1,    23,    24,
      -1,    -1,    -1,    28,    29,    30,    31,    -1,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    19,    20,    21,    -1,    23,    24,    -1,    -1,
      -1,    28,    29,    30,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      19,    20,    21,    -1,    23,    24,    -1,    -1,    -1,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    19,    20,
      21,    -1,    23,    24,    -1,    -1,    -1,    28,    29,    30,
      31,    -1,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    20,    21,    22,    23,
      24,    20,    21,    22,    23,    24,    20,    31,    -1,    23,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      44,    -1,    46,    -1,    43,    44,    -1,    46,    -1,    43,
      44,    -1,    46
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     7,     8,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    20,    23,    24,    25,    26,
      31,    46,    49,    50,    51,    52,    53,    54,    55,    58,
      59,    63,    66,    67,    68,    69,    73,    74,    78,    81,
       3,    23,    23,    23,    77,    78,    23,    58,    81,    81,
      29,    81,    18,    23,    31,    33,    46,     0,    50,    31,
      55,    56,    57,    78,    29,    30,    54,    55,    19,    21,
      22,    31,    43,    44,    70,    71,    72,    78,    79,    80,
      78,    81,    19,    20,    21,    22,    24,    26,    27,    28,
      29,    30,    35,    36,    37,    38,    39,    40,    41,    42,
      47,    63,    76,    80,    81,    78,    81,     3,     3,    29,
      32,    61,    63,    78,    80,    61,    23,    31,    33,    18,
      57,    28,    31,    57,    81,    29,    54,    60,    61,    81,
      70,    23,    23,    81,    45,    80,    81,    75,    76,    81,
      81,    81,    29,    32,    29,    34,    60,    60,    32,    81,
      57,    19,    21,    28,    29,    30,    31,    33,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    61,
      62,    81,    32,    43,    44,    72,    80,     9,    76,    23,
      24,    55,    63,    64,    65,    64,    32,    34,    32,    61,
      60,    60,    60,    61,    81,    81,    19,    30,    19,    32,
      32,    34,    64,    65,    64,    32,    34
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    48,    49,    49,    49,    50,    50,    50,    50,    50,
      50,    50,    50,    51,    51,    52,    52,    52,    52,    52,
      53,    53,    53,    54,    54,    55,    55,    56,    56,    56,
      56,    57,    57,    57,    58,    58,    58,    58,    59,    60,
      60,    60,    60,    60,    60,    60,    61,    61,    61,    61,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    63,    63,    63,    63,    63,    63,
      63,    63,    64,    64,    65,    65,    65,    65,    66,    67,
      67,    67,    67,    67,    68,    68,    69,    69,    70,    70,
      71,    71,    72,    72,    72,    72,    73,    74,    74,    75,
      75,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    77,    77,    78,    78,    78,    78,    79,
      79,    80,    80,    81,    81
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     4,     1,     2,     3,     2,     3,
       1,     2,     3,     1,     1,     1,     3,     1,     3,     2,
       4,     0,     1,     1,     3,     4,     4,     4,     1,     1,
       2,     3,     4,     3,     4,     4,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     3,     4,     4,     5,     5,
       8,     8,     1,     3,     1,     1,     1,     1,     2,     3,
       5,     3,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     3,     6,     4,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     1,     1,     1,
       2,     3,     3,     1,     2
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
  case 12: /* line: ERROR  */
#line 66 "mf.y"
                {yyerror("Unknown syntax");}
#line 1378 "mf.tab.c"
    break;

  case 79: /* cond: if conds end_of_line  */
#line 213 "mf.y"
                             {cond++;}
#line 1384 "mf.tab.c"
    break;

  case 80: /* cond: if '(' conds ')' end_of_line  */
#line 215 "mf.y"
                                       {cond++;}
#line 1390 "mf.tab.c"
    break;

  case 81: /* cond: ifdef unit end_of_line  */
#line 217 "mf.y"
                                 {cond++;}
#line 1396 "mf.tab.c"
    break;

  case 82: /* cond: ELSE end_of_line  */
#line 219 "mf.y"
                           {if(cond == 0) yyerror("Write if before writing else"); else cond--;}
#line 1402 "mf.tab.c"
    break;

  case 83: /* cond: ENDIF end_of_line  */
#line 221 "mf.y"
                            {if(cond == 0) yyerror("Write if before writing else"); else cond--;}
#line 1408 "mf.tab.c"
    break;

  case 133: /* end_of_line: EOL  */
#line 319 "mf.y"
                 {cur_line++;}
#line 1414 "mf.tab.c"
    break;

  case 134: /* end_of_line: COMMENT EOL  */
#line 319 "mf.y"
                                             {cur_line++;}
#line 1420 "mf.tab.c"
    break;


#line 1424 "mf.tab.c"

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

#line 321 "mf.y"


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
	if (cond > 0) errors++;
	if (errors == 0) printf("\nEverything is OK");
	else printf("Found %d errors", errors);
	fclose(yyin);
	return 0;
}

