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
    // #include "type.c"
    
    int yylex(void);
    void yyerror (char const *s);
    
    extern FILE* yyin;
    extern char* yytext;

#line 83 "y.tab.c"

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
    ALLOC = 261,                   /* ALLOC  */
    FREE = 262,                    /* FREE  */
    INIT = 263,                    /* INIT  */
    NUM = 264,                     /* NUM  */
    ID = 265,                      /* ID  */
    INT = 266,                     /* INT  */
    STR = 267,                     /* STR  */
    NULLL = 268,                   /* NULLL  */
    START = 269,                   /* START  */
    END = 270,                     /* END  */
    DECL = 271,                    /* DECL  */
    ENDDECL = 272,                 /* ENDDECL  */
    TYPE = 273,                    /* TYPE  */
    ENDTYPE = 274,                 /* ENDTYPE  */
    MAIN = 275,                    /* MAIN  */
    RETURN = 276,                  /* RETURN  */
    ADD = 277,                     /* ADD  */
    SUB = 278,                     /* SUB  */
    MUL = 279,                     /* MUL  */
    DIV = 280,                     /* DIV  */
    EQL = 281,                     /* EQL  */
    LT = 282,                      /* LT  */
    GT = 283,                      /* GT  */
    EQ = 284,                      /* EQ  */
    GE = 285,                      /* GE  */
    LE = 286,                      /* LE  */
    NE = 287,                      /* NE  */
    AND = 288,                     /* AND  */
    OR = 289,                      /* OR  */
    NOT = 290,                     /* NOT  */
    IF = 291,                      /* IF  */
    THEN = 292,                    /* THEN  */
    ELSE = 293,                    /* ELSE  */
    ENDIF = 294,                   /* ENDIF  */
    WHILE = 295,                   /* WHILE  */
    DO = 296,                      /* DO  */
    ENDWHILE = 297,                /* ENDWHILE  */
    BREAK = 298,                   /* BREAK  */
    CONTINUE = 299                 /* CONTINUE  */
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
#define ALLOC 261
#define FREE 262
#define INIT 263
#define NUM 264
#define ID 265
#define INT 266
#define STR 267
#define NULLL 268
#define START 269
#define END 270
#define DECL 271
#define ENDDECL 272
#define TYPE 273
#define ENDTYPE 274
#define MAIN 275
#define RETURN 276
#define ADD 277
#define SUB 278
#define MUL 279
#define DIV 280
#define EQL 281
#define LT 282
#define GT 283
#define EQ 284
#define GE 285
#define LE 286
#define NE 287
#define AND 288
#define OR 289
#define NOT 290
#define IF 291
#define THEN 292
#define ELSE 293
#define ENDIF 294
#define WHILE 295
#define DO 296
#define ENDWHILE 297
#define BREAK 298
#define CONTINUE 299

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 13 "parser.y"

    struct TreeNode *node;

