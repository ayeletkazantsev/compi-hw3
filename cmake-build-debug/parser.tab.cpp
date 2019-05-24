/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.ypp" /* yacc.c:339  */


#include <iostream>
#include <vector>
#include <utility>
#include <stdlib.h>
#include "source.hpp"
#include "output.hpp"
#include "parser.hpp"

using namespace std;
using namespace Parser;
using namespace output;

extern int yylineno;
int yylex();
void yyerror(char const * message);

int precondCnt = 0;
int whileLoopCnt = 0;
string currentReturnType;


#line 90 "/cygdrive/c/compi-hw3/cmake-build-debug/parser.tab.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.tab.hpp".  */
#ifndef YY_YY_CYGDRIVE_C_COMPI_HW3_CMAKE_BUILD_DEBUG_PARSER_TAB_HPP_INCLUDED
# define YY_YY_CYGDRIVE_C_COMPI_HW3_CMAKE_BUILD_DEBUG_PARSER_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    VOID = 258,
    INT = 259,
    BYTE = 260,
    B = 261,
    BOOL = 262,
    AND = 263,
    OR = 264,
    TRUE = 265,
    FALSE = 266,
    RETURN = 267,
    IF = 268,
    WHILE = 269,
    BREAK = 270,
    CONTINUE = 271,
    PRECOND = 272,
    SC = 273,
    COMMA = 274,
    LPAREN = 275,
    RPAREN = 276,
    LBRACE = 277,
    RBRACE = 278,
    RELOP = 279,
    BINOP = 280,
    ID = 281,
    NUM = 282,
    STRING = 283,
    ASSIGN = 284,
    NOT = 285,
    NO_ELSE = 286,
    ELSE = 287
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CYGDRIVE_C_COMPI_HW3_CMAKE_BUILD_DEBUG_PARSER_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 174 "/cygdrive/c/compi-hw3/cmake-build-debug/parser.tab.cpp" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   186

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  33
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  55
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  101

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   287

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
      25,    26,    27,    28,    29,    30,    31,    32
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    42,    42,    53,    66,    73,    79,    79,    83,    82,
     111,   111,   114,   118,   124,   132,   143,   150,   154,   160,
     169,   169,   172,   173,   181,   195,   211,   212,   220,   228,
     228,   237,   245,   253,   256,   260,   266,   278,   293,   297,
     308,   308,   308,   311,   315,   331,   343,   347,   351,   363,
     367,   371,   375,   380,   386,   392
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "VOID", "INT", "BYTE", "B", "BOOL",
  "AND", "OR", "TRUE", "FALSE", "RETURN", "IF", "WHILE", "BREAK",
  "CONTINUE", "PRECOND", "SC", "COMMA", "LPAREN", "RPAREN", "LBRACE",
  "RBRACE", "RELOP", "BINOP", "ID", "NUM", "STRING", "ASSIGN", "NOT",
  "NO_ELSE", "ELSE", "$accept", "Program", "M", "LBrace", "RBrace",
  "Funcs", "FuncDecl", "@1", "RetType", "Formals", "FormalsList",
  "FormalDecl", "PreConditions", "PreCondition", "Statements", "Statement",
  "$@2", "SelectionStatement", "Call", "ExpList", "Type", "Exp", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287
};
# endif

