/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 10 "parser.y" /* yacc.c:339  */


/* Just like lex, the text within this first region delimited by %{ and %}
 * is assumed to be C/C++ code and will be copied verbatim to the y.tab.c
 * file ahead of the definitions of the yyparse() function. Add other header
 * file inclusions or C++ variable declarations/prototypes that are needed
 * by your code here.
 */
#include "scanner.h" // for yylex
#include "parser.h"
#include "errors.h"

void yyerror(const char *msg); // standard error-handling routine


#line 82 "y.tab.c" /* yacc.c:339  */

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
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_Void = 258,
    T_Bool = 259,
    T_Int = 260,
    T_Double = 261,
    T_String = 262,
    T_Class = 263,
    T_LessEqual = 264,
    T_GreaterEqual = 265,
    T_Equal = 266,
    T_NotEqual = 267,
    T_Dims = 268,
    T_Increment = 269,
    T_Decrement = 270,
    T_And = 271,
    T_Or = 272,
    T_Null = 273,
    T_Extends = 274,
    T_This = 275,
    T_Interface = 276,
    T_Implements = 277,
    T_While = 278,
    T_For = 279,
    T_If = 280,
    T_Else = 281,
    T_Return = 282,
    T_Break = 283,
    T_Switch = 284,
    T_Case = 285,
    T_Default = 286,
    T_New = 287,
    T_NewArray = 288,
    T_Print = 289,
    T_ReadInteger = 290,
    T_ReadLine = 291,
    T_Identifier = 292,
    T_StringConstant = 293,
    T_IntConstant = 294,
    T_DoubleConstant = 295,
    T_BoolConstant = 296,
    LOWER_THAN_ELSE = 297,
    UMINUS = 298
  };
#endif
/* Tokens.  */
#define T_Void 258
#define T_Bool 259
#define T_Int 260
#define T_Double 261
#define T_String 262
#define T_Class 263
#define T_LessEqual 264
#define T_GreaterEqual 265
#define T_Equal 266
#define T_NotEqual 267
#define T_Dims 268
#define T_Increment 269
#define T_Decrement 270
#define T_And 271
#define T_Or 272
#define T_Null 273
#define T_Extends 274
#define T_This 275
#define T_Interface 276
#define T_Implements 277
#define T_While 278
#define T_For 279
#define T_If 280
#define T_Else 281
#define T_Return 282
#define T_Break 283
#define T_Switch 284
#define T_Case 285
#define T_Default 286
#define T_New 287
#define T_NewArray 288
#define T_Print 289
#define T_ReadInteger 290
#define T_ReadLine 291
#define T_Identifier 292
#define T_StringConstant 293
#define T_IntConstant 294
#define T_DoubleConstant 295
#define T_BoolConstant 296
#define LOWER_THAN_ELSE 297
#define UMINUS 298

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 40 "parser.y" /* yacc.c:355  */

    Program *program;
    
    int integerConstant;
    bool boolConstant;
    const char *stringConstant;
    double doubleConstant;
    char identifier[MaxIdentLen+1]; // +1 for terminating null
    Decl *decl;
  

    VarDecl *vardecl;
    FnDecl *fndecl;
    ClassDecl *classdecl;
    InterfaceDecl *interfacedecl;  
    
    Type *simpletype;
    NamedType *namedtype;
    ArrayType *arraytype;
    
    List<NamedType*> *implements;
    List<Decl*> *declList;
    List<VarDecl*> *vardecls;
      
   
    StmtBlock *stmtblock;
    Stmt *stmt;
    IfStmt *ifstmt;
    ForStmt *forstmt;
    WhileStmt *whilestmt;
    ReturnStmt *rtnstmt;	
    BreakStmt *brkstmt;
    SwitchStmt *switchstmt;
    CaseStmt *casestmt;
    DefaultStmt *defaultstmt;
    PrintStmt *pntstmt;
    List<Stmt*> *stmts;
    List<CaseStmt*> *casestmts;
    
    Expr *expr;
    Expr *optexpr;
    List<Expr*> *exprs;
    Call *call;
    
    IntConstant *intconst;
    DoubleConstant *doubleconst;
    BoolConstant *boolconst;
    StringConstant *stringconst;
    NullConstant *nullconst;
    
    ArithmeticExpr *arithmeticexpr;
    RelationalExpr *relationalexpr;
    EqualityExpr   *equalityexpr;
    LogicalExpr    *logicalexpr;
    AssignExpr     *assignexpr;
    PostfixExpr    *postfixexpr;
    
    LValue *lvalue;
    FieldAccess *fieldaccess;
    ArrayAccess *arrayaccess;

