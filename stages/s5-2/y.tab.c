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
#line 1 "parser.y"

    #include "codegen.c"
    #include "symtab.c"
    
    int yylex(void);
    void yyerror (char const *s);
    
    extern FILE* yyin;
    extern char* yytext;

#line 82 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
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
    ENDSTMT = 258,                 /* ENDSTMT  */
    READ = 259,                    /* READ  */
    WRITE = 260,                   /* WRITE  */
    NUM = 261,                     /* NUM  */
    ID = 262,                      /* ID  */
    INT = 263,                     /* INT  */
    STR = 264,                     /* STR  */
    START = 265,                   /* START  */
    END = 266,                     /* END  */
    DECL = 267,                    /* DECL  */
    ENDDECL = 268,                 /* ENDDECL  */
    MAIN = 269,                    /* MAIN  */
    RETURN = 270,                  /* RETURN  */
    ADD = 271,                     /* ADD  */
    SUB = 272,                     /* SUB  */
    MUL = 273,                     /* MUL  */
    DIV = 274,                     /* DIV  */
    EQL = 275,                     /* EQL  */
    LT = 276,                      /* LT  */
    GT = 277,                      /* GT  */
    EQ = 278,                      /* EQ  */
    GE = 279,                      /* GE  */
    LE = 280,                      /* LE  */
    NE = 281,                      /* NE  */
    AND = 282,                     /* AND  */
    OR = 283,                      /* OR  */
    NOT = 284,                     /* NOT  */
    IF = 285,                      /* IF  */
    THEN = 286,                    /* THEN  */
    ELSE = 287,                    /* ELSE  */
    ENDIF = 288,                   /* ENDIF  */
    WHILE = 289,                   /* WHILE  */
    DO = 290,                      /* DO  */
    ENDWHILE = 291,                /* ENDWHILE  */
    BREAK = 292,                   /* BREAK  */
    CONTINUE = 293                 /* CONTINUE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define ENDSTMT 258
#define READ 259
#define WRITE 260
#define NUM 261
#define ID 262
#define INT 263
#define STR 264
#define START 265
#define END 266
#define DECL 267
#define ENDDECL 268
#define MAIN 269
#define RETURN 270
#define ADD 271
#define SUB 272
#define MUL 273
#define DIV 274
#define EQL 275
#define LT 276
#define GT 277
#define EQ 278
#define GE 279
#define LE 280
#define NE 281
#define AND 282
#define OR 283
#define NOT 284
#define IF 285
#define THEN 286
#define ELSE 287
#define ENDIF 288
#define WHILE 289
#define DO 290
#define ENDWHILE 291
#define BREAK 292
#define CONTINUE 293

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 12 "parser.y"

    struct treenode *node;

#line 215 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ENDSTMT = 3,                    /* ENDSTMT  */
  YYSYMBOL_READ = 4,                       /* READ  */
  YYSYMBOL_WRITE = 5,                      /* WRITE  */
  YYSYMBOL_NUM = 6,                        /* NUM  */
  YYSYMBOL_ID = 7,                         /* ID  */
  YYSYMBOL_INT = 8,                        /* INT  */
  YYSYMBOL_STR = 9,                        /* STR  */
  YYSYMBOL_START = 10,                     /* START  */
  YYSYMBOL_END = 11,                       /* END  */
  YYSYMBOL_DECL = 12,                      /* DECL  */
  YYSYMBOL_ENDDECL = 13,                   /* ENDDECL  */
  YYSYMBOL_MAIN = 14,                      /* MAIN  */
  YYSYMBOL_RETURN = 15,                    /* RETURN  */
  YYSYMBOL_ADD = 16,                       /* ADD  */
  YYSYMBOL_SUB = 17,                       /* SUB  */
  YYSYMBOL_MUL = 18,                       /* MUL  */
  YYSYMBOL_DIV = 19,                       /* DIV  */
  YYSYMBOL_EQL = 20,                       /* EQL  */
  YYSYMBOL_LT = 21,                        /* LT  */
  YYSYMBOL_GT = 22,                        /* GT  */
  YYSYMBOL_EQ = 23,                        /* EQ  */
  YYSYMBOL_GE = 24,                        /* GE  */
  YYSYMBOL_LE = 25,                        /* LE  */
  YYSYMBOL_NE = 26,                        /* NE  */
  YYSYMBOL_AND = 27,                       /* AND  */
  YYSYMBOL_OR = 28,                        /* OR  */
  YYSYMBOL_NOT = 29,                       /* NOT  */
  YYSYMBOL_IF = 30,                        /* IF  */
  YYSYMBOL_THEN = 31,                      /* THEN  */
  YYSYMBOL_ELSE = 32,                      /* ELSE  */
  YYSYMBOL_ENDIF = 33,                     /* ENDIF  */
  YYSYMBOL_WHILE = 34,                     /* WHILE  */
  YYSYMBOL_DO = 35,                        /* DO  */
  YYSYMBOL_ENDWHILE = 36,                  /* ENDWHILE  */
  YYSYMBOL_BREAK = 37,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 38,                  /* CONTINUE  */
  YYSYMBOL_39_ = 39,                       /* ','  */
  YYSYMBOL_40_ = 40,                       /* '['  */
  YYSYMBOL_41_ = 41,                       /* ']'  */
  YYSYMBOL_42_ = 42,                       /* '('  */
  YYSYMBOL_43_ = 43,                       /* ')'  */
  YYSYMBOL_44_ = 44,                       /* '{'  */
  YYSYMBOL_45_ = 45,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 46,                  /* $accept  */
  YYSYMBOL_Program = 47,                   /* Program  */
  YYSYMBOL_GDeclBlock = 48,                /* GDeclBlock  */
  YYSYMBOL_GDeclList = 49,                 /* GDeclList  */
  YYSYMBOL_GDecl = 50,                     /* GDecl  */
  YYSYMBOL_Type = 51,                      /* Type  */
  YYSYMBOL_GVarList = 52,                  /* GVarList  */
  YYSYMBOL_GIdentifierDecl = 53,           /* GIdentifierDecl  */
  YYSYMBOL_FuncDefBlock = 54,              /* FuncDefBlock  */
  YYSYMBOL_FuncDef = 55,                   /* FuncDef  */
  YYSYMBOL_ParamBlock = 56,                /* ParamBlock  */
  YYSYMBOL_ParamList = 57,                 /* ParamList  */
  YYSYMBOL_Param = 58,                     /* Param  */
  YYSYMBOL_LDeclBlock = 59,                /* LDeclBlock  */
  YYSYMBOL_LDeclList = 60,                 /* LDeclList  */
  YYSYMBOL_LDecl = 61,                     /* LDecl  */
  YYSYMBOL_LVarList = 62,                  /* LVarList  */
  YYSYMBOL_MainBlock = 63,                 /* MainBlock  */
  YYSYMBOL_FuncBody = 64,                  /* FuncBody  */
  YYSYMBOL_StmtList = 65,                  /* StmtList  */
  YYSYMBOL_Stmt = 66,                      /* Stmt  */
  YYSYMBOL_InStmt = 67,                    /* InStmt  */
  YYSYMBOL_OutStmt = 68,                   /* OutStmt  */
  YYSYMBOL_AssgnStmt = 69,                 /* AssgnStmt  */
  YYSYMBOL_BreakStmt = 70,                 /* BreakStmt  */
  YYSYMBOL_ContinueStmt = 71,              /* ContinueStmt  */
  YYSYMBOL_IfStmt = 72,                    /* IfStmt  */
  YYSYMBOL_WhileStmt = 73,                 /* WhileStmt  */
  YYSYMBOL_ReturnStmt = 74,                /* ReturnStmt  */
  YYSYMBOL_Expr = 75,                      /* Expr  */
  YYSYMBOL_Identifier = 76,                /* Identifier  */
  YYSYMBOL_ArgsList = 77                   /* ArgsList  */
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
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   341

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  76
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  167

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   293


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
      42,    43,     2,     2,    39,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    40,     2,    41,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    44,     2,    45,     2,     2,     2,     2,
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
      35,    36,    37,    38
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    36,    36,    43,    50,    60,    72,    82,    83,    85,
      87,    88,    90,    91,    93,    94,    95,    99,   100,   102,
     117,   133,   135,   142,   143,   145,   147,   148,   150,   151,
     153,   155,   156,   161,   177,   185,   187,   188,   190,   191,
     192,   193,   194,   195,   196,   197,   199,   200,   201,   203,
     204,   206,   207,   209,   211,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   231,   232,   234,   235,   236
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
  "\"end of file\"", "error", "\"invalid token\"", "ENDSTMT", "READ",
  "WRITE", "NUM", "ID", "INT", "STR", "START", "END", "DECL", "ENDDECL",
  "MAIN", "RETURN", "ADD", "SUB", "MUL", "DIV", "EQL", "LT", "GT", "EQ",
  "GE", "LE", "NE", "AND", "OR", "NOT", "IF", "THEN", "ELSE", "ENDIF",
  "WHILE", "DO", "ENDWHILE", "BREAK", "CONTINUE", "','", "'['", "']'",
  "'('", "')'", "'{'", "'}'", "$accept", "Program", "GDeclBlock",
  "GDeclList", "GDecl", "Type", "GVarList", "GIdentifierDecl",
  "FuncDefBlock", "FuncDef", "ParamBlock", "ParamList", "Param",
  "LDeclBlock", "LDeclList", "LDecl", "LVarList", "MainBlock", "FuncBody",
  "StmtList", "Stmt", "InStmt", "OutStmt", "AssgnStmt", "BreakStmt",
  "ContinueStmt", "IfStmt", "WhileStmt", "ReturnStmt", "Expr",
  "Identifier", "ArgsList", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-86)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -5,    26,    21,    35,    52,   -86,    22,   -86,   -86,   -86,
      23,   -86,    65,   -86,    26,    72,    52,   -86,   -86,    47,
     -86,   -86,   -28,     6,   -86,    50,   -86,   -86,    56,   100,
     134,   -86,    65,   134,    60,     5,    76,   117,   -17,   -86,
     -86,    83,     5,   140,    29,   120,    82,   -86,   -86,   134,
     -86,   -86,   120,    89,    96,   106,   111,    -1,   110,   123,
     164,   165,    98,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   146,   -86,   162,    54,   -86,   126,   -86,   -86,
     127,   -86,   166,    -1,    -1,   -86,    31,    -1,   260,   -86,
      -1,    -1,   -86,   -86,   -86,   -86,    -1,   -86,    20,   -86,
     -86,   -86,   -86,   132,   163,   291,    -1,   186,   -86,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   209,   232,   277,   -86,   169,   180,   190,   -86,
     312,    86,   -86,    59,    59,   135,   135,   312,   312,   312,
     312,   312,   312,   312,   312,   312,   167,   159,   -86,   -86,
     -86,   -86,    -1,   -86,   140,   140,   312,    61,   103,   140,
     192,   193,   116,   -86,   -86,   194,   -86
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     4,     0,    10,    11,     6,
       0,     8,     0,     1,    10,     0,     0,    18,     3,     0,
       5,     7,    16,     0,    13,     0,    17,     2,     0,     0,
      24,     9,     0,    24,     0,     0,     0,     0,     0,    23,
      12,     0,     0,     0,     0,     0,     0,    14,    25,     0,
      15,    21,     0,     0,     0,     0,    73,     0,     0,     0,
       0,     0,     0,    37,    39,    38,    40,    43,    44,    41,
      42,    45,     0,    27,     0,     0,    29,     0,    34,    22,
       0,    20,     0,     0,     0,    71,    73,     0,     0,    69,
       0,     0,    49,    50,    35,    36,     0,    32,     0,    26,
      28,    33,    19,     0,     0,     0,    76,     0,    54,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    30,     0,     0,     0,    72,
      75,     0,    55,    56,    57,    58,    59,    60,    61,    62,
      64,    63,    65,    66,    67,    68,     0,     0,    48,    31,
      46,    47,     0,    70,     0,     0,    74,     0,     0,     0,
       0,     0,     0,    52,    53,     0,    51
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -86,   -86,   -86,   -86,   189,     0,   -86,   168,   -86,   185,
     -86,   183,   170,   175,   -86,   143,   -86,     9,   -34,   -85,
     -61,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -63,
     -43,   -86
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,    10,    11,    37,    23,    24,    16,    17,
      34,    38,    39,    45,    75,    76,    98,     5,    46,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    88,
      89,   131
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      72,    95,    12,     1,    15,    85,    86,     2,    53,    31,
      12,    77,    29,    18,    30,    43,    15,    44,    80,    72,
     104,   105,    49,   125,   107,    27,    50,   122,   123,     7,
       8,     7,     8,   124,     9,    13,    20,     7,     8,   103,
       6,    87,    73,   130,    74,    32,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   126,
      14,     8,     7,     8,    19,    54,    55,    99,    56,   157,
     158,    84,    22,   106,   162,    74,    57,   111,   112,    25,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   156,
      28,    58,    33,   159,   160,    59,    95,    95,    60,    61,
      35,    95,    54,    55,    42,    56,    36,    54,    55,    94,
      56,    72,    72,    57,    72,    72,    72,    47,    57,    72,
      54,    55,    49,    56,    48,   152,    51,    78,    58,   153,
      43,    57,    59,    58,    81,    60,    61,    59,    82,   161,
      60,    61,     7,     8,    54,    55,    58,    56,    83,   165,
      59,    84,    90,    60,    61,    57,   113,   114,   115,   116,
     117,   118,   119,   120,   121,    91,    96,    92,    93,    97,
      58,   101,   102,    56,    59,   127,   149,    60,    61,   109,
     110,   111,   112,   150,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   151,   155,   163,   164,   166,   154,    21,
      40,    26,   109,   110,   111,   112,   128,   113,   114,   115,
     116,   117,   118,   119,   120,   121,    41,    52,   100,    79,
       0,     0,     0,     0,     0,   109,   110,   111,   112,   132,
     113,   114,   115,   116,   117,   118,   119,   120,   121,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   109,   110,
     111,   112,   146,   113,   114,   115,   116,   117,   118,   119,
     120,   121,     0,   108,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   147,   109,   110,   111,   112,
     148,   113,   114,   115,   116,   117,   118,   119,   120,   121,
       0,     0,     0,   109,   110,   111,   112,     0,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   109,   110,   111,
     112,     0,   113,   114,   115,   116,   117,   118,   119,   120,
     121,     0,     0,     0,     0,     0,     0,     0,   109,   110,
     111,   112,   129,   113,   114,   115,   116,   117,   118,   119,
     120,   121
};