#define YYPACT_NINF -38

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-38)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-1)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -38,     2,    73,   -38,   -38,   -38,   -38,   -38,   -38,    73,
     -16,   -38,   -38,    -6,    83,    -5,   -38,     5,    15,   -38,
      83,   -38,     8,   -38,    29,   -38,   -38,    16,    99,   -38,
     -38,    16,    32,    47,   -38,    16,   -38,   114,    -7,    36,
     -38,    51,    61,   -38,   -14,    59,   -38,   -38,    71,    39,
     120,   106,   -38,   -38,    16,    16,   -38,    16,    16,   -38,
     122,    16,    76,   -38,   -38,    99,    16,   -38,   -38,   -38,
     -11,   -38,   -38,    77,   134,     9,    14,    23,    72,   -38,
     140,    16,    79,   142,   -38,    16,   -38,    16,    99,   147,
     -38,   -38,   161,   -38,    67,    99,   -38,   -38,    99,   -38,
     -38
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     6,     1,    11,    40,    41,    42,     2,     6,
       0,    10,     7,     0,    12,     0,    13,    14,     0,    17,
       0,    16,     0,    15,     0,     8,    18,     0,     0,    50,
      51,     0,    45,    47,    49,     0,    46,     0,     0,     0,
      29,     0,     0,     4,     0,     0,    20,    33,     0,     0,
       0,     0,    48,    52,     0,     0,    19,     0,     0,    27,
       0,     0,     0,    31,    32,     0,     0,     9,    21,    26,
       0,    43,    37,     0,    38,    53,    54,    55,    44,    28,
       0,     0,     0,     0,    23,     0,    36,     0,     0,     0,
       5,    25,     0,    39,    34,     0,    22,    24,     0,    30,
      35
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -38,   -38,   -38,   -38,   -38,    91,   -38,   -38,   -38,   -38,
      87,   -38,   -38,   -38,    43,   -37,   -38,   -38,   -28,    22,
      48,   -26
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,    65,    96,     8,     9,    28,    10,    15,
      16,    17,    22,    26,    45,    46,    62,    47,    36,    73,
      49,    74
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      48,    37,     3,    29,    30,    50,    51,    84,    68,    53,
      13,    59,    60,    31,    14,    66,    19,    48,    85,    32,
      33,    34,    54,    35,    20,    24,    29,    30,    75,    76,
      25,    77,    78,    57,    58,    80,    31,    48,    57,    58,
      83,    21,    32,    33,    34,    68,    35,    -1,    58,    27,
      11,    94,    51,    52,    48,    89,    61,    11,    99,    92,
      48,   100,    18,     5,     6,    70,     7,    48,    18,    63,
      48,    38,    39,    40,    41,    42,     4,     5,     6,    64,
       7,    43,    67,     5,     6,    44,     7,     5,     6,    69,
       7,    38,    39,    40,    41,    42,    81,    -1,    86,    98,
      12,    43,    90,     5,     6,    44,     7,    23,    82,    93,
       0,    38,    39,    40,    41,    42,    29,    30,     0,     0,
       0,    43,    54,    55,     0,    44,    31,    72,    54,    55,
      54,    55,    32,    33,    34,    56,    35,     0,    57,    58,
      79,    71,    54,    55,    57,    58,    57,    58,    54,    55,
      54,    55,     0,    87,     0,    54,    55,     0,    57,    58,
      91,    88,     0,     0,    57,    58,    57,    58,    95,    54,
      55,    57,    58,     0,     0,     0,     0,     0,     0,    97,
       0,     0,     0,     0,     0,    57,    58
};