#line 270 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 299 "y.tab.c" /* yacc.c:358  */

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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  22
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   623

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  54
/* YYNRULES -- Number of rules.  */
#define YYNRULES  126
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  237

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    51,     2,     2,     2,    50,     2,     2,
      56,    57,    48,    46,    58,    47,    54,    49,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    61,    55,
      44,    43,    45,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    53,     2,    62,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    59,     2,    60,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    52
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   221,   221,   236,   237,   240,   241,   242,   243,   246,
     249,   250,   251,   252,   253,   254,   257,   260,   263,   266,
     271,   272,   275,   277,   280,   282,   286,   288,   291,   293,
     296,   298,   301,   302,   305,   306,   309,   311,   315,   316,
     319,   321,   325,   326,   329,   330,   333,   334,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   349,   351,   356,
     360,   364,   367,   370,   374,   375,   378,   380,   383,   384,
     387,   391,   392,   393,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   409,   413,   414,   415,
     416,   417,   418,   422,   423,   426,   428,   432,   434,   436,
     438,   442,   444,   446,   450,   451,   454,   455,   459,   460,
     463,   464,   468,   470,   474,   477,   478,   481,   482,   483,
     484,   485,   488,   491,   494,   497,   500
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_Void", "T_Bool", "T_Int", "T_Double",
  "T_String", "T_Class", "T_LessEqual", "T_GreaterEqual", "T_Equal",
  "T_NotEqual", "T_Dims", "T_Increment", "T_Decrement", "T_And", "T_Or",
  "T_Null", "T_Extends", "T_This", "T_Interface", "T_Implements",
  "T_While", "T_For", "T_If", "T_Else", "T_Return", "T_Break", "T_Switch",
  "T_Case", "T_Default", "T_New", "T_NewArray", "T_Print", "T_ReadInteger",
  "T_ReadLine", "T_Identifier", "T_StringConstant", "T_IntConstant",
  "T_DoubleConstant", "T_BoolConstant", "LOWER_THAN_ELSE", "'='", "'<'",
  "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "'!'", "UMINUS", "'['", "'.'",
  "';'", "'('", "')'", "','", "'{'", "'}'", "':'", "']'", "$accept",
  "Program", "DeclList", "Decl", "VarDecl", "Type", "NamedType",
  "ArrayType", "FnDecl", "Formals", "Variables", "ClassDecl", "Extend",
  "Impl", "Implements", "Fields", "Field", "InterfaceDecl", "Prototypes",
  "Prototype", "StmtBlock", "VarDecls", "Stmts", "Stmt", "IfStmt",
  "WhileStmt", "ForStmt", "ReturnStmt", "BreakStmt", "SwitchStmt", "Cases",
  "Case", "Default", "PrintStmt", "Expr", "AssignExpr", "ArithmeticExpr",
  "PostfixExpr", "EqualityExpr", "RelationalExpr", "LogicalExpr", "Exprs",
  "OptExpr", "LValue", "FieldAccess", "Call", "ArrayAccess", "Actuals",
  "Constant", "IntConstant", "DoubleConstant", "BoolConstant",
  "StringConstant", "NullConstant", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,    61,    60,    62,    43,    45,    42,    47,
      37,    33,   298,    91,    46,    59,    40,    41,    44,   123,
     125,    58,    93
};
# endif

#define YYPACT_NINF -96

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-96)))