#line 228 "y.tab.c"

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
  YYSYMBOL_ALLOC = 6,                      /* ALLOC  */
  YYSYMBOL_FREE = 7,                       /* FREE  */
  YYSYMBOL_INIT = 8,                       /* INIT  */
  YYSYMBOL_NUM = 9,                        /* NUM  */
  YYSYMBOL_ID = 10,                        /* ID  */
  YYSYMBOL_INT = 11,                       /* INT  */
  YYSYMBOL_STR = 12,                       /* STR  */
  YYSYMBOL_NULLL = 13,                     /* NULLL  */
  YYSYMBOL_START = 14,                     /* START  */
  YYSYMBOL_END = 15,                       /* END  */
  YYSYMBOL_DECL = 16,                      /* DECL  */
  YYSYMBOL_ENDDECL = 17,                   /* ENDDECL  */
  YYSYMBOL_TYPE = 18,                      /* TYPE  */
  YYSYMBOL_ENDTYPE = 19,                   /* ENDTYPE  */
  YYSYMBOL_MAIN = 20,                      /* MAIN  */
  YYSYMBOL_RETURN = 21,                    /* RETURN  */
  YYSYMBOL_ADD = 22,                       /* ADD  */
  YYSYMBOL_SUB = 23,                       /* SUB  */
  YYSYMBOL_MUL = 24,                       /* MUL  */
  YYSYMBOL_DIV = 25,                       /* DIV  */
  YYSYMBOL_EQL = 26,                       /* EQL  */
  YYSYMBOL_LT = 27,                        /* LT  */
  YYSYMBOL_GT = 28,                        /* GT  */
  YYSYMBOL_EQ = 29,                        /* EQ  */
  YYSYMBOL_GE = 30,                        /* GE  */
  YYSYMBOL_LE = 31,                        /* LE  */
  YYSYMBOL_NE = 32,                        /* NE  */
  YYSYMBOL_AND = 33,                       /* AND  */
  YYSYMBOL_OR = 34,                        /* OR  */
  YYSYMBOL_NOT = 35,                       /* NOT  */
  YYSYMBOL_IF = 36,                        /* IF  */
  YYSYMBOL_THEN = 37,                      /* THEN  */
  YYSYMBOL_ELSE = 38,                      /* ELSE  */
  YYSYMBOL_ENDIF = 39,                     /* ENDIF  */
  YYSYMBOL_WHILE = 40,                     /* WHILE  */
  YYSYMBOL_DO = 41,                        /* DO  */
  YYSYMBOL_ENDWHILE = 42,                  /* ENDWHILE  */
  YYSYMBOL_BREAK = 43,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 44,                  /* CONTINUE  */
  YYSYMBOL_45_ = 45,                       /* '{'  */
  YYSYMBOL_46_ = 46,                       /* '}'  */
  YYSYMBOL_47_ = 47,                       /* ','  */
  YYSYMBOL_48_ = 48,                       /* '['  */
  YYSYMBOL_49_ = 49,                       /* ']'  */
  YYSYMBOL_50_ = 50,                       /* '('  */
  YYSYMBOL_51_ = 51,                       /* ')'  */
  YYSYMBOL_52_ = 52,                       /* '"'  */
  YYSYMBOL_53_ = 53,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 54,                  /* $accept  */
  YYSYMBOL_Program = 55,                   /* Program  */
  YYSYMBOL_TypeDeclBlock = 56,             /* TypeDeclBlock  */
  YYSYMBOL_TypeDeclBlockInit = 57,         /* TypeDeclBlockInit  */
  YYSYMBOL_TypeDeclList = 58,              /* TypeDeclList  */
  YYSYMBOL_TypeStmt = 59,                  /* TypeStmt  */
  YYSYMBOL_TypeName = 60,                  /* TypeName  */
  YYSYMBOL_FieldDeclList = 61,             /* FieldDeclList  */
  YYSYMBOL_FieldDecl = 62,                 /* FieldDecl  */
  YYSYMBOL_Type = 63,                      /* Type  */
  YYSYMBOL_GDeclBlock = 64,                /* GDeclBlock  */
  YYSYMBOL_GDeclList = 65,                 /* GDeclList  */
  YYSYMBOL_GDecl = 66,                     /* GDecl  */
  YYSYMBOL_GVarList = 67,                  /* GVarList  */
  YYSYMBOL_GIdentifierDecl = 68,           /* GIdentifierDecl  */
  YYSYMBOL_FuncDefBlock = 69,              /* FuncDefBlock  */
  YYSYMBOL_FuncDef = 70,                   /* FuncDef  */
  YYSYMBOL_ParamBlock = 71,                /* ParamBlock  */
  YYSYMBOL_ParamList = 72,                 /* ParamList  */
  YYSYMBOL_Param = 73,                     /* Param  */
  YYSYMBOL_LDeclBlock = 74,                /* LDeclBlock  */
  YYSYMBOL_LDeclList = 75,                 /* LDeclList  */
  YYSYMBOL_LDecl = 76,                     /* LDecl  */
  YYSYMBOL_LVarList = 77,                  /* LVarList  */
  YYSYMBOL_MainBlock = 78,                 /* MainBlock  */
  YYSYMBOL_FuncBody = 79,                  /* FuncBody  */
  YYSYMBOL_StmtList = 80,                  /* StmtList  */
  YYSYMBOL_Stmt = 81,                      /* Stmt  */
  YYSYMBOL_InStmt = 82,                    /* InStmt  */
  YYSYMBOL_OutStmt = 83,                   /* OutStmt  */
  YYSYMBOL_FreeStmt = 84,                  /* FreeStmt  */
  YYSYMBOL_InitStmt = 85,                  /* InitStmt  */
  YYSYMBOL_AssgnStmt = 86,                 /* AssgnStmt  */
  YYSYMBOL_BreakStmt = 87,                 /* BreakStmt  */
  YYSYMBOL_ContinueStmt = 88,              /* ContinueStmt  */
  YYSYMBOL_IfStmt = 89,                    /* IfStmt  */
  YYSYMBOL_WhileStmt = 90,                 /* WhileStmt  */
  YYSYMBOL_ReturnStmt = 91,                /* ReturnStmt  */
  YYSYMBOL_Expr = 92,                      /* Expr  */
  YYSYMBOL_Identifier = 93,                /* Identifier  */
  YYSYMBOL_ArgsList = 94,                  /* ArgsList  */
  YYSYMBOL_Field = 95                      /* Field  */
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
#define YYFINAL  17
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   363

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  97
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  211

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   299


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
       2,     2,     2,     2,    52,     2,     2,     2,     2,     2,
      50,    51,     2,     2,    47,     2,    53,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    48,     2,    49,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    45,     2,    46,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    39,    39,    46,    53,    60,    70,    72,    74,    75,
      77,    83,    85,    86,    88,    90,    91,    92,    96,   108,
     118,   119,   121,   123,   124,   126,   127,   128,   132,   133,
     135,   150,   166,   168,   169,   170,   172,   174,   175,   177,
     178,   180,   182,   183,   188,   204,   212,   214,   215,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   228,
     229,   230,   233,   234,   236,   238,   239,   241,   242,   244,
     246,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     268,   269,   270,   272,   273,   274,   276,   284
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
  "WRITE", "ALLOC", "FREE", "INIT", "NUM", "ID", "INT", "STR", "NULLL",
  "START", "END", "DECL", "ENDDECL", "TYPE", "ENDTYPE", "MAIN", "RETURN",
  "ADD", "SUB", "MUL", "DIV", "EQL", "LT", "GT", "EQ", "GE", "LE", "NE",
  "AND", "OR", "NOT", "IF", "THEN", "ELSE", "ENDIF", "WHILE", "DO",
  "ENDWHILE", "BREAK", "CONTINUE", "'{'", "'}'", "','", "'['", "']'",
  "'('", "')'", "'\"'", "'.'", "$accept", "Program", "TypeDeclBlock",
  "TypeDeclBlockInit", "TypeDeclList", "TypeStmt", "TypeName",
  "FieldDeclList", "FieldDecl", "Type", "GDeclBlock", "GDeclList", "GDecl",
  "GVarList", "GIdentifierDecl", "FuncDefBlock", "FuncDef", "ParamBlock",
  "ParamList", "Param", "LDeclBlock", "LDeclList", "LDecl", "LVarList",
  "MainBlock", "FuncBody", "StmtList", "Stmt", "InStmt", "OutStmt",
  "FreeStmt", "InitStmt", "AssgnStmt", "BreakStmt", "ContinueStmt",
  "IfStmt", "WhileStmt", "ReturnStmt", "Expr", "Identifier", "ArgsList",
  "Field", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-175)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      48,   -16,   161,  -175,    19,     4,    21,    23,  -175,   -12,
    -175,  -175,  -175,  -175,    31,   253,  -175,  -175,   185,  -175,
      -5,  -175,    -1,  -175,     6,   101,     5,  -175,  -175,  -175,
     -16,    41,   185,  -175,  -175,  -175,  -175,   256,    22,    45,
     256,  -175,    31,    13,  -175,  -175,    16,  -175,    72,   100,
      42,    82,     9,  -175,  -175,   256,    80,  -175,  -175,   108,
     158,   292,   110,    86,  -175,  -175,   256,  -175,    34,   100,
    -175,    78,    83,    88,    89,   -13,     3,    92,   102,   152,
     155,    79,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,
    -175,  -175,  -175,   134,   111,  -175,   157,   315,  -175,   123,
    -175,  -175,  -175,   110,   128,   165,    -3,   126,   130,     3,
     177,   141,  -175,    40,  -175,     3,   183,  -175,     3,     3,
    -175,  -175,  -175,  -175,     3,   180,  -175,     8,  -175,  -175,
    -175,   153,  -175,   172,   193,   211,   201,   206,   289,  -175,
     186,     3,   225,  -175,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,   250,   264,   197,
    -175,  -175,   241,  -175,   258,   217,   268,  -175,  -175,  -175,
    -175,   312,    66,  -175,   324,   324,    75,    75,   312,   312,
     312,   312,   312,   312,   312,   312,   312,   263,   249,  -175,
    -175,  -175,   254,  -175,     3,  -175,   158,   158,   303,   312,
      91,   140,  -175,   158,   304,   305,   149,  -175,  -175,   307,
    -175
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     7,     0,     0,     0,     0,     5,     0,
      17,    15,    16,    19,     0,     0,    21,     1,     0,    11,
       0,     9,     0,     3,     0,    27,     0,    24,    18,    20,
      15,     0,     0,    29,     4,     6,     8,     0,     0,     0,
      35,    22,     0,     0,    28,     2,     0,    13,     0,     0,
       0,     0,     0,    34,    23,    35,     0,    10,    12,     0,
       0,     0,     0,     0,    25,    36,     0,    26,     0,     0,
      14,     0,     0,     0,     0,    91,     0,     0,     0,     0,
       0,     0,    48,    50,    49,    51,    52,    53,    56,    57,
      54,    55,    58,     0,    92,    38,     0,     0,    40,     0,
      45,    33,    32,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    88,    91,    89,     0,     0,    85,     0,     0,
      65,    66,    46,    47,     0,     0,    43,     0,    37,    39,
      44,     0,    31,     0,     0,     0,     0,     0,     0,    97,
       0,    95,     0,    70,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      96,    41,     0,    30,     0,     0,     0,    62,    63,    90,
      87,    94,     0,    71,    72,    73,    74,    75,    76,    77,
      78,    80,    79,    81,    82,    83,    84,     0,     0,    64,
      42,    59,     0,    60,     0,    86,     0,     0,     0,    93,
       0,     0,    61,     0,     0,     0,     0,    68,    69,     0,
      67
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -175,  -175,  -175,  -175,  -175,   308,  -175,  -175,   283,     0,
     325,  -175,   316,  -175,   291,  -175,   318,  -175,   306,   294,
     293,  -175,   266,  -175,    18,   -45,  -174,   -80,  -175,  -175,
    -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,   -76,   -60,
    -175,  -175
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,     5,     6,    20,    21,    22,    46,    47,    51,
       7,    15,    16,    26,    27,    32,    33,    56,    52,    53,
      62,    97,    98,   127,     8,    63,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,   116,   117,
     172,    94
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      93,   123,    14,   111,     9,    19,   112,   113,    41,   111,
     114,   161,   112,   113,    35,    14,   114,    99,    31,    17,
       2,    93,   200,   201,   104,    23,    10,    11,    12,   206,
     135,    19,    31,   138,     1,   109,    34,    48,    24,   142,
     110,    25,   157,   158,    37,   133,    48,   115,   159,   134,
      45,    43,    42,   115,    50,   162,    66,    38,   131,     1,
      67,    96,    57,    55,     2,   171,     3,    49,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,    66,    59,    71,    72,   102,    73,    74,   109,    75,
     141,    64,    65,   110,   122,    71,    72,    96,    73,    74,
      76,    75,   148,   149,   150,   151,   152,   153,   154,   155,
     156,    70,    76,   194,    60,    77,    61,   195,   199,    78,
     123,   123,    79,    80,    60,    69,   123,    77,   105,   203,
     204,    78,   100,   106,    79,    80,    93,    93,   107,   108,
      93,    93,   118,    93,    71,    72,    93,    73,    74,    39,
      75,    40,   119,    71,    72,   120,    73,    74,   121,    75,
     124,    76,    71,    72,   125,    73,    74,   126,    75,   130,
      76,    10,    11,    12,   132,    75,    77,   136,    13,    76,
      78,   137,   205,    79,    80,    77,   143,   139,   209,    78,
     160,   140,    79,    80,    77,    10,    30,    12,    78,   163,
     189,    79,    80,   165,   167,   144,   145,   146,   147,   168,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   144,
     145,   146,   147,   164,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   144,   145,   146,   147,   170,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   144,   145,   146,
     147,   190,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   191,   166,    10,    11,    12,    10,    11,    12,   192,
      28,   193,   144,   145,   146,   147,   173,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   144,   145,   146,   147,
     197,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     196,   187,    10,    11,    12,   198,   202,   207,   208,    95,
     210,   144,   145,   146,   147,   188,   148,   149,   150,   151,
     152,   153,   154,   155,   156,    10,    11,    12,    36,    58,
      18,    29,   128,    54,   144,   145,   146,   147,   169,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   146,   147,
      44,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     101,    68,   103,   129
};

