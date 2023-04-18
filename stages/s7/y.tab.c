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
    #include "type.h"
    #include "class.h"
    
    int yylex(void);
    void yyerror (char const *s);
    
    extern FILE* yyin;
    extern char* yytext;
    extern int yylineno;;

#line 85 "y.tab.c"

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
    NEW = 264,                     /* NEW  */
    DELETE = 265,                  /* DELETE  */
    NUM = 266,                     /* NUM  */
    ID = 267,                      /* ID  */
    INT = 268,                     /* INT  */
    STR = 269,                     /* STR  */
    NULLL = 270,                   /* NULLL  */
    START = 271,                   /* START  */
    END = 272,                     /* END  */
    DECL = 273,                    /* DECL  */
    ENDDECL = 274,                 /* ENDDECL  */
    TYPE = 275,                    /* TYPE  */
    ENDTYPE = 276,                 /* ENDTYPE  */
    CLASS = 277,                   /* CLASS  */
    ENDCLASS = 278,                /* ENDCLASS  */
    MAIN = 279,                    /* MAIN  */
    RETURN = 280,                  /* RETURN  */
    EXTENDS = 281,                 /* EXTENDS  */
    SELF = 282,                    /* SELF  */
    ADD = 283,                     /* ADD  */
    SUB = 284,                     /* SUB  */
    MUL = 285,                     /* MUL  */
    DIV = 286,                     /* DIV  */
    EQL = 287,                     /* EQL  */
    LT = 288,                      /* LT  */
    GT = 289,                      /* GT  */
    EQ = 290,                      /* EQ  */
    GE = 291,                      /* GE  */
    LE = 292,                      /* LE  */
    NE = 293,                      /* NE  */
    AND = 294,                     /* AND  */
    OR = 295,                      /* OR  */
    NOT = 296,                     /* NOT  */
    IF = 297,                      /* IF  */
    THEN = 298,                    /* THEN  */
    ELSE = 299,                    /* ELSE  */
    ENDIF = 300,                   /* ENDIF  */
    WHILE = 301,                   /* WHILE  */
    DO = 302,                      /* DO  */
    ENDWHILE = 303,                /* ENDWHILE  */
    BREAK = 304,                   /* BREAK  */
    CONTINUE = 305                 /* CONTINUE  */
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
#define NEW 264
#define DELETE 265
#define NUM 266
#define ID 267
#define INT 268
#define STR 269
#define NULLL 270
#define START 271
#define END 272
#define DECL 273
#define ENDDECL 274
#define TYPE 275
#define ENDTYPE 276
#define CLASS 277
#define ENDCLASS 278
#define MAIN 279
#define RETURN 280
#define EXTENDS 281
#define SELF 282
#define ADD 283
#define SUB 284
#define MUL 285
#define DIV 286
#define EQL 287
#define LT 288
#define GT 289
#define EQ 290
#define GE 291
#define LE 292
#define NE 293
#define AND 294
#define OR 295
#define NOT 296
#define IF 297
#define THEN 298
#define ELSE 299
#define ENDIF 300
#define WHILE 301
#define DO 302
#define ENDWHILE 303
#define BREAK 304
#define CONTINUE 305

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 15 "parser.y"

    struct TreeNode *node;