#define YYTABLE_NINF -108

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-108)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      93,   -35,   -96,   -96,   -96,   -96,    -5,     6,   -96,    45,
      93,   -96,   -96,    -1,   -96,   -96,   -96,   -96,   -96,     3,
      94,    25,   -96,   -96,   -96,   -49,    12,    70,    96,    18,
     -96,    12,    21,    59,    62,   -96,    70,    77,    92,   -96,
      24,    23,   -96,    86,   -96,    85,    12,   -96,    91,    82,
      90,   101,   -96,   -96,    85,   -96,   -96,    69,    70,   -96,
     -96,   -96,    88,   -96,    12,    12,   -96,   127,   -96,   -96,
     -96,   -96,   112,   116,   -96,   -96,   102,   123,   124,   567,
      98,   125,   126,   128,   129,   136,   137,    -2,   -96,   -96,
     -96,   -96,   567,   567,   567,   -96,   -96,    89,   -96,   459,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   343,   -96,
     -96,   -96,   -96,   -96,   -96,   139,    65,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   142,   143,   567,   567,
     567,   147,   149,   -96,   567,   168,   567,   567,   151,   152,
     567,    56,    56,   205,   155,   -96,   -96,   567,   567,   567,
     567,   567,   567,   567,   567,   567,   567,   567,   567,   567,
     567,   174,   -96,   -96,   -96,   567,   -96,   -96,   254,   157,
     268,   -96,   317,   156,   190,   343,    54,   -96,   -96,   160,
     162,   -96,   422,   422,   400,   400,   411,   389,   422,   422,
     122,   122,    56,    56,    56,   179,   164,   343,   542,   567,
     542,   171,   -96,    12,   176,   567,   -96,   -96,   567,   -96,
     331,   216,   215,     0,   -96,   343,   189,   567,   542,   208,
      97,   -96,   -96,   -96,   199,   -96,   196,   200,   -96,   207,
     542,   502,   542,   -96,   -96,   502,   502
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    12,    10,    11,    13,     0,     0,    16,     0,
       2,     4,     5,     0,    14,    15,     6,     7,     8,     0,
      27,     0,     1,     3,    17,     0,    21,     0,    29,     0,
       9,    21,     0,     0,    20,    26,     0,     0,     0,    37,
       0,     0,    39,     0,    23,     0,     0,    31,    28,     0,
       0,     0,    36,    38,     0,    45,    19,     0,     0,    25,
      34,    35,     0,    33,    21,    21,    18,   107,    22,    30,
      24,    32,     0,     0,   126,    74,     0,     0,     0,   107,
       0,     0,     0,     0,     0,     0,     0,   110,   125,   122,
     123,   124,     0,     0,     0,    43,    44,     0,    56,   107,
      47,    49,    50,    51,    53,    52,    54,    55,   106,    71,
      77,    81,    78,    79,    80,     0,    73,   108,    75,   109,
      72,   117,   118,   119,   120,   121,     0,     0,     0,   107,
       0,   110,     0,    62,     0,     0,     0,     0,     0,     0,
     116,    92,   103,     0,     0,    42,    46,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,    93,    94,     0,    41,    40,     0,     0,
       0,    61,     0,     0,     0,   105,     0,    82,    83,   115,
       0,    76,    99,   100,    95,    96,   101,   102,    97,    98,
      87,    88,    89,    90,    91,     0,   111,    86,   107,     0,
     107,     0,    84,     0,     0,     0,   112,   114,   116,    59,
       0,    57,     0,     0,    70,   104,     0,   107,   107,     0,
      69,    65,    85,   113,     0,    58,     0,     0,    64,     0,
     107,    67,   107,    63,    60,    66,    68
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -96,   -96,   -96,   250,    55,   -26,     4,   -96,    28,   -17,
     -96,   -96,   -96,   -96,   -96,   -96,   206,   -96,   -96,   228,
     -12,   -96,   -94,   -95,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,    52,   -96,   -96,   -84,   -96,   -96,   -96,   -96,   -96,
     -96,   138,   -78,   -96,   -96,   -96,   -96,    66,   -96,    57,
     -96,   -96,   -96,   -96
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    33,
      34,    17,    28,    37,    48,    62,    63,    18,    41,    42,
      98,    67,    99,   100,   101,   102,   103,   104,   105,   106,
     220,   221,   229,   107,   108,   109,   110,   111,   112,   113,
     114,   179,   115,   116,   117,   118,   119,   180,   120,   121,
     122,   123,   124,   125
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      32,   132,    19,    40,   146,    32,    30,    31,   141,   142,
     143,   -16,    24,    24,    43,    40,     2,     3,     4,     5,
      57,    38,     2,     3,     4,     5,    38,     2,     3,     4,
       5,    35,    20,    56,    24,   -16,    25,    24,    32,    32,
      47,    97,    66,    21,   168,    22,   170,    72,    73,     8,
     172,   169,   174,   175,   140,     8,   175,   222,    44,    26,
       8,    51,    69,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,    61,    39,   163,
     164,   197,    24,    52,    29,     1,     2,     3,     4,     5,
      61,     1,     2,     3,     4,     5,     1,     2,     3,     4,
       5,     6,    24,   209,    60,   211,    68,     8,   165,   160,
     161,   204,   205,    27,     7,   210,    45,    60,    36,     8,
      46,   215,    96,   225,   175,     8,   144,   219,   227,    50,
       8,     2,     3,     4,     5,   234,    49,   235,   236,   224,
     146,   146,    59,    54,    55,    74,    64,    75,    70,    58,
      76,    77,    78,   133,    79,    80,    81,    65,   128,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,   126,
     157,   158,   159,   127,    92,   160,   161,   213,    93,   129,
     130,   134,   135,    94,   136,   137,    55,    95,   147,   148,
     149,   150,   138,   139,   162,   151,   152,   166,   167,   147,
     148,   149,   150,   140,   171,   173,   151,   152,   177,   178,
      30,   196,   199,   202,   147,   148,   149,   150,   205,   206,
     208,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     212,   214,   160,   161,   153,   154,   155,   156,   157,   158,
     159,   207,   218,   160,   161,   219,   223,    89,   203,   153,
     154,   155,   156,   157,   158,   159,   230,   231,   160,   161,
      23,   232,   181,   147,   148,   149,   150,   233,    71,    53,
     151,   152,   228,     0,   216,   176,   226,   147,   148,   149,
     150,     0,     0,     0,   151,   152,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   153,   154,
     155,   156,   157,   158,   159,     0,     0,   160,   161,     0,
       0,   198,   153,   154,   155,   156,   157,   158,   159,     0,
       0,   160,   161,     0,     0,   200,   147,   148,   149,   150,
       0,     0,     0,   151,   152,     0,     0,     0,     0,     0,
     147,   148,   149,   150,     0,     0,     0,   151,   152,     0,
       0,     0,   147,   148,   149,   150,     0,     0,     0,   151,
     152,   153,   154,   155,   156,   157,   158,   159,     0,     0,
     160,   161,     0,     0,   201,   153,   154,   155,   156,   157,
     158,   159,     0,     0,   160,   161,   217,   153,   154,   155,
     156,   157,   158,   159,     0,     0,   160,   161,   147,   148,
     149,   150,     0,     0,     0,   151,     0,     0,     0,   147,
     148,  -108,  -108,     0,     0,     0,     0,     0,     0,     0,
     147,   148,   149,   150,     0,     0,     0,     0,     0,     0,
       0,  -108,  -108,   153,   154,   155,   156,   157,   158,   159,
       0,     0,   160,   161,   153,   154,   155,   156,   157,   158,
     159,     0,     0,   160,   161,   153,   154,   155,   156,   157,
     158,   159,     0,     0,   160,   161,  -108,  -108,   155,   156,
     157,   158,   159,     0,     0,   160,   161,    74,     0,    75,
       0,     0,    76,    77,    78,     0,    79,    80,    81,     0,
       0,    82,    83,    84,    85,    86,   131,    88,    89,    90,
      91,     0,     0,     0,     0,     0,    92,     0,     0,     0,
      93,     0,     0,     0,     0,    94,     0,     0,    55,   145,
      74,     0,    75,     0,     0,    76,    77,    78,     0,    79,
      80,    81,     0,     0,    82,    83,    84,    85,    86,   131,
      88,    89,    90,    91,     0,     0,     0,     0,     0,    92,
       0,     0,     0,    93,     0,     0,     0,  -107,    94,     0,
      74,    55,    75,     0,     0,    76,    77,    78,     0,    79,
      80,    81,     0,     0,    82,    83,    84,    85,    86,   131,
      88,    89,    90,    91,     0,    74,     0,    75,     0,    92,
       0,     0,     0,    93,     0,     0,     0,     0,    94,    82,
      83,    55,    85,    86,   131,    88,    89,    90,    91,     0,
       0,     0,     0,     0,    92,     0,     0,     0,    93,     0,
       0,     0,     0,    94
};