static const yytype_int16 yycheck[] =
{
      43,    62,     2,     8,     4,     6,     7,    12,    42,     3,
      10,    45,    40,     4,    42,    10,    16,    12,    52,    62,
      83,    84,    39,     3,    87,    16,    43,    90,    91,     8,
       9,     8,     9,    96,    13,     0,    13,     8,     9,    82,
      14,    42,    13,   106,    44,    39,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,    39,
       8,     9,     8,     9,    42,     4,     5,    13,     7,   154,
     155,    40,     7,    42,   159,    75,    15,    18,    19,     7,
      21,    22,    23,    24,    25,    26,    27,    28,    29,   152,
      43,    30,    42,    32,    33,    34,   157,   158,    37,    38,
      44,   162,     4,     5,    44,     7,     6,     4,     5,    11,
       7,   154,   155,    15,   157,   158,   159,    41,    15,   162,
       4,     5,    39,     7,     7,    39,    43,    45,    30,    43,
      10,    15,    34,    30,    45,    37,    38,    34,    42,    36,
      37,    38,     8,     9,     4,     5,    30,     7,    42,    33,
      34,    40,    42,    37,    38,    15,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    42,    20,     3,     3,     7,
      30,    45,    45,     7,    34,    43,     7,    37,    38,    16,
      17,    18,    19,     3,    21,    22,    23,    24,    25,    26,
      27,    28,    29,     3,    35,     3,     3,     3,    31,    10,
      32,    16,    16,    17,    18,    19,    43,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    33,    42,    75,    49,
      -1,    -1,    -1,    -1,    -1,    16,    17,    18,    19,    43,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,
      18,    19,    43,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    16,    17,    18,    19,
       3,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    -1,    -1,    16,    17,    18,    19,    -1,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    16,    17,    18,
      19,    -1,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,
      18,    19,    41,    21,    22,    23,    24,    25,    26,    27,
      28,    29
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     8,    12,    47,    48,    63,    14,     8,     9,    13,
      49,    50,    51,     0,     8,    51,    54,    55,    63,    42,
      13,    50,     7,    52,    53,     7,    55,    63,    43,    40,
      42,     3,    39,    42,    56,    44,     6,    51,    57,    58,
      53,    57,    44,    10,    12,    59,    64,    41,     7,    39,
      43,    43,    59,    64,     4,     5,     7,    15,    30,    34,
      37,    38,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    76,    13,    51,    60,    61,    64,    45,    58,
      64,    45,    42,    42,    40,     6,     7,    42,    75,    76,
      42,    42,     3,     3,    11,    66,    20,     7,    62,    13,
      61,    45,    45,    76,    75,    75,    42,    75,     3,    16,
      17,    18,    19,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    75,    75,    75,     3,    39,    43,    43,    41,
      75,    77,    43,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    43,    43,     3,     7,
       3,     3,    39,    43,    31,    35,    75,    65,    65,    32,
      33,    36,    65,     3,     3,    33,     3
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    46,    47,    47,    47,    48,    48,    49,    49,    50,
      51,    51,    52,    52,    53,    53,    53,    54,    54,    55,
      55,    56,    57,    57,    57,    58,    59,    59,    60,    60,
      61,    62,    62,    63,    63,    64,    65,    65,    66,    66,
      66,    66,    66,    66,    66,    66,    67,    68,    69,    70,
      71,    72,    72,    73,    74,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    76,    76,    77,    77,    77
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     2,     1,     3,     2,     2,     1,     3,
       1,     1,     3,     1,     4,     4,     1,     2,     1,     7,
       6,     3,     3,     1,     0,     2,     3,     2,     2,     1,
       3,     3,     1,     8,     7,     3,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     5,     4,     2,
       2,    10,     8,     8,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       4,     1,     4,     1,     3,     1,     0
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
  case 2: /* Program: GDeclBlock FuncDefBlock MainBlock  */
#line 37 "parser.y"
        {
            FILE *outfile = fopen ("code.out", "a");
            fprintf (outfile, "INT 10\n");    
            fclose (outfile);
            return 0;
        }
#line 1419 "y.tab.c"
    break;

  case 3: /* Program: GDeclBlock MainBlock  */
#line 44 "parser.y"
        {
            FILE *outfile = fopen ("code.out", "a");
            fprintf (outfile, "INT 10\n");             
            fclose (outfile);
            return 0;
        }
#line 1430 "y.tab.c"
    break;

  case 4: /* Program: MainBlock  */
#line 51 "parser.y"
        {
            FILE *outfile = fopen ("code.out", "a");
            fprintf (outfile, "INT 10\n");             
            fclose (outfile);
            return 0;
        }
#line 1441 "y.tab.c"
    break;

  case 5: /* GDeclBlock: DECL GDeclList ENDDECL  */
#line 61 "parser.y"
                { 
                    registerInit ();
                    initializeGTable (); 
                    declareGVariables ((yyvsp[-1].node)); 

                    initializeLTable ();
                    FILE *outfile = fopen ("code.out", "w");
                    headerGenerator (outfile);
                    fclose (outfile);
                }
#line 1456 "y.tab.c"
    break;

  case 6: /* GDeclBlock: DECL ENDDECL  */
#line 73 "parser.y"
                {
                    registerInit ();

                    initializeLTable ();
                    FILE *outfile = fopen ("code.out", "w");
                    headerGenerator (outfile);
                    fclose (outfile);
                }
#line 1469 "y.tab.c"
    break;

  case 7: /* GDeclList: GDeclList GDecl  */
#line 82 "parser.y"
                                    { (yyval.node) = makeConnectorNode ((yyvsp[-1].node), (yyvsp[0].node)); }
#line 1475 "y.tab.c"
    break;

  case 8: /* GDeclList: GDecl  */
#line 83 "parser.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 1481 "y.tab.c"
    break;

  case 9: /* GDecl: Type GVarList ENDSTMT  */
#line 85 "parser.y"
                                        { (yyval.node) = makeDeclarationNode ((yyvsp[-2].node), (yyvsp[-1].node)); }
#line 1487 "y.tab.c"
    break;

  case 10: /* Type: INT  */
#line 87 "parser.y"
                        { (yyval.node) = makeTypeNode (TYPE_INT); }
#line 1493 "y.tab.c"
    break;

  case 11: /* Type: STR  */
#line 88 "parser.y"
                        { (yyval.node) = makeTypeNode (TYPE_STR); }
#line 1499 "y.tab.c"
    break;

  case 12: /* GVarList: GVarList ',' GIdentifierDecl  */
#line 90 "parser.y"
                                                 { (yyval.node) = makeConnectorNode ((yyvsp[-2].node), (yyvsp[0].node)); }
#line 1505 "y.tab.c"
    break;

  case 13: /* GVarList: GIdentifierDecl  */
#line 91 "parser.y"
                                                 { (yyval.node) = (yyvsp[0].node); }
#line 1511 "y.tab.c"
    break;

  case 14: /* GIdentifierDecl: ID '[' NUM ']'  */
#line 93 "parser.y"
                                        { (yyval.node) = makeArrayDeclNode ((yyvsp[-3].node)->varname, (yyvsp[-1].node)->varvalue); }
#line 1517 "y.tab.c"
    break;

  case 15: /* GIdentifierDecl: ID '(' ParamList ')'  */
#line 94 "parser.y"
                                        { (yyval.node) = makeFunctionDeclNode ((yyvsp[-3].node)->varname, (yyvsp[-1].node)); }
#line 1523 "y.tab.c"
    break;

  case 16: /* GIdentifierDecl: ID  */
#line 95 "parser.y"
                                        { (yyval.node) = (yyvsp[0].node); }
#line 1529 "y.tab.c"
    break;

  case 17: /* FuncDefBlock: FuncDefBlock FuncDef  */
#line 99 "parser.y"
                                        { (yyvsp[-1].node)->right = (yyvsp[0].node); (yyval.node) = makeConnectorNode ((yyvsp[-1].node), NULL); }
#line 1535 "y.tab.c"
    break;

  case 18: /* FuncDefBlock: FuncDef  */
#line 100 "parser.y"
                                        { (yyval.node) = makeConnectorNode ((yyvsp[0].node), NULL); }
#line 1541 "y.tab.c"
    break;

  case 19: /* FuncDef: Type ID ParamBlock '{' LDeclBlock FuncBody '}'  */
#line 103 "parser.y"
                {
                    (yyval.node) = makeFunctionDefNode ((yyvsp[-6].node)->vartype, (yyvsp[-5].node)->varname, (yyvsp[-4].node), (yyvsp[-1].node));

                    if (matchParameters (getFunctionParameters ((yyval.node)->varname), (yyval.node)->left) == false) {
                        printf ("error: trying to define an undeclared function\n");
                        exit (0);
                    }

                    FILE *outfile = fopen ("code.out", "a");
                    codeGenerator (outfile, (yyval.node));
                    fclose (outfile);

                    initializeLTable ();
                }
#line 1560 "y.tab.c"
    break;

  case 20: /* FuncDef: Type ID ParamBlock '{' FuncBody '}'  */
#line 118 "parser.y"
                {
                    (yyval.node) = makeFunctionDefNode ((yyvsp[-5].node)->vartype, (yyvsp[-4].node)->varname, (yyvsp[-3].node), (yyvsp[-1].node));

                    if (matchParameters (getFunctionParameters ((yyval.node)->varname), (yyval.node)->left) == false) {
                        printf ("error: trying to define an undeclared function\n");
                        exit (0);
                    }

                    FILE *outfile = fopen ("code.out", "a");
                    codeGenerator (outfile, (yyval.node));
                    fclose (outfile);

                    initializeLTable ();
                }
#line 1579 "y.tab.c"
    break;

  case 21: /* ParamBlock: '(' ParamList ')'  */
#line 133 "parser.y"
                                        { declareLVariables ((yyvsp[-1].node)); (yyval.node) = (yyvsp[-1].node); }
#line 1585 "y.tab.c"
    break;

  case 22: /* ParamList: ParamList ',' Param  */
#line 136 "parser.y"
                { 
                    treenode* current = (yyvsp[-2].node); 
                    while (current->left) current = current->left;
                    current->left = (yyvsp[0].node);
                    (yyval.node) = (yyvsp[-2].node); 
                }
#line 1596 "y.tab.c"
    break;

  case 23: /* ParamList: Param  */
#line 142 "parser.y"
                                        { (yyval.node) = (yyvsp[0].node); }
#line 1602 "y.tab.c"
    break;

  case 24: /* ParamList: %empty  */
#line 143 "parser.y"
                                        { (yyval.node) = NULL; }
#line 1608 "y.tab.c"
    break;

  case 25: /* Param: Type ID  */
#line 145 "parser.y"
                            { (yyval.node) = makeParameterNode ((yyvsp[-1].node)->vartype, (yyvsp[0].node)->varname); }
#line 1614 "y.tab.c"
    break;

  case 26: /* LDeclBlock: DECL LDeclList ENDDECL  */
#line 147 "parser.y"
                                             { declareLVariables ((yyvsp[-1].node)); (yyval.node) = (yyvsp[-1].node); }
#line 1620 "y.tab.c"
    break;

  case 27: /* LDeclBlock: DECL ENDDECL  */
#line 148 "parser.y"
                                             {  }
#line 1626 "y.tab.c"
    break;

  case 28: /* LDeclList: LDeclList LDecl  */
#line 150 "parser.y"
                                    { (yyval.node) = makeConnectorNode ((yyvsp[-1].node), (yyvsp[0].node)); }
#line 1632 "y.tab.c"
    break;

  case 29: /* LDeclList: LDecl  */
#line 151 "parser.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 1638 "y.tab.c"
    break;

  case 30: /* LDecl: Type LVarList ENDSTMT  */
#line 153 "parser.y"
                                        { (yyval.node) = makeDeclarationNode ((yyvsp[-2].node), (yyvsp[-1].node)); }
#line 1644 "y.tab.c"
    break;

  case 31: /* LVarList: LVarList ',' ID  */
#line 155 "parser.y"
                                    { (yyval.node) = makeConnectorNode ((yyvsp[-2].node), (yyvsp[0].node)); }
#line 1650 "y.tab.c"
    break;

  case 32: /* LVarList: ID  */
#line 156 "parser.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 1656 "y.tab.c"
    break;

  case 33: /* MainBlock: INT MAIN '(' ')' '{' LDeclBlock FuncBody '}'  */
#line 162 "parser.y"
            {
                setStaticBinding (NULL);

                FILE *outfile = fopen ("code.out", "a");
                fprintf (outfile, "MAIN:\n");

                LSymtableNode* current = t.head;
                while (current) {
                    fprintf (outfile, "PUSH R0\n");
                    current = current->next;
                }

                codeGenerator (outfile, (yyvsp[-1].node));
                fclose (outfile);
            }
#line 1676 "y.tab.c"
    break;

  case 34: /* MainBlock: INT MAIN '(' ')' '{' FuncBody '}'  */
#line 178 "parser.y"
            {
                FILE *outfile = fopen ("code.out", "a");
                fprintf (outfile, "MAIN:\n");
                codeGenerator (outfile, (yyvsp[-1].node));
                fclose (outfile);
            }
#line 1687 "y.tab.c"
    break;

  case 35: /* FuncBody: START StmtList END  */
#line 185 "parser.y"
                                    { (yyval.node) = (yyvsp[-1].node); }
#line 1693 "y.tab.c"
    break;

  case 36: /* StmtList: StmtList Stmt  */
#line 187 "parser.y"
                            { (yyval.node) = makeConnectorNode ((yyvsp[-1].node), (yyvsp[0].node)); }
#line 1699 "y.tab.c"
    break;

  case 37: /* StmtList: Stmt  */
#line 188 "parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 1705 "y.tab.c"
    break;

  case 38: /* Stmt: OutStmt  */
#line 190 "parser.y"
                        { (yyval.node) = (yyvsp[0].node); }
#line 1711 "y.tab.c"
    break;

  case 39: /* Stmt: InStmt  */
#line 191 "parser.y"
                        { (yyval.node) = (yyvsp[0].node); }
#line 1717 "y.tab.c"
    break;

  case 40: /* Stmt: AssgnStmt  */
#line 192 "parser.y"
                        { (yyval.node) = (yyvsp[0].node); }
#line 1723 "y.tab.c"
    break;

  case 41: /* Stmt: IfStmt  */
#line 193 "parser.y"
                        { (yyval.node) = (yyvsp[0].node); }
#line 1729 "y.tab.c"
    break;

  case 42: /* Stmt: WhileStmt  */
#line 194 "parser.y"
                        { (yyval.node) = (yyvsp[0].node); }
#line 1735 "y.tab.c"
    break;

  case 43: /* Stmt: BreakStmt  */
#line 195 "parser.y"
                        { (yyval.node) = (yyvsp[0].node); }
#line 1741 "y.tab.c"
    break;

  case 44: /* Stmt: ContinueStmt  */
#line 196 "parser.y"
                        { (yyval.node) = (yyvsp[0].node); }
#line 1747 "y.tab.c"
    break;

  case 45: /* Stmt: ReturnStmt  */
#line 197 "parser.y"
                        { (yyval.node) = (yyvsp[0].node); }
#line 1753 "y.tab.c"
    break;

  case 46: /* InStmt: READ '(' Identifier ')' ENDSTMT  */
#line 199 "parser.y"
                                                { (yyvsp[-2].node)->vartype = getVariableType ((yyvsp[-2].node)->varname); (yyval.node) = makeReadNode ((yyvsp[-2].node)); }
#line 1759 "y.tab.c"
    break;

  case 47: /* OutStmt: WRITE '(' Expr ')' ENDSTMT  */
#line 200 "parser.y"
                                                { (yyval.node) = makeWriteNode ((yyvsp[-2].node)); }
#line 1765 "y.tab.c"
    break;

  case 48: /* AssgnStmt: Identifier EQL Expr ENDSTMT  */
#line 201 "parser.y"
                                                { (yyvsp[-3].node)->vartype = getVariableType ((yyvsp[-3].node)->varname); (yyval.node) = makeOperatorNode ("=", (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 1771 "y.tab.c"
    break;

  case 49: /* BreakStmt: BREAK ENDSTMT  */
#line 203 "parser.y"
                                        { (yyval.node) = makeBreakNode (); }
#line 1777 "y.tab.c"
    break;

  case 50: /* ContinueStmt: CONTINUE ENDSTMT  */
#line 204 "parser.y"
                                        { (yyval.node) = makeContinueNode (); }
#line 1783 "y.tab.c"
    break;

  case 51: /* IfStmt: IF '(' Expr ')' THEN StmtList ELSE StmtList ENDIF ENDSTMT  */
#line 206 "parser.y"
                                                                        { (yyval.node) = makeIfElseNode ((yyvsp[-7].node), (yyvsp[-4].node), (yyvsp[-2].node)); }
#line 1789 "y.tab.c"
    break;

  case 52: /* IfStmt: IF '(' Expr ')' THEN StmtList ENDIF ENDSTMT  */
#line 207 "parser.y"
                                                                        { (yyval.node) = makeIfNode ((yyvsp[-5].node), (yyvsp[-2].node)); }
#line 1795 "y.tab.c"
    break;

  case 53: /* WhileStmt: WHILE '(' Expr ')' DO StmtList ENDWHILE ENDSTMT  */
#line 209 "parser.y"
                                                                        { (yyval.node) = makeWhileNode ((yyvsp[-5].node), (yyvsp[-2].node)); }
#line 1801 "y.tab.c"
    break;

  case 54: /* ReturnStmt: RETURN Expr ENDSTMT  */
#line 211 "parser.y"
                                    { (yyval.node) = makeReturnNode ((yyvsp[-1].node)); }
#line 1807 "y.tab.c"
    break;

  case 55: /* Expr: '(' Expr ')'  */
#line 213 "parser.y"
                                { (yyval.node) = (yyvsp[-1].node); }
#line 1813 "y.tab.c"
    break;

  case 56: /* Expr: Expr ADD Expr  */
#line 214 "parser.y"
                                { (yyval.node) = makeOperatorNode ("+", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1819 "y.tab.c"
    break;

  case 57: /* Expr: Expr SUB Expr  */
#line 215 "parser.y"
                                { (yyval.node) = makeOperatorNode ("-", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1825 "y.tab.c"
    break;

  case 58: /* Expr: Expr MUL Expr  */
#line 216 "parser.y"
                                { (yyval.node) = makeOperatorNode ("*", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1831 "y.tab.c"
    break;

  case 59: /* Expr: Expr DIV Expr  */
#line 217 "parser.y"
                                { (yyval.node) = makeOperatorNode ("/", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1837 "y.tab.c"
    break;

  case 60: /* Expr: Expr LT Expr  */
#line 218 "parser.y"
                                { (yyval.node) = makeOperatorNode ("<", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1843 "y.tab.c"
    break;

  case 61: /* Expr: Expr GT Expr  */
#line 219 "parser.y"
                                { (yyval.node) = makeOperatorNode (">", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1849 "y.tab.c"
    break;

  case 62: /* Expr: Expr EQ Expr  */
#line 220 "parser.y"
                                { (yyval.node) = makeOperatorNode ("==", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1855 "y.tab.c"
    break;

  case 63: /* Expr: Expr LE Expr  */
#line 221 "parser.y"
                                { (yyval.node) = makeOperatorNode ("<=", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1861 "y.tab.c"
    break;

  case 64: /* Expr: Expr GE Expr  */
#line 222 "parser.y"
                                { (yyval.node) = makeOperatorNode (">=", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1867 "y.tab.c"
    break;

  case 65: /* Expr: Expr NE Expr  */
#line 223 "parser.y"
                                { (yyval.node) = makeOperatorNode ("!=", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1873 "y.tab.c"
    break;

  case 66: /* Expr: Expr AND Expr  */
#line 224 "parser.y"
                                { (yyval.node) = makeOperatorNode ("&&", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1879 "y.tab.c"
    break;

  case 67: /* Expr: Expr OR Expr  */
#line 225 "parser.y"
                                { (yyval.node) = makeOperatorNode ("||", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1885 "y.tab.c"
    break;

  case 68: /* Expr: Expr NOT Expr  */
#line 226 "parser.y"
                                { (yyval.node) = makeOperatorNode ("~", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1891 "y.tab.c"
    break;

  case 69: /* Expr: Identifier  */
#line 227 "parser.y"
                                { (yyvsp[0].node)->vartype = getVariableType ((yyvsp[0].node)->varname); (yyval.node) = (yyvsp[0].node); }
#line 1897 "y.tab.c"
    break;

  case 70: /* Expr: ID '(' ArgsList ')'  */
#line 228 "parser.y"
                                { (yyvsp[-3].node)->vartype = getVariableType ((yyvsp[-3].node)->varname); (yyval.node) = makeFunctionCallNode ((yyvsp[-3].node)->varname, (yyvsp[-1].node)); }
#line 1903 "y.tab.c"
    break;

  case 71: /* Expr: NUM  */
#line 229 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 1909 "y.tab.c"
    break;

  case 72: /* Identifier: ID '[' Expr ']'  */
#line 231 "parser.y"
                                    { (yyval.node) = makeArrayNode ((yyvsp[-3].node)->varname, (yyvsp[-1].node)); }
#line 1915 "y.tab.c"
    break;

  case 73: /* Identifier: ID  */
#line 232 "parser.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 1921 "y.tab.c"
    break;

  case 74: /* ArgsList: ArgsList ',' Expr  */
#line 234 "parser.y"
                                { (yyval.node) = makeConnectorNode ((yyvsp[-2].node), (yyvsp[0].node)); }
#line 1927 "y.tab.c"
    break;

  case 75: /* ArgsList: Expr  */
#line 235 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 1933 "y.tab.c"
    break;

  case 76: /* ArgsList: %empty  */
#line 236 "parser.y"
                                { (yyval.node) = NULL; }
#line 1939 "y.tab.c"
    break;


#line 1943 "y.tab.c"

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

#line 238 "parser.y"
 /* -------------------------------------------------------------------------------------------------------------------------------------- */

void yyerror(char const *s) {
    printf("yyerror %s: %s\n",s, yytext);
    exit (0);
}

int main (int argc, char const *argv []) {
    if (argc > 1) {
        FILE* inp = fopen (argv[1], "r");
        if (inp) yyin = inp;
    }

    yyparse ();

    return 0;
}