#line 242 "y.tab.c"

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
  YYSYMBOL_NEW = 9,                        /* NEW  */
  YYSYMBOL_DELETE = 10,                    /* DELETE  */
  YYSYMBOL_NUM = 11,                       /* NUM  */
  YYSYMBOL_ID = 12,                        /* ID  */
  YYSYMBOL_INT = 13,                       /* INT  */
  YYSYMBOL_STR = 14,                       /* STR  */
  YYSYMBOL_NULLL = 15,                     /* NULLL  */
  YYSYMBOL_START = 16,                     /* START  */
  YYSYMBOL_END = 17,                       /* END  */
  YYSYMBOL_DECL = 18,                      /* DECL  */
  YYSYMBOL_ENDDECL = 19,                   /* ENDDECL  */
  YYSYMBOL_TYPE = 20,                      /* TYPE  */
  YYSYMBOL_ENDTYPE = 21,                   /* ENDTYPE  */
  YYSYMBOL_CLASS = 22,                     /* CLASS  */
  YYSYMBOL_ENDCLASS = 23,                  /* ENDCLASS  */
  YYSYMBOL_MAIN = 24,                      /* MAIN  */
  YYSYMBOL_RETURN = 25,                    /* RETURN  */
  YYSYMBOL_EXTENDS = 26,                   /* EXTENDS  */
  YYSYMBOL_SELF = 27,                      /* SELF  */
  YYSYMBOL_ADD = 28,                       /* ADD  */
  YYSYMBOL_SUB = 29,                       /* SUB  */
  YYSYMBOL_MUL = 30,                       /* MUL  */
  YYSYMBOL_DIV = 31,                       /* DIV  */
  YYSYMBOL_EQL = 32,                       /* EQL  */
  YYSYMBOL_LT = 33,                        /* LT  */
  YYSYMBOL_GT = 34,                        /* GT  */
  YYSYMBOL_EQ = 35,                        /* EQ  */
  YYSYMBOL_GE = 36,                        /* GE  */
  YYSYMBOL_LE = 37,                        /* LE  */
  YYSYMBOL_NE = 38,                        /* NE  */
  YYSYMBOL_AND = 39,                       /* AND  */
  YYSYMBOL_OR = 40,                        /* OR  */
  YYSYMBOL_NOT = 41,                       /* NOT  */
  YYSYMBOL_IF = 42,                        /* IF  */
  YYSYMBOL_THEN = 43,                      /* THEN  */
  YYSYMBOL_ELSE = 44,                      /* ELSE  */
  YYSYMBOL_ENDIF = 45,                     /* ENDIF  */
  YYSYMBOL_WHILE = 46,                     /* WHILE  */
  YYSYMBOL_DO = 47,                        /* DO  */
  YYSYMBOL_ENDWHILE = 48,                  /* ENDWHILE  */
  YYSYMBOL_BREAK = 49,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 50,                  /* CONTINUE  */
  YYSYMBOL_51_ = 51,                       /* '{'  */
  YYSYMBOL_52_ = 52,                       /* '}'  */
  YYSYMBOL_53_ = 53,                       /* '('  */
  YYSYMBOL_54_ = 54,                       /* ')'  */
  YYSYMBOL_55_ = 55,                       /* ','  */
  YYSYMBOL_56_ = 56,                       /* '['  */
  YYSYMBOL_57_ = 57,                       /* ']'  */
  YYSYMBOL_58_ = 58,                       /* '"'  */
  YYSYMBOL_59_ = 59,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 60,                  /* $accept  */
  YYSYMBOL_Program = 61,                   /* Program  */
  YYSYMBOL_TypeDeclBlock = 62,             /* TypeDeclBlock  */
  YYSYMBOL_TypeDeclBlockInit = 63,         /* TypeDeclBlockInit  */
  YYSYMBOL_TypeDeclList = 64,              /* TypeDeclList  */
  YYSYMBOL_TypeStmt = 65,                  /* TypeStmt  */
  YYSYMBOL_TypeName = 66,                  /* TypeName  */
  YYSYMBOL_FieldDeclList = 67,             /* FieldDeclList  */
  YYSYMBOL_FieldDecl = 68,                 /* FieldDecl  */
  YYSYMBOL_Type = 69,                      /* Type  */
  YYSYMBOL_ClassDeclBlock = 70,            /* ClassDeclBlock  */
  YYSYMBOL_ClassDeclBlockInit = 71,        /* ClassDeclBlockInit  */
  YYSYMBOL_ClassDeclList = 72,             /* ClassDeclList  */
  YYSYMBOL_ClassDecl = 73,                 /* ClassDecl  */
  YYSYMBOL_ClassName = 74,                 /* ClassName  */
  YYSYMBOL_MemberDeclList = 75,            /* MemberDeclList  */
  YYSYMBOL_MemberDecl = 76,                /* MemberDecl  */
  YYSYMBOL_MethodDeclList = 77,            /* MethodDeclList  */
  YYSYMBOL_MethodDecl = 78,                /* MethodDecl  */
  YYSYMBOL_MethodDefList = 79,             /* MethodDefList  */
  YYSYMBOL_MethodDef = 80,                 /* MethodDef  */
  YYSYMBOL_GDeclBlock = 81,                /* GDeclBlock  */
  YYSYMBOL_GDeclList = 82,                 /* GDeclList  */
  YYSYMBOL_GDecl = 83,                     /* GDecl  */
  YYSYMBOL_GVarList = 84,                  /* GVarList  */
  YYSYMBOL_GIdentifierDecl = 85,           /* GIdentifierDecl  */
  YYSYMBOL_FuncDefBlock = 86,              /* FuncDefBlock  */
  YYSYMBOL_FuncDef = 87,                   /* FuncDef  */
  YYSYMBOL_ParamBlock = 88,                /* ParamBlock  */
  YYSYMBOL_ParamList = 89,                 /* ParamList  */
  YYSYMBOL_Param = 90,                     /* Param  */
  YYSYMBOL_LDeclBlock = 91,                /* LDeclBlock  */
  YYSYMBOL_LDeclList = 92,                 /* LDeclList  */
  YYSYMBOL_LDecl = 93,                     /* LDecl  */
  YYSYMBOL_LVarList = 94,                  /* LVarList  */
  YYSYMBOL_FuncBody = 95,                  /* FuncBody  */
  YYSYMBOL_MainBlock = 96,                 /* MainBlock  */
  YYSYMBOL_StmtList = 97,                  /* StmtList  */
  YYSYMBOL_Stmt = 98,                      /* Stmt  */
  YYSYMBOL_InStmt = 99,                    /* InStmt  */
  YYSYMBOL_OutStmt = 100,                  /* OutStmt  */
  YYSYMBOL_FreeStmt = 101,                 /* FreeStmt  */
  YYSYMBOL_InitStmt = 102,                 /* InitStmt  */
  YYSYMBOL_DeleteStmt = 103,               /* DeleteStmt  */
  YYSYMBOL_AssgnStmt = 104,                /* AssgnStmt  */
  YYSYMBOL_BreakStmt = 105,                /* BreakStmt  */
  YYSYMBOL_ContinueStmt = 106,             /* ContinueStmt  */
  YYSYMBOL_IfStmt = 107,                   /* IfStmt  */
  YYSYMBOL_WhileStmt = 108,                /* WhileStmt  */
  YYSYMBOL_ReturnStmt = 109,               /* ReturnStmt  */
  YYSYMBOL_Expr = 110,                     /* Expr  */
  YYSYMBOL_Identifier = 111,               /* Identifier  */
  YYSYMBOL_ArgsList = 112,                 /* ArgsList  */
  YYSYMBOL_Field = 113,                    /* Field  */
  YYSYMBOL_FieldFunc = 114                 /* FieldFunc  */
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
#define YYLAST   487

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  55
/* YYNRULES -- Number of rules.  */
#define YYNRULES  129
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  309

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   305


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
       2,     2,     2,     2,    58,     2,     2,     2,     2,     2,
      53,    54,     2,     2,    55,     2,    59,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    56,     2,    57,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    51,     2,    52,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    42,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    55,    57,    59,    60,    62,    64,    66,    67,    69,
      71,    72,    73,    77,    79,    87,    88,    90,    92,    93,
      95,    96,    98,   100,   101,   103,   115,   116,   118,   134,
     153,   154,   156,   157,   159,   161,   162,   164,   165,   166,
     170,   171,   173,   187,   202,   204,   205,   206,   208,   210,
     211,   213,   214,   216,   222,   223,   225,   229,   248,   261,
     262,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   276,   277,   278,   281,   282,   285,   287,   289,
     290,   292,   293,   295,   297,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   322,   323,   324,   326,
     327,   328,   330,   347,   363,   376,   387,   398,   417,   423
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
  "WRITE", "ALLOC", "FREE", "INIT", "NEW", "DELETE", "NUM", "ID", "INT",
  "STR", "NULLL", "START", "END", "DECL", "ENDDECL", "TYPE", "ENDTYPE",
  "CLASS", "ENDCLASS", "MAIN", "RETURN", "EXTENDS", "SELF", "ADD", "SUB",
  "MUL", "DIV", "EQL", "LT", "GT", "EQ", "GE", "LE", "NE", "AND", "OR",
  "NOT", "IF", "THEN", "ELSE", "ENDIF", "WHILE", "DO", "ENDWHILE", "BREAK",
  "CONTINUE", "'{'", "'}'", "'('", "')'", "','", "'['", "']'", "'\"'",
  "'.'", "$accept", "Program", "TypeDeclBlock", "TypeDeclBlockInit",
  "TypeDeclList", "TypeStmt", "TypeName", "FieldDeclList", "FieldDecl",
  "Type", "ClassDeclBlock", "ClassDeclBlockInit", "ClassDeclList",
  "ClassDecl", "ClassName", "MemberDeclList", "MemberDecl",
  "MethodDeclList", "MethodDecl", "MethodDefList", "MethodDef",
  "GDeclBlock", "GDeclList", "GDecl", "GVarList", "GIdentifierDecl",
  "FuncDefBlock", "FuncDef", "ParamBlock", "ParamList", "Param",
  "LDeclBlock", "LDeclList", "LDecl", "LVarList", "FuncBody", "MainBlock",
  "StmtList", "Stmt", "InStmt", "OutStmt", "FreeStmt", "InitStmt",
  "DeleteStmt", "AssgnStmt", "BreakStmt", "ContinueStmt", "IfStmt",
  "WhileStmt", "ReturnStmt", "Expr", "Identifier", "ArgsList", "Field",
  "FieldFunc", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-254)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     127,   121,  -254,  -254,    27,    65,    57,     0,    64,   177,
    -254,  -254,  -254,  -254,    72,   124,  -254,  -254,    79,     0,
     177,  -254,  -254,    -5,  -254,    60,   177,    88,    93,    64,
      69,    79,   115,   177,  -254,  -254,   -45,     7,  -254,  -254,
    -254,    77,   177,   177,  -254,  -254,  -254,   230,   177,  -254,
     120,  -254,  -254,   132,    99,  -254,  -254,   230,   154,  -254,
      72,   100,   177,  -254,  -254,    20,  -254,   158,  -254,  -254,
     230,   230,   142,   160,     6,  -254,   138,  -254,   149,  -254,
    -254,  -254,   199,   192,   230,  -254,    34,    90,  -254,  -254,
     230,  -254,    90,  -254,   203,   198,  -254,   169,  -254,  -254,
     269,   214,   206,   161,  -254,   206,   163,  -254,     3,   230,
     207,  -254,   171,   179,   184,   186,   194,    21,    98,   201,
     205,   216,   227,   242,   114,  -254,  -254,  -254,  -254,  -254,
    -254,  -254,  -254,  -254,  -254,  -254,  -254,   239,   219,  -254,
     254,   222,  -254,   223,  -254,   232,  -254,   230,   268,    23,
    -254,   233,    18,    59,   278,   237,   280,    98,   281,   244,
     245,  -254,    26,  -254,   240,    98,   292,  -254,   241,  -254,
     289,    98,    98,  -254,  -254,  -254,  -254,    98,   291,  -254,
       9,  -254,  -254,  -254,  -254,   103,    99,  -254,  -254,   250,
     295,   337,   259,   305,   262,   323,  -254,   263,   302,    98,
     312,   322,   359,  -254,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,   324,  -254,   381,
     403,   309,  -254,  -254,   329,   332,   304,   366,   321,   378,
     379,  -254,  -254,  -254,  -254,   330,   425,   125,   -13,    -4,
    -254,   437,   437,   446,   446,   425,   425,   425,   425,   425,
     425,   425,   425,   425,   326,   340,   339,  -254,  -254,  -254,
      90,  -254,   347,  -254,  -254,  -254,  -254,    98,    98,   390,
      98,   391,   392,   269,   269,   206,   353,   404,   425,   143,
     355,   197,   370,   371,   204,   213,   354,  -254,  -254,  -254,
      98,  -254,    98,    98,   269,   422,   423,  -254,   202,   228,
     234,   260,  -254,  -254,  -254,  -254,  -254,   424,  -254
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    12,    24,     0,     0,     0,     0,     0,     0,
      22,    20,    21,    41,     0,     0,    43,     1,     0,     0,
       0,     8,    16,     0,    14,     0,     0,    28,     0,    26,
       0,    20,     0,     0,    51,    10,    49,     0,    46,    40,
      42,     0,     0,     0,     7,    11,    13,     0,     0,     5,
       0,    23,    25,     0,     0,    50,     9,    57,     0,    44,
       0,     0,     0,     3,     6,     0,    18,     0,     4,    29,
       0,    57,     0,     0,     0,    56,     0,    45,     0,     2,
      15,    17,     0,     0,     0,    31,     0,     0,    58,    48,
       0,    47,     0,    19,     0,     0,    30,     0,    34,    54,
       0,     0,     0,     0,    55,     0,     0,    32,     0,     0,
       0,    33,     0,     0,     0,     0,     0,   116,     0,     0,
       0,     0,     0,     0,     0,    70,    72,    71,    75,    74,
      76,    73,    79,    80,    77,    78,    81,     0,   118,    60,
       0,     0,    62,     0,    53,     0,    68,    57,     0,     0,
      37,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   112,   116,   113,     0,     0,     0,   109,   118,   110,
       0,     0,     0,    89,    90,    66,    69,     0,     0,    65,
       0,    59,    61,    52,    67,     0,     0,    27,    36,     0,
       0,     0,     0,     0,     0,     0,   123,     0,     0,   121,
       0,     0,     0,    94,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   124,     0,
       0,     0,   122,    63,     0,     0,     0,     0,     0,     0,
       0,    86,    87,   117,   114,     0,   120,     0,   123,   124,
      95,    96,    97,    98,    99,   100,   101,   102,   104,   103,
     105,   106,   107,   108,   122,     0,     0,    88,    64,    35,
       0,    82,     0,    83,    85,   115,   111,     0,   121,     0,
     121,     0,     0,     0,     0,     0,     0,     0,   119,     0,
       0,     0,     0,     0,     0,     0,     0,    39,    84,   125,
     121,   126,   121,   121,     0,     0,     0,    38,     0,     0,
       0,     0,    92,    93,   128,   127,   129,     0,    91
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -254,  -254,  -254,  -254,  -254,   405,  -254,  -254,   364,    58,
     440,  -254,   401,  -254,  -254,  -254,   362,  -254,   350,  -254,
     299,    10,  -254,   434,  -254,   409,    24,   -20,   264,   -66,
     361,   -89,  -254,   311,  -254,   -83,     5,  -253,  -123,  -254,
    -254,  -254,  -254,  -254,  -254,  -254,  -254,  -254,  -254,  -254,
    -114,  -100,  -124,   -98,  -254
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,     5,     6,    23,    24,    25,    65,    66,    32,
       7,     8,    28,    29,    30,    84,    85,    97,    98,   149,
     150,     9,    15,    16,    37,    38,    33,    34,    72,    74,
      75,   102,   141,   142,   180,   103,    21,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     236,   167,   237,   168,   169
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     137,   176,   138,   105,   166,    86,   107,    22,    57,   106,
      59,    58,   223,    55,    35,    20,    45,    26,     1,   143,
     284,   285,   145,    55,   137,    44,   138,    17,    55,    42,
     117,    49,    10,    11,    12,    10,    11,    12,    56,   191,
     268,   301,    55,   195,    43,   119,   269,    63,    64,   270,
      48,   202,   189,    68,   138,   271,   147,   219,   220,    14,
      89,    90,    60,   221,   224,   159,    62,    79,   160,    22,
     161,   162,    80,    14,   163,   187,    27,   157,    18,   199,
     158,   185,   157,     1,    36,   200,   164,     3,    99,    90,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,    41,   159,    67,   100,   160,   101,   161,
     162,    47,   165,   163,    50,    73,    51,   190,   112,   113,
      53,   114,   115,    67,   116,   164,   117,    54,    83,    73,
      61,   175,    69,    10,    11,    12,    10,    11,    12,   118,
      13,   119,    95,    39,   279,     1,   281,     2,    73,     3,
      70,   165,    71,   278,    78,   110,   120,   225,    90,   140,
     121,   176,   176,   122,   123,    76,   298,   148,   299,   300,
      82,   275,    88,   137,   137,   138,   138,   276,   176,   266,
     267,    10,    11,    12,   137,   137,   138,   138,   109,    10,
      31,    12,   286,    87,   137,    91,   138,   289,   267,   140,
      92,   137,    93,   138,    94,    73,   107,   148,   112,   113,
     108,   114,   115,   144,   116,   146,   117,   112,   113,   151,
     114,   115,   100,   116,   152,   117,    10,    11,    12,   118,
     173,   119,   153,   139,    10,    11,    12,   154,   118,   155,
     119,   181,    10,    11,    12,   174,   120,   156,   294,   295,
     121,   291,   267,   122,   123,   120,   304,   267,   171,   121,
     170,   296,   122,   123,   112,   113,   179,   114,   115,   172,
     116,   177,   117,   112,   113,   183,   114,   115,   178,   116,
     186,   117,   305,   267,   184,   118,   147,   119,   306,   267,
     192,   193,   194,   196,   118,   203,   119,   197,   198,   201,
     217,   218,   120,   222,   227,   307,   121,   228,   231,   122,
     123,   120,   257,   230,   235,   121,   232,   234,   122,   123,
     204,   205,   206,   207,   238,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   239,   259,   254,   204,   205,   206,
     207,   258,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   204,   205,   206,   207,   260,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   204,   205,   206,   207,   261,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   262,
     233,   263,   264,   273,   265,   272,   274,   204,   205,   206,
     207,   229,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   277,   280,   282,   283,   287,   297,   288,   290,   204,
     205,   206,   207,   240,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   292,   293,   302,   303,   308,    46,    81,
      52,   204,   205,   206,   207,   255,   208,   209,   210,   211,
     212,   213,   214,   215,   216,    19,    96,   111,   188,    40,
     226,   104,   182,   204,   205,   206,   207,   256,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   206,   207,    77,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   208,
     209,   210,   211,   212,   213,   214,   215,   216
};