static const yytype_int16 yycheck[] =
{
      26,    79,    37,    29,    99,    31,    55,    56,    92,    93,
      94,    13,    13,    13,    31,    41,     4,     5,     6,     7,
      46,     3,     4,     5,     6,     7,     3,     4,     5,     6,
       7,    27,    37,    45,    13,    37,    37,    13,    64,    65,
      36,    67,    54,    37,   128,     0,   130,    64,    65,    37,
     134,   129,   136,   137,    56,    37,   140,    57,    37,    56,
      37,    37,    58,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,    49,    60,    14,
      15,   165,    13,    60,    59,     3,     4,     5,     6,     7,
      62,     3,     4,     5,     6,     7,     3,     4,     5,     6,
       7,     8,    13,   198,    49,   200,    37,    37,    43,    53,
      54,    57,    58,    19,    21,   199,    57,    62,    22,    37,
      58,   205,    67,   218,   208,    37,    37,    30,    31,    37,
      37,     4,     5,     6,     7,   230,    59,   231,   232,   217,
     235,   236,    60,    57,    59,    18,    56,    20,    60,    58,
      23,    24,    25,    55,    27,    28,    29,    56,    56,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    57,
      48,    49,    50,    57,    47,    53,    54,   203,    51,    56,
      56,    56,    56,    56,    56,    56,    59,    60,     9,    10,
      11,    12,    56,    56,    55,    16,    17,    55,    55,     9,
      10,    11,    12,    56,    55,    37,    16,    17,    57,    57,
      55,    37,    55,    57,     9,    10,    11,    12,    58,    57,
      56,    16,    17,    44,    45,    46,    47,    48,    49,    50,
      59,    55,    53,    54,    44,    45,    46,    47,    48,    49,
      50,    62,    26,    53,    54,    30,    57,    39,    58,    44,
      45,    46,    47,    48,    49,    50,    57,    61,    53,    54,
      10,    61,    57,     9,    10,    11,    12,    60,    62,    41,
      16,    17,   220,    -1,   208,   137,   219,     9,    10,    11,
      12,    -1,    -1,    -1,    16,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,
      46,    47,    48,    49,    50,    -1,    -1,    53,    54,    -1,
      -1,    57,    44,    45,    46,    47,    48,    49,    50,    -1,
      -1,    53,    54,    -1,    -1,    57,     9,    10,    11,    12,
      -1,    -1,    -1,    16,    17,    -1,    -1,    -1,    -1,    -1,
       9,    10,    11,    12,    -1,    -1,    -1,    16,    17,    -1,
      -1,    -1,     9,    10,    11,    12,    -1,    -1,    -1,    16,
      17,    44,    45,    46,    47,    48,    49,    50,    -1,    -1,
      53,    54,    -1,    -1,    57,    44,    45,    46,    47,    48,
      49,    50,    -1,    -1,    53,    54,    55,    44,    45,    46,
      47,    48,    49,    50,    -1,    -1,    53,    54,     9,    10,
      11,    12,    -1,    -1,    -1,    16,    -1,    -1,    -1,     9,
      10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    10,    44,    45,    46,    47,    48,    49,    50,
      -1,    -1,    53,    54,    44,    45,    46,    47,    48,    49,
      50,    -1,    -1,    53,    54,    44,    45,    46,    47,    48,
      49,    50,    -1,    -1,    53,    54,    44,    45,    46,    47,
      48,    49,    50,    -1,    -1,    53,    54,    18,    -1,    20,
      -1,    -1,    23,    24,    25,    -1,    27,    28,    29,    -1,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,
      51,    -1,    -1,    -1,    -1,    56,    -1,    -1,    59,    60,
      18,    -1,    20,    -1,    -1,    23,    24,    25,    -1,    27,
      28,    29,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,    47,
      -1,    -1,    -1,    51,    -1,    -1,    -1,    55,    56,    -1,
      18,    59,    20,    -1,    -1,    23,    24,    25,    -1,    27,
      28,    29,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    -1,    18,    -1,    20,    -1,    47,
      -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    56,    32,
      33,    59,    35,    36,    37,    38,    39,    40,    41,    -1,
      -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,    51,    -1,
      -1,    -1,    -1,    56
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,    21,    37,    64,
      65,    66,    67,    68,    69,    70,    71,    74,    80,    37,
      37,    37,     0,    66,    13,    37,    56,    19,    75,    59,
      55,    56,    68,    72,    73,    69,    22,    76,     3,    60,
      68,    81,    82,    72,    37,    57,    58,    69,    77,    59,
      37,    37,    60,    82,    57,    59,    83,    68,    58,    60,
      67,    71,    78,    79,    56,    56,    83,    84,    37,    69,
      60,    79,    72,    72,    18,    20,    23,    24,    25,    27,
      28,    29,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    47,    51,    56,    60,    67,    68,    83,    85,
      86,    87,    88,    89,    90,    91,    92,    96,    97,    98,
      99,   100,   101,   102,   103,   105,   106,   107,   108,   109,
     111,   112,   113,   114,   115,   116,    57,    57,    56,    56,
      56,    37,   105,    55,    56,    56,    56,    56,    56,    56,
      56,    97,    97,    97,    37,    60,    86,     9,    10,    11,
      12,    16,    17,    44,    45,    46,    47,    48,    49,    50,
      53,    54,    55,    14,    15,    43,    55,    55,    97,   105,
      97,    55,    97,    37,    97,    97,   104,    57,    57,   104,
     110,    57,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    37,    97,    57,    55,
      57,    57,    57,    58,    57,    58,    57,    62,    56,    86,
      97,    86,    59,    68,    55,    97,   110,    55,    26,    30,
      93,    94,    57,    57,   105,    86,   112,    31,    94,    95,
      57,    61,    61,    60,    86,    85,    85
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    63,    64,    65,    65,    66,    66,    66,    66,    67,
      68,    68,    68,    68,    68,    68,    69,    70,    71,    71,
      72,    72,    73,    73,    74,    74,    75,    75,    76,    76,
      77,    77,    78,    78,    79,    79,    80,    80,    81,    81,
      82,    82,    83,    83,    84,    84,    85,    85,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    87,    87,    88,
      89,    90,    91,    92,    93,    93,    94,    94,    95,    95,
      96,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    98,    99,    99,    99,
      99,    99,    99,   100,   100,   101,   101,   102,   102,   102,
     102,   103,   103,   103,   104,   104,   105,   105,   106,   106,
     107,   107,   108,   108,   109,   110,   110,   111,   111,   111,
     111,   111,   112,   113,   114,   115,   116
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     2,     6,     6,
       1,     0,     4,     2,     7,     6,     2,     0,     2,     0,
       3,     1,     2,     1,     1,     1,     5,     4,     2,     1,
       6,     6,     4,     3,     2,     0,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     5,     7,     5,
       9,     3,     2,     8,     2,     1,     4,     3,     3,     0,
       5,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     3,     3,     4,     6,     3,     3,     3,     3,
       3,     3,     2,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     3,     1,     1,     0,     1,     1,
       1,     3,     4,     6,     4,     1,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1
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


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
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
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
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
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
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
       'yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 221 "parser.y" /* yacc.c:1646  */
    {
                                      (yylsp[0]);
                                      /* pp2: The @1 is needed to convince
                                       * yacc to set up yylloc. You can remove
                                       * it once you have other uses of @n*/
                                      (yyval.program) = new Program((yyvsp[0].declList));
                                      // if no errors, advance to next phase
                                      if (ReportError::NumErrors() == 0)
                                        {
                                          (yyval.program)->CheckDeclError();
                                          (yyval.program)->CheckStatements();
                                        }
                                     }
#line 1738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 236 "parser.y" /* yacc.c:1646  */
    { ((yyval.declList) = (yyvsp[-1].declList))->Append((yyvsp[0].decl)); }
#line 1744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 237 "parser.y" /* yacc.c:1646  */
    { ((yyval.declList) = new List<Decl*>)->Append((yyvsp[0].decl)); }
#line 1750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 246 "parser.y" /* yacc.c:1646  */
    { (yyval.vardecl) = new VarDecl(new Identifier((yylsp[-1]), (yyvsp[-1].identifier)), (yyvsp[-2].simpletype)); }
#line 1756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 249 "parser.y" /* yacc.c:1646  */
    { (yyval.simpletype) = Type::intType; }
#line 1762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 250 "parser.y" /* yacc.c:1646  */
    { (yyval.simpletype) = Type::doubleType; }
#line 1768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 251 "parser.y" /* yacc.c:1646  */
    { (yyval.simpletype) = Type::boolType; }
#line 1774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 252 "parser.y" /* yacc.c:1646  */
    { (yyval.simpletype) = Type::stringType; }
#line 1780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 257 "parser.y" /* yacc.c:1646  */
    { (yyval.namedtype) = new NamedType(new Identifier((yylsp[0]), (yyvsp[0].identifier))); }
#line 1786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 260 "parser.y" /* yacc.c:1646  */
    { (yyval.arraytype) = new ArrayType((yylsp[-1]), (yyvsp[-1].simpletype)); }
#line 1792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 264 "parser.y" /* yacc.c:1646  */
    { (yyval.fndecl) = new FnDecl(new Identifier((yylsp[-4]), (yyvsp[-4].identifier)), (yyvsp[-5].simpletype), (yyvsp[-2].vardecls)); 
                                       (yyval.fndecl)->SetFunctionBody((yyvsp[0].stmtblock)); }
#line 1799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 267 "parser.y" /* yacc.c:1646  */
    { (yyval.fndecl) = new FnDecl(new Identifier((yylsp[-4]), (yyvsp[-4].identifier)), Type::voidType, (yyvsp[-2].vardecls)); 
                                       (yyval.fndecl)->SetFunctionBody((yyvsp[0].stmtblock)); }
#line 1806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 272 "parser.y" /* yacc.c:1646  */
    { (yyval.vardecls) = new List<VarDecl*>; }
#line 1812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 276 "parser.y" /* yacc.c:1646  */
    { ((yyval.vardecls) = (yyvsp[-3].vardecls))->Append(new VarDecl(new Identifier((yylsp[0]), (yyvsp[0].identifier)), (yyvsp[-1].simpletype))); }
#line 1818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 277 "parser.y" /* yacc.c:1646  */
    { ((yyval.vardecls) = new List<VarDecl*>)->Append(new VarDecl(new Identifier((yylsp[0]), (yyvsp[0].identifier)), (yyvsp[-1].simpletype))); }
#line 1824 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 281 "parser.y" /* yacc.c:1646  */
    { (yyval.classdecl) = new ClassDecl(new Identifier((yylsp[-5]), (yyvsp[-5].identifier)), (yyvsp[-4].namedtype), (yyvsp[-3].implements), (yyvsp[-1].declList)); }
#line 1830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 283 "parser.y" /* yacc.c:1646  */
    { (yyval.classdecl) = new ClassDecl(new Identifier((yylsp[-4]), (yyvsp[-4].identifier)), (yyvsp[-3].namedtype), (yyvsp[-2].implements), new List<Decl*>); }
#line 1836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 287 "parser.y" /* yacc.c:1646  */
    { (yyval.namedtype) = (yyvsp[0].namedtype); }
#line 1842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 288 "parser.y" /* yacc.c:1646  */
    { (yyval.namedtype) = NULL; }
#line 1848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 292 "parser.y" /* yacc.c:1646  */
    { (yyval.implements) = (yyvsp[0].implements); }
#line 1854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 293 "parser.y" /* yacc.c:1646  */
    { (yyval.implements) = new List<NamedType*>; }
#line 1860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 297 "parser.y" /* yacc.c:1646  */
    { ((yyval.implements) = (yyvsp[-2].implements))->Append((yyvsp[0].namedtype)); }
#line 1866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 298 "parser.y" /* yacc.c:1646  */
    { ((yyval.implements) = new List<NamedType*>)->Append((yyvsp[0].namedtype)); }
#line 1872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 301 "parser.y" /* yacc.c:1646  */
    { ((yyval.declList) = (yyvsp[-1].declList))->Append((yyvsp[0].decl)); }
#line 1878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 302 "parser.y" /* yacc.c:1646  */
    { ((yyval.declList) = new List<Decl*>)->Append((yyvsp[0].decl));  }
#line 1884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 310 "parser.y" /* yacc.c:1646  */
    { (yyval.interfacedecl) = new InterfaceDecl(new Identifier((yylsp[-3]), (yyvsp[-3].identifier)), (yyvsp[-1].declList)); }
#line 1890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 312 "parser.y" /* yacc.c:1646  */
    { (yyval.interfacedecl) = new InterfaceDecl(new Identifier((yylsp[-2]), (yyvsp[-2].identifier)), new List<Decl*>); }
#line 1896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 315 "parser.y" /* yacc.c:1646  */
    { ((yyval.declList) = (yyvsp[-1].declList))->Append((yyvsp[0].decl)); }
#line 1902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 316 "parser.y" /* yacc.c:1646  */
    { ((yyval.declList) = new List<Decl*>)->Append((yyvsp[0].decl)); }
#line 1908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 320 "parser.y" /* yacc.c:1646  */
    { (yyval.decl) = new FnDecl(new Identifier((yylsp[-4]), (yyvsp[-4].identifier)), (yyvsp[-5].simpletype), (yyvsp[-2].vardecls)); }
#line 1914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 322 "parser.y" /* yacc.c:1646  */
    { (yyval.decl) = new FnDecl(new Identifier((yylsp[-4]), (yyvsp[-4].identifier)), Type::voidType, (yyvsp[-2].vardecls)); }
#line 1920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 325 "parser.y" /* yacc.c:1646  */
    { (yyval.stmtblock) = new StmtBlock((yyvsp[-2].vardecls), (yyvsp[-1].stmts)); }
#line 1926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 326 "parser.y" /* yacc.c:1646  */
    { (yyval.stmtblock) = new StmtBlock((yyvsp[-1].vardecls), new List<Stmt*>); }
#line 1932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 329 "parser.y" /* yacc.c:1646  */
    { ((yyval.vardecls) = (yyvsp[-1].vardecls))->Append((yyvsp[0].vardecl));    }
#line 1938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 330 "parser.y" /* yacc.c:1646  */
    { (yyval.vardecls) = new List<VarDecl*>;  }
#line 1944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 333 "parser.y" /* yacc.c:1646  */
    { ((yyval.stmts) = (yyvsp[-1].stmts))->Append((yyvsp[0].stmt)); }
#line 1950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 334 "parser.y" /* yacc.c:1646  */
    { ((yyval.stmts) = new List<Stmt*>)->Append((yyvsp[0].stmt));  }
#line 1956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 350 "parser.y" /* yacc.c:1646  */
    { (yyval.ifstmt) = new IfStmt((yyvsp[-2].expr), (yyvsp[0].stmt), NULL); }
#line 1962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 352 "parser.y" /* yacc.c:1646  */
    { (yyval.ifstmt) = new IfStmt((yyvsp[-4].expr), (yyvsp[-2].stmt), (yyvsp[0].stmt)); }
#line 1968 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 357 "parser.y" /* yacc.c:1646  */
    { (yyval.whilestmt) = new WhileStmt((yyvsp[-2].expr), (yyvsp[0].stmt)); }
#line 1974 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 361 "parser.y" /* yacc.c:1646  */
    { (yyval.forstmt) = new ForStmt((yyvsp[-6].expr), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].stmt)); }
