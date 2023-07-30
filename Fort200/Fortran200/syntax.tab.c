/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "syntax.y"

  #include "extra/hashtbl.h"
  #include <stdio.h>
  #include <stdlib.h>

  extern FILE  *yyin;
  extern int yylex();
  extern void yyerror(const char* err);
  
  HASHTBL *hashtbl;
  
  int scope = 0;

     // int error_counter = 0;


#line 87 "syntax.tab.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_SYNTAX_TAB_H_INCLUDED
# define YY_YY_SYNTAX_TAB_H_INCLUDED
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
    T_EOF = 0,
    T_FUNCTION = 258,
    T_SUBROUTINE = 259,
    T_END = 260,
    T_INTEGER = 261,
    T_REAL = 262,
    T_LOGICAL = 263,
    T_CHARACTER = 264,
    T_COMPLEX = 265,
    T_RECORD = 266,
    T_ENDREC = 267,
    T_LIST = 268,
    T_DATA = 269,
    T_CONTINUE = 270,
    T_GOTO = 271,
    T_CALL = 272,
    T_READ = 273,
    T_WRITE = 274,
    T_NEW = 275,
    T_LENGTH = 276,
    T_IF = 277,
    T_THEN = 278,
    T_ELSE = 279,
    T_ENDIF = 280,
    T_DO = 281,
    T_ENDDO = 282,
    T_STOP = 283,
    T_RETURN = 284,
    T_ID = 285,
    T_ICONST = 286,
    T_RCONST = 287,
    T_LCONST = 288,
    T_CCONST = 289,
    T_OROP = 290,
    T_ANDOP = 291,
    T_NOTOP = 292,
    T_RELOP = 293,
    T_ADDOP = 294,
    T_MULOP = 295,
    T_DIVOP = 296,
    T_POWEROP = 297,
    T_LISTFUNC = 298,
    T_STRING = 299,
    T_LPAREN = 300,
    T_RPAREN = 301,
    T_COMMA = 302,
    T_ASSIGN = 303,
    T_DOT = 304,
    T_COLON = 305,
    T_LBRACK = 306,
    T_RBRACK = 307
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 21 "syntax.y"

  int iconst;
  double rconst;
  char* lconst;
  char* cconst;
  char* strings;
  char* id;

#line 202 "syntax.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SYNTAX_TAB_H_INCLUDED  */



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
typedef yytype_int16 yy_state_t;

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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   600

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  55
/* YYNRULES -- Number of rules.  */
#define YYNRULES  135
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  266

