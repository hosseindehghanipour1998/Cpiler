
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "parser.y"


#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>
int yylex(void);

int while_counter = 1;
int for_counter = 1;
int if_counter = 1;
int t_counter = 1;


FILE *yyin;
FILE *output;



/* Line 189 of yacc.c  */
#line 93 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     LOGICAL_AND = 258,
     LOGICAL_OR = 259,
     LOGICAL_NOT = 260,
     BITWISE_AND = 261,
     BITWISE_OR = 262,
     BITWISE_NOT = 263,
     BITWISE_XOR = 264,
     INT = 265,
     DOUBLE = 266,
     FLOAT = 267,
     CHAR = 268,
     WHILE = 269,
     FOR = 270,
     IF = 271,
     LT = 272,
     LTE = 273,
     GT = 274,
     GTE = 275,
     EQ = 276,
     NEQ = 277,
     ID = 278,
     INTEGER_NUM = 279,
     DOUBLE_NUM = 280,
     CHAR_VAL = 281,
     NEGATION = 282
   };
#endif
/* Tokens.  */
#define LOGICAL_AND 258
#define LOGICAL_OR 259
#define LOGICAL_NOT 260
#define BITWISE_AND 261
#define BITWISE_OR 262
#define BITWISE_NOT 263
#define BITWISE_XOR 264
#define INT 265
#define DOUBLE 266
#define FLOAT 267
#define CHAR 268
#define WHILE 269
#define FOR 270
#define IF 271
#define LT 272
#define LTE 273
#define GT 274
#define GTE 275
#define EQ 276
#define NEQ 277
#define ID 278
#define INTEGER_NUM 279
#define DOUBLE_NUM 280
#define CHAR_VAL 281
#define NEGATION 282




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 22 "parser.y"

    char str[200];
	int label;