#line 1980 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 364 "parser.y" /* yacc.c:1646  */
    { (yyval.rtnstmt) = new ReturnStmt((yylsp[-1]), (yyvsp[-1].expr)); }
#line 1986 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 367 "parser.y" /* yacc.c:1646  */
    { (yyval.brkstmt) = new BreakStmt((yylsp[-1])); }
#line 1992 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 371 "parser.y" /* yacc.c:1646  */
    { (yyval.switchstmt) = new SwitchStmt((yyvsp[-5].expr), (yyvsp[-2].casestmts), (yyvsp[-1].defaultstmt)); }
#line 1998 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 374 "parser.y" /* yacc.c:1646  */
    { ((yyval.casestmts) = (yyvsp[-1].casestmts))->Append((yyvsp[0].casestmt)); }
#line 2004 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 375 "parser.y" /* yacc.c:1646  */
    { ((yyval.casestmts) = new List<CaseStmt*>)->Append((yyvsp[0].casestmt)); }
#line 2010 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 379 "parser.y" /* yacc.c:1646  */
    { (yyval.casestmt) = new CaseStmt((yyvsp[-2].intconst), (yyvsp[0].stmts)); }
#line 2016 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 380 "parser.y" /* yacc.c:1646  */
    { (yyval.casestmt) = new CaseStmt((yyvsp[-1].intconst), new List<Stmt*>); }