#define YYUNDEFTOK  2
#define YYMAXUTOK   307


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   122,   122,   122,   125,   128,   129,   130,   131,   134,
     134,   134,   134,   134,   137,   138,   141,   142,   143,   146,
     147,   150,   151,   154,   155,   158,   159,   162,   163,   166,
     167,   168,   169,   172,   173,   176,   177,   180,   181,   184,
     185,   188,   188,   188,   188,   191,   194,   195,   198,   199,
     202,   205,   206,   209,   210,   211,   212,   213,   214,   215,
     216,   219,   220,   223,   224,   225,   226,   227,   228,   231,
     232,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   253,   254,   255,
     256,   259,   259,   260,   260,   263,   264,   267,   268,   269,
     274,   277,   278,   281,   282,   285,   286,   289,   292,   293,
     296,   297,   298,   299,   302,   303,   304,   307,   308,   311,
     311,   314,   314,   314,   315,   319,   319,   323,   324,   327,
     330,   331,   332,   333,   336,   337
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "T_EOF", "error", "$undefined", "\"FUNCTION\"", "\"SUBROUTINE\"",
  "\"END\"", "\"INTEGER\"", "\"REAL\"", "\"LOGICAL\"", "\"CHARACTER\"",
  "\"COMPLEX\"", "\"RECORD\"", "\"ENDREC\"", "\"LIST\"", "\"DATA\"",
  "\"CONTINUE\"", "\"GOTO\"", "\"CALL\"", "\"READ\"", "\"WRITE\"",
  "\"NEW\"", "\"LENGTH\"", "\"IF\"", "\"THEN\"", "\"ELSE\"", "\"ENDIF\"",
  "\"DO\"", "\"ENDDO\"", "\"STOP\"", "\"RETURN\"", "\"ID\"", "\"ICONST\"",
  "\"RCONST\"", "\"LCONST\"", "\"CCONST\"", "\".OR.\"", "\".AND.\"",
  "\".NOT.\"", "\".(GT or GE or LT or LE or EQ or NE).\"", "\"+ or -\"",
  "\"*\"", "\"/\"", "\"**\"", "\"LISTFUNC\"", "\"STRING\"", "\"(\"",
  "\")\"", "\",\"", "\"=\"", "\".\"", "\":\"", "\"[\"", "\"]\"", "$accept",
  "program", "$@1", "body", "declarations", "type", "vars",
  "undef_variable", "dims", "dim", "fields", "field", "vals", "value_list",
  "values", "value", "sign", "constant", "simple_constant",
  "complex_constant", "statements", "labeled_statement", "label",
  "statement", "simple_statement", "assignment", "variable", "expressions",
  "expression", "listexpression", "goto_statement", "$@2", "$@3", "labels",
  "if_statement", "subroutine_call", "io_statement", "read_list",
  "read_item", "iter_space", "step", "write_list", "write_item",
  "compound_statement", "branch_statement", "$@4", "tail", "$@5", "$@6",
  "loop_statement", "$@7", "subprograms", "subprogram", "header",
  "formal_parameters", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307
};
# endif