static const yytype_int8 yycheck[] =
{
      28,    27,     0,    10,    11,    31,    20,    18,    45,    35,
      26,    18,    38,    20,    20,    29,    21,    45,    29,    26,
      27,    28,     8,    30,    19,    17,    10,    11,    54,    55,
      22,    57,    58,    24,    25,    61,    20,    65,    24,    25,
      66,    26,    26,    27,    28,    82,    30,    24,    25,    20,
       2,    88,    20,     6,    82,    81,    20,     9,    95,    85,
      88,    98,    14,     4,     5,    26,     7,    95,    20,    18,
      98,    12,    13,    14,    15,    16,     3,     4,     5,    18,
       7,    22,    23,     4,     5,    26,     7,     4,     5,    18,
       7,    12,    13,    14,    15,    16,    20,    25,    21,    32,
       9,    22,    23,     4,     5,    26,     7,    20,    65,    87,
      -1,    12,    13,    14,    15,    16,    10,    11,    -1,    -1,
      -1,    22,     8,     9,    -1,    26,    20,    21,     8,     9,
       8,     9,    26,    27,    28,    21,    30,    -1,    24,    25,
      18,    21,     8,     9,    24,    25,    24,    25,     8,     9,
       8,     9,    -1,    19,    -1,     8,     9,    -1,    24,    25,
      18,    21,    -1,    -1,    24,    25,    24,    25,    21,     8,
       9,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    18,
      -1,    -1,    -1,    -1,    -1,    24,    25
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    34,    35,     0,     3,     4,     5,     7,    38,    39,
      41,    53,    38,    26,    20,    42,    43,    44,    53,    21,
      19,    26,    45,    43,    17,    22,    46,    20,    40,    10,
      11,    20,    26,    27,    28,    30,    51,    54,    12,    13,
      14,    15,    16,    22,    26,    47,    48,    50,    51,    53,
      54,    20,     6,    54,     8,     9,    21,    24,    25,    18,
      54,    20,    49,    18,    18,    36,    29,    23,    48,    18,
      26,    21,    21,    52,    54,    54,    54,    54,    54,    18,
      54,    20,    47,    54,    18,    29,    21,    19,    21,    54,
      23,    18,    54,    52,    48,    21,    37,    18,    32,    48,
      48
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    33,    34,    35,    36,    37,    38,    38,    40,    39,
      41,    41,    42,    42,    43,    43,    44,    45,    45,    46,
      47,    47,    48,    48,    48,    48,    48,    48,    48,    49,
      48,    48,    48,    48,    50,    50,    51,    51,    52,    52,
      53,    53,    53,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     0,     0,     0,     2,     0,    10,
       1,     1,     0,     1,     1,     3,     2,     0,     2,     4,
       1,     2,     5,     3,     5,     4,     2,     2,     3,     0,
       6,     2,     2,     1,     5,     7,     4,     3,     1,     3,
       1,     1,     1,     3,     3,     1,     1,     1,     2,     1,
       1,     1,     2,     3,     3,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 2:
#line 43 "parser.ypp" /* yacc.c:1646  */
    {
    if (!checkMainFuncLegal())
    {
        errorMainMissing();
        exit(0);
    }
    closeScope(); 
}
#line 1343 "/cygdrive/c/compi-hw3/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 54 "parser.ypp" /* yacc.c:1646  */
    {
	endScope();
	openGlobalScope();

	// push print to global scope stack
	pushFunctionDeclarationWithoutOpenScope("VOID", "print");

	// push printi to global scope stack
	pushFunctionDeclarationWithoutOpenScope("VOID", "printi");
}
#line 1358 "/cygdrive/c/compi-hw3/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 67 "parser.ypp" /* yacc.c:1646  */
    {

	openScope();
}
#line 1367 "/cygdrive/c/compi-hw3/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 74 "parser.ypp" /* yacc.c:1646  */
    {
	closeScope();
}
#line 1375 "/cygdrive/c/compi-hw3/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 83 "parser.ypp" /* yacc.c:1646  */
    {
	// check if id is free
	NameTypeInfo* id = dynamic_cast<NameTypeInfo*>((yyvsp[-5]));
    string name = id->name;
	if (!checkIdFree(name))
	{
	    errorDef(yylineno,name);
	    exit(0);
	}

	// get parameters from input
	string retType = (yyvsp[-6])->type;
	MultiNameMultiTypeInfo* formals = dynamic_cast<MultiNameMultiTypeInfo*>((yyvsp[-3]));
	vector<pair<string, string> > args = formals->types_names;

	(yyval) = new FuncInfo(name,retType,args);

	// push function to global scope symbol table and open new scope for arguments
	pushFunctionDeclarationToStackAndOpenScope(retType, name, args);

}
#line 1401 "/cygdrive/c/compi-hw3/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 103 "parser.ypp" /* yacc.c:1646  */
    {
	NameTypeInfo* id = dynamic_cast<NameTypeInfo*>((yyvsp[-8]));
	string name = id->name;

	closeScope(true,name,precondCnt);
}
#line 1412 "/cygdrive/c/compi-hw3/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 111 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]); currentReturnType = (yyvsp[0])->type;}
#line 1418 "/cygdrive/c/compi-hw3/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 111 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = new Type("VOID"); currentReturnType = "VOID";}
#line 1424 "/cygdrive/c/compi-hw3/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 115 "parser.ypp" /* yacc.c:1646  */
    {
	(yyval) = new MultiNameMultiTypeInfo();
}
#line 1432 "/cygdrive/c/compi-hw3/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 119 "parser.ypp" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
}
#line 1440 "/cygdrive/c/compi-hw3/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 125 "parser.ypp" /* yacc.c:1646  */
    {
	NameTypeInfo* formalDec = dynamic_cast<NameTypeInfo*>((yyvsp[0]));
	vector<pair<string,string> > v;
	v.push_back(pair<string,string>(formalDec->type, formalDec->name));

	(yyval) = new MultiNameMultiTypeInfo(v);
}
#line 1452 "/cygdrive/c/compi-hw3/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 133 "parser.ypp" /* yacc.c:1646  */
    {
	MultiNameMultiTypeInfo* formalList = dynamic_cast<MultiNameMultiTypeInfo*>((yyvsp[0]));
	NameTypeInfo* formalDec = dynamic_cast<NameTypeInfo*>((yyvsp[-2]));
	vector<pair<string,string> > v(formalList->types_names);
	v.push_back(pair<string,string>(formalDec->type,formalDec->name));

	(yyval) = new MultiNameMultiTypeInfo(v);
}
#line 1465 "/cygdrive/c/compi-hw3/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 144 "parser.ypp" /* yacc.c:1646  */
    {
	NameTypeInfo* id = dynamic_cast<NameTypeInfo*>((yyvsp[0]));
	(yyval) = new NameTypeInfo((yyvsp[-1])->type, id->name);
}
#line 1474 "/cygdrive/c/compi-hw3/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 151 "parser.ypp" /* yacc.c:1646  */
    {
	precondCnt = 0;
}
#line 1482 "/cygdrive/c/compi-hw3/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 155 "parser.ypp" /* yacc.c:1646  */
    {
	precondCnt++;
}
#line 1490 "/cygdrive/c/compi-hw3/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 161 "parser.ypp" /* yacc.c:1646  */
    {
	if ((yyvsp[-1])->type!="BOOL") { // todo add function call
	    //errorMismatch(yylineno); exit(0);
	}
	(yyval) = (yyvsp[-1]);
}
#line 1501 "/cygdrive/c/compi-hw3/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 174 "parser.ypp" /* yacc.c:1646  */
    {
	NameTypeInfo* id = dynamic_cast<NameTypeInfo*>((yyvsp[-1]));



	pushIdentifierToStack((yyvsp[-2])->type,id->name);
}
#line 1513 "/cygdrive/c/compi-hw3/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 182 "parser.ypp" /* yacc.c:1646  */
    {
	NameTypeInfo* id = dynamic_cast<NameTypeInfo*>((yyvsp[-3]));
	string name = id->name;

    // check id is free
    if (!checkIdFree(name))
    {
        errorDef(yylineno,name);
        exit(0);
    }
	//todo: checkExpressionType($1->type,$4->type,yylineno);
	pushIdentifierToStack((yyvsp[-4])->type,id->name);
}
#line 1531 "/cygdrive/c/compi-hw3/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 196 "parser.ypp" /* yacc.c:1646  */
    {
	//todo: check for semantic errors, no need to push to stack
	NameTypeInfo* id = dynamic_cast<NameTypeInfo*>((yyvsp[-3]));
    string name = id->name;

    // check id is free
    if (!checkIdFree(name))
    {
        errorDef(yylineno,name);
        exit(0);
    }

	//checkExpressionType($1->type,$3->type,yylineno);
	
}
#line 1551 "/cygdrive/c/compi-hw3/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 213 "parser.ypp" /* yacc.c:1646  */
    {
	if (currentReturnType!="VOID")
	{
		errorMismatch(yylineno);
		exit(0);
	}
}
#line 1563 "/cygdrive/c/compi-hw3/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 221 "parser.ypp" /* yacc.c:1646  */
    {
	if (currentReturnType!="INT" || currentReturnType != "BYTE" || currentReturnType!=(yyvsp[-1])->type)
	{
		errorMismatch(yylineno);
		exit(0);		
	}
}
#line 1575 "/cygdrive/c/compi-hw3/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 228 "parser.ypp" /* yacc.c:1646  */
    {whileLoopCnt++;}