static const yytype_uint8 yycheck[] =
{
      60,    81,     2,     6,    20,    10,     9,    10,     3,     6,
      13,     3,     9,    10,    19,    15,    13,    62,    18,     0,
      16,    81,   196,   197,    69,     7,    10,    11,    12,   203,
     106,    10,    32,   109,    11,    48,    18,    37,    50,   115,
      53,    10,   118,   119,    45,   105,    46,    50,   124,    52,
      32,    10,    47,    50,     9,    47,    47,    51,   103,    11,
      51,    61,    46,    50,    16,   141,    18,    45,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,    47,    10,     4,     5,    51,     7,     8,    48,    10,
      50,    49,    10,    53,    15,     4,     5,    97,     7,     8,
      21,    10,    27,    28,    29,    30,    31,    32,    33,    34,
      35,     3,    21,    47,    14,    36,    16,    51,   194,    40,
     200,   201,    43,    44,    14,    45,   206,    36,    50,    38,
      39,    40,    46,    50,    43,    44,   196,   197,    50,    50,
     200,   201,    50,   203,     4,     5,   206,     7,     8,    48,
      10,    50,    50,     4,     5,     3,     7,     8,     3,    10,
      26,    21,     4,     5,    53,     7,     8,    10,    10,    46,
      21,    10,    11,    12,    46,    10,    36,    51,    17,    21,
      40,    51,    42,    43,    44,    36,     3,    10,    39,    40,
      10,    50,    43,    44,    36,    10,    11,    12,    40,    46,
       3,    43,    44,    10,     3,    22,    23,    24,    25,     3,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    22,
      23,    24,    25,    51,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    22,    23,    24,    25,    51,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    22,    23,    24,
      25,    10,    27,    28,    29,    30,    31,    32,    33,    34,
      35,     3,    51,    10,    11,    12,    10,    11,    12,    52,
      17,     3,    22,    23,    24,    25,    51,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    22,    23,    24,    25,
      41,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      37,    51,    10,    11,    12,    51,     3,     3,     3,    17,
       3,    22,    23,    24,    25,    51,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    10,    11,    12,    20,    46,
       5,    15,    17,    42,    22,    23,    24,    25,    49,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    24,    25,
      32,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      66,    55,    69,    97
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    11,    16,    18,    55,    56,    57,    64,    78,    20,
      10,    11,    12,    17,    63,    65,    66,     0,    64,    10,
      58,    59,    60,    78,    50,    10,    67,    68,    17,    66,
      11,    63,    69,    70,    78,    19,    59,    45,    51,    48,
      50,     3,    47,    10,    70,    78,    61,    62,    63,    45,
       9,    63,    72,    73,    68,    50,    71,    46,    62,    10,
      14,    16,    74,    79,    49,    10,    47,    51,    72,    45,
       3,     4,     5,     7,     8,    10,    21,    36,    40,    43,
      44,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    93,    95,    17,    63,    75,    76,    79,
      46,    73,    51,    74,    79,    50,    50,    50,    50,    48,
      53,     6,     9,    10,    13,    50,    92,    93,    50,    50,
       3,     3,    15,    81,    26,    53,    10,    77,    17,    76,
      46,    79,    46,    93,    52,    92,    51,    51,    92,    10,
      50,    50,    92,     3,    22,    23,    24,    25,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    92,    92,    92,
      10,     3,    47,    46,    51,    10,    51,     3,     3,    49,
      51,    92,    94,    51,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    51,    51,     3,
      10,     3,    52,     3,    47,    51,    37,    41,    51,    92,
      80,    80,     3,    38,    39,    42,    80,     3,     3,    39,
       3
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    54,    55,    55,    55,    55,    56,    57,    58,    58,
      59,    60,    61,    61,    62,    63,    63,    63,    64,    64,
      65,    65,    66,    67,    67,    68,    68,    68,    69,    69,
      70,    70,    71,    72,    72,    72,    73,    74,    74,    75,
      75,    76,    77,    77,    78,    78,    79,    80,    80,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    82,
      83,    83,    84,    85,    86,    87,    88,    89,    89,    90,
      91,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      93,    93,    93,    94,    94,    94,    95,    95
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     2,     3,     1,     3,     1,     2,     1,
       4,     1,     2,     1,     3,     1,     1,     1,     3,     2,
       2,     1,     3,     3,     1,     4,     4,     1,     2,     1,
       7,     6,     3,     3,     1,     0,     2,     3,     2,     2,
       1,     3,     3,     1,     8,     7,     3,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       5,     7,     4,     4,     4,     2,     2,    10,     8,     8,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     4,     3,     1,     1,
       4,     1,     1,     3,     1,     0,     3,     3
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
  case 2: /* Program: TypeDeclBlock GDeclBlock FuncDefBlock MainBlock  */
#line 40 "parser.y"
        {
            FILE *outfile = fopen ("code.out", "a");
            fprintf (outfile, "INT 10\n");    
            fclose (outfile);
            return 0;
        }
#line 1480 "y.tab.c"
    break;

  case 3: /* Program: GDeclBlock MainBlock  */
#line 47 "parser.y"
        {
            FILE *outfile = fopen ("code.out", "a");
            fprintf (outfile, "INT 10\n");             
            fclose (outfile);
            return 0;
        }
#line 1491 "y.tab.c"
    break;

  case 4: /* Program: TypeDeclBlock GDeclBlock MainBlock  */
#line 54 "parser.y"
        {
            FILE *outfile = fopen ("code.out", "a");
            fprintf (outfile, "INT 10\n");    
            fclose (outfile);
            return 0;
        }
#line 1502 "y.tab.c"
    break;

  case 5: /* Program: MainBlock  */
#line 61 "parser.y"
        {
            FILE *outfile = fopen ("code.out", "a");
            fprintf (outfile, "INT 10\n");             
            fclose (outfile);
            return 0;
        }
#line 1513 "y.tab.c"
    break;

  case 6: /* TypeDeclBlock: TypeDeclBlockInit TypeDeclList ENDTYPE  */
#line 70 "parser.y"
                                                         { (yyval.node) = (yyvsp[-1].node); }
#line 1519 "y.tab.c"
    break;

  case 7: /* TypeDeclBlockInit: TYPE  */
#line 72 "parser.y"
                            { initializeTypeTable (); }
#line 1525 "y.tab.c"
    break;

  case 8: /* TypeDeclList: TypeDeclList TypeStmt  */
#line 74 "parser.y"
                                            { (yyval.node) = makeConnectorNode ((yyvsp[-1].node), (yyvsp[0].node)); }
#line 1531 "y.tab.c"
    break;

  case 9: /* TypeDeclList: TypeStmt  */
#line 75 "parser.y"
                                            { (yyval.node) = (yyvsp[0].node); }
#line 1537 "y.tab.c"
    break;

  case 10: /* TypeStmt: TypeName '{' FieldDeclList '}'  */
#line 78 "parser.y"
                {
                    declareType ((yyvsp[-1].node), (yyvsp[-3].node)->varname);
                    (yyval.node) = makeTypeDeclarationNode ((yyvsp[-3].node)->varname, (yyvsp[-1].node)); 
                }
#line 1546 "y.tab.c"
    break;

  case 11: /* TypeName: ID  */
#line 83 "parser.y"
                        { addTypeEntry ((yyvsp[0].node)->varname); (yyval.node) = (yyvsp[0].node); }
#line 1552 "y.tab.c"
    break;

  case 12: /* FieldDeclList: FieldDeclList FieldDecl  */
#line 85 "parser.y"
                                            { TreeNode* current = (yyvsp[-1].node); while (current->left) current = current->left; current->left = (yyvsp[0].node); (yyval.node) = (yyvsp[-1].node); }
#line 1558 "y.tab.c"
    break;

  case 13: /* FieldDeclList: FieldDecl  */
#line 86 "parser.y"
                                            { (yyval.node) = (yyvsp[0].node); }
#line 1564 "y.tab.c"
    break;

  case 14: /* FieldDecl: Type ID ENDSTMT  */
#line 88 "parser.y"
                                    { (yyval.node) = makeFieldDeclNode ((yyvsp[-1].node)->varname, (yyvsp[-2].node)->vartype); }
#line 1570 "y.tab.c"
    break;

  case 15: /* Type: INT  */
#line 90 "parser.y"
                        { (yyval.node) = makeTypeNode ("INT"); }
#line 1576 "y.tab.c"
    break;

  case 16: /* Type: STR  */
#line 91 "parser.y"
                        { (yyval.node) = makeTypeNode ("STR"); }
#line 1582 "y.tab.c"
    break;

  case 17: /* Type: ID  */
#line 92 "parser.y"
                        { (yyval.node) = makeTypeNode ((yyvsp[0].node)->varname); }
#line 1588 "y.tab.c"
    break;

  case 18: /* GDeclBlock: DECL GDeclList ENDDECL  */
#line 97 "parser.y"
                { 
                    registerInit ();
                    initializeGTable (); 
                    declareGVariables ((yyvsp[-1].node)); 

                    initializeLTable ();
                    FILE *outfile = fopen ("code.out", "w");
                    headerGenerator (outfile);
                    fclose (outfile);
                }
#line 1603 "y.tab.c"
    break;

  case 19: /* GDeclBlock: DECL ENDDECL  */
#line 109 "parser.y"
                {
                    registerInit ();

                    initializeLTable ();
                    FILE *outfile = fopen ("code.out", "w");
                    headerGenerator (outfile);
                    fclose (outfile);
                }
#line 1616 "y.tab.c"
    break;

  case 20: /* GDeclList: GDeclList GDecl  */
#line 118 "parser.y"
                                    { (yyval.node) = makeConnectorNode ((yyvsp[-1].node), (yyvsp[0].node)); }
#line 1622 "y.tab.c"
    break;

  case 21: /* GDeclList: GDecl  */
#line 119 "parser.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 1628 "y.tab.c"
    break;

  case 22: /* GDecl: Type GVarList ENDSTMT  */
#line 121 "parser.y"
                                        { (yyval.node) = makeDeclarationNode ((yyvsp[-2].node), (yyvsp[-1].node)); }
#line 1634 "y.tab.c"
    break;

  case 23: /* GVarList: GVarList ',' GIdentifierDecl  */
#line 123 "parser.y"
                                                 { (yyval.node) = makeConnectorNode ((yyvsp[-2].node), (yyvsp[0].node)); }
#line 1640 "y.tab.c"
    break;

  case 24: /* GVarList: GIdentifierDecl  */
#line 124 "parser.y"
                                                 { (yyval.node) = (yyvsp[0].node); }
#line 1646 "y.tab.c"
    break;

  case 25: /* GIdentifierDecl: ID '[' NUM ']'  */
#line 126 "parser.y"
                                        { (yyval.node) = makeArrayDeclNode ((yyvsp[-3].node)->varname, (yyvsp[-1].node)->varvalue); }
#line 1652 "y.tab.c"
    break;

  case 26: /* GIdentifierDecl: ID '(' ParamList ')'  */
#line 127 "parser.y"
                                        { (yyval.node) = makeFunctionDeclNode ((yyvsp[-3].node)->varname, (yyvsp[-1].node)); }
#line 1658 "y.tab.c"
    break;

  case 27: /* GIdentifierDecl: ID  */
#line 128 "parser.y"
                                        { (yyval.node) = (yyvsp[0].node); }
#line 1664 "y.tab.c"
    break;

  case 28: /* FuncDefBlock: FuncDefBlock FuncDef  */
#line 132 "parser.y"
                                        { (yyvsp[-1].node)->right = (yyvsp[0].node); (yyval.node) = makeConnectorNode ((yyvsp[-1].node), NULL); }
#line 1670 "y.tab.c"
    break;

  case 29: /* FuncDefBlock: FuncDef  */
#line 133 "parser.y"
                                        { (yyval.node) = makeConnectorNode ((yyvsp[0].node), NULL); }
#line 1676 "y.tab.c"
    break;

  case 30: /* FuncDef: Type ID ParamBlock '{' LDeclBlock FuncBody '}'  */
#line 136 "parser.y"
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
#line 1695 "y.tab.c"
    break;

  case 31: /* FuncDef: Type ID ParamBlock '{' FuncBody '}'  */
#line 151 "parser.y"
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
#line 1714 "y.tab.c"
    break;

  case 32: /* ParamBlock: '(' ParamList ')'  */
#line 166 "parser.y"
                                        { declareLVariables ((yyvsp[-1].node)); (yyval.node) = (yyvsp[-1].node); }
#line 1720 "y.tab.c"
    break;

  case 33: /* ParamList: ParamList ',' Param  */
#line 168 "parser.y"
                                        { TreeNode* current = (yyvsp[-2].node); while (current->left) current = current->left; current->left = (yyvsp[0].node); (yyval.node) = (yyvsp[-2].node); }
#line 1726 "y.tab.c"
    break;

  case 34: /* ParamList: Param  */
#line 169 "parser.y"
                                        { (yyval.node) = (yyvsp[0].node); }
#line 1732 "y.tab.c"
    break;

  case 35: /* ParamList: %empty  */
#line 170 "parser.y"
                                        { (yyval.node) = NULL; }
#line 1738 "y.tab.c"
    break;

  case 36: /* Param: Type ID  */
#line 172 "parser.y"
                            { (yyval.node) = makeParameterNode ((yyvsp[-1].node)->vartype, (yyvsp[0].node)->varname); }
#line 1744 "y.tab.c"
    break;

  case 37: /* LDeclBlock: DECL LDeclList ENDDECL  */
#line 174 "parser.y"
                                             { declareLVariables ((yyvsp[-1].node)); (yyval.node) = (yyvsp[-1].node); }
#line 1750 "y.tab.c"
    break;

  case 38: /* LDeclBlock: DECL ENDDECL  */
#line 175 "parser.y"
                                             {}
#line 1756 "y.tab.c"
    break;

  case 39: /* LDeclList: LDeclList LDecl  */
#line 177 "parser.y"
                                    { (yyval.node) = makeConnectorNode ((yyvsp[-1].node), (yyvsp[0].node)); }
#line 1762 "y.tab.c"
    break;

  case 40: /* LDeclList: LDecl  */
#line 178 "parser.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 1768 "y.tab.c"
    break;

  case 41: /* LDecl: Type LVarList ENDSTMT  */
#line 180 "parser.y"
                                        { (yyval.node) = makeDeclarationNode ((yyvsp[-2].node), (yyvsp[-1].node)); }
#line 1774 "y.tab.c"
    break;

  case 42: /* LVarList: LVarList ',' ID  */
#line 182 "parser.y"
                                    { (yyval.node) = makeConnectorNode ((yyvsp[-2].node), (yyvsp[0].node)); }
#line 1780 "y.tab.c"
    break;

  case 43: /* LVarList: ID  */
#line 183 "parser.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 1786 "y.tab.c"
    break;

  case 44: /* MainBlock: INT MAIN '(' ')' '{' LDeclBlock FuncBody '}'  */
#line 189 "parser.y"
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
#line 1806 "y.tab.c"
    break;

  case 45: /* MainBlock: INT MAIN '(' ')' '{' FuncBody '}'  */
#line 205 "parser.y"
            {
                FILE *outfile = fopen ("code.out", "a");
                fprintf (outfile, "MAIN:\n");
                codeGenerator (outfile, (yyvsp[-1].node));
                fclose (outfile);
            }
#line 1817 "y.tab.c"
    break;

  case 46: /* FuncBody: START StmtList END  */
#line 212 "parser.y"
                                    { (yyval.node) = (yyvsp[-1].node); }
#line 1823 "y.tab.c"
    break;

  case 47: /* StmtList: StmtList Stmt  */
#line 214 "parser.y"
                            { (yyval.node) = makeConnectorNode ((yyvsp[-1].node), (yyvsp[0].node)); }
#line 1829 "y.tab.c"
    break;

  case 48: /* StmtList: Stmt  */
#line 215 "parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 1835 "y.tab.c"
    break;

  case 49: /* Stmt: OutStmt  */
#line 217 "parser.y"
                        { (yyval.node) = (yyvsp[0].node); }
#line 1841 "y.tab.c"
    break;

  case 50: /* Stmt: InStmt  */
#line 218 "parser.y"
                        { (yyval.node) = (yyvsp[0].node); }
#line 1847 "y.tab.c"
    break;

  case 51: /* Stmt: FreeStmt  */
#line 219 "parser.y"
                        { (yyval.node) = (yyvsp[0].node); }
#line 1853 "y.tab.c"
    break;

  case 52: /* Stmt: InitStmt  */
#line 220 "parser.y"
                        { (yyval.node) = (yyvsp[0].node); }
#line 1859 "y.tab.c"
    break;

  case 53: /* Stmt: AssgnStmt  */
#line 221 "parser.y"
                        { (yyval.node) = (yyvsp[0].node); }
#line 1865 "y.tab.c"
    break;

  case 54: /* Stmt: IfStmt  */
#line 222 "parser.y"
                        { (yyval.node) = (yyvsp[0].node); }
#line 1871 "y.tab.c"
    break;

  case 55: /* Stmt: WhileStmt  */
#line 223 "parser.y"
                        { (yyval.node) = (yyvsp[0].node); }
#line 1877 "y.tab.c"
    break;

  case 56: /* Stmt: BreakStmt  */
#line 224 "parser.y"
                        { (yyval.node) = (yyvsp[0].node); }
#line 1883 "y.tab.c"
    break;

  case 57: /* Stmt: ContinueStmt  */
#line 225 "parser.y"
                        { (yyval.node) = (yyvsp[0].node); }
#line 1889 "y.tab.c"
    break;

  case 58: /* Stmt: ReturnStmt  */
#line 226 "parser.y"
                        { (yyval.node) = (yyvsp[0].node); }
#line 1895 "y.tab.c"
    break;

  case 59: /* InStmt: READ '(' Identifier ')' ENDSTMT  */
#line 228 "parser.y"
                                                { (yyvsp[-2].node)->vartype = getVariableType ((yyvsp[-2].node)->varname); (yyval.node) = makeReadNode ((yyvsp[-2].node)); }
#line 1901 "y.tab.c"
    break;

  case 60: /* OutStmt: WRITE '(' Expr ')' ENDSTMT  */
#line 229 "parser.y"
                                                { (yyval.node) = makeWriteNode ((yyvsp[-2].node)); }
#line 1907 "y.tab.c"
    break;

  case 61: /* OutStmt: WRITE '(' '"' ID '"' ')' ENDSTMT  */
#line 230 "parser.y"
                                                { (yyvsp[-3].node)->nodetype = STRING_NODE; (yyval.node) = makeWriteNode ((yyvsp[-3].node)); }
#line 1913 "y.tab.c"
    break;

  case 62: /* FreeStmt: FREE '(' ')' ENDSTMT  */
#line 233 "parser.y"
                                                { (yyval.node) = makeFreeNode (); }
#line 1919 "y.tab.c"
    break;

  case 63: /* InitStmt: INIT '(' ')' ENDSTMT  */
#line 234 "parser.y"
                                                { (yyval.node) = makeInitNode (); }
#line 1925 "y.tab.c"
    break;

  case 64: /* AssgnStmt: Identifier EQL Expr ENDSTMT  */
#line 236 "parser.y"
                                                { (yyval.node) = makeOperatorNode ("=", (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 1931 "y.tab.c"
    break;

  case 65: /* BreakStmt: BREAK ENDSTMT  */
#line 238 "parser.y"
                                        { (yyval.node) = makeBreakNode (); }
#line 1937 "y.tab.c"
    break;

  case 66: /* ContinueStmt: CONTINUE ENDSTMT  */
#line 239 "parser.y"
                                        { (yyval.node) = makeContinueNode (); }
#line 1943 "y.tab.c"
    break;

  case 67: /* IfStmt: IF '(' Expr ')' THEN StmtList ELSE StmtList ENDIF ENDSTMT  */
#line 241 "parser.y"
                                                                        { (yyval.node) = makeIfElseNode ((yyvsp[-7].node), (yyvsp[-4].node), (yyvsp[-2].node)); }
#line 1949 "y.tab.c"
    break;

  case 68: /* IfStmt: IF '(' Expr ')' THEN StmtList ENDIF ENDSTMT  */
#line 242 "parser.y"
                                                                        { (yyval.node) = makeIfNode ((yyvsp[-5].node), (yyvsp[-2].node)); }
#line 1955 "y.tab.c"
    break;

  case 69: /* WhileStmt: WHILE '(' Expr ')' DO StmtList ENDWHILE ENDSTMT  */
#line 244 "parser.y"
                                                                        { (yyval.node) = makeWhileNode ((yyvsp[-5].node), (yyvsp[-2].node)); }
#line 1961 "y.tab.c"
    break;

  case 70: /* ReturnStmt: RETURN Expr ENDSTMT  */
#line 246 "parser.y"
                                    { (yyval.node) = makeReturnNode ((yyvsp[-1].node)); }
#line 1967 "y.tab.c"
    break;

  case 71: /* Expr: '(' Expr ')'  */
#line 248 "parser.y"
                                { (yyval.node) = (yyvsp[-1].node); }
#line 1973 "y.tab.c"
    break;

  case 72: /* Expr: Expr ADD Expr  */
#line 249 "parser.y"
                                { (yyval.node) = makeOperatorNode ("+", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1979 "y.tab.c"
    break;

  case 73: /* Expr: Expr SUB Expr  */
#line 250 "parser.y"
                                { (yyval.node) = makeOperatorNode ("-", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1985 "y.tab.c"
    break;

  case 74: /* Expr: Expr MUL Expr  */
#line 251 "parser.y"
                                { (yyval.node) = makeOperatorNode ("*", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1991 "y.tab.c"
    break;

  case 75: /* Expr: Expr DIV Expr  */
#line 252 "parser.y"
                                { (yyval.node) = makeOperatorNode ("/", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1997 "y.tab.c"
    break;

  case 76: /* Expr: Expr LT Expr  */
#line 253 "parser.y"
                                { (yyval.node) = makeOperatorNode ("<", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2003 "y.tab.c"
    break;

  case 77: /* Expr: Expr GT Expr  */
#line 254 "parser.y"
                                { (yyval.node) = makeOperatorNode (">", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2009 "y.tab.c"
    break;

  case 78: /* Expr: Expr EQ Expr  */
#line 255 "parser.y"
                                { (yyval.node) = makeOperatorNode ("==", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2015 "y.tab.c"
    break;

  case 79: /* Expr: Expr LE Expr  */
#line 256 "parser.y"
                                { (yyval.node) = makeOperatorNode ("<=", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2021 "y.tab.c"
    break;

  case 80: /* Expr: Expr GE Expr  */
#line 257 "parser.y"
                                { (yyval.node) = makeOperatorNode (">=", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2027 "y.tab.c"
    break;

  case 81: /* Expr: Expr NE Expr  */
#line 258 "parser.y"
                                { (yyval.node) = makeOperatorNode ("!=", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2033 "y.tab.c"
    break;

  case 82: /* Expr: Expr AND Expr  */
#line 259 "parser.y"
                                { (yyval.node) = makeOperatorNode ("&&", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2039 "y.tab.c"
    break;

  case 83: /* Expr: Expr OR Expr  */
#line 260 "parser.y"
                                { (yyval.node) = makeOperatorNode ("||", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2045 "y.tab.c"
    break;

  case 84: /* Expr: Expr NOT Expr  */
#line 261 "parser.y"
                                { (yyval.node) = makeOperatorNode ("~", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2051 "y.tab.c"
    break;

  case 85: /* Expr: Identifier  */
#line 262 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2057 "y.tab.c"
    break;

  case 86: /* Expr: ID '(' ArgsList ')'  */
#line 263 "parser.y"
                                { (yyvsp[-3].node)->vartype = getVariableType ((yyvsp[-3].node)->varname); (yyval.node) = makeFunctionCallNode ((yyvsp[-3].node)->varname, (yyvsp[-1].node)); }
#line 2063 "y.tab.c"
    break;

  case 87: /* Expr: ALLOC '(' ')'  */
#line 264 "parser.y"
                                { (yyval.node) = makeAllocNode (); }
#line 2069 "y.tab.c"
    break;

  case 88: /* Expr: NUM  */
#line 265 "parser.y"
                                { (yyvsp[0].node)->vartype = getTypeNode ("INT"); (yyval.node) = (yyvsp[0].node); }
#line 2075 "y.tab.c"
    break;

  case 89: /* Expr: NULLL  */
#line 266 "parser.y"
                                { (yyval.node) = makeNullNode (); }
#line 2081 "y.tab.c"
    break;

  case 90: /* Identifier: ID '[' Expr ']'  */
#line 268 "parser.y"
                                    { (yyval.node) = makeArrayNode ((yyvsp[-3].node)->varname, (yyvsp[-1].node)); }
#line 2087 "y.tab.c"
    break;

  case 91: /* Identifier: ID  */
#line 269 "parser.y"
                                    { (yyvsp[0].node)->vartype = getVariableType ((yyvsp[0].node)->varname); (yyval.node) = (yyvsp[0].node); }
#line 2093 "y.tab.c"
    break;

  case 92: /* Identifier: Field  */
#line 270 "parser.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 2099 "y.tab.c"
    break;

  case 93: /* ArgsList: ArgsList ',' Expr  */
#line 272 "parser.y"
                                    { (yyval.node) = makeConnectorNode ((yyvsp[-2].node), (yyvsp[0].node)); }
#line 2105 "y.tab.c"
    break;

  case 94: /* ArgsList: Expr  */
#line 273 "parser.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 2111 "y.tab.c"
    break;

  case 95: /* ArgsList: %empty  */
#line 274 "parser.y"
                                    { (yyval.node) = NULL; }
#line 2117 "y.tab.c"
    break;

  case 96: /* Field: Field '.' ID  */
#line 277 "parser.y"
            {
                TreeNode* current = (yyvsp[-2].node); 
                while (current->left) current = current->left;
                current->left = makeFieldNode ((yyvsp[0].node)->varname, getFieldType ((yyvsp[0].node)->varname, current->vartype), getFieldIndex ((yyvsp[0].node)->varname, current->vartype));
                (yyvsp[-2].node)->vartype = current->left->vartype;
                (yyval.node) = (yyvsp[-2].node); 
            }
#line 2129 "y.tab.c"
    break;

  case 97: /* Field: ID '.' ID  */
#line 285 "parser.y"
            { 
                (yyvsp[-2].node)->vartype = getVariableType ((yyvsp[-2].node)->varname); 
                (yyvsp[-2].node)->left = makeFieldNode ((yyvsp[0].node)->varname, getFieldType ((yyvsp[0].node)->varname, (yyvsp[-2].node)->vartype), getFieldIndex ((yyvsp[0].node)->varname, (yyvsp[-2].node)->vartype));
                (yyvsp[-2].node)->vartype = (yyvsp[-2].node)->left->vartype;
                (yyval.node) = (yyvsp[-2].node);
            }
#line 2140 "y.tab.c"
    break;


#line 2144 "y.tab.c"

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

#line 292 "parser.y"
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