#define YYPACT_NINF (-196)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-103)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -196,    28,    38,   291,  -196,  -196,  -196,  -196,  -196,  -196,
    -196,   584,    64,  -196,    73,   -18,    74,   294,    63,  -196,
    -196,  -196,  -196,  -196,    65,     9,   377,  -196,   412,  -196,
    -196,  -196,   -14,  -196,  -196,  -196,  -196,  -196,  -196,  -196,
    -196,   584,     9,   563,  -196,     5,    69,    96,    98,     2,
      74,     2,    87,  -196,    91,    93,  -196,  -196,  -196,  -196,
     346,   346,  -196,   294,    40,  -196,     2,   202,  -196,   231,
    -196,   346,   110,   346,     9,   101,   119,  -196,  -196,  -196,
     128,   320,   127,   555,   570,   119,     9,  -196,   -21,   251,
    -196,   138,  -196,   122,   123,    74,   346,   346,   346,  -196,
      47,   451,    39,   125,  -196,    10,   202,   346,   346,   346,
     346,   346,   346,   346,   294,    81,   154,   132,   487,  -196,
      25,     9,   135,    29,  -196,   202,  -196,   152,   182,   184,
    -196,  -196,     9,   119,  -196,  -196,   -26,  -196,   111,   150,
      37,     5,   153,    92,  -196,   496,   505,   451,  -196,   346,
     183,  -196,  -196,   346,  -196,   547,   112,   170,    47,    58,
     155,  -196,  -196,  -196,  -196,   445,   394,   346,  -196,  -196,
    -196,    60,  -196,  -196,  -196,  -196,  -196,   156,   169,   177,
     213,   119,  -196,   -21,   187,  -196,  -196,  -196,  -196,  -196,
    -196,  -196,    96,   173,  -196,  -196,   514,   175,   202,   186,
    -196,  -196,   188,  -196,   467,  -196,  -196,    25,   590,   194,
     209,  -196,  -196,   179,  -196,    84,   346,  -196,   346,   346,
    -196,    96,   346,   206,  -196,     9,   217,   590,   590,   227,
    -196,    96,   226,   230,   229,   248,   232,   477,  -196,   233,
    -196,   235,   240,   245,  -196,  -196,  -196,   428,  -196,  -196,
     263,    96,   346,  -196,   470,  -196,  -196,   242,  -196,  -196,
     202,  -196,  -196,  -196,   264,  -196
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       8,     0,     0,     0,     1,     2,     9,    10,    11,    12,
      13,     0,     0,    58,    91,     0,     0,     0,     0,   125,
      60,    59,    66,    50,     0,     0,     4,    47,     0,    49,
      51,    53,     0,    54,    55,    56,    57,    52,   117,   118,
     128,     0,     0,     0,    24,     0,     7,     0,     0,   100,
       0,   105,   101,   104,     0,     0,    41,    42,    43,    44,
       0,     0,   116,     0,     0,    81,    80,   114,    86,     0,
     113,     0,     0,     0,     0,    18,     5,    15,    46,    48,
       0,     0,     0,     3,     0,    25,     0,    23,    38,     0,
      28,     0,    92,     0,     0,     0,     0,     0,     0,    78,
      79,   114,     0,     0,    90,     0,    70,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    16,
       0,     0,     0,     0,    62,    61,    63,     0,     0,     0,
     127,     8,     0,     6,    37,    36,     0,    34,     0,     0,
       0,     0,     0,     0,   103,     0,     0,     0,    84,     0,
       0,    88,    89,     0,    87,    71,    72,    73,    74,    75,
      76,    77,   111,   112,   110,     0,     0,     0,    65,    22,
      21,     0,    20,    14,    67,    68,    64,   133,     0,     0,
       0,    26,    30,    38,     0,    35,    39,    40,    31,    32,
      29,    27,     0,    66,    83,    82,     0,    66,    69,     0,
      99,   119,     0,    98,     0,     8,    17,     0,     0,     0,
       0,   129,    33,     0,    96,     0,     0,    85,     0,     0,
       8,     0,     0,     0,    19,     0,     0,     0,     0,    38,
      94,     0,     0,     0,     0,   121,     0,   109,   126,   135,
     132,     0,     0,     0,    95,   106,   115,     0,   124,   120,
       0,     0,     0,   107,     0,   131,   130,     0,   122,    97,
     108,   134,    45,     8,     0,   123
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -196,  -196,  -196,  -124,  -196,    -3,   -37,   -71,  -196,    85,
     250,   -39,  -196,   162,   204,   121,    82,  -196,   174,  -196,
    -196,   268,   -45,   288,  -157,  -196,    -2,   238,   -44,  -196,
    -196,  -196,  -196,  -196,  -196,  -196,  -196,   273,   -85,  -174,
    -196,   266,   -17,  -196,  -196,  -196,  -196,  -196,  -196,  -196,
    -196,  -196,  -196,  -196,  -195
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    40,     2,     3,    42,    76,    77,   171,   172,
      43,    44,    46,    90,   136,   137,   138,   185,    65,   187,
      26,    27,    28,    29,    30,    31,    66,   105,    67,    68,
      33,    47,    48,   215,    34,    35,    36,    52,    53,   205,
     253,    69,    70,    37,    38,   220,   249,   250,   263,    39,
      72,    83,   130,   131,   226
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      25,    32,    92,   119,    87,    85,    88,   180,   200,   203,
     144,   152,    22,    49,    51,   182,    99,   100,   134,   101,
     106,   183,    74,   135,    32,    24,    32,   116,     4,   118,
     175,    80,   241,   242,    81,    82,   106,   125,   189,    75,
     114,   103,   232,     5,   233,    87,    89,    80,    51,   133,
     173,    82,   145,   146,   147,   169,   170,   153,   144,   261,
      54,    55,   154,   155,   156,   157,   158,   159,   160,   161,
      22,    56,    57,    58,    59,   176,   153,    60,   190,    61,
     129,   223,   163,    24,   183,    98,   150,   111,   112,   113,
     203,    64,   104,    51,    45,   181,   235,   162,   164,   112,
     113,    54,    55,   -93,    22,   196,   206,   207,    71,   198,
      73,    22,    56,    57,    58,    59,    91,    24,    60,    50,
      61,   202,   193,   204,    24,    62,    63,    23,    93,   122,
     230,   231,    64,   164,    95,    24,    96,    50,    97,   264,
     117,    51,    56,    57,    58,    59,   120,   214,    54,    55,
     109,   110,   111,   112,   113,   165,   184,   126,    22,    56,
      57,    58,    59,    32,    32,    60,   121,    61,   141,   142,
     143,    24,   204,    98,   204,   234,   236,   151,   237,    64,
     167,   174,   177,   173,   163,   178,   244,   179,   239,   107,
     108,   188,   109,   110,   111,   112,   113,   113,   192,   209,
     166,   208,   202,    54,    55,   225,   259,   210,   260,   110,
     111,   112,   113,   197,    56,    57,    58,    59,   211,   213,
      60,   216,    61,   218,   225,   225,    24,    62,    63,   229,
     165,   219,   114,   238,    64,   221,  -102,   107,   108,   227,
     109,   110,   111,   112,   113,    32,  -102,  -102,  -102,  -102,
    -102,   225,   139,  -102,   228,  -102,  -102,  -102,  -102,  -102,
    -102,  -102,  -102,   240,   107,   108,   134,   109,   110,   111,
     112,   113,   245,   248,  -102,   247,   246,   257,   115,   251,
     254,   255,   -38,   -38,   -38,   -38,   256,   258,   262,   265,
     134,    84,   224,   140,    78,   135,   -38,     6,     7,     8,
       9,    10,    11,   191,   212,    12,    13,    14,    15,    16,
      17,   243,   186,    18,    54,    55,    79,    19,   123,    20,
      21,    22,    23,    94,    22,    56,    57,    58,    59,   102,
       0,    60,     0,    61,    24,     0,     0,    24,    62,    63,
      54,    55,     0,     0,     0,    64,     0,     0,     0,     0,
      22,    56,    57,    58,    59,     0,     0,    60,     0,    61,
       0,     0,     0,    24,   124,    98,    54,    55,     0,     0,
       0,    64,     0,     0,     0,     0,    22,    56,    57,    58,
      59,     0,     0,    60,     0,    61,     0,     0,     0,    24,
       0,    98,    13,    14,    15,    16,    17,    64,     0,    18,
       0,     0,     0,    19,     0,    20,    21,    22,    23,    13,
      14,    15,    16,    17,     0,     0,   199,   201,     0,     0,
      24,     0,    20,    21,    22,    23,     0,    13,    14,    15,
      16,    17,     0,     0,    18,     0,     0,    24,    19,     0,
      20,    21,    22,    13,    14,    15,    16,    17,     0,     0,
     199,     0,     0,     0,     0,    24,    20,    21,    22,    23,
      13,    14,    15,    16,    17,     0,     0,   199,     0,     0,
       0,    24,     0,    20,    21,    22,     6,     7,     8,     9,
      10,     0,     0,    74,     0,     0,   107,   108,    24,   109,
     110,   111,   112,   113,     0,     0,     0,   148,     0,     0,
      75,   149,   107,   108,     0,   109,   110,   111,   112,   113,
       0,     0,   107,   108,   222,   109,   110,   111,   112,   113,
       0,     0,   107,   108,   252,   109,   110,   111,   112,   113,
       0,   107,   108,   168,   109,   110,   111,   112,   113,     0,
     107,   108,   194,   109,   110,   111,   112,   113,     0,   107,
     108,   195,   109,   110,   111,   112,   113,     0,     0,   127,
     217,     6,     7,     8,     9,    10,     0,     0,   128,     6,
       7,     8,     9,    10,    41,    86,     6,     7,     8,     9,
      10,    41,   132,   108,     0,   109,   110,   111,   112,   113,
       6,     7,     8,     9,    10,    41,     6,     7,     8,     9,
      10
};