static const yytype_int16 yycheck[] =
{
     100,   124,   100,    92,   118,    71,     3,    12,    53,    92,
       3,    56,     3,    33,     9,     5,    21,     7,    18,   102,
     273,   274,   105,    43,   124,    20,   124,     0,    48,    19,
      12,    26,    12,    13,    14,    12,    13,    14,    33,   153,
      53,   294,    62,   157,    20,    27,    59,    42,    43,    53,
      26,   165,   152,    48,   152,    59,    53,   171,   172,     1,
      54,    55,    55,   177,    55,     6,    42,    62,     9,    12,
      11,    12,    52,    15,    15,    52,    12,    56,    13,    53,
      59,   147,    56,    18,    12,    59,    27,    22,    54,    55,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,    24,     6,    47,    16,     9,    18,    11,
      12,    51,    53,    15,    26,    57,    23,    58,     4,     5,
      51,     7,     8,    65,    10,    27,    12,    12,    70,    71,
      53,    17,    12,    12,    13,    14,    12,    13,    14,    25,
      19,    27,    84,    19,   268,    18,   270,    20,    90,    22,
      18,    53,    53,   267,    54,    97,    42,    54,    55,   101,
      46,   284,   285,    49,    50,    11,   290,   109,   292,   293,
      12,   260,    12,   273,   274,   273,   274,   260,   301,    54,
      55,    12,    13,    14,   284,   285,   284,   285,    19,    12,
      13,    14,   275,    51,   294,    57,   294,    54,    55,   141,
      51,   301,     3,   301,    12,   147,     3,   149,     4,     5,
      12,     7,     8,    52,    10,    52,    12,     4,     5,    12,
       7,     8,    16,    10,    53,    12,    12,    13,    14,    25,
       3,    27,    53,    19,    12,    13,    14,    53,    25,    53,
      27,    19,    12,    13,    14,     3,    42,    53,    44,    45,
      46,    54,    55,    49,    50,    42,    54,    55,    53,    46,
      59,    48,    49,    50,     4,     5,    12,     7,     8,    53,
      10,    32,    12,     4,     5,    52,     7,     8,    59,    10,
      12,    12,    54,    55,    52,    25,    53,    27,    54,    55,
      12,    54,    12,    12,    25,     3,    27,    53,    53,    59,
      59,    12,    42,    12,    54,    45,    46,    12,     3,    49,
      50,    42,     3,    54,    12,    46,    54,    54,    49,    50,
      28,    29,    30,    31,    12,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    12,     3,    12,    28,    29,    30,
      31,    12,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    28,    29,    30,    31,    51,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    28,    29,    30,    31,     3,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    58,
      57,     3,     3,    43,    54,    59,    47,    28,    29,    30,
      31,    54,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    54,    12,    12,    12,    52,    52,     3,    53,    28,
      29,    30,    31,    54,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    53,    53,     3,     3,     3,    23,    65,
      29,    28,    29,    30,    31,    54,    33,    34,    35,    36,
      37,    38,    39,    40,    41,     5,    84,    97,   149,    15,
     186,    90,   141,    28,    29,    30,    31,    54,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    30,    31,    60,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    33,
      34,    35,    36,    37,    38,    39,    40,    41
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    18,    20,    22,    61,    62,    63,    70,    71,    81,
      12,    13,    14,    19,    69,    82,    83,     0,    13,    70,
      81,    96,    12,    64,    65,    66,    81,    12,    72,    73,
      74,    13,    69,    86,    87,    96,    12,    84,    85,    19,
      83,    24,    81,    86,    96,    21,    65,    51,    86,    96,
      26,    23,    72,    51,    12,    87,    96,    53,    56,     3,
      55,    53,    86,    96,    96,    67,    68,    69,    96,    12,
      18,    53,    88,    69,    89,    90,    11,    85,    54,    96,
      52,    68,    12,    69,    75,    76,    89,    51,    12,    54,
      55,    57,    51,     3,    12,    69,    76,    77,    78,    54,
      16,    18,    91,    95,    90,    91,    95,     3,    12,    19,
      69,    78,     4,     5,     7,     8,    10,    12,    25,    27,
      42,    46,    49,    50,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   111,   113,    19,
      69,    92,    93,    95,    52,    95,    52,    53,    69,    79,
      80,    12,    53,    53,    53,    53,    53,    56,    59,     6,
       9,    11,    12,    15,    27,    53,   110,   111,   113,   114,
      59,    53,    53,     3,     3,    17,    98,    32,    59,    12,
      94,    19,    93,    52,    52,    89,    12,    52,    80,   111,
      58,   110,    12,    54,    12,   110,    12,    53,    53,    53,
      59,    59,   110,     3,    28,    29,    30,    31,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    59,    12,   110,
     110,   110,    12,     3,    55,    54,    88,    54,    12,    54,
      54,     3,    54,    57,    54,    12,   110,   112,    12,    12,
      54,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,    12,    54,    54,     3,    12,     3,
      51,     3,    58,     3,     3,    54,    54,    55,    53,    59,
      53,    59,    59,    43,    47,    91,    95,    54,   110,   112,
      12,   112,    12,    12,    97,    97,    95,    52,     3,    54,
      53,    54,    53,    53,    44,    45,    48,    52,   112,   112,
     112,    97,     3,     3,    54,    54,    54,    45,     3
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    60,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    62,    63,    64,    64,    65,    66,    67,    67,    68,
      69,    69,    69,    70,    71,    72,    72,    73,    74,    74,
      75,    75,    76,    77,    77,    78,    79,    79,    80,    80,
      81,    81,    82,    82,    83,    84,    84,    85,    85,    85,
      86,    86,    87,    87,    88,    89,    89,    89,    90,    91,
      91,    92,    92,    93,    94,    94,    95,    96,    96,    97,
      97,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    99,   100,   100,   101,   102,   103,   104,   105,
     106,   107,   107,   108,   109,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   111,   111,   111,   112,
     112,   112,   113,   113,   113,   114,   114,   114,   114,   114
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     4,     4,     3,     4,     3,     2,     3,
       2,     3,     1,     2,     1,     4,     1,     2,     1,     3,
       1,     1,     1,     3,     1,     2,     1,     8,     1,     3,
       2,     1,     3,     2,     1,     6,     2,     1,     7,     6,
       3,     2,     2,     1,     3,     3,     1,     4,     4,     1,
       2,     1,     7,     6,     3,     3,     1,     0,     2,     3,
       2,     2,     1,     3,     3,     1,     3,     8,     7,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     5,     5,     7,     5,     4,     4,     4,     2,
       2,    10,     8,     8,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     4,     1,     1,     3,     4,     1,     4,     1,     3,
       1,     0,     3,     3,     3,     6,     6,     8,     8,     8
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
  case 2: /* Program: TypeDeclBlock ClassDeclBlock GDeclBlock FuncDefBlock MainBlock  */
#line 42 "parser.y"
                                                                            {}
#line 1575 "y.tab.c"
    break;

  case 3: /* Program: TypeDeclBlock ClassDeclBlock GDeclBlock MainBlock  */
#line 43 "parser.y"
                                                                            {}
#line 1581 "y.tab.c"
    break;

  case 4: /* Program: ClassDeclBlock GDeclBlock FuncDefBlock MainBlock  */
#line 44 "parser.y"
                                                                            {}
#line 1587 "y.tab.c"
    break;

  case 5: /* Program: ClassDeclBlock GDeclBlock MainBlock  */
#line 45 "parser.y"
                                                                            {}
#line 1593 "y.tab.c"
    break;

  case 6: /* Program: TypeDeclBlock GDeclBlock FuncDefBlock MainBlock  */
#line 46 "parser.y"
                                                                            {}
#line 1599 "y.tab.c"
    break;

  case 7: /* Program: TypeDeclBlock GDeclBlock MainBlock  */
#line 47 "parser.y"
                                                                            {}
#line 1605 "y.tab.c"
    break;

  case 8: /* Program: TypeDeclBlock MainBlock  */
#line 48 "parser.y"
                                                                            {}
#line 1611 "y.tab.c"
    break;

  case 9: /* Program: GDeclBlock FuncDefBlock MainBlock  */
#line 49 "parser.y"
                                                                            {}
#line 1617 "y.tab.c"
    break;

  case 10: /* Program: GDeclBlock MainBlock  */
#line 50 "parser.y"
                                                                            {}
#line 1623 "y.tab.c"
    break;

  case 11: /* TypeDeclBlock: TypeDeclBlockInit TypeDeclList ENDTYPE  */
#line 55 "parser.y"
                                                             {}
#line 1629 "y.tab.c"
    break;

  case 12: /* TypeDeclBlockInit: TYPE  */
#line 57 "parser.y"
                            { initializeTypeTable (); }
#line 1635 "y.tab.c"
    break;

  case 13: /* TypeDeclList: TypeDeclList TypeStmt  */
#line 59 "parser.y"
                                                {}
#line 1641 "y.tab.c"
    break;

  case 14: /* TypeDeclList: TypeStmt  */
#line 60 "parser.y"
                                                {}
#line 1647 "y.tab.c"
    break;

  case 15: /* TypeStmt: TypeName '{' FieldDeclList '}'  */
#line 62 "parser.y"
                                                      {}
#line 1653 "y.tab.c"
    break;

  case 16: /* TypeName: ID  */
#line 64 "parser.y"
                            { addTypeEntry ((yyvsp[0].node)->varname); (yyval.node) = (yyvsp[0].node); }
#line 1659 "y.tab.c"
    break;

  case 17: /* FieldDeclList: FieldDeclList FieldDecl  */
#line 66 "parser.y"
                                                {}
#line 1665 "y.tab.c"
    break;

  case 18: /* FieldDeclList: FieldDecl  */
#line 67 "parser.y"
                                                {}
#line 1671 "y.tab.c"
    break;

  case 19: /* FieldDecl: Type ID ENDSTMT  */
#line 69 "parser.y"
                                        { (yyval.node) = makeFieldDeclNode ((yyvsp[-1].node)->varname, (yyvsp[-2].node)->datatype, (yyvsp[-2].node)->classtype); addField ((yyval.node)); }
#line 1677 "y.tab.c"
    break;

  case 20: /* Type: INT  */
#line 71 "parser.y"
                            { (yyval.node) = makeTypeNode ("INT"); }
#line 1683 "y.tab.c"
    break;

  case 21: /* Type: STR  */
#line 72 "parser.y"
                            { (yyval.node) = makeTypeNode ("STR"); }
#line 1689 "y.tab.c"
    break;

  case 22: /* Type: ID  */
#line 73 "parser.y"
                            { (yyval.node) = getClassNode ((yyvsp[0].node)->varname) ? makeClassTypeNode ((yyvsp[0].node)->varname) : makeTypeNode ((yyvsp[0].node)->varname); }
#line 1695 "y.tab.c"
    break;

  case 23: /* ClassDeclBlock: ClassDeclBlockInit ClassDeclList ENDCLASS  */
#line 77 "parser.y"
                                                                 {}
#line 1701 "y.tab.c"
    break;

  case 24: /* ClassDeclBlockInit: CLASS  */
#line 80 "parser.y"
                    {
                        registerInit ();
                        FILE *outfile = fopen ("code-o.xsm", "w");
                        headerGenerator (outfile);
                        fclose (outfile);
                    }
#line 1712 "y.tab.c"
    break;

  case 25: /* ClassDeclList: ClassDecl ClassDeclList  */
#line 87 "parser.y"
                                            {}
#line 1718 "y.tab.c"
    break;

  case 26: /* ClassDeclList: ClassDecl  */
#line 88 "parser.y"
                                            {}
#line 1724 "y.tab.c"
    break;

  case 27: /* ClassDecl: ClassName '{' DECL MemberDeclList MethodDeclList ENDDECL MethodDefList '}'  */
#line 90 "parser.y"
                                                                                                 {}
#line 1730 "y.tab.c"
    break;

  case 28: /* ClassName: ID  */
#line 92 "parser.y"
                                    { initializeLTable (); addClassEntry ((yyvsp[0].node)->varname, NULL); }
#line 1736 "y.tab.c"
    break;

  case 29: /* ClassName: ID EXTENDS ID  */
#line 93 "parser.y"
                                    {}
#line 1742 "y.tab.c"
    break;

  case 30: /* MemberDeclList: MemberDeclList MemberDecl  */
#line 95 "parser.y"
                                                {}
#line 1748 "y.tab.c"
    break;

  case 31: /* MemberDeclList: MemberDecl  */
#line 96 "parser.y"
                                                {}
#line 1754 "y.tab.c"
    break;

  case 32: /* MemberDecl: Type ID ENDSTMT  */
#line 98 "parser.y"
                                    { (yyval.node) = makeFieldDeclNode ((yyvsp[-1].node)->varname, (yyvsp[-2].node)->datatype, (yyvsp[-2].node)->classtype); addMember ((yyval.node)); }
#line 1760 "y.tab.c"
    break;

  case 33: /* MethodDeclList: MethodDeclList MethodDecl  */
#line 100 "parser.y"
                                                {}
#line 1766 "y.tab.c"
    break;

  case 34: /* MethodDeclList: MethodDecl  */
#line 101 "parser.y"
                                                {}
#line 1772 "y.tab.c"
    break;

  case 35: /* MethodDecl: Type ID '(' ParamList ')' ENDSTMT  */
#line 104 "parser.y"
                { 
                    if ((yyvsp[-5].node)->nodetype == CLASSTYPE_NODE) {
                        printf ("ERROR : method : %s return type cannot be class\n", (yyvsp[-4].node)->varname);
                        printf ("Line : %d\n", yylineno);
                        exit (1);
                    }
                    (yyval.node) = makeMethodDeclNode ((yyvsp[-4].node)->varname, (yyvsp[-5].node)->datatype, NULL, (yyvsp[-2].node)); 

                    addMethod ((yyval.node));
                }
#line 1787 "y.tab.c"
    break;

  case 36: /* MethodDefList: MethodDefList MethodDef  */
#line 115 "parser.y"
                                                {}
#line 1793 "y.tab.c"
    break;

  case 37: /* MethodDefList: MethodDef  */
#line 116 "parser.y"
                                                {}
#line 1799 "y.tab.c"
    break;

  case 38: /* MethodDef: Type ID ParamBlock '{' LDeclBlock FuncBody '}'  */
#line 119 "parser.y"
                { 
                    if (matchParameters (getMethod((yyvsp[-5].node)->varname)->param, (yyvsp[-4].node)) == false) {
                        printf ("ERROR: trying to define an undeclared method\n");
                        printf ("Line : %d\n", yylineno);
                        exit (1);
                    }

                    (yyval.node) = makeMethodDefNode ((yyvsp[-5].node)->varname, (yyvsp[-6].node)->datatype, (yyvsp[-4].node), (yyvsp[-1].node)); 

                    FILE *outfile = fopen ("code-o.xsm", "a");
                    codeGenerator (outfile, (yyval.node));
                    fclose (outfile);

                    initializeLTable ();
                }
#line 1819 "y.tab.c"
    break;

  case 39: /* MethodDef: Type ID ParamBlock '{' FuncBody '}'  */
#line 135 "parser.y"
                { 
                    if (matchParameters (getMethod((yyvsp[-4].node)->varname)->param, (yyvsp[-3].node)) == false) {
                        printf ("ERROR: trying to define an undeclared method\n");
                        printf ("Line : %d\n", yylineno);
                        exit (1);
                    }

                    (yyval.node) = makeMethodDefNode ((yyvsp[-4].node)->varname, (yyvsp[-5].node)->datatype, (yyvsp[-3].node), (yyvsp[-1].node)); 

                    FILE *outfile = fopen ("code-o.xsm", "a");
                    codeGenerator (outfile, (yyval.node));
                    fclose (outfile);

                    initializeLTable ();
                }
#line 1839 "y.tab.c"
    break;

  case 40: /* GDeclBlock: DECL GDeclList ENDDECL  */
#line 153 "parser.y"
                                                { initializeGTable (); declareGVariables ((yyvsp[-1].node)); initializeLTable (); }
#line 1845 "y.tab.c"
    break;

  case 41: /* GDeclBlock: DECL ENDDECL  */
#line 154 "parser.y"
                                                { initializeLTable (); }
#line 1851 "y.tab.c"
    break;

  case 42: /* GDeclList: GDeclList GDecl  */
#line 156 "parser.y"
                                                { TreeNode *current = (yyvsp[-1].node); while (current->left) current = current->left; current->left = (yyvsp[0].node); (yyval.node) = (yyvsp[-1].node); }
#line 1857 "y.tab.c"
    break;

  case 43: /* GDeclList: GDecl  */
#line 157 "parser.y"
                                                { (yyval.node) = (yyvsp[0].node); }
#line 1863 "y.tab.c"
    break;

  case 44: /* GDecl: Type GVarList ENDSTMT  */
#line 159 "parser.y"
                                                { (yyval.node) = makeDeclarationNode ((yyvsp[-2].node)->datatype, (yyvsp[-2].node)->classtype, NULL, (yyvsp[-1].node)); }
#line 1869 "y.tab.c"
    break;

  case 45: /* GVarList: GVarList ',' GIdentifierDecl  */
#line 161 "parser.y"
                                                { TreeNode *current = (yyvsp[-2].node); while (current->left) current = current->left; current->left = (yyvsp[0].node); (yyval.node) = (yyvsp[-2].node); }
#line 1875 "y.tab.c"
    break;

  case 46: /* GVarList: GIdentifierDecl  */
#line 162 "parser.y"
                                                { (yyval.node) = (yyvsp[0].node); }
#line 1881 "y.tab.c"
    break;

  case 47: /* GIdentifierDecl: ID '[' NUM ']'  */
#line 164 "parser.y"
                                                { (yyval.node) = makeArrayDeclNode ((yyvsp[-3].node)->varname, (yyvsp[-1].node)->varvalue); }
#line 1887 "y.tab.c"
    break;

  case 48: /* GIdentifierDecl: ID '(' ParamList ')'  */
#line 165 "parser.y"
                                                { (yyval.node) = makeFunctionDeclNode ((yyvsp[-3].node)->varname, NULL, (yyvsp[-1].node)); }
#line 1893 "y.tab.c"
    break;

  case 49: /* GIdentifierDecl: ID  */
#line 166 "parser.y"
                                                { (yyval.node) = (yyvsp[0].node); }
#line 1899 "y.tab.c"
    break;

  case 50: /* FuncDefBlock: FuncDefBlock FuncDef  */
#line 170 "parser.y"
                                        {}
#line 1905 "y.tab.c"
    break;

  case 51: /* FuncDefBlock: FuncDef  */
#line 171 "parser.y"
                                        {}
#line 1911 "y.tab.c"
    break;

  case 52: /* FuncDef: Type ID ParamBlock '{' LDeclBlock FuncBody '}'  */
#line 174 "parser.y"
                {
                    if (matchParameters (getGVariable((yyvsp[-5].node)->varname)->param, (yyvsp[-4].node)) == false) {
                        printf ("ERROR: trying to define an undeclared function\n");
                        printf ("Line : %d\n", yylineno);
                        exit (1);
                    }

                    FILE *outfile = fopen ("code-o.xsm", "a");
                    codeGenerator (outfile, (yyval.node));
                    fclose (outfile);

                    initializeLTable ();
                }
#line 1929 "y.tab.c"
    break;

  case 53: /* FuncDef: Type ID ParamBlock '{' FuncBody '}'  */
#line 188 "parser.y"
                {
                    if (matchParameters (getGVariable((yyval.node)->varname)->param, (yyvsp[-3].node)) == false) {
                        printf ("ERROR: trying to define an undeclared function\n");
                        printf ("Line : %d\n", yylineno);
                        exit (1);
                    }

                    FILE *outfile = fopen ("code-o.xsm", "a");
                    codeGenerator (outfile, (yyval.node));
                    fclose (outfile);

                    initializeLTable ();
                }
#line 1947 "y.tab.c"
    break;

  case 54: /* ParamBlock: '(' ParamList ')'  */
#line 202 "parser.y"
                                        { declareLParameters ((yyvsp[-1].node)); (yyval.node) = (yyvsp[-1].node); }
#line 1953 "y.tab.c"
    break;

  case 55: /* ParamList: ParamList ',' Param  */
#line 204 "parser.y"
                                        { TreeNode* current = (yyvsp[-2].node); while (current->left) current = current->left; current->left = (yyvsp[0].node); (yyval.node) = (yyvsp[-2].node); }
#line 1959 "y.tab.c"
    break;

  case 56: /* ParamList: Param  */
#line 205 "parser.y"
                                        { (yyval.node) = (yyvsp[0].node); }
#line 1965 "y.tab.c"
    break;

  case 57: /* ParamList: %empty  */
#line 206 "parser.y"
                                        { (yyval.node) = NULL; }
#line 1971 "y.tab.c"
    break;

  case 58: /* Param: Type ID  */
#line 208 "parser.y"
                            { (yyval.node) = makeParameterNode ((yyvsp[-1].node)->datatype, (yyvsp[0].node)->varname); }
#line 1977 "y.tab.c"
    break;

  case 59: /* LDeclBlock: DECL LDeclList ENDDECL  */
#line 210 "parser.y"
                                             { declareLVariables ((yyvsp[-1].node)); (yyval.node) = (yyvsp[-1].node); }
#line 1983 "y.tab.c"
    break;

  case 60: /* LDeclBlock: DECL ENDDECL  */
#line 211 "parser.y"
                                             { (yyval.node) = NULL; }
#line 1989 "y.tab.c"
    break;

  case 61: /* LDeclList: LDeclList LDecl  */
#line 213 "parser.y"
                                    { TreeNode *current = (yyvsp[-1].node); while (current->left) current = current->left; current->left = (yyvsp[0].node); (yyval.node) = (yyvsp[-1].node); }
#line 1995 "y.tab.c"
    break;

  case 62: /* LDeclList: LDecl  */
#line 214 "parser.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 2001 "y.tab.c"
    break;

  case 63: /* LDecl: Type LVarList ENDSTMT  */
#line 217 "parser.y"
                { 
                    if ((yyvsp[-2].node)->classtype) { printf ("ERROR : class-type variables cannot be declared locally\n"); printf ("Line : %d\n", yylineno); exit (1); }
                    (yyval.node) = makeDeclarationNode ((yyvsp[-2].node)->datatype, NULL, NULL, (yyvsp[-1].node)); 
                }
#line 2010 "y.tab.c"
    break;

  case 64: /* LVarList: LVarList ',' ID  */
#line 222 "parser.y"
                                    { TreeNode *current = (yyvsp[-2].node); while (current->left) current = current->left; current->left = (yyvsp[0].node); (yyval.node) = (yyvsp[-2].node); }
#line 2016 "y.tab.c"
    break;

  case 65: /* LVarList: ID  */
#line 223 "parser.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 2022 "y.tab.c"
    break;

  case 66: /* FuncBody: START StmtList END  */
#line 225 "parser.y"
                                        { (yyval.node) = (yyvsp[-1].node); }
#line 2028 "y.tab.c"
    break;

  case 67: /* MainBlock: INT MAIN '(' ')' '{' LDeclBlock FuncBody '}'  */
#line 230 "parser.y"
            {
                setStaticBinding (NULL, -3);

                FILE *outfile = fopen ("code-o.xsm", "a");
                fprintf (outfile, "MAIN:\n");
                stackPointerGenerator (outfile);
                methodInitGenerator (outfile);

                LSymtableNode* current = t.head;
                while (current) {
                    fprintf (outfile, "PUSH R0\n");
                    current = current->next;
                }

                codeGenerator (outfile, (yyvsp[-1].node));
                fprintf (outfile, "INT 10\n");
                fclose (outfile);
            }
#line 2051 "y.tab.c"
    break;

  case 68: /* MainBlock: INT MAIN '(' ')' '{' FuncBody '}'  */
#line 249 "parser.y"
            {
                FILE *outfile = fopen ("code-o.xsm", "a");
                fprintf (outfile, "MAIN:\n");
                stackPointerGenerator (outfile);
                methodInitGenerator (outfile);

                codeGenerator (outfile, (yyvsp[-1].node));
                fprintf (outfile, "INT 10\n");
                
                fclose (outfile);
            }
#line 2067 "y.tab.c"
    break;

  case 69: /* StmtList: StmtList Stmt  */
#line 261 "parser.y"
                            { (yyval.node) = makeConnectorNode ((yyvsp[-1].node), (yyvsp[0].node)); }
#line 2073 "y.tab.c"
    break;

  case 70: /* StmtList: Stmt  */
#line 262 "parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 2079 "y.tab.c"
    break;

  case 71: /* Stmt: OutStmt  */
#line 264 "parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 2085 "y.tab.c"
    break;

  case 72: /* Stmt: InStmt  */
#line 265 "parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 2091 "y.tab.c"
    break;

  case 73: /* Stmt: AssgnStmt  */
#line 266 "parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 2097 "y.tab.c"
    break;

  case 74: /* Stmt: InitStmt  */
#line 267 "parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 2103 "y.tab.c"
    break;

  case 75: /* Stmt: FreeStmt  */
#line 268 "parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 2109 "y.tab.c"
    break;

  case 76: /* Stmt: DeleteStmt  */
#line 269 "parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 2115 "y.tab.c"
    break;

  case 77: /* Stmt: IfStmt  */
#line 270 "parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 2121 "y.tab.c"
    break;

  case 78: /* Stmt: WhileStmt  */
#line 271 "parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 2127 "y.tab.c"
    break;

  case 79: /* Stmt: BreakStmt  */
#line 272 "parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 2133 "y.tab.c"
    break;

  case 80: /* Stmt: ContinueStmt  */
#line 273 "parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 2139 "y.tab.c"
    break;

  case 81: /* Stmt: ReturnStmt  */
#line 274 "parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 2145 "y.tab.c"
    break;

  case 82: /* InStmt: READ '(' Identifier ')' ENDSTMT  */
#line 276 "parser.y"
                                                    { (yyvsp[-2].node)->datatype = getVariableType ((yyvsp[-2].node)->varname); (yyval.node) = makeReadNode ((yyvsp[-2].node)); }
#line 2151 "y.tab.c"
    break;

  case 83: /* OutStmt: WRITE '(' Expr ')' ENDSTMT  */
#line 277 "parser.y"
                                                    { (yyval.node) = makeWriteNode ((yyvsp[-2].node)); }
#line 2157 "y.tab.c"
    break;

  case 84: /* OutStmt: WRITE '(' '"' ID '"' ')' ENDSTMT  */
#line 278 "parser.y"
                                                    { (yyvsp[-3].node)->nodetype = STRING_NODE; (yyval.node) = makeWriteNode ((yyvsp[-3].node)); }
#line 2163 "y.tab.c"
    break;

  case 85: /* FreeStmt: FREE '(' ID ')' ENDSTMT  */
#line 281 "parser.y"
                                                    { (yyval.node) = makeFreeNode ((yyvsp[-2].node)); }
#line 2169 "y.tab.c"
    break;

  case 86: /* InitStmt: INIT '(' ')' ENDSTMT  */
#line 282 "parser.y"
                                                    { (yyval.node) = makeInitNode (); }
#line 2175 "y.tab.c"
    break;

  case 87: /* DeleteStmt: DELETE '(' ID ')'  */
#line 285 "parser.y"
                                                    { (yyval.node) = makeDeleteNode ((yyvsp[-1].node)); }
#line 2181 "y.tab.c"
    break;

  case 88: /* AssgnStmt: Identifier EQL Expr ENDSTMT  */
#line 287 "parser.y"
                                                    { (yyval.node) = makeOperatorNode ("=", (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 2187 "y.tab.c"
    break;

  case 89: /* BreakStmt: BREAK ENDSTMT  */
#line 289 "parser.y"
                                        { (yyval.node) = makeBreakNode (); }
#line 2193 "y.tab.c"
    break;

  case 90: /* ContinueStmt: CONTINUE ENDSTMT  */
#line 290 "parser.y"
                                        { (yyval.node) = makeContinueNode (); }
#line 2199 "y.tab.c"
    break;

  case 91: /* IfStmt: IF '(' Expr ')' THEN StmtList ELSE StmtList ENDIF ENDSTMT  */
#line 292 "parser.y"
                                                                                { (yyval.node) = makeIfElseNode ((yyvsp[-7].node), (yyvsp[-4].node), (yyvsp[-2].node)); }
#line 2205 "y.tab.c"
    break;

  case 92: /* IfStmt: IF '(' Expr ')' THEN StmtList ENDIF ENDSTMT  */
#line 293 "parser.y"
                                                                                { (yyval.node) = makeIfNode ((yyvsp[-5].node), (yyvsp[-2].node)); }
#line 2211 "y.tab.c"
    break;

  case 93: /* WhileStmt: WHILE '(' Expr ')' DO StmtList ENDWHILE ENDSTMT  */
#line 295 "parser.y"
                                                                                { (yyval.node) = makeWhileNode ((yyvsp[-5].node), (yyvsp[-2].node)); }
#line 2217 "y.tab.c"
    break;

  case 94: /* ReturnStmt: RETURN Expr ENDSTMT  */
#line 297 "parser.y"
                                         { (yyval.node) = makeReturnNode ((yyvsp[-1].node)); }
#line 2223 "y.tab.c"
    break;

  case 95: /* Expr: '(' Expr ')'  */
#line 299 "parser.y"
                                { (yyval.node) = (yyvsp[-1].node); }
#line 2229 "y.tab.c"
    break;

  case 96: /* Expr: Expr ADD Expr  */
#line 300 "parser.y"
                                { (yyval.node) = makeOperatorNode ("+", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2235 "y.tab.c"
    break;

  case 97: /* Expr: Expr SUB Expr  */
#line 301 "parser.y"
                                { (yyval.node) = makeOperatorNode ("-", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2241 "y.tab.c"
    break;

  case 98: /* Expr: Expr MUL Expr  */
#line 302 "parser.y"
                                { (yyval.node) = makeOperatorNode ("*", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2247 "y.tab.c"
    break;

  case 99: /* Expr: Expr DIV Expr  */
#line 303 "parser.y"
                                { (yyval.node) = makeOperatorNode ("/", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2253 "y.tab.c"
    break;

  case 100: /* Expr: Expr LT Expr  */
#line 304 "parser.y"
                                { (yyval.node) = makeOperatorNode ("<", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2259 "y.tab.c"
    break;

  case 101: /* Expr: Expr GT Expr  */
#line 305 "parser.y"
                                { (yyval.node) = makeOperatorNode (">", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2265 "y.tab.c"
    break;

  case 102: /* Expr: Expr EQ Expr  */
#line 306 "parser.y"
                                { (yyval.node) = makeOperatorNode ("==", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2271 "y.tab.c"
    break;

  case 103: /* Expr: Expr LE Expr  */
#line 307 "parser.y"
                                { (yyval.node) = makeOperatorNode ("<=", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2277 "y.tab.c"
    break;

  case 104: /* Expr: Expr GE Expr  */
#line 308 "parser.y"
                                { (yyval.node) = makeOperatorNode (">=", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2283 "y.tab.c"
    break;

  case 105: /* Expr: Expr NE Expr  */
#line 309 "parser.y"
                                { (yyval.node) = makeOperatorNode ("!=", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2289 "y.tab.c"
    break;

  case 106: /* Expr: Expr AND Expr  */
#line 310 "parser.y"
                                { (yyval.node) = makeOperatorNode ("&&", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2295 "y.tab.c"
    break;

  case 107: /* Expr: Expr OR Expr  */
#line 311 "parser.y"
                                { (yyval.node) = makeOperatorNode ("||", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2301 "y.tab.c"
    break;

  case 108: /* Expr: Expr NOT Expr  */
#line 312 "parser.y"
                                { (yyval.node) = makeOperatorNode ("~", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2307 "y.tab.c"
    break;

  case 109: /* Expr: Identifier  */
#line 313 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2313 "y.tab.c"
    break;

  case 110: /* Expr: FieldFunc  */
#line 314 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2319 "y.tab.c"
    break;

  case 111: /* Expr: ID '(' ArgsList ')'  */
#line 315 "parser.y"
                                { (yyvsp[-3].node)->datatype = getVariableType ((yyvsp[-3].node)->varname); (yyval.node) = makeFunctionCallNode ((yyvsp[-3].node)->varname, (yyvsp[-1].node)); }
#line 2325 "y.tab.c"
    break;

  case 112: /* Expr: NUM  */
#line 316 "parser.y"
                                { (yyvsp[0].node)->datatype = getTypeNode ("INT"); (yyval.node) = (yyvsp[0].node); }
#line 2331 "y.tab.c"
    break;

  case 113: /* Expr: NULLL  */
#line 317 "parser.y"
                                { (yyval.node) = makeNullNode (); }
#line 2337 "y.tab.c"
    break;

  case 114: /* Expr: ALLOC '(' ')'  */
#line 318 "parser.y"
                                { (yyval.node) = makeAllocNode (); }
#line 2343 "y.tab.c"
    break;

  case 115: /* Expr: NEW '(' ID ')'  */
#line 319 "parser.y"
                                { (yyval.node) = makeNewNode ((yyvsp[-1].node)); }
#line 2349 "y.tab.c"
    break;

  case 116: /* Identifier: ID  */
#line 322 "parser.y"
                                    { (yyvsp[0].node)->datatype = getVariableType ((yyvsp[0].node)->varname); (yyval.node) = (yyvsp[0].node); }
#line 2355 "y.tab.c"
    break;

  case 117: /* Identifier: ID '[' Expr ']'  */
#line 323 "parser.y"
                                    { (yyval.node) = makeArrayNode ((yyvsp[-3].node)->varname, (yyvsp[-1].node)); }
#line 2361 "y.tab.c"
    break;

  case 118: /* Identifier: Field  */
#line 324 "parser.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 2367 "y.tab.c"
    break;

  case 119: /* ArgsList: ArgsList ',' Expr  */
#line 326 "parser.y"
                                    { (yyval.node) = makeConnectorNode ((yyvsp[-2].node), (yyvsp[0].node)); }
#line 2373 "y.tab.c"
    break;

  case 120: /* ArgsList: Expr  */
#line 327 "parser.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 2379 "y.tab.c"
    break;

  case 121: /* ArgsList: %empty  */
#line 328 "parser.y"
                                    { (yyval.node) = NULL; }
#line 2385 "y.tab.c"
    break;

  case 122: /* Field: Field '.' ID  */
#line 331 "parser.y"
            {
                TreeNode* current = (yyvsp[-2].node); 
                while (current->left) current = current->left;
                
                if ((yyvsp[-2].node)->classtype == NULL) {
                    current->left = makeFieldNode ((yyvsp[0].node)->varname, getField((yyvsp[0].node)->varname, (yyvsp[-2].node)->datatype)->type, getField ((yyvsp[0].node)->varname, (yyvsp[-2].node)->datatype)->fieldIndex);
                    (yyvsp[-2].node)->datatype = current->left->datatype; 
                }
                else {
                    printf ("ERROR : illegal access to member %s\n", (yyvsp[0].node)->varname);
                    printf ("Line : %d\n", yylineno);
                    exit (1);
                }
                
                (yyval.node) = (yyvsp[-2].node); 
            }
#line 2406 "y.tab.c"
    break;

  case 123: /* Field: ID '.' ID  */
#line 348 "parser.y"
            { 
                (yyvsp[-2].node)->datatype = getVariableType ((yyvsp[-2].node)->varname); (yyvsp[-2].node)->classtype = getVariableClassType ((yyvsp[-2].node)->varname); 
                
                if ((yyvsp[-2].node)->classtype == NULL) {
                    (yyvsp[-2].node)->left = makeFieldNode ((yyvsp[0].node)->varname, getField ((yyvsp[0].node)->varname, (yyvsp[-2].node)->datatype)->type, getField ((yyvsp[0].node)->varname, (yyvsp[-2].node)->datatype)->fieldIndex);
                    (yyvsp[-2].node)->datatype = (yyvsp[-2].node)->left->datatype;
                }
                else {
                    printf ("ERROR : illegal access to method %s\n", (yyvsp[0].node)->varname);
                    printf ("Line : %d\n", yylineno);
                    exit (1);
                }

                (yyval.node) = (yyvsp[-2].node);
            }
#line 2426 "y.tab.c"
    break;

  case 124: /* Field: SELF '.' ID  */
#line 364 "parser.y"
            {
                if (currentClass == NULL) {
                    printf ("ERROR : undefined reference to 'self'\n");
                    printf ("Line : %d\n", yylineno);
                    exit (1);
                }

                (yyvsp[-2].node)->left = makeFieldNode ((yyvsp[0].node)->varname, getMember((yyvsp[0].node)->varname)->type, getMember((yyvsp[0].node)->varname)->fieldIndex);
                (yyvsp[-2].node)->datatype = (yyvsp[-2].node)->left->datatype; (yyvsp[-2].node)->classtype = getMember((yyvsp[0].node)->varname)->classtype;
                (yyval.node) = (yyvsp[-2].node);
            }
#line 2442 "y.tab.c"
    break;

  case 125: /* FieldFunc: ID '.' ID '(' ArgsList ')'  */
#line 377 "parser.y"
            {
                (yyvsp[-5].node)->classtype = getVariableClassType ((yyvsp[-5].node)->varname);
                if ((yyvsp[-5].node)->classtype == NULL) { 
                    printf ("ERROR : '%s' does not contain methods\n", (yyvsp[-5].node)->varname); 
                    printf ("Line : %d\n", yylineno); exit (1); 
                }

                (yyval.node) = makeMethodCallNode ((yyvsp[-3].node)->varname, (yyvsp[-5].node), (yyvsp[-1].node)); 
                (yyval.node)->classtype = (yyvsp[-5].node)->classtype; (yyval.node)->datatype = getMethodFromClass ((yyvsp[-3].node)->varname, (yyvsp[-5].node)->classtype)->type;
            }
#line 2457 "y.tab.c"
    break;

  case 126: /* FieldFunc: SELF '.' ID '(' ArgsList ')'  */
#line 388 "parser.y"
            {
                if (currentClass == NULL) { 
                    printf ("ERROR : undefined reference to 'self'\n"); 
                    printf ("Line : %d\n", yylineno);
                    exit (1); 
                }

                (yyval.node) = makeMethodCallNode ((yyvsp[-3].node)->varname, (yyvsp[-5].node), (yyvsp[-1].node)); 
                (yyval.node)->classtype = currentClass; (yyval.node)->datatype = getMethod ((yyvsp[-3].node)->varname)->type;
            }
#line 2472 "y.tab.c"
    break;

  case 127: /* FieldFunc: SELF '.' ID '.' ID '(' ArgsList ')'  */
#line 399 "parser.y"
            { 
                if (currentClass == NULL) {
                    printf ("ERROR : undefined reference to 'self'\n");
                    printf ("Line : %d\n", yylineno);
                    exit (1);
                }

                (yyvsp[-7].node)->left = makeFieldNode ((yyvsp[-5].node)->varname, getMember((yyvsp[-5].node)->varname)->type, getMember((yyvsp[-5].node)->varname)->fieldIndex);
                (yyvsp[-7].node)->classtype = getMember((yyvsp[-5].node)->varname)->classtype; 

                if ((yyvsp[-7].node)->classtype == NULL) { 
                    printf ("ERROR : '%s' does not contain methods\n", (yyvsp[-5].node)->varname); 
                    printf ("Line : %d\n", yylineno); exit (1); 
                }
                
                (yyval.node) = makeMethodCallNode ((yyvsp[-3].node)->varname, (yyvsp[-7].node), (yyvsp[-1].node));
                (yyval.node)->classtype = (yyvsp[-7].node)->classtype; (yyval.node)->datatype = getMethodFromClass ((yyvsp[-3].node)->varname, (yyvsp[-7].node)->classtype)->type;
            }
#line 2495 "y.tab.c"
    break;

  case 128: /* FieldFunc: ID '.' ID '.' ID '(' ArgsList ')'  */
#line 418 "parser.y"
            {
                printf ("ERROR : illegal access to method %s\n", (yyvsp[-3].node)->varname);
                printf ("Line : %d\n", yylineno);
                exit (1);
            }
#line 2505 "y.tab.c"
    break;

  case 129: /* FieldFunc: Field '.' ID '.' ID '(' ArgsList ')'  */
#line 423 "parser.y"
                                                   {
                printf ("ERROR : illegal access to method %s\n", (yyvsp[-3].node)->varname);
                printf ("Line : %d\n", yylineno);
                exit (1);
            }
#line 2515 "y.tab.c"
    break;


#line 2519 "y.tab.c"

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

#line 429 "parser.y"
 /* -------------------------------------------------------------------------------------------------------------------------------------- */

void yyerror(char const *s) {
    printf("yyerror %s: %s\n",s, yytext);
    printf ("Line : %d\n", yylineno);
    exit (1);
}

int main (int argc, char const *argv []) {
    if (argc > 1) {
        FILE* inp = fopen (argv[1], "r");
        if (inp) yyin = inp;
    }

    yyparse ();

    return 0;
}
