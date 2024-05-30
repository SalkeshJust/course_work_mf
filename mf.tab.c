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
#line 3 "mf.y"

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
	fprintf(stderr, "Line %d error is: %s\n", cur_line, s);
	errors++;
	return 0;
}

FILE* openFile();

#line 94 "mf.tab.c"

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
  YYSYMBOL_SHELL = 28,                     /* SHELL  */
  YYSYMBOL_29_ = 29,                       /* ';'  */
  YYSYMBOL_30_ = 30,                       /* ':'  */
  YYSYMBOL_31_ = 31,                       /* '/'  */
  YYSYMBOL_32_ = 32,                       /* '('  */
  YYSYMBOL_33_ = 33,                       /* ')'  */
  YYSYMBOL_34_ = 34,                       /* '{'  */
  YYSYMBOL_35_ = 35,                       /* '}'  */
  YYSYMBOL_36_ = 36,                       /* '-'  */
  YYSYMBOL_37_ = 37,                       /* '$'  */
  YYSYMBOL_38_ = 38,                       /* '|'  */
  YYSYMBOL_39_ = 39,                       /* '+'  */
  YYSYMBOL_40_ = 40,                       /* '&'  */
  YYSYMBOL_41_ = 41,                       /* '['  */
  YYSYMBOL_42_ = 42,                       /* ']'  */
  YYSYMBOL_43_ = 43,                       /* '<'  */
  YYSYMBOL_44_ = 44,                       /* '>'  */
  YYSYMBOL_45_ = 45,                       /* '"'  */
  YYSYMBOL_46_ = 46,                       /* '\''  */
  YYSYMBOL_47_ = 47,                       /* ','  */
  YYSYMBOL_48_ = 48,                       /* '!'  */
  YYSYMBOL_YYACCEPT = 49,                  /* $accept  */
  YYSYMBOL_lines = 50,                     /* lines  */
  YYSYMBOL_line = 51,                      /* line  */
  YYSYMBOL_target = 52,                    /* target  */
  YYSYMBOL_target_is = 53,                 /* target_is  */
  YYSYMBOL_target_names = 54,              /* target_names  */
  YYSYMBOL_target_name = 55,               /* target_name  */
  YYSYMBOL_template = 56,                  /* template  */
  YYSYMBOL_prequisites = 57,               /* prequisites  */
  YYSYMBOL_prequisite = 58,                /* prequisite  */
  YYSYMBOL_var = 59,                       /* var  */
  YYSYMBOL_var_name = 60,                  /* var_name  */
  YYSYMBOL_var_units = 61,                 /* var_units  */
  YYSYMBOL_var_unit = 62,                  /* var_unit  */
  YYSYMBOL_var_oper = 63,                  /* var_oper  */
  YYSYMBOL_var_val = 64,                   /* var_val  */
  YYSYMBOL_elems = 65,                     /* elems  */
  YYSYMBOL_elem = 66,                      /* elem  */
  YYSYMBOL_cmd = 67,                       /* cmd  */
  YYSYMBOL_cond = 68,                      /* cond  */
  YYSYMBOL_if = 69,                        /* if  */
  YYSYMBOL_ifdef = 70,                     /* ifdef  */
  YYSYMBOL_conds = 71,                     /* conds  */
  YYSYMBOL_var_conds = 72,                 /* var_conds  */
  YYSYMBOL_var_cond = 73,                  /* var_cond  */
  YYSYMBOL_include = 74,                   /* include  */
  YYSYMBOL_define = 75,                    /* define  */
  YYSYMBOL_def_commands = 76,              /* def_commands  */
  YYSYMBOL_def_command = 77,               /* def_command  */
  YYSYMBOL_units = 78,                     /* units  */
  YYSYMBOL_unit = 79,                      /* unit  */
  YYSYMBOL_string_conds = 80,              /* string_conds  */
  YYSYMBOL_string_const = 81,              /* string_const  */
  YYSYMBOL_end_of_line = 82                /* end_of_line  */
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
#define YYFINAL  65
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   694

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  154
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  236

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   283


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
       2,     2,     2,    48,    45,     2,    37,     2,    40,    46,
      32,    33,     2,    39,    47,    36,     2,    31,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    30,    29,
      43,     2,    44,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    41,     2,    42,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    34,    38,    35,     2,     2,     2,     2,
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
      25,    26,    27,    28
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    44,    44,    46,    48,    54,    56,    58,    60,    62,
      64,    66,    68,    72,    74,    80,    82,    84,    86,    88,
      94,    96,    98,   104,   106,   108,   114,   116,   122,   124,
     126,   128,   132,   134,   136,   138,   142,   144,   146,   148,
     150,   156,   158,   160,   162,   168,   170,   172,   174,   176,
     178,   180,   182,   186,   190,   192,   194,   196,   198,   200,
     202,   204,   206,   212,   212,   212,   212,   212,   212,   212,
     212,   212,   212,   212,   212,   212,   212,   216,   218,   222,
     224,   226,   228,   230,   232,   234,   236,   240,   242,   246,
     246,   246,   246,   248,   250,   252,   254,   256,   258,   262,
     262,   264,   264,   266,   266,   268,   270,   274,   276,   278,
     280,   284,   286,   288,   290,   296,   298,   304,   306,   308,
     310,   312,   314,   316,   318,   320,   322,   324,   324,   324,
     324,   324,   324,   324,   324,   324,   324,   324,   324,   326,
     330,   332,   336,   338,   340,   342,   346,   348,   354,   356,
     358,   360,   362,   366,   366
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
  "FILE_NAME", "SPECIAL", "COMMAND", "SHELL_COMMAND", "SHELL", "';'",
  "':'", "'/'", "'('", "')'", "'{'", "'}'", "'-'", "'$'", "'|'", "'+'",
  "'&'", "'['", "']'", "'<'", "'>'", "'\"'", "'\\''", "','", "'!'",
  "$accept", "lines", "line", "target", "target_is", "target_names",
  "target_name", "template", "prequisites", "prequisite", "var",
  "var_name", "var_units", "var_unit", "var_oper", "var_val", "elems",
  "elem", "cmd", "cond", "if", "ifdef", "conds", "var_conds", "var_cond",
  "include", "define", "def_commands", "def_command", "units", "unit",
  "string_conds", "string_const", "end_of_line", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-164)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-147)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     571,  -164,    15,    27,    -4,    17,   657,    80,  -164,  -164,
    -164,  -164,     4,     4,  -164,    41,    44,    50,    57,     4,
     -10,    -5,   540,  -164,  -164,   625,   610,  -164,    65,  -164,
      55,  -164,  -164,  -164,   466,   657,  -164,  -164,  -164,  -164,
    -164,     4,   225,  -164,  -164,  -164,  -164,   602,  -164,  -164,
    -164,    87,  -164,    74,    99,  -164,  -164,    75,  -164,    78,
      83,  -164,   496,   496,    16,  -164,  -164,  -164,   632,  -164,
     595,  -164,  -164,  -164,    88,   647,    95,  -164,  -164,   139,
    -164,  -164,  -164,   111,    97,   104,     4,    81,  -164,  -164,
      34,    40,     4,   225,  -164,  -164,  -164,  -164,  -164,  -164,
    -164,  -164,  -164,  -164,  -164,  -164,  -164,  -164,  -164,  -164,
    -164,  -164,  -164,  -164,  -164,     4,  -164,  -164,  -164,  -164,
       4,     4,  -164,  -164,  -164,   473,    22,  -164,  -164,  -164,
      -7,  -164,   100,   481,   481,    78,   103,     4,   632,  -164,
    -164,  -164,  -164,   481,   255,  -164,  -164,   107,    62,    64,
    -164,   111,  -164,  -164,  -164,   174,  -164,  -164,  -164,  -164,
    -164,  -164,  -164,  -164,  -164,   650,  -164,   650,  -164,   121,
     284,   315,  -164,  -164,   112,   344,   496,   481,  -164,  -164,
    -164,   481,   481,  -164,  -164,  -164,  -164,  -164,  -164,  -164,
    -164,    97,   104,  -164,  -164,   496,  -164,     4,  -164,  -164,
    -164,  -164,  -164,  -164,     4,  -164,  -164,  -164,  -164,  -164,
     128,   122,   133,  -164,  -164,  -164,  -164,  -164,  -164,   375,
     406,   437,  -164,  -164,  -164,   650,   650,   650,  -164,  -164,
    -164,   125,  -164,   126,  -164,  -164
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,   153,    12,     0,     0,     0,     0,     0,   101,   102,
      99,   100,     0,     0,    26,   143,   142,   144,     0,     0,
       0,     0,     0,     3,     6,    32,     0,    20,    15,     7,
       0,   145,     8,     9,     0,     0,    10,    11,    23,     5,
     154,     0,     0,    86,   143,   142,   144,     0,   140,    40,
      42,    41,    43,     0,     0,    97,    98,    18,    93,     0,
       0,    77,    53,    53,     0,     1,     4,    35,    32,    34,
       0,    28,    33,    25,    16,     0,     0,    21,    24,    53,
      86,   110,   108,     0,     0,     0,     0,   104,   105,   107,
     103,   109,     0,     0,    86,   117,   120,   122,   123,   119,
     125,   118,   133,   127,   130,   131,   128,   129,   132,   134,
     135,   136,   137,   138,   121,     0,   124,   126,   141,   111,
       0,     0,    19,    27,    44,    57,     0,    56,    54,    55,
       0,    79,     0,    53,    53,     0,     0,     0,    32,    30,
      13,    17,    22,    53,     0,    45,    36,     0,     0,     0,
      94,     0,   152,   147,    96,     0,   115,   113,    38,    39,
      61,    58,    62,    59,    60,     0,    80,     0,    81,     0,
       0,     0,    29,    14,     0,     0,    53,    53,    69,    63,
      66,    53,    53,    67,    64,    65,    68,    70,    71,    72,
      73,    74,    75,    76,    47,    53,    37,     0,   149,   151,
     150,   148,   106,   109,     0,   116,    89,    90,    92,    91,
       0,    87,     0,    78,    82,    83,    31,    46,    50,     0,
       0,     0,    48,    95,   112,     0,     0,     0,    49,    51,
      52,     0,    88,     0,    84,    85
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -164,  -164,   138,  -164,  -164,  -164,   -14,    51,  -164,   -67,
     157,  -164,  -123,   -46,  -164,     0,  -163,   -58,  -164,  -164,
    -164,  -164,    89,  -164,    19,  -164,  -164,  -164,   -88,  -164,
      31,  -164,    -1,     2
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    22,    23,    24,    25,    26,    27,   208,    70,    71,
      29,    30,   144,   145,   195,   127,   210,   211,    32,    33,
      34,    35,    86,    87,    88,    36,    37,   155,   115,    47,
     128,    90,   129,   117
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      31,   136,    39,   139,   212,   156,    31,     1,    59,     3,
     170,   171,    77,    60,    55,    56,   126,   130,    61,    41,
     175,    58,    31,   167,    39,    31,    31,    62,   168,    63,
      40,    38,    64,    91,    31,    31,   131,    48,   152,   132,
      42,   116,   114,    93,  -146,   -25,   -25,    31,   133,   119,
     134,    28,   165,    38,   219,   166,    72,    38,   220,   221,
     -42,   142,   231,   -41,   233,    89,    92,   205,    31,   -43,
      31,   174,   140,    28,    79,    31,    69,    78,   118,    84,
      85,   146,    91,    31,    49,  -146,  -146,    57,   150,   153,
     120,     7,   116,   114,   154,   -24,   -24,    60,   194,    72,
      50,    72,   121,    51,    52,   122,    38,   198,   199,   200,
     201,   123,    53,    59,    89,    80,   124,   157,   141,    69,
     148,    69,   158,   159,   194,   194,    78,   149,   151,   194,
     218,    44,    81,    82,    45,    46,   172,   169,    31,   173,
     197,   213,     1,    80,     3,   216,   196,   225,    21,   222,
     203,    31,   227,   226,   116,   114,    84,    85,   234,    44,
      66,   235,    45,    46,    54,   209,   125,   209,   232,    72,
     202,   143,   147,   194,   194,   194,    21,     1,    94,     3,
       0,     0,    89,   204,    84,    85,     0,     0,     0,    69,
       0,     0,     0,    95,    96,    97,    98,     0,    99,   223,
     100,   101,     0,   102,   103,   104,   224,     0,     0,     0,
     105,    21,   106,   107,   108,   109,   110,   111,   112,    84,
      85,     0,   113,     0,     0,   209,   209,   209,     1,    94,
       3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    95,    96,    97,    98,     0,    99,
       0,   100,   101,     0,   102,   103,   104,     0,     1,    80,
       3,   105,    21,   106,   107,   108,   109,   110,   111,   112,
      84,    85,     0,   113,   176,    44,   177,     0,    45,    46,
       0,     0,   125,     0,   178,   179,   180,   181,    80,   182,
       0,   183,    21,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   176,    44,   177,     0,    45,    46,     0,
       0,   125,     0,   178,   179,   180,   181,   214,   182,    80,
     183,    21,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,     0,     0,   176,    44,   177,     0,    45,    46,
       0,     0,   125,     0,   178,   179,   180,   181,    80,   182,
     215,   183,    21,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   176,    44,   177,     0,    45,    46,     0,
       0,   125,     0,   178,   179,   180,   181,   217,   182,    80,
     183,    21,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,     0,     0,   176,    44,   177,     0,    45,    46,
       0,     0,   125,     0,   178,   179,   180,   181,   228,   182,
      80,   183,    21,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,     0,     0,   176,    44,   177,     0,    45,
      46,     0,     0,   125,     0,   178,   179,   180,   181,   229,
     182,    80,   183,    21,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,     0,     0,   176,    44,   177,     0,
      45,    46,     0,     0,   125,     0,   178,   179,   180,   181,
      80,   182,   230,   183,    21,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,    80,    44,    81,    82,    45,
      46,     0,     0,   160,     0,     0,   161,   162,    83,     0,
      80,    44,     0,    21,    45,    46,     0,     0,   125,   163,
     164,    84,    85,   143,     0,     0,    44,     0,    21,    45,
      46,     0,     0,   125,     0,     0,    84,    85,     0,     0,
       0,     0,     0,    21,     0,     0,     0,     0,     0,     0,
      65,    84,    85,     1,     2,     3,     0,     4,     5,     0,
       6,     7,     8,     9,    10,    11,    12,    13,    14,     0,
      15,     0,     0,    16,    17,    18,    19,     0,     0,     0,
       0,     0,    20,     0,     1,     2,     3,    21,     4,     5,
       0,     6,     7,     8,     9,    10,    11,    12,    13,    14,
       0,    15,     0,     0,    16,    17,    18,    19,     1,    67,
       3,     0,     0,    20,     0,     1,    43,     3,    21,     0,
       0,     0,     0,    14,    73,    44,     0,     0,    45,    46,
       0,     0,    44,     0,   137,    45,    46,   138,    14,    67,
      44,     0,    21,    45,    46,     0,    67,     0,     0,    21,
      74,    75,    76,    14,     0,    44,     0,    21,    45,    46,
     135,    73,    44,     0,    43,    45,    46,    68,     0,     0,
       0,    43,    21,     0,    76,    14,     0,    44,    14,    21,
      45,    46,     0,   206,   207,     0,     0,    44,     0,    76,
      45,    46,    76,     0,    21,     0,     0,    21,     0,     0,
       0,     0,     0,     0,    21
};