static const yytype_int16 yycheck[] =
{
       3,     3,    47,    74,    43,    42,     1,   131,   165,   166,
      95,     1,    30,    15,    16,    41,    60,    61,    39,    63,
      64,    47,    13,    44,    26,    43,    28,    71,     0,    73,
       1,    45,   227,   228,    48,    49,    80,    81,     1,    30,
       1,     1,   216,     5,   218,    84,    41,    45,    50,    86,
     121,    49,    96,    97,    98,    30,    31,    47,   143,   254,
      20,    21,    52,   107,   108,   109,   110,   111,   112,   113,
      30,    31,    32,    33,    34,    46,    47,    37,    41,    39,
      83,   205,     1,    43,    47,    45,    47,    40,    41,    42,
     247,    51,    52,    95,    30,   132,   220,   114,   115,    41,
      42,    20,    21,    30,    30,   149,    46,    47,    45,   153,
      45,    30,    31,    32,    33,    34,    47,    43,    37,    45,
      39,   166,    30,   167,    43,    44,    45,    31,    30,     1,
      46,    47,    51,   150,    47,    43,    45,    45,    45,   263,
      30,   143,    31,    32,    33,    34,    45,   192,    20,    21,
      38,    39,    40,    41,    42,     1,    45,    30,    30,    31,
      32,    33,    34,   165,   166,    37,    47,    39,    30,    47,
      47,    43,   216,    45,   218,   219,   221,    52,   222,    51,
      48,    46,    30,   254,     1,     3,   231,     3,   225,    35,
      36,    41,    38,    39,    40,    41,    42,    42,    45,    30,
      46,    45,   247,    20,    21,   208,   251,    30,   252,    39,
      40,    41,    42,    30,    31,    32,    33,    34,     5,    32,
      37,    48,    39,    48,   227,   228,    43,    44,    45,    50,
       1,    45,     1,    27,    51,    47,     5,    35,    36,    45,
      38,    39,    40,    41,    42,   247,    15,    16,    17,    18,
      19,   254,     1,    22,    45,    24,    25,    26,    27,    28,
      29,    30,    31,    46,    35,    36,    39,    38,    39,    40,
      41,    42,    46,    25,    43,    46,    46,    32,    47,    47,
      47,    46,    31,    32,    33,    34,    46,    24,    46,    25,
      39,    41,   207,    89,    26,    44,    45,     6,     7,     8,
       9,    10,    11,   141,   183,    14,    15,    16,    17,    18,
      19,   229,   138,    22,    20,    21,    28,    26,    80,    28,
      29,    30,    31,    50,    30,    31,    32,    33,    34,    63,
      -1,    37,    -1,    39,    43,    -1,    -1,    43,    44,    45,
      20,    21,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    -1,    -1,    37,    -1,    39,
      -1,    -1,    -1,    43,    44,    45,    20,    21,    -1,    -1,
      -1,    51,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    -1,    -1,    37,    -1,    39,    -1,    -1,    -1,    43,
      -1,    45,    15,    16,    17,    18,    19,    51,    -1,    22,
      -1,    -1,    -1,    26,    -1,    28,    29,    30,    31,    15,
      16,    17,    18,    19,    -1,    -1,    22,    23,    -1,    -1,
      43,    -1,    28,    29,    30,    31,    -1,    15,    16,    17,
      18,    19,    -1,    -1,    22,    -1,    -1,    43,    26,    -1,
      28,    29,    30,    15,    16,    17,    18,    19,    -1,    -1,
      22,    -1,    -1,    -1,    -1,    43,    28,    29,    30,    31,
      15,    16,    17,    18,    19,    -1,    -1,    22,    -1,    -1,
      -1,    43,    -1,    28,    29,    30,     6,     7,     8,     9,
      10,    -1,    -1,    13,    -1,    -1,    35,    36,    43,    38,
      39,    40,    41,    42,    -1,    -1,    -1,    46,    -1,    -1,
      30,    50,    35,    36,    -1,    38,    39,    40,    41,    42,
      -1,    -1,    35,    36,    47,    38,    39,    40,    41,    42,
      -1,    -1,    35,    36,    47,    38,    39,    40,    41,    42,
      -1,    35,    36,    46,    38,    39,    40,    41,    42,    -1,
      35,    36,    46,    38,    39,    40,    41,    42,    -1,    35,
      36,    46,    38,    39,    40,    41,    42,    -1,    -1,     4,
      46,     6,     7,     8,     9,    10,    -1,    -1,    13,     6,
       7,     8,     9,    10,    11,    12,     6,     7,     8,     9,
      10,    11,    12,    36,    -1,    38,    39,    40,    41,    42,
       6,     7,     8,     9,    10,    11,     6,     7,     8,     9,
      10
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    54,    56,    57,     0,     5,     6,     7,     8,     9,
      10,    11,    14,    15,    16,    17,    18,    19,    22,    26,
      28,    29,    30,    31,    43,    58,    73,    74,    75,    76,
      77,    78,    79,    83,    87,    88,    89,    96,    97,   102,
      55,    11,    58,    63,    64,    30,    65,    84,    85,    79,
      45,    79,    90,    91,    20,    21,    31,    32,    33,    34,
      37,    39,    44,    45,    51,    71,    79,    81,    82,    94,
      95,    45,   103,    45,    13,    30,    59,    60,    74,    76,
      45,    48,    49,   104,    63,    59,    12,    64,     1,    41,
      66,    47,    75,    30,    90,    47,    45,    45,    45,    81,
      81,    81,    94,     1,    52,    80,    81,    35,    36,    38,
      39,    40,    41,    42,     1,    47,    81,    30,    81,    60,
      45,    47,     1,    80,    44,    81,    30,     4,    13,    58,
     105,   106,    12,    59,    39,    44,    67,    68,    69,     1,
      67,    30,    47,    47,    91,    81,    81,    81,    46,    50,
      47,    52,     1,    47,    52,    81,    81,    81,    81,    81,
      81,    81,    95,     1,    95,     1,    46,    48,    46,    30,
      31,    61,    62,    60,    46,     1,    46,    30,     3,     3,
      56,    59,    41,    47,    45,    70,    71,    72,    41,     1,
      41,    66,    45,    30,    46,    46,    81,    30,    81,    22,
      77,    23,    75,    77,    81,    92,    46,    47,    45,    30,
      30,     5,    68,    32,    75,    86,    48,    46,    48,    45,
      98,    47,    47,    56,    62,    58,   107,    45,    45,    50,
      46,    47,    92,    92,    81,    56,    75,    81,    27,    59,
      46,   107,   107,    69,    75,    46,    46,    46,    25,    99,
     100,    47,    47,    93,    47,    46,    46,    32,    24,    75,
      81,   107,    46,   101,    56,    25
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    53,    55,    54,    56,    57,    57,    57,    57,    58,
      58,    58,    58,    58,    59,    59,    60,    60,    60,    61,
      61,    62,    62,    63,    63,    64,    64,    65,    65,    66,
      66,    66,    66,    67,    67,    68,    68,    69,    69,    70,
      70,    71,    71,    71,    71,    72,    73,    73,    74,    74,
      75,    76,    76,    77,    77,    77,    77,    77,    77,    77,
      77,    78,    78,    79,    79,    79,    79,    79,    79,    80,
      80,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    82,    82,    82,
      82,    84,    83,    85,    83,    86,    86,    87,    87,    87,
      88,    89,    89,    90,    90,    91,    91,    92,    93,    93,
      94,    94,    94,    94,    95,    95,    95,    96,    96,    98,
      97,   100,   101,    99,    99,   103,   102,   104,   104,   105,
     106,   106,   106,   106,   107,   107
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     4,     2,     3,     5,     3,     0,     1,
       1,     1,     1,     1,     3,     1,     2,     4,     1,     3,
       1,     1,     1,     2,     1,     2,     4,     4,     2,     3,
       3,     3,     3,     3,     1,     2,     1,     1,     0,     1,
       1,     1,     1,     1,     1,     6,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     4,     4,     1,     4,     4,     3,
       1,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       1,     1,     4,     4,     3,     5,     1,     3,     3,     3,
       2,     0,     3,     0,     7,     3,     1,     9,     5,     5,
       2,     2,     2,     3,     1,     1,     7,     4,     2,     0,
       3,     3,     3,     1,     1,     7,     1,     1,     1,     0,
       8,     0,     0,     5,     1,     0,     7,     2,     0,     3,
       6,     6,     5,     2,     4,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
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
  case 2:
#line 122 "syntax.y"
                                            {scope--;}
#line 1640 "syntax.tab.c"
    break;

  case 17:
#line 142 "syntax.y"
                                                                    {hashtbl_insert(hashtbl,(yyvsp[-3].id),NULL,scope);}
#line 1646 "syntax.tab.c"
    break;

  case 18:
#line 143 "syntax.y"
                                                                    {hashtbl_insert(hashtbl,(yyvsp[0].id),NULL,scope);}
#line 1652 "syntax.tab.c"
    break;

  case 22:
#line 151 "syntax.y"
                                                                    {hashtbl_insert(hashtbl,(yyvsp[0].id),NULL,scope);}
#line 1658 "syntax.tab.c"
    break;

  case 27:
#line 162 "syntax.y"
                                                                    {hashtbl_insert(hashtbl,(yyvsp[-1].id),NULL,scope);}
#line 1664 "syntax.tab.c"
    break;

  case 28:
#line 163 "syntax.y"
                                                                    {hashtbl_insert(hashtbl,(yyvsp[-1].id),NULL,scope);}
#line 1670 "syntax.tab.c"
    break;

  case 30:
#line 167 "syntax.y"
                                                          { yyerror("Error : DivOp does not exists.");yyerrok; }
#line 1676 "syntax.tab.c"
    break;

  case 31:
#line 168 "syntax.y"
                                                          { yyerror("Error : values does not exists."); yyerrok; }
#line 1682 "syntax.tab.c"
    break;

  case 32:
#line 169 "syntax.y"
                                                          { yyerror("Error: DivOp does not exists.");yyerrok; }
#line 1688 "syntax.tab.c"
    break;

  case 63:
#line 223 "syntax.y"
                                                                          {hashtbl_insert(hashtbl,(yyvsp[0].id),NULL,scope);}
#line 1694 "syntax.tab.c"
    break;

  case 66:
#line 226 "syntax.y"
                                                                          {hashtbl_insert(hashtbl,(yyvsp[0].id),NULL,scope);}
#line 1700 "syntax.tab.c"
    break;

  case 67:
#line 227 "syntax.y"
                                                                          { yyerror("Error: expression does not exists."); yyerrok; }
#line 1706 "syntax.tab.c"
    break;

  case 68:
#line 228 "syntax.y"
                                                                          { yyerror("Error: ')' does not exists."); yyerrok; }
#line 1712 "syntax.tab.c"
    break;

  case 88:
#line 254 "syntax.y"
                                                                 {yyerror("Expression does not exists.\n");yyerrok;}
#line 1718 "syntax.tab.c"
    break;

  case 89:
#line 255 "syntax.y"
                                                                 {yyerror("RBRACK ] does not exists.\n");yyerrok;}
#line 1724 "syntax.tab.c"
    break;

  case 91:
#line 259 "syntax.y"
                                       {scope++;}
#line 1730 "syntax.tab.c"
    break;

  case 92:
#line 259 "syntax.y"
                                                       {scope--;}
#line 1736 "syntax.tab.c"
    break;

  case 93:
#line 260 "syntax.y"
                                       {scope++;}
#line 1742 "syntax.tab.c"
    break;

  case 94:
#line 260 "syntax.y"
                                                                                        {hashtbl_insert(hashtbl,(yyvsp[-4].id),NULL,scope);scope--;}
#line 1748 "syntax.tab.c"
    break;

  case 99:
#line 269 "syntax.y"
                                                                               { yyerror("Error: ')' does not exists."); yyerrok; }
#line 1754 "syntax.tab.c"
    break;

  case 106:
#line 286 "syntax.y"
                                                                                               {hashtbl_insert(hashtbl,(yyvsp[-3].id),NULL,scope);}
#line 1760 "syntax.tab.c"
    break;

  case 111:
#line 297 "syntax.y"
                                                             {yyerrok;}
#line 1766 "syntax.tab.c"
    break;

  case 112:
#line 298 "syntax.y"
                                                             {yyerrok;}
#line 1772 "syntax.tab.c"
    break;

  case 115:
#line 303 "syntax.y"
                                                                                                 {hashtbl_insert(hashtbl,(yyvsp[-3].id),NULL,scope);}
#line 1778 "syntax.tab.c"
    break;

  case 119:
#line 311 "syntax.y"
                                                                         {scope++;}
#line 1784 "syntax.tab.c"
    break;

  case 120:
#line 311 "syntax.y"
                                                                                             {scope--;}
#line 1790 "syntax.tab.c"
    break;

  case 121:
#line 314 "syntax.y"
                                 {scope--;}
#line 1796 "syntax.tab.c"
    break;

  case 122:
#line 314 "syntax.y"
                                                  {scope++;}
#line 1802 "syntax.tab.c"
    break;

  case 123:
#line 314 "syntax.y"
                                                                        {scope--;}
#line 1808 "syntax.tab.c"
    break;

  case 124:
#line 315 "syntax.y"
                                        {scope--;}
#line 1814 "syntax.tab.c"
    break;

  case 125:
#line 319 "syntax.y"
                                      {scope++;}
#line 1820 "syntax.tab.c"
    break;

  case 126:
#line 319 "syntax.y"
                                                                                                      {hashtbl_insert(hashtbl,(yyvsp[-4].id),NULL,scope);scope--;}
#line 1826 "syntax.tab.c"
    break;

  case 130:
#line 330 "syntax.y"
                                                                                            {hashtbl_insert(hashtbl,(yyvsp[-3].id),NULL,scope);scope++;}
#line 1832 "syntax.tab.c"
    break;

  case 131:
#line 331 "syntax.y"
                                                                                            {hashtbl_insert(hashtbl,(yyvsp[-3].id),NULL,scope);}
#line 1838 "syntax.tab.c"
    break;

  case 132:
#line 332 "syntax.y"
                                                                                            {hashtbl_insert(hashtbl,(yyvsp[-3].id),NULL,scope);scope++;}
#line 1844 "syntax.tab.c"
    break;

  case 133:
#line 333 "syntax.y"
                                                                                            {hashtbl_insert(hashtbl,(yyvsp[0].id),NULL,scope);}
#line 1850 "syntax.tab.c"
    break;


#line 1854 "syntax.tab.c"

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 342 "syntax.y"



int main(int argc, char *argv[]) {
	int token;

	
	if(!(hashtbl = hashtbl_create(10,NULL))){
    puts("Error failed hashtble to initialize .");
    exit(EXIT_FAILURE);

  }
	
	yyin = fopen(argv[1], "r");

		if (yyin == NULL) {
			printf("%s: File not found\n", argv[1]);
			return 1;
		}
	

  yyparse();
	fclose(yyin);
  hashtbl_destroy(hashtbl);
	
	return 0;
}

/*void yyerror(const char* err){
    error_counter++;
    

    if(error_counter == 5 ){
        printf("Max Errors detected .");
        exit(EXIT_FAILURE);
    }

    yyless(1);  // continue if find error
}*/