#line 2022 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 383 "parser.y" /* yacc.c:1646  */
    { (yyval.defaultstmt) = new DefaultStmt((yyvsp[0].stmts)); }
#line 2028 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 384 "parser.y" /* yacc.c:1646  */
    { (yyval.defaultstmt) = NULL; }
#line 2034 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 388 "parser.y" /* yacc.c:1646  */
    { (yyval.pntstmt) = new PrintStmt((yyvsp[-2].exprs)); }
#line 2040 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 394 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new This((yylsp[0])); }
#line 2046 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 396 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 2052 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 402 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new ReadIntegerExpr(Join((yylsp[-2]), (yylsp[0]))); }
#line 2058 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 403 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new ReadLineExpr(Join((yylsp[-2]), (yylsp[0]))); }
#line 2064 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 404 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new NewExpr(Join((yylsp[-3]), (yylsp[0])), new NamedType(new Identifier((yylsp[-1]), (yyvsp[-1].identifier)))); }
#line 2070 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 406 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new NewArrayExpr(Join((yylsp[-5]), (yylsp[0])), (yyvsp[-3].expr), (yyvsp[-1].simpletype)); }
#line 2076 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 410 "parser.y" /* yacc.c:1646  */
    { (yyval.assignexpr) = new AssignExpr((yyvsp[-2].lvalue), new Operator((yylsp[-1]), "="), (yyvsp[0].expr)); }