static const yytype_int16 yycheck[] =
{
       0,    68,     0,    70,   167,    93,     6,     3,    18,     5,
     133,   134,    26,    23,    12,    13,    62,    63,    23,    23,
     143,    19,    22,    30,    22,    25,    26,    32,    35,    34,
       3,     0,    37,    34,    34,    35,    20,     6,     4,    23,
      23,    42,    42,    41,     4,    30,    31,    47,    32,    47,
      34,     0,    30,    22,   177,    33,    25,    26,   181,   182,
      19,    75,   225,    19,   227,    34,    35,   155,    68,    19,
      70,   138,    70,    22,    19,    75,    25,    26,    47,    45,
      46,    79,    83,    83,     4,    45,    46,    30,    86,    90,
       3,    11,    93,    93,    92,    30,    31,    23,   144,    68,
      20,    70,     3,    23,    24,    30,    75,    45,    46,    45,
      46,    33,    32,    18,    83,     4,    33,   115,    30,    68,
      23,    70,   120,   121,   170,   171,    75,    23,    47,   175,
     176,    20,    21,    22,    23,    24,    33,    37,   138,   137,
      33,    20,     3,     4,     5,    33,   144,    19,    37,   195,
     151,   151,    19,    31,   155,   155,    45,    46,    33,    20,
      22,    35,    23,    24,     7,   165,    27,   167,   226,   138,
     151,    32,    83,   219,   220,   221,    37,     3,     4,     5,
      -1,    -1,   151,     9,    45,    46,    -1,    -1,    -1,   138,
      -1,    -1,    -1,    19,    20,    21,    22,    -1,    24,   197,
      26,    27,    -1,    29,    30,    31,   204,    -1,    -1,    -1,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    -1,    48,    -1,    -1,   225,   226,   227,     3,     4,
       5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    20,    21,    22,    -1,    24,
      -1,    26,    27,    -1,    29,    30,    31,    -1,     3,     4,
       5,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    -1,    48,    19,    20,    21,    -1,    23,    24,
      -1,    -1,    27,    -1,    29,    30,    31,    32,     4,    34,
      -1,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    19,    20,    21,    -1,    23,    24,    -1,
      -1,    27,    -1,    29,    30,    31,    32,    33,    34,     4,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    -1,    19,    20,    21,    -1,    23,    24,
      -1,    -1,    27,    -1,    29,    30,    31,    32,     4,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    19,    20,    21,    -1,    23,    24,    -1,
      -1,    27,    -1,    29,    30,    31,    32,    33,    34,     4,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    -1,    19,    20,    21,    -1,    23,    24,
      -1,    -1,    27,    -1,    29,    30,    31,    32,    33,    34,
       4,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    -1,    19,    20,    21,    -1,    23,
      24,    -1,    -1,    27,    -1,    29,    30,    31,    32,    33,
      34,     4,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    -1,    19,    20,    21,    -1,
      23,    24,    -1,    -1,    27,    -1,    29,    30,    31,    32,
       4,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,     4,    20,    21,    22,    23,
      24,    -1,    -1,    20,    -1,    -1,    23,    24,    32,    -1,
       4,    20,    -1,    37,    23,    24,    -1,    -1,    27,    36,
      37,    45,    46,    32,    -1,    -1,    20,    -1,    37,    23,
      24,    -1,    -1,    27,    -1,    -1,    45,    46,    -1,    -1,
      -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,
       0,    45,    46,     3,     4,     5,    -1,     7,     8,    -1,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      20,    -1,    -1,    23,    24,    25,    26,    -1,    -1,    -1,
      -1,    -1,    32,    -1,     3,     4,     5,    37,     7,     8,
      -1,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,    20,    -1,    -1,    23,    24,    25,    26,     3,     4,
       5,    -1,    -1,    32,    -1,     3,     4,     5,    37,    -1,
      -1,    -1,    -1,    18,     4,    20,    -1,    -1,    23,    24,
      -1,    -1,    20,    -1,    29,    23,    24,    32,    18,     4,
      20,    -1,    37,    23,    24,    -1,     4,    -1,    -1,    37,
      30,    31,    32,    18,    -1,    20,    -1,    37,    23,    24,
      18,     4,    20,    -1,     4,    23,    24,    32,    -1,    -1,
      -1,     4,    37,    -1,    32,    18,    -1,    20,    18,    37,
      23,    24,    -1,    23,    24,    -1,    -1,    20,    -1,    32,
      23,    24,    32,    -1,    37,    -1,    -1,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    37
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     7,     8,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    20,    23,    24,    25,    26,
      32,    37,    50,    51,    52,    53,    54,    55,    56,    59,
      60,    64,    67,    68,    69,    70,    74,    75,    79,    82,
       3,    23,    23,     4,    20,    23,    24,    78,    79,     4,
      20,    23,    24,    32,    59,    82,    82,    30,    82,    18,
      23,    23,    32,    34,    37,     0,    51,     4,    32,    56,
      57,    58,    79,     4,    30,    31,    32,    55,    56,    19,
       4,    21,    22,    32,    45,    46,    71,    72,    73,    79,
      80,    81,    79,    82,     4,    19,    20,    21,    22,    24,
      26,    27,    29,    30,    31,    36,    38,    39,    40,    41,
      42,    43,    44,    48,    64,    77,    81,    82,    79,    82,
       3,     3,    30,    33,    33,    27,    62,    64,    79,    81,
      62,    20,    23,    32,    34,    18,    58,    29,    32,    58,
      82,    30,    55,    32,    61,    62,    82,    71,    23,    23,
      82,    47,     4,    81,    82,    76,    77,    82,    82,    82,
      20,    23,    24,    36,    37,    30,    33,    30,    35,    37,
      61,    61,    33,    82,    58,    61,    19,    21,    29,    30,
      31,    32,    34,    36,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    62,    63,    82,    33,    45,    46,
      45,    46,    73,    81,     9,    77,    23,    24,    56,    64,
      65,    66,    65,    20,    33,    35,    33,    33,    62,    61,
      61,    61,    62,    82,    82,    19,    31,    19,    33,    33,
      35,    65,    66,    65,    33,    35
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    49,    50,    50,    50,    51,    51,    51,    51,    51,
      51,    51,    51,    52,    52,    53,    53,    53,    53,    53,
      54,    54,    54,    55,    55,    55,    56,    56,    57,    57,
      57,    57,    58,    58,    58,    58,    59,    59,    59,    59,
      59,    60,    60,    60,    60,    61,    61,    61,    61,    61,
      61,    61,    61,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    65,    65,    66,
      66,    66,    66,    67,    68,    68,    68,    68,    68,    69,
      69,    70,    70,    71,    71,    72,    72,    73,    73,    73,
      73,    74,    75,    75,    75,    76,    76,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      78,    78,    79,    79,    79,    79,    80,    80,    81,    81,
      81,    81,    81,    82,    82
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     4,     1,     2,     3,     2,     3,
       1,     2,     3,     1,     1,     1,     1,     3,     1,     3,
       2,     4,     0,     1,     1,     1,     3,     4,     4,     4,
       1,     1,     1,     1,     3,     1,     3,     2,     3,     4,
       3,     4,     4,     0,     1,     1,     1,     1,     2,     2,
       2,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     5,     3,
       4,     4,     5,     5,     8,     8,     1,     1,     3,     1,
       1,     1,     1,     2,     3,     5,     3,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     3,     6,     4,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     1,     1,     1,     2,     3,     3,
       3,     3,     1,     1,     2
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
#line 68 "mf.y"
                {yyerror("Unknown syntax");}
#line 1421 "mf.tab.c"
    break;

  case 25: /* target_name: ERROR  */
#line 108 "mf.y"
                {yyerror("Wrong target name");}
#line 1427 "mf.tab.c"
    break;

  case 35: /* prequisite: ERROR  */
#line 138 "mf.y"
                {yyerror("It can't be prequisite");}
#line 1433 "mf.tab.c"
    break;

  case 40: /* var: ERROR  */
#line 150 "mf.y"
                {yyerror("Wrong definition of variable");}
#line 1439 "mf.tab.c"
    break;

  case 42: /* var_name: PATH  */
#line 158 "mf.y"
               {yyerror("Path can't be a name of variable");}
#line 1445 "mf.tab.c"
    break;

  case 43: /* var_name: FILE_NAME  */
#line 160 "mf.y"
                    {yyerror("File can't be a name of variable");}
#line 1451 "mf.tab.c"
    break;

  case 44: /* var_name: '(' NAME ')'  */
#line 162 "mf.y"
                       {yyerror("Name can't be written in brackets");}
#line 1457 "mf.tab.c"
    break;

  case 58: /* var_unit: SHELL_COMMAND NAME  */
#line 198 "mf.y"
                             {yyerror("Brackets in shell");}
#line 1463 "mf.tab.c"
    break;

  case 59: /* var_unit: SHELL_COMMAND '-'  */
#line 200 "mf.y"
                            {yyerror("Brackets in shell");}
#line 1469 "mf.tab.c"
    break;

  case 60: /* var_unit: SHELL_COMMAND '$'  */
#line 202 "mf.y"
                            {yyerror("Brackets in shell");}
#line 1475 "mf.tab.c"
    break;

  case 61: /* var_unit: SHELL_COMMAND PATH  */
#line 204 "mf.y"
                             {yyerror("Brackets in shell");}
#line 1481 "mf.tab.c"
    break;

  case 62: /* var_unit: SHELL_COMMAND FILE_NAME  */
#line 206 "mf.y"
                                  {yyerror("Brackets in shell");}
#line 1487 "mf.tab.c"
    break;

  case 78: /* var_val: '$' '$' NAME '$' PATH  */
#line 220 "mf.y"
                 {yyerror("Path can't be a name of variable");}
#line 1493 "mf.tab.c"
    break;

  case 79: /* var_val: '$' '$' PATH  */
#line 222 "mf.y"
                       {yyerror("Path can't be a name of variable");}
#line 1499 "mf.tab.c"
    break;

  case 86: /* var_val: ERROR  */
#line 236 "mf.y"
                {yyerror("Error reading variable value.");}
#line 1505 "mf.tab.c"
    break;

  case 94: /* cond: if conds end_of_line  */
#line 250 "mf.y"
                             {cond++;}
#line 1511 "mf.tab.c"
    break;

  case 95: /* cond: if '(' conds ')' end_of_line  */
#line 252 "mf.y"
                                       {cond++;}
#line 1517 "mf.tab.c"
    break;

  case 96: /* cond: ifdef unit end_of_line  */
#line 254 "mf.y"
                                 {cond++;}
#line 1523 "mf.tab.c"
    break;

  case 97: /* cond: ELSE end_of_line  */
#line 256 "mf.y"
                           {if(cond == 0) yyerror("Write if before writing else"); else cond--;}
#line 1529 "mf.tab.c"
    break;

  case 98: /* cond: ENDIF end_of_line  */
#line 258 "mf.y"
                            {if(cond == 0) yyerror("Write if before writing else"); else cond--;}
#line 1535 "mf.tab.c"
    break;

  case 114: /* define: ERROR  */
#line 290 "mf.y"
                {yyerror("Define is written wrong");}
#line 1541 "mf.tab.c"
    break;

  case 139: /* def_command: ERROR  */
#line 326 "mf.y"
                {yyerror("Wrong def commands");}
#line 1547 "mf.tab.c"
    break;

  case 150: /* string_const: '\'' NAME '"'  */
#line 358 "mf.y"
                         {yyerror("Wrong quotes");}
#line 1553 "mf.tab.c"
    break;

  case 151: /* string_const: '"' NAME '\''  */
#line 360 "mf.y"
                         {yyerror("Wrong quotes");}
#line 1559 "mf.tab.c"
    break;

  case 152: /* string_const: ERROR  */
#line 362 "mf.y"
                {yyerror("Trouble with string");}
#line 1565 "mf.tab.c"
    break;

  case 153: /* end_of_line: EOL  */
#line 366 "mf.y"
                 {cur_line++;}
#line 1571 "mf.tab.c"
    break;

  case 154: /* end_of_line: COMMENT EOL  */
#line 366 "mf.y"
                                             {cur_line++;}
#line 1577 "mf.tab.c"
    break;


#line 1581 "mf.tab.c"

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

#line 368 "mf.y"


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