#line 1581 "/cygdrive/c/compi-hw3/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 229 "parser.ypp" /* yacc.c:1646  */
    {
	whileLoopCnt--;
	if ((yyvsp[-3])->type!="BOOL")
	{
		errorMismatch(yylineno);
		exit(0);		
	}
}
#line 1594 "/cygdrive/c/compi-hw3/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 238 "parser.ypp" /* yacc.c:1646  */
    {
	if (whileLoopCnt == 0)
	{
		errorUnexpectedBreak(yylineno);
		exit(0);
	}
}
#line 1606 "/cygdrive/c/compi-hw3/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 246 "parser.ypp" /* yacc.c:1646  */
    {
	if (whileLoopCnt == 0)
	{
		errorUnexpectedContinue(yylineno);
		exit(0);
	}
}
#line 1618 "/cygdrive/c/compi-hw3/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 257 "parser.ypp" /* yacc.c:1646  */
    {
	//checkExpressionType($3->type,"BOOL",yylineno);
}
#line 1626 "/cygdrive/c/compi-hw3/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 261 "parser.ypp" /* yacc.c:1646  */
    {
	//checkExpressionType($3->type,"BOOL",yylineno);
}
#line 1634 "/cygdrive/c/compi-hw3/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 267 "parser.ypp" /* yacc.c:1646  */
    {
	NameTypeInfo* id = dynamic_cast<NameTypeInfo*>((yyvsp[-3]));
    string name = id->name;
	// check if id is undefined
    if (checkIdFree(name))
    {
        errorUndefFunc(yylineno,name);
        exit(0);
    }
    //todo: check prototype
}
#line 1650 "/cygdrive/c/compi-hw3/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 279 "parser.ypp" /* yacc.c:1646  */
    {
	NameTypeInfo* id = dynamic_cast<NameTypeInfo*>((yyvsp[-2]));
    string name = id->name;

	// check if id is undefined
    if (checkIdFree(name))
    {
        errorUndefFunc(yylineno,name);
        exit(0);
    }
    //todo: check prototype
}
#line 1667 "/cygdrive/c/compi-hw3/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 294 "parser.ypp" /* yacc.c:1646  */
    {
	(yyval) = new NameMultiTypeInfo((yyvsp[0])->type);
}
#line 1675 "/cygdrive/c/compi-hw3/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 298 "parser.ypp" /* yacc.c:1646  */
    {
	NameMultiTypeInfo* expList = dynamic_cast<NameMultiTypeInfo*>((yyvsp[0]));
	string type = (yyvsp[-2])->type;
	vector<string> types = expList->types;
	types.push_back(type);

	(yyval) = new NameMultiTypeInfo(types);
}
#line 1688 "/cygdrive/c/compi-hw3/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 308 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = new Type("INT");}
#line 1694 "/cygdrive/c/compi-hw3/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 308 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = new Type("BYTE");}
#line 1700 "/cygdrive/c/compi-hw3/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 308 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = new Type("BOOL");}
#line 1706 "/cygdrive/c/compi-hw3/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 312 "parser.ypp" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
}
#line 1714 "/cygdrive/c/compi-hw3/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 316 "parser.ypp" /* yacc.c:1646  */
    {
	//if ($1->type!="INT" && $1->type!="BYTE") {errorMismatch(yylineno); exit(0);}
	//if ($3->type!="INT" && $3->type!="BYTE") {errorMismatch(yylineno); exit(0);}
	NameTypeInfo* id = dynamic_cast<NameTypeInfo*>((yyvsp[-1]));
	string binOp = id->name;

	if (binOp == ">" || binOp == "<" || binOp == "==" || binOp == "!=")
	{
		(yyval) = new Type("BOOL");
	}
	else {
		if ((yyvsp[-2])->type == "INT") (yyval) = new Type("INT");
		else (yyval) = new Type("BYTE");
	}
}
#line 1734 "/cygdrive/c/compi-hw3/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 332 "parser.ypp" /* yacc.c:1646  */
    {
	NameTypeInfo* id = dynamic_cast<NameTypeInfo*>((yyvsp[0]));
	string name = id->name;
	if (checkIdFree(name))
	{
	    errorUndef(yylineno,name);
	    exit(0);
	}
	string type = getIdType(name);
	(yyval) = new Type(type); //todo: check if this is a good idea
}
#line 1750 "/cygdrive/c/compi-hw3/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 344 "parser.ypp" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
}
#line 1758 "/cygdrive/c/compi-hw3/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 348 "parser.ypp" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
}
#line 1766 "/cygdrive/c/compi-hw3/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 352 "parser.ypp" /* yacc.c:1646  */
    {
	NameTypeInfo* numId = dynamic_cast<NameTypeInfo*>((yyvsp[-1]));
	int num = atoi(numId->name.c_str());

	if (num > 255)
	{
		errorByteTooLarge(yylineno,numId->name);
	}

	(yyval) = new Type("BYTE");
}
#line 1782 "/cygdrive/c/compi-hw3/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 364 "parser.ypp" /* yacc.c:1646  */
    {
	(yyval) = new Type("STRING");
}
#line 1790 "/cygdrive/c/compi-hw3/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 368 "parser.ypp" /* yacc.c:1646  */
    {
	(yyval) = new Type("BOOL");
}
#line 1798 "/cygdrive/c/compi-hw3/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 372 "parser.ypp" /* yacc.c:1646  */
    {
	(yyval) = new Type("BOOL");
}
#line 1806 "/cygdrive/c/compi-hw3/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 376 "parser.ypp" /* yacc.c:1646  */
    {
	//checkExpressionType($2->type,"BOOL",yylineno);
	(yyval) = new Type("BOOL");
}
#line 1815 "/cygdrive/c/compi-hw3/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 381 "parser.ypp" /* yacc.c:1646  */
    {
	//checkExpressionType($1->type,"BOOL",yylineno);
	//checkExpressionType($3->type,"BOOL",yylineno);
	(yyval) = new Type("BOOL");
}
#line 1825 "/cygdrive/c/compi-hw3/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 387 "parser.ypp" /* yacc.c:1646  */
    {
	//checkExpressionType($1->type,"BOOL",yylineno);
	//checkExpressionType($3->type,"BOOL",yylineno);
	(yyval) = new Type("BOOL");
}
#line 1835 "/cygdrive/c/compi-hw3/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 393 "parser.ypp" /* yacc.c:1646  */
    {
 	//if ($1->type!="INT" && $1->type!="BYTE") {errorMismatch(yylineno); exit(0);}
	//if ($3->type!="INT" && $3->type!="BYTE") {errorMismatch(yylineno); exit(0);}
	(yyval) = new Type("BOOL");
}
#line 1845 "/cygdrive/c/compi-hw3/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
    break;


#line 1849 "/cygdrive/c/compi-hw3/cmake-build-debug/parser.tab.cpp" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 400 "parser.ypp" /* yacc.c:1906  */


void yyerror(const char * message)
{
	errorSyn(yylineno); 
}


int main() {
	yyparse();
}