#line 2082 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 413 "parser.y" /* yacc.c:1646  */
    { (yyval.arithmeticexpr) = new ArithmeticExpr((yyvsp[-2].expr), new Operator((yylsp[-1]), "+"), (yyvsp[0].expr)); }
#line 2088 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 414 "parser.y" /* yacc.c:1646  */
    { (yyval.arithmeticexpr) = new ArithmeticExpr((yyvsp[-2].expr), new Operator((yylsp[-1]), "-"), (yyvsp[0].expr)); }
#line 2094 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 415 "parser.y" /* yacc.c:1646  */
    { (yyval.arithmeticexpr) = new ArithmeticExpr((yyvsp[-2].expr), new Operator((yylsp[-1]), "*"), (yyvsp[0].expr)); }
#line 2100 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 416 "parser.y" /* yacc.c:1646  */
    { (yyval.arithmeticexpr) = new ArithmeticExpr((yyvsp[-2].expr), new Operator((yylsp[-1]), "/"), (yyvsp[0].expr)); }
#line 2106 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 417 "parser.y" /* yacc.c:1646  */
    { (yyval.arithmeticexpr) = new ArithmeticExpr((yyvsp[-2].expr), new Operator((yylsp[-1]), "%"), (yyvsp[0].expr)); }
#line 2112 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 419 "parser.y" /* yacc.c:1646  */
    { (yyval.arithmeticexpr) = new ArithmeticExpr(new Operator((yylsp[-1]), "-"), (yyvsp[0].expr)); }
#line 2118 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 422 "parser.y" /* yacc.c:1646  */
    { (yyval.postfixexpr) = new PostfixExpr(Join((yylsp[-1]), (yylsp[0])), (yyvsp[-1].lvalue), new Operator((yylsp[0]), "++")); }
#line 2124 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 423 "parser.y" /* yacc.c:1646  */
    { (yyval.postfixexpr) = new PostfixExpr(Join((yylsp[-1]), (yylsp[0])), (yyvsp[-1].lvalue), new Operator((yylsp[0]), "--")); }
#line 2130 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 427 "parser.y" /* yacc.c:1646  */
    { (yyval.equalityexpr) = new EqualityExpr((yyvsp[-2].expr), new Operator((yylsp[-1]), "=="), (yyvsp[0].expr)); }
#line 2136 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 429 "parser.y" /* yacc.c:1646  */
    { (yyval.equalityexpr) = new EqualityExpr((yyvsp[-2].expr), new Operator((yylsp[-1]), "!="), (yyvsp[0].expr)); }