/* Line 214 of yacc.c  */
#line 190 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 202 "y.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   246

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  60
/* YYNRULES -- Number of states.  */
#define YYNSTATES  110

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   282

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    32,     2,     2,
      37,    38,    30,    29,    39,    28,     2,    31,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    36,
       2,    27,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    34,     2,    35,     2,     2,     2,     2,
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
      25,    26,    33
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     6,    11,    14,    15,    18,    21,
      22,    23,    24,    25,    35,    36,    37,    38,    47,    48,
      49,    50,    51,    52,    53,    69,    71,    74,    77,    80,
      83,    87,    93,    95,    99,   103,   105,   106,   110,   114,
     118,   122,   126,   130,   134,   138,   141,   145,   149,   152,
     156,   160,   164,   168,   172,   176,   179,   183,   185,   187,
     189
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      41,     0,    -1,    42,    -1,    -1,    34,    43,    44,    35,
      -1,    44,    45,    -1,    -1,    59,    36,    -1,    61,    36,
      -1,    -1,    -1,    -1,    -1,    16,    46,    37,    47,    61,
      38,    48,    49,    45,    -1,    -1,    -1,    -1,    14,    50,
      37,    51,    61,    38,    52,    45,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    15,    53,    37,    61,    36,    54,    61,
      55,    36,    56,    61,    57,    38,    58,    45,    -1,    42,
      -1,    10,    60,    -1,    11,    60,    -1,    12,    60,    -1,
      13,    60,    -1,    60,    39,    23,    -1,    60,    39,    23,
      27,    61,    -1,    23,    -1,    23,    27,    61,    -1,    23,
      27,    61,    -1,    62,    -1,    -1,    62,    17,    62,    -1,
      62,    18,    62,    -1,    62,    19,    62,    -1,    62,    20,
      62,    -1,    62,    21,    62,    -1,    62,    22,    62,    -1,
      62,     3,    62,    -1,    62,     4,    62,    -1,     5,    62,
      -1,    62,     6,    62,    -1,    62,     7,    62,    -1,     8,
      62,    -1,    62,     9,    62,    -1,    62,    30,    62,    -1,
      62,    31,    62,    -1,    62,    32,    62,    -1,    62,    29,
      62,    -1,    62,    28,    62,    -1,    28,    62,    -1,    37,
      61,    38,    -1,    24,    -1,    25,    -1,    26,    -1,    23,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    73,    73,    77,    77,    81,    82,    87,    89,    93,
      98,   103,   108,    92,   119,   124,   129,   118,   144,   149,
     154,   160,   165,   170,   143,   181,   185,   186,   187,   188,
     192,   193,   194,   195,   199,   200,   201,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   226,   233,   240,   246,   253,   259,   260,   261,   262,
     263
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "LOGICAL_AND", "LOGICAL_OR",
  "LOGICAL_NOT", "BITWISE_AND", "BITWISE_OR", "BITWISE_NOT", "BITWISE_XOR",
  "INT", "DOUBLE", "FLOAT", "CHAR", "WHILE", "FOR", "IF", "LT", "LTE",
  "GT", "GTE", "EQ", "NEQ", "ID", "INTEGER_NUM", "DOUBLE_NUM", "CHAR_VAL",
  "'='", "'-'", "'+'", "'*'", "'/'", "'%'", "NEGATION", "'{'", "'}'",
  "';'", "'('", "')'", "','", "$accept", "Program", "Block", "$@1",
  "Stmts", "Stmt", "$@2", "$@3", "$@4", "$@5", "$@6", "$@7", "$@8", "$@9",
  "$@10", "$@11", "$@12", "$@13", "$@14", "Decl", "Ids", "Expr", "Term", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,    61,    45,    43,
      42,    47,    37,   282,   123,   125,    59,    40,    41,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    40,    41,    43,    42,    44,    44,    45,    45,    46,
      47,    48,    49,    45,    50,    51,    52,    45,    53,    54,
      55,    56,    57,    58,    45,    45,    59,    59,    59,    59,
      60,    60,    60,    60,    61,    61,    61,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     4,     2,     0,     2,     2,     0,
       0,     0,     0,     9,     0,     0,     0,     8,     0,     0,
       0,     0,     0,     0,    15,     1,     2,     2,     2,     2,
       3,     5,     1,     3,     3,     1,     0,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     3,     3,     2,     3,
       3,     3,     3,     3,     3,     2,     3,     1,     1,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     3,     0,     2,     6,     1,    36,     0,     0,     0,
       0,     0,     0,    14,    18,     9,    60,    57,    58,    59,
       0,     4,    36,    25,     5,     0,     0,    35,    60,    45,
      48,    32,    26,    27,    28,    29,     0,     0,     0,    36,
      55,     0,     7,     8,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      36,     0,    15,    36,    10,    34,    56,    43,    44,    46,
      47,    49,    37,    38,    39,    40,    41,    42,    54,    53,
      50,    51,    52,    33,    30,    36,     0,    36,    36,     0,
      19,     0,    31,    16,    36,    11,    36,    20,    12,    17,
       0,    36,    21,    13,    36,    22,     0,    23,    36,    24
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,    23,     4,     6,    24,    38,    87,    98,   101,
      36,    85,    96,    37,    94,   100,   104,   106,   108,    25,
      32,    26,    27
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -81
static const yytype_int16 yypact[] =
{
     -26,   -81,    20,   -81,   -81,   -81,    -1,    85,    85,    -4,
      -4,    -4,    -4,   -81,   -81,   -81,     5,   -81,   -81,   -81,
      85,   -81,    91,   -81,   -81,   -10,     1,   117,   -81,   -81,
     -81,     8,     0,     0,     0,     0,     3,    27,    32,    91,
     -81,    29,   -81,   -81,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      91,    47,   -81,    91,   -81,   -81,   -81,   164,   147,   214,
     181,   198,    30,    30,    30,    30,   112,   112,   -29,   -29,
     -81,   -81,   -81,   -81,    53,    91,    45,    91,    91,    46,
     -81,    54,   -81,   -81,    91,   -81,    63,   -81,   -81,   -81,
      49,    63,   -81,   -81,    91,   -81,    56,   -81,    63,   -81
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -81,   -81,    83,   -81,   -81,   -80,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
      19,   -22,    -2
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      41,    57,    58,    59,     7,    29,    30,     8,     1,     9,
      10,    11,    12,    13,    14,    15,    99,    65,    40,    31,
       5,   103,    16,    17,    18,    19,    42,    20,   109,    33,
      34,    35,    39,     1,    21,    60,    22,    43,    83,    61,
      62,    86,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    55,    56,
      57,    58,    59,    89,    63,    91,    92,    66,     7,    64,
      84,     8,    97,     9,    10,    11,    12,    13,    14,    15,
      88,    90,   105,     3,    93,   102,    16,    17,    18,    19,
       7,    20,    95,     8,   107,     0,     7,     1,     0,     8,
      22,     0,     0,     0,     0,     0,     0,     0,    28,    17,
      18,    19,     0,    20,    16,    17,    18,    19,     0,    20,
      44,    45,    22,    46,    47,     0,    48,     0,    22,    49,
      50,    51,    52,     0,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    55,    56,    57,    58,    59,
      44,     0,     0,    46,    47,     0,    48,     0,     0,     0,
       0,     0,     0,     0,    49,    50,    51,    52,    53,    54,
      46,    47,     0,    48,     0,    55,    56,    57,    58,    59,
       0,    49,    50,    51,    52,    53,    54,    46,     0,     0,
      48,     0,    55,    56,    57,    58,    59,     0,    49,    50,
      51,    52,    53,    54,    46,     0,     0,     0,     0,    55,
      56,    57,    58,    59,     0,    49,    50,    51,    52,    53,
      54,     0,     0,     0,     0,     0,    55,    56,    57,    58,
      59,    49,    50,    51,    52,    53,    54,     0,     0,     0,
       0,     0,    55,    56,    57,    58,    59
};