#line 2142 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 433 "parser.y" /* yacc.c:1646  */
    { (yyval.relationalexpr) = new RelationalExpr((yyvsp[-2].expr), new Operator((yylsp[-1]), "<"), (yyvsp[0].expr)); }
#line 2148 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 435 "parser.y" /* yacc.c:1646  */
    { (yyval.relationalexpr) = new RelationalExpr((yyvsp[-2].expr), new Operator((yylsp[-1]), ">"), (yyvsp[0].expr)); }
#line 2154 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 437 "parser.y" /* yacc.c:1646  */
    { (yyval.relationalexpr) = new RelationalExpr((yyvsp[-2].expr), new Operator((yylsp[-1]), "<="), (yyvsp[0].expr)); }
#line 2160 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 439 "parser.y" /* yacc.c:1646  */
    { (yyval.relationalexpr) = new RelationalExpr((yyvsp[-2].expr), new Operator((yylsp[-1]), ">="), (yyvsp[0].expr)); }
#line 2166 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 443 "parser.y" /* yacc.c:1646  */
    { (yyval.logicalexpr) = new LogicalExpr((yyvsp[-2].expr), new Operator((yylsp[-1]), "&&"), (yyvsp[0].expr)); }
#line 2172 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 445 "parser.y" /* yacc.c:1646  */
    { (yyval.logicalexpr) = new LogicalExpr((yyvsp[-2].expr), new Operator((yylsp[-1]), "||"), (yyvsp[0].expr)); }
#line 2178 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 446 "parser.y" /* yacc.c:1646  */
    { (yyval.logicalexpr) = new LogicalExpr(new Operator((yylsp[-1]), "!"), (yyvsp[0].expr)); }
#line 2184 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 450 "parser.y" /* yacc.c:1646  */
    { ((yyval.exprs) = (yyvsp[-2].exprs))->Append((yyvsp[0].expr)); }
#line 2190 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 451 "parser.y" /* yacc.c:1646  */
    { ((yyval.exprs) = new List<Expr*>)->Append((yyvsp[0].expr)); }
#line 2196 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 455 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new EmptyExpr(); }
#line 2202 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 463 "parser.y" /* yacc.c:1646  */
    { (yyval.fieldaccess) = new FieldAccess(NULL, new Identifier((yylsp[0]), (yyvsp[0].identifier))); }
#line 2208 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 465 "parser.y" /* yacc.c:1646  */
    { (yyval.fieldaccess) = new FieldAccess((yyvsp[-2].expr), new Identifier((yylsp[0]), (yyvsp[0].identifier))); }
#line 2214 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 469 "parser.y" /* yacc.c:1646  */
    { (yyval.call) = new Call(Join((yylsp[-3]), (yylsp[0])), NULL, new Identifier((yylsp[-3]), (yyvsp[-3].identifier)), (yyvsp[-1].exprs)); }
#line 2220 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 471 "parser.y" /* yacc.c:1646  */
    { (yyval.call) = new Call(Join((yylsp[-5]), (yylsp[0])), (yyvsp[-5].expr), new Identifier((yylsp[-3]), (yyvsp[-3].identifier)), (yyvsp[-1].exprs)); }
#line 2226 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 474 "parser.y" /* yacc.c:1646  */
    { (yyval.arrayaccess) = new ArrayAccess(Join((yylsp[-3]), (yylsp[0])), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 2232 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 478 "parser.y" /* yacc.c:1646  */
    { (yyval.exprs) = new List<Expr*>; }
#line 2238 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 488 "parser.y" /* yacc.c:1646  */
    { (yyval.intconst) = new IntConstant((yylsp[0]), (yyvsp[0].integerConstant)); }
#line 2244 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 491 "parser.y" /* yacc.c:1646  */
    { (yyval.doubleconst) = new DoubleConstant((yylsp[0]), (yyvsp[0].doubleConstant)); }
#line 2250 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 494 "parser.y" /* yacc.c:1646  */
    { (yyval.boolconst) = new BoolConstant((yylsp[0]), (yyvsp[0].boolConstant)); }
#line 2256 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 497 "parser.y" /* yacc.c:1646  */
    { (yyval.stringconst) = new StringConstant((yylsp[0]), (yyvsp[0].stringConstant)); }
#line 2262 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 500 "parser.y" /* yacc.c:1646  */
    { (yyval.nullconst) = new NullConstant((yylsp[0])); }
#line 2268 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2272 "y.tab.c" /* yacc.c:1646  */
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
  *++yylsp = yyloc;

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

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc);
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

  yyerror_range[1] = yylsp[1-yylen];
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp);
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
#line 502 "parser.y" /* yacc.c:1906  */


/* The closing %% above marks the end of the Rules section and the beginning
 * of the User Subroutines section. All text from here to the end of the
 * file is copied verbatim to the end of the generated y.tab.c file.
 * This section is where you put definitions of helper functions.
 */

/* Function: InitParser
 * --------------------
 * This function will be called before any calls to yyparse().  It is designed
 * to give you an opportunity to do anything that must be done to initialize
 * the parser (set global variables, configure starting state, etc.). One
 * thing it already does for you is assign the value of the global variable
 * yydebug that controls whether yacc prints debugging information about
 * parser actions (shift/reduce) and contents of state stack during parser.
 * If set to false, no information is printed. Setting it to true will give
 * you a running trail that might be helpful when debugging your parser.
 * Please be sure the variable is set to false when submitting your final
 * version.
 */
void InitParser()
{
   PrintDebug("parser", "Initializing parser");
   yydebug = false;
}