static const yytype_int8 yycheck[] =
{
      22,    30,    31,    32,     5,     7,     8,     8,    34,    10,
      11,    12,    13,    14,    15,    16,    96,    39,    20,    23,
       0,   101,    23,    24,    25,    26,    36,    28,   108,    10,
      11,    12,    27,    34,    35,    27,    37,    36,    60,    39,
      37,    63,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    28,    29,
      30,    31,    32,    85,    37,    87,    88,    38,     5,    37,
      23,     8,    94,    10,    11,    12,    13,    14,    15,    16,
      27,    36,   104,     0,    38,    36,    23,    24,    25,    26,
       5,    28,    38,     8,    38,    -1,     5,    34,    -1,     8,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    -1,    28,    23,    24,    25,    26,    -1,    28,
       3,     4,    37,     6,     7,    -1,     9,    -1,    37,    17,
      18,    19,    20,    -1,    17,    18,    19,    20,    21,    22,
      28,    29,    30,    31,    32,    28,    29,    30,    31,    32,
       3,    -1,    -1,     6,     7,    -1,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    19,    20,    21,    22,
       6,     7,    -1,     9,    -1,    28,    29,    30,    31,    32,
      -1,    17,    18,    19,    20,    21,    22,     6,    -1,    -1,
       9,    -1,    28,    29,    30,    31,    32,    -1,    17,    18,
      19,    20,    21,    22,     6,    -1,    -1,    -1,    -1,    28,
      29,    30,    31,    32,    -1,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    -1,    28,    29,    30,    31,
      32,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    28,    29,    30,    31,    32
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    34,    41,    42,    43,     0,    44,     5,     8,    10,
      11,    12,    13,    14,    15,    16,    23,    24,    25,    26,
      28,    35,    37,    42,    45,    59,    61,    62,    23,    62,
      62,    23,    60,    60,    60,    60,    50,    53,    46,    27,
      62,    61,    36,    36,     3,     4,     6,     7,     9,    17,
      18,    19,    20,    21,    22,    28,    29,    30,    31,    32,
      27,    39,    37,    37,    37,    61,    38,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    61,    23,    51,    61,    47,    27,    61,
      36,    61,    61,    38,    54,    38,    52,    61,    48,    45,
      55,    49,    36,    45,    56,    61,    57,    38,    58,    45
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

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

/* Line 1455 of yacc.c  */
#line 73 "parser.y"
    {;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 77 "parser.y"
    {printf("{\n");output = fopen("output.c", "a");  fprintf(output,"{\n"); fclose(output);}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 77 "parser.y"
    {printf(";\n}\n");output = fopen("output.c", "a");  fprintf(output,";\n}\n"); fclose(output);}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 81 "parser.y"
    {;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 82 "parser.y"
    {;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 87 "parser.y"
    {printf(";\n");output = fopen("output.c", "a");  fprintf(output,";\n"); fclose(output);}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 89 "parser.y"
    {;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 93 "parser.y"
    {
		printf("ifLabelNo%dStart:\n", (yyvsp[(1) - (1)].label)=if_counter++); output = fopen("output.c", "a");  fprintf(output,"ifLabelNo%dStart:\n", (yyvsp[(1) - (1)].label)); fclose(output);
		printf("{\n");output = fopen("output.c", "a");  fprintf(output,"{\n"); fclose(output);
	}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 98 "parser.y"
    {
		printf("ifLabelNo%dCondition:\n", (yyvsp[(1) - (3)].label));output = fopen("output.c", "a");  fprintf(output,"ifLabelNo%dCondition:\n", (yyvsp[(1) - (3)].label)); fclose(output);
		printf("{\n");output = fopen("output.c", "a");  fprintf(output,"{\n"); fclose(output);
	}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 103 "parser.y"
    {
		printf("if (%s==0) goto afterIfNo%d;\n", (yyvsp[(5) - (6)].str), (yyvsp[(1) - (6)].label));output = fopen("output.c", "a");  fprintf(output,"if (%s==0) goto afterIfNo%d;\n", (yyvsp[(5) - (6)].str), (yyvsp[(1) - (6)].label)); fclose(output);
		printf("goto bodyIfNo%d;\n", (yyvsp[(1) - (6)].label));output = fopen("output.c", "a");  fprintf(output,"goto bodyIfNo%d;\n", (yyvsp[(1) - (6)].label)); fclose(output);
		printf("}\n");output = fopen("output.c", "a");  fprintf(output,"}\n"); fclose(output);
	}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 108 "parser.y"
    {
		printf("bodyIfNo%d:\n", (yyvsp[(1) - (7)].label)); output = fopen("output.c", "a");  fprintf(output,"bodyIfNo%d:\n", (yyvsp[(1) - (7)].label)); fclose(output);
	}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 112 "parser.y"
    {
		printf("}\n");output = fopen("output.c", "a");  fprintf(output,"}\n"); fclose(output);
		printf("afterIfNo%d:\n", (yyvsp[(1) - (9)].label));output = fopen("output.c", "a");  fprintf(output,"afterIfNo%d:\n", (yyvsp[(1) - (9)].label)); fclose(output);
	}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 119 "parser.y"
    {
		printf("whileLabelNo%dStart:\n", (yyvsp[(1) - (1)].label)=while_counter++); output = fopen("output.c", "a");  fprintf(output,"whileLabelNo%dStart:\n", (yyvsp[(1) - (1)].label)); fclose(output);
		printf("{\n"); output = fopen("output.c", "a");  fprintf(output,"{\n"); fclose(output);
	}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 124 "parser.y"
    {
		printf("whileLabelNo%dCondition:\n", (yyvsp[(1) - (3)].label)); output = fopen("output.c", "a");  fprintf(output,"whileLabelNo%dCondition:\n", (yyvsp[(1) - (3)].label)); fclose(output);
		printf("{\n"); output = fopen("output.c", "a");  fprintf(output,"{\n"); fclose(output);
	}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 129 "parser.y"
    {
		printf("if (%s==0) goto afterWhileNo%d;\n", (yyvsp[(5) - (6)].str), (yyvsp[(1) - (6)].label)); output = fopen("output.c", "a");  fprintf(output,"if (%s==0) goto afterWhileNo%d;\n", (yyvsp[(5) - (6)].str), (yyvsp[(1) - (6)].label)); fclose(output);
		printf("goto bodyWhileNo%d;\n", (yyvsp[(1) - (6)].label)); output = fopen("output.c", "a");  fprintf(output,"goto bodyWhileNo%d;\n", (yyvsp[(1) - (6)].label)); fclose(output);
		printf("}\n"); output = fopen("output.c", "a");  fprintf(output,"}\n"); fclose(output);
		printf("bodyWhileNo%d:\n", (yyvsp[(1) - (6)].label)); output = fopen("output.c", "a");  fprintf(output,"bodyWhileNo%d:\n", (yyvsp[(1) - (6)].label)); fclose(output);
	}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 136 "parser.y"
    {
		printf("goto whileLabelNo%dCondition;\n", (yyvsp[(1) - (8)].label)); output = fopen("output.c", "a");  fprintf(output,"goto whileLabelNo%dCondition;\n", (yyvsp[(1) - (8)].label)); fclose(output);
		printf("}\n");  output = fopen("output.c", "a");  fprintf(output,"}\n"); fclose(output);
		printf("afterWhileNo%d:\n", (yyvsp[(1) - (8)].label)); output = fopen("output.c", "a");  fprintf(output,"afterWhileNo%d:\n", (yyvsp[(1) - (8)].label)); fclose(output);
	}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 144 "parser.y"
    {
		printf("forNo%dStart:\n", (yyvsp[(1) - (1)].label)=for_counter++); output = fopen("output.c", "a");  fprintf(output,"forNo%dStart:\n", (yyvsp[(1) - (1)].label)); fclose(output);
		printf("{\n"); output = fopen("output.c", "a");  fprintf(output,"{\n"); fclose(output);
	}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 149 "parser.y"
    {
		printf("forNo%dCondition:\n", (yyvsp[(1) - (5)].label)); output = fopen("output.c", "a");  fprintf(output,"forNo%dCondition:\n", (yyvsp[(1) - (5)].label)); fclose(output);
		printf("{\n"); output = fopen("output.c", "a");  fprintf(output,"{\n"); fclose(output);
	}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 154 "parser.y"
    {
		printf("if(%s==0) goto afterForNo%d;\n", (yyvsp[(7) - (7)].str), (yyvsp[(1) - (7)].label));output = fopen("output.c", "a");  fprintf(output,"if(%s==0) goto afterForNo%d;\n", (yyvsp[(7) - (7)].str), (yyvsp[(1) - (7)].label)); fclose(output);
		printf("goto forNo%dBody;\n", (yyvsp[(1) - (7)].label));output = fopen("output.c", "a");  fprintf(output,"goto forNo%dBody;\n", (yyvsp[(1) - (7)].label)); fclose(output);
		printf("}\n");output = fopen("output.c", "a");  fprintf(output,"}\n"); fclose(output);
	}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 160 "parser.y"
    {
		printf("forNo%dStep:\n", (yyvsp[(1) - (9)].label));output = fopen("output.c", "a");  fprintf(output,"forNo%dStep:\n", (yyvsp[(1) - (9)].label)); fclose(output);
		printf("{\n");output = fopen("output.c", "a");  fprintf(output,"{\n"); fclose(output);
	}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 165 "parser.y"
    {
		printf("goto forNo%dCondition;\n", (yyvsp[(1) - (11)].label));output = fopen("output.c", "a");  fprintf(output,"goto forNo%dCondition;\n", (yyvsp[(1) - (11)].label)); fclose(output);
		printf("}\n");output = fopen("output.c", "a");  fprintf(output,"}\n"); fclose(output);
	}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 170 "parser.y"
    {
		printf("forNo%dBody:\n", (yyvsp[(1) - (13)].label));output = fopen("output.c", "a");  fprintf(output,"forNo%dBody:\n", (yyvsp[(1) - (13)].label)); fclose(output);
	}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 174 "parser.y"
    {
		printf("goto forNo%dStep;\n", (yyvsp[(1) - (15)].label));output = fopen("output.c", "a");  fprintf(output,"goto forNo%dStep;\n", (yyvsp[(1) - (15)].label)); fclose(output);
		printf("}\n");output = fopen("output.c", "a");  fprintf(output,"}\n"); fclose(output);
		printf("afterForNo%d:\n", (yyvsp[(1) - (15)].label));output = fopen("output.c", "a");  fprintf(output,"afterForNo%d:\n", (yyvsp[(1) - (15)].label)); fclose(output);
	}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 181 "parser.y"
    {;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 185 "parser.y"
    {printf("int %s", (yyvsp[(2) - (2)].str));output = fopen("output.c", "a");  fprintf(output,"int %s", (yyvsp[(2) - (2)].str)); fclose(output);}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 186 "parser.y"
    {printf("double %s", (yyvsp[(2) - (2)].str));output = fopen("output.c", "a");  fprintf(output,"double %s", (yyvsp[(2) - (2)].str)); fclose(output);}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 187 "parser.y"
    {printf("float %s", (yyvsp[(2) - (2)].str));output = fopen("output.c", "a");  fprintf(output,"float %s", (yyvsp[(2) - (2)].str)); fclose(output);}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 188 "parser.y"
    {printf("char %s", (yyvsp[(2) - (2)].str));output = fopen("output.c", "a");  fprintf(output,"char %s", (yyvsp[(2) - (2)].str)); fclose(output);}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 192 "parser.y"
    {sprintf((yyval.str), "%s, %s", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 193 "parser.y"
    {sprintf((yyval.str), "%s, %s = %s", (yyvsp[(1) - (5)].str), (yyvsp[(3) - (5)].str), (yyvsp[(5) - (5)].str));}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 194 "parser.y"
    {sprintf((yyval.str), "%s",(yyvsp[(1) - (1)].str));}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 195 "parser.y"
    {sprintf((yyval.str), "%s = %s", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 199 "parser.y"
    {strcpy((yyval.str), (yyvsp[(3) - (3)].str)); printf("%s = %s;\n", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 200 "parser.y"
    {strcpy((yyval.str), (yyvsp[(1) - (1)].str));}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 201 "parser.y"
    {;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 205 "parser.y"
    {sprintf((yyval.str), "t%d", t_counter++); printf("int %s = %s %s %s;\n", (yyval.str), (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));output = fopen("output.c", "a");  fprintf(output,"int %s = %s %s %s;\n", (yyval.str), (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)); fclose(output);}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 206 "parser.y"
    {sprintf((yyval.str), "t%d", t_counter++); printf("int %s = %s %s %s;\n", (yyval.str), (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));output = fopen("output.c", "a");  fprintf(output,"int %s = %s %s %s;\n", (yyval.str), (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)); fclose(output);}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 207 "parser.y"
    {sprintf((yyval.str), "t%d", t_counter++); printf("int %s = %s %s %s;\n", (yyval.str), (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));output = fopen("output.c", "a");  fprintf(output,"int %s = %s %s %s;\n", (yyval.str), (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)); fclose(output);}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 208 "parser.y"
    {sprintf((yyval.str), "t%d", t_counter++); printf("int %s = %s %s %s;\n", (yyval.str), (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));output = fopen("output.c", "a");  fprintf(output,"int %s = %s %s %s;\n", (yyval.str), (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)); fclose(output);}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 209 "parser.y"
    {sprintf((yyval.str), "t%d", t_counter++); printf("int %s = %s %s %s;\n", (yyval.str), (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));output = fopen("output.c", "a");  fprintf(output,"int %s = %s %s %s;\n", (yyval.str), (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)); fclose(output);}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 210 "parser.y"
    {sprintf((yyval.str), "t%d", t_counter++); printf("int %s = %s %s %s;\n", (yyval.str), (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));output = fopen("output.c", "a");  fprintf(output,"int %s = %s %s %s;\n", (yyval.str), (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)); fclose(output);}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 211 "parser.y"
    {sprintf((yyval.str), "t%d", t_counter++); printf("int %s = %s %s %s;\n", (yyval.str), (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));output = fopen("output.c", "a");  fprintf(output,"int %s = %s %s %s;\n", (yyval.str), (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)); fclose(output);}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 212 "parser.y"
    {sprintf((yyval.str), "t%d", t_counter++); printf("int %s = %s %s %s;\n", (yyval.str), (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));output = fopen("output.c", "a");  fprintf(output,"int %s = %s %s %s;\n", (yyval.str), (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)); fclose(output);}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 213 "parser.y"
    {sprintf((yyval.str), "t%d", t_counter++); printf("int %s = %s %s;\n", (yyval.str), (yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str));output = fopen("output.c", "a");  fprintf(output,"int %s = %s %s;\n", (yyval.str), (yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str)); fclose(output);}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 214 "parser.y"
    {sprintf((yyval.str), "t%d", t_counter++); printf("int %s = %s %s %s;\n", (yyval.str), (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));output = fopen("output.c", "a");  fprintf(output,"int %s = %s %s %s;\n", (yyval.str), (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)); fclose(output);}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 215 "parser.y"
    {sprintf((yyval.str), "t%d", t_counter++); printf("int %s = %s %s %s;\n", (yyval.str), (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));output = fopen("output.c", "a");  fprintf(output,"int %s = %s %s %s;\n", (yyval.str), (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)); fclose(output);}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 216 "parser.y"
    {sprintf((yyval.str), "t%d", t_counter++); printf("int %s = %s %s;\n", (yyval.str), (yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str));output = fopen("output.c", "a");  fprintf(output,"int %s = %s %s;\n", (yyval.str), (yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str)); fclose(output);}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 217 "parser.y"
    {sprintf((yyval.str), "t%d", t_counter++); printf("int %s = %s %s %s;\n", (yyval.str), (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));output = fopen("output.c", "a");  fprintf(output,"int %s = %s %s %s;\n", (yyval.str), (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)); fclose(output);}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 218 "parser.y"
    {
								sprintf((yyval.str), "t%d", t_counter++);
								if(containsDot((yyvsp[(1) - (3)].str)) || containsDot((yyvsp[(3) - (3)].str))){
									printf("float %s = %s * %s;\n", (yyval.str), (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));output = fopen("output.c", "a");  fprintf(output,"float %s = %s * %s;\n", (yyval.str), (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str)); fclose(output);
									}
								else{
									printf("int %s = %s * %s;\n", (yyval.str), (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));output = fopen("output.c", "a");  fprintf(output,"int %s = %s * %s;\n", (yyval.str), (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str)); fclose(output);}
								}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 226 "parser.y"
    {
								sprintf((yyval.str), "t%d", t_counter++); 
								if(containsDot((yyvsp[(1) - (3)].str)) || containsDot((yyvsp[(3) - (3)].str))){
									printf("float %s = %s / %s;\n", (yyval.str), (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));output = fopen("output.c", "a");  fprintf(output,"float %s = %s / %s;\n", (yyval.str), (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str)); fclose(output);}
								else{
									printf("int %s = %s / %s;\n", (yyval.str), (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));output = fopen("output.c", "a");  fprintf(output,"int %s = %s / %s;\n", (yyval.str), (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str)); fclose(output);}
								}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 233 "parser.y"
    {
								sprintf((yyval.str), "t%d", t_counter++);
								if(containsDot((yyvsp[(1) - (3)].str)) || containsDot((yyvsp[(3) - (3)].str))){
									printf("float %s = %s % %s;\n", (yyval.str), (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));output = fopen("output.c", "a");  fprintf(output,"float %s = %s % %s;\n", (yyval.str), (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str)); fclose(output);}
								else{
									printf("int %s = %s % %s;\n", (yyval.str), (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));output = fopen("output.c", "a");  fprintf(output,"int %s = %s % %s;\n", (yyval.str), (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str)); fclose(output);}
								}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 240 "parser.y"
    {sprintf((yyval.str), "t%d", t_counter++); 
								if(containsDot((yyvsp[(1) - (3)].str)) || containsDot((yyvsp[(3) - (3)].str))){
									printf("float %s = %s + %s;\n", (yyval.str), (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));output = fopen("output.c", "a");  fprintf(output,"float %s = %s + %s;\n", (yyval.str), (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str)); fclose(output);}
								else{
									printf("int %s = %s + %s;\n", (yyval.str), (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));output = fopen("output.c", "a");  fprintf(output,"int %s = %s + %s;\n", (yyval.str), (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str)); fclose(output);}
								}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 246 "parser.y"
    {
								sprintf((yyval.str), "t%d", t_counter++);
								if(containsDot((yyvsp[(1) - (3)].str)) || containsDot((yyvsp[(3) - (3)].str))){
									printf("float %s = %s - %s;\n", (yyval.str), (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));output = fopen("output.c", "a");  fprintf(output,"float %s = %s - %s;\n", (yyval.str), (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str)); fclose(output);}
								else{
									printf("int %s = %s - %s;\n", (yyval.str), (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));output = fopen("output.c", "a");  fprintf(output,"int %s = %s - %s;\n", (yyval.str), (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str)); fclose(output);}
								}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 253 "parser.y"
    {sprintf((yyval.str), "t%d", t_counter++); 
								if(containsDot((yyvsp[(2) - (2)].str))){
									printf("float %s = -%s;\n", (yyval.str), (yyvsp[(2) - (2)].str));output = fopen("output.c", "a");  fprintf(output,"float %s = -%s;\n", (yyval.str), (yyvsp[(2) - (2)].str)); fclose(output);}
								else{
								printf("int %s = -%s;\n", (yyval.str), (yyvsp[(2) - (2)].str));output = fopen("output.c", "a");  fprintf(output,"int %s = -%s;\n", (yyval.str), (yyvsp[(2) - (2)].str)); fclose(output);}
								}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 259 "parser.y"
    {strcpy((yyval.str), (yyvsp[(2) - (3)].str));}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 260 "parser.y"
    {strcpy((yyval.str), (yyvsp[(1) - (1)].str));}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 261 "parser.y"
    {strcpy((yyval.str), (yyvsp[(1) - (1)].str));}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 262 "parser.y"
    {strcpy((yyval.str), (yyvsp[(1) - (1)].str));}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 263 "parser.y"
    {strcpy((yyval.str), (yyvsp[(1) - (1)].str));}
    break;



/* Line 1455 of yacc.c  */
#line 2016 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 267 "parser.y"


int containsDot(char * string){
	int i = 0 ;
	for(i = 0 ; i <strlen(string) ; i++)
		if(string[i] == '.')
			return 1;
	return 0;
}

int main(int argc, char *argv[])
{
	printf("Hello\n");
    yyin = fopen("input.c", "r");
	//output = fopen("output.c" , "w");
    yyparse();
    fclose(yyin);
	//fclose(output);
	return 0 ;
}



int yywrap(void)
{
   return 0;
}

int yyerror(char *errormsg)
{
    fprintf(stderr, "hey!%s\n", errormsg);
    exit(1);
}
