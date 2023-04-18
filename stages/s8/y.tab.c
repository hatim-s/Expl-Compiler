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
    SID = 268,                     /* SID  */
    INT = 269,                     /* INT  */
    STR = 270,                     /* STR  */
    NULLL = 271,                   /* NULLL  */
    START = 272,                   /* START  */
    END = 273,                     /* END  */
    DECL = 274,                    /* DECL  */
    ENDDECL = 275,                 /* ENDDECL  */
    TYPE = 276,                    /* TYPE  */
    ENDTYPE = 277,                 /* ENDTYPE  */
    CLASS = 278,                   /* CLASS  */
    ENDCLASS = 279,                /* ENDCLASS  */
    MAIN = 280,                    /* MAIN  */
    RETURN = 281,                  /* RETURN  */
    EXTENDS = 282,                 /* EXTENDS  */
    SELF = 283,                    /* SELF  */
    ADD = 284,                     /* ADD  */
    SUB = 285,                     /* SUB  */
    MUL = 286,                     /* MUL  */
    DIV = 287,                     /* DIV  */
    EQL = 288,                     /* EQL  */
    LT = 289,                      /* LT  */
    GT = 290,                      /* GT  */
    EQ = 291,                      /* EQ  */
    GE = 292,                      /* GE  */
    LE = 293,                      /* LE  */
    NE = 294,                      /* NE  */
    AND = 295,                     /* AND  */
    OR = 296,                      /* OR  */
    NOT = 297,                     /* NOT  */
    IF = 298,                      /* IF  */
    THEN = 299,                    /* THEN  */
    ELSE = 300,                    /* ELSE  */
    ENDIF = 301,                   /* ENDIF  */
    WHILE = 302,                   /* WHILE  */
    DO = 303,                      /* DO  */
    ENDWHILE = 304,                /* ENDWHILE  */
    BREAK = 305,                   /* BREAK  */
    CONTINUE = 306                 /* CONTINUE  */
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
#define SID 268
#define INT 269
#define STR 270
#define NULLL 271
#define START 272
#define END 273
#define DECL 274
#define ENDDECL 275
#define TYPE 276
#define ENDTYPE 277
#define CLASS 278
#define ENDCLASS 279
#define MAIN 280
#define RETURN 281
#define EXTENDS 282
#define SELF 283
#define ADD 284
#define SUB 285
#define MUL 286
#define DIV 287
#define EQL 288
#define LT 289
#define GT 290
#define EQ 291
#define GE 292
#define LE 293
#define NE 294
#define AND 295
#define OR 296
#define NOT 297
#define IF 298
#define THEN 299
#define ELSE 300
#define ENDIF 301
#define WHILE 302
#define DO 303
#define ENDWHILE 304
#define BREAK 305
#define CONTINUE 306

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 15 "parser.y"

    struct TreeNode *node;

#line 244 "y.tab.c"

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
  YYSYMBOL_SID = 13,                       /* SID  */
  YYSYMBOL_INT = 14,                       /* INT  */
  YYSYMBOL_STR = 15,                       /* STR  */
  YYSYMBOL_NULLL = 16,                     /* NULLL  */
  YYSYMBOL_START = 17,                     /* START  */
  YYSYMBOL_END = 18,                       /* END  */
  YYSYMBOL_DECL = 19,                      /* DECL  */
  YYSYMBOL_ENDDECL = 20,                   /* ENDDECL  */
  YYSYMBOL_TYPE = 21,                      /* TYPE  */
  YYSYMBOL_ENDTYPE = 22,                   /* ENDTYPE  */
  YYSYMBOL_CLASS = 23,                     /* CLASS  */
  YYSYMBOL_ENDCLASS = 24,                  /* ENDCLASS  */
  YYSYMBOL_MAIN = 25,                      /* MAIN  */
  YYSYMBOL_RETURN = 26,                    /* RETURN  */
  YYSYMBOL_EXTENDS = 27,                   /* EXTENDS  */
  YYSYMBOL_SELF = 28,                      /* SELF  */
  YYSYMBOL_ADD = 29,                       /* ADD  */
  YYSYMBOL_SUB = 30,                       /* SUB  */
  YYSYMBOL_MUL = 31,                       /* MUL  */
  YYSYMBOL_DIV = 32,                       /* DIV  */
  YYSYMBOL_EQL = 33,                       /* EQL  */
  YYSYMBOL_LT = 34,                        /* LT  */
  YYSYMBOL_GT = 35,                        /* GT  */
  YYSYMBOL_EQ = 36,                        /* EQ  */
  YYSYMBOL_GE = 37,                        /* GE  */
  YYSYMBOL_LE = 38,                        /* LE  */
  YYSYMBOL_NE = 39,                        /* NE  */
  YYSYMBOL_AND = 40,                       /* AND  */
  YYSYMBOL_OR = 41,                        /* OR  */
  YYSYMBOL_NOT = 42,                       /* NOT  */
  YYSYMBOL_IF = 43,                        /* IF  */
  YYSYMBOL_THEN = 44,                      /* THEN  */
  YYSYMBOL_ELSE = 45,                      /* ELSE  */
  YYSYMBOL_ENDIF = 46,                     /* ENDIF  */
  YYSYMBOL_WHILE = 47,                     /* WHILE  */
  YYSYMBOL_DO = 48,                        /* DO  */
  YYSYMBOL_ENDWHILE = 49,                  /* ENDWHILE  */
  YYSYMBOL_BREAK = 50,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 51,                  /* CONTINUE  */
  YYSYMBOL_52_ = 52,                       /* '{'  */
  YYSYMBOL_53_ = 53,                       /* '}'  */
  YYSYMBOL_54_ = 54,                       /* '('  */
  YYSYMBOL_55_ = 55,                       /* ')'  */
  YYSYMBOL_56_ = 56,                       /* ','  */
  YYSYMBOL_57_ = 57,                       /* '['  */
  YYSYMBOL_58_ = 58,                       /* ']'  */
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
  YYSYMBOL_DeleteStmt = 102,               /* DeleteStmt  */
  YYSYMBOL_AssgnStmt = 103,                /* AssgnStmt  */
  YYSYMBOL_BreakStmt = 104,                /* BreakStmt  */
  YYSYMBOL_ContinueStmt = 105,             /* ContinueStmt  */
  YYSYMBOL_IfStmt = 106,                   /* IfStmt  */
  YYSYMBOL_WhileStmt = 107,                /* WhileStmt  */
  YYSYMBOL_ReturnStmt = 108,               /* ReturnStmt  */
  YYSYMBOL_Expr = 109,                     /* Expr  */
  YYSYMBOL_Identifier = 110,               /* Identifier  */
  YYSYMBOL_ArgsList = 111,                 /* ArgsList  */
  YYSYMBOL_Field = 112,                    /* Field  */
  YYSYMBOL_FieldFunc = 113                 /* FieldFunc  */
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
#define YYLAST   505

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  54
/* YYNRULES -- Number of rules.  */
#define YYNRULES  131
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  310

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   306


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
      54,    55,     2,     2,    56,     2,    59,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    57,     2,    58,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    52,     2,    53,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    42,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    55,    57,    59,    60,    62,    64,    66,    67,    69,
      71,    72,    73,    77,    79,    87,    88,    90,    91,    92,
      94,    95,   101,   102,   104,   106,   107,   109,   122,   123,
     125,   148,   174,   175,   177,   178,   180,   182,   183,   185,
     186,   187,   191,   192,   194,   216,   239,   241,   242,   243,
     245,   247,   248,   250,   251,   253,   259,   260,   262,   266,
     285,   298,   299,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   312,   313,   314,   320,   324,   326,   328,
     329,   331,   332,   334,   336,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   363,   364,
     365,   367,   368,   369,   371,   388,   404,   417,   428,   439,
     458,   464
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
  "WRITE", "ALLOC", "FREE", "INIT", "NEW", "DELETE", "NUM", "ID", "SID",
  "INT", "STR", "NULLL", "START", "END", "DECL", "ENDDECL", "TYPE",
  "ENDTYPE", "CLASS", "ENDCLASS", "MAIN", "RETURN", "EXTENDS", "SELF",
  "ADD", "SUB", "MUL", "DIV", "EQL", "LT", "GT", "EQ", "GE", "LE", "NE",
  "AND", "OR", "NOT", "IF", "THEN", "ELSE", "ENDIF", "WHILE", "DO",
  "ENDWHILE", "BREAK", "CONTINUE", "'{'", "'}'", "'('", "')'", "','",
  "'['", "']'", "'.'", "$accept", "Program", "TypeDeclBlock",
  "TypeDeclBlockInit", "TypeDeclList", "TypeStmt", "TypeName",
  "FieldDeclList", "FieldDecl", "Type", "ClassDeclBlock",
  "ClassDeclBlockInit", "ClassDeclList", "ClassDecl", "ClassName",
  "MemberDeclList", "MemberDecl", "MethodDeclList", "MethodDecl",
  "MethodDefList", "MethodDef", "GDeclBlock", "GDeclList", "GDecl",
  "GVarList", "GIdentifierDecl", "FuncDefBlock", "FuncDef", "ParamBlock",
  "ParamList", "Param", "LDeclBlock", "LDeclList", "LDecl", "LVarList",
  "FuncBody", "MainBlock", "StmtList", "Stmt", "InStmt", "OutStmt",
  "FreeStmt", "DeleteStmt", "AssgnStmt", "BreakStmt", "ContinueStmt",
  "IfStmt", "WhileStmt", "ReturnStmt", "Expr", "Identifier", "ArgsList",
  "Field", "FieldFunc", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-217)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      74,   109,  -217,  -217,    15,    52,    30,    46,    73,   105,
    -217,  -217,  -217,  -217,    88,   149,  -217,  -217,   103,    46,
     105,  -217,  -217,    29,  -217,   101,   105,   130,   155,    73,
     143,   103,   179,   105,  -217,  -217,   -33,     1,  -217,  -217,
    -217,   147,   105,   105,  -217,  -217,  -217,   135,   105,  -217,
     191,  -217,  -217,   193,   167,  -217,  -217,   135,   212,  -217,
      88,   169,   105,  -217,  -217,    -3,  -217,   220,  -217,  -217,
     135,   135,   178,   222,    56,  -217,   204,  -217,   184,  -217,
    -217,  -217,   247,   248,   168,  -217,   195,  -217,    71,   137,
    -217,  -217,   135,  -217,   137,  -217,     7,   214,  -217,   202,
     135,   257,  -217,  -217,   275,   243,   259,   225,  -217,   259,
     233,  -217,   135,  -217,   135,   276,    62,  -217,   236,   237,
     239,   240,   244,   111,    24,   238,   252,   263,   316,   317,
     201,  -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,
    -217,  -217,   288,   264,  -217,   312,   269,  -217,   274,  -217,
     279,  -217,   110,    69,   167,  -217,  -217,     6,    97,   334,
     348,    24,   362,   330,   332,   333,  -217,   -11,  -217,  -217,
     329,    24,   299,  -217,   331,  -217,   377,    24,    24,  -217,
    -217,  -217,  -217,    24,   379,  -217,     4,  -217,  -217,  -217,
    -217,   403,  -217,   355,   353,   354,   341,   356,   357,   327,
    -217,   358,   373,   398,    24,   417,   418,   363,  -217,    24,
      24,    24,    24,    24,    24,    24,    24,    24,    24,    24,
      24,    24,   419,  -217,   385,   407,   313,  -217,  -217,   420,
    -217,   137,   430,   431,   432,   447,  -217,  -217,  -217,  -217,
     396,   429,   116,    10,    37,  -217,   273,   273,   438,   438,
     429,   429,   429,   429,   429,   429,   429,   429,   429,   393,
     409,   406,  -217,  -217,   259,   402,  -217,  -217,  -217,  -217,
    -217,  -217,    24,    24,   444,    24,   445,   469,   275,   275,
     433,  -217,   429,   134,   428,   185,   434,   435,   192,   221,
    -217,  -217,    24,  -217,    24,    24,   275,   480,   481,   190,
     210,   218,   249,  -217,  -217,  -217,  -217,  -217,   482,  -217
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    12,    24,     0,     0,     0,     0,     0,     0,
      22,    20,    21,    43,     0,     0,    45,     1,     0,     0,
       0,     8,    16,     0,    14,     0,     0,    30,     0,    26,
       0,    20,     0,     0,    53,    10,    51,     0,    48,    42,
      44,     0,     0,     0,     7,    11,    13,     0,     0,     5,
       0,    23,    25,     0,     0,    52,     9,    59,     0,    46,
       0,     0,     0,     3,     6,     0,    18,     0,     4,    31,
       0,    59,     0,     0,     0,    58,     0,    47,     0,     2,
      15,    17,     0,     0,     0,    33,     0,    36,     0,     0,
      60,    50,     0,    49,     0,    19,     0,     0,    32,     0,
       0,     0,    35,    56,     0,     0,     0,     0,    57,     0,
       0,    34,    59,    29,     0,     0,     0,    39,     0,     0,
       0,     0,     0,   118,     0,     0,     0,     0,     0,     0,
       0,    72,    74,    73,    76,    77,    75,    80,    81,    78,
      79,    82,     0,   120,    62,     0,     0,    64,     0,    55,
       0,    70,     0,     0,     0,    28,    38,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   112,   118,   113,   114,
       0,     0,     0,   109,   120,   110,     0,     0,     0,    89,
      90,    68,    71,     0,     0,    67,     0,    61,    63,    54,
      69,     0,    27,     0,     0,   113,     0,     0,     0,     0,
     125,     0,     0,     0,   123,     0,     0,     0,    94,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   126,     0,     0,     0,   124,    65,     0,
      37,     0,     0,     0,     0,     0,    87,   119,   115,   116,
       0,   122,     0,   125,   126,    95,    96,    97,    98,    99,
     100,   101,   102,   104,   103,   105,   106,   107,   108,   124,
       0,     0,    88,    66,     0,     0,    83,    85,    84,    86,
     117,   111,     0,   123,     0,   123,     0,     0,     0,     0,
       0,    41,   121,     0,     0,     0,     0,     0,     0,     0,
      40,   127,   123,   128,   123,   123,     0,     0,     0,     0,
       0,     0,     0,    92,    93,   130,   129,   131,     0,    91
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -217,  -217,  -217,  -217,  -217,   464,  -217,  -217,   425,     2,
     486,  -217,   463,  -217,  -217,  -217,   410,   411,   -72,   382,
     -97,   139,  -217,   478,  -217,   437,     5,   119,   344,   -58,
     408,   -88,  -217,   359,  -217,   -86,    -4,  -216,  -129,  -217,
    -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,   -79,
    -104,  -205,  -102,  -217
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,     5,     6,    23,    24,    25,    65,    66,    32,
       7,     8,    28,    29,    30,    84,    85,    86,    87,   116,
     117,     9,    15,    16,    37,    38,    33,    34,    72,    74,
      75,   106,   146,   147,   186,   107,    21,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   241,
     173,   242,   174,   175
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     142,   182,   143,    14,    59,    35,   109,   228,   110,    10,
     111,    11,    12,    88,   102,    17,    44,    14,   123,   156,
     148,    57,    49,   150,    58,    43,   142,   102,   143,    56,
     163,    48,   164,   165,   125,   166,   167,   168,    63,    64,
     169,    22,    22,   204,    68,   172,   161,    62,   205,    67,
      80,    45,   170,   194,   152,   143,   156,    60,    79,    73,
     229,   112,   288,   289,   273,     1,    18,    67,   283,   274,
     285,     1,    83,    73,    10,     3,    11,    12,   171,   196,
     302,    10,   199,    11,    12,    27,    83,   299,   101,   300,
     301,   275,   207,     1,    73,     2,   276,     3,   224,   225,
      36,   101,   115,   163,   226,   164,   165,   145,   166,   167,
     195,    91,    92,   169,    73,   155,   115,    10,   115,    31,
      12,    10,   192,    11,    12,   170,   103,    92,    41,    13,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   264,    20,   265,    26,    10,   145,    11,
      12,   171,    55,    47,   104,   115,   105,    50,    42,   182,
     182,    10,    55,    11,    12,   191,    92,    55,   161,    39,
     162,   271,   272,   182,   142,   142,   143,   143,   280,    51,
      10,    55,    11,    12,   142,   142,   143,   143,    97,   291,
     272,    54,   142,   282,   143,    53,   119,   120,   142,   121,
     143,    61,   122,    69,   123,   119,   120,    10,   121,    11,
      12,   122,    70,   123,    10,   100,    11,    12,   124,   181,
     125,    71,   114,    76,    78,   119,   120,   124,   121,   125,
      89,   122,    82,   123,    90,   126,    94,   296,   297,   127,
     293,   272,   128,   129,   126,   305,   272,   124,   127,   125,
      95,   128,   129,   119,   120,    10,   121,    11,    12,   122,
      96,   123,    93,   144,   126,   306,   272,   113,   127,   118,
     298,   128,   129,   307,   272,   124,   104,   125,   149,   119,
     120,    10,   121,    11,    12,   122,   151,   123,   154,   187,
     112,   157,   126,   158,   159,   308,   127,   176,   160,   128,
     129,   124,   208,   125,   211,   212,   177,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   262,   178,   126,   179,
     180,   183,   127,   184,   185,   128,   129,   189,   209,   210,
     211,   212,   190,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   209,   210,   211,   212,   197,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   209,   210,   211,   212,
     198,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     209,   210,   211,   212,   200,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   201,   237,   202,   203,   206,   223,
     222,   227,   209,   210,   211,   212,   234,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   230,   231,   232,   233,
     240,   235,   236,   238,   209,   210,   211,   212,   245,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   239,   243,
     244,   259,   263,   266,   267,   268,   209,   210,   211,   212,
     260,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     269,   270,   277,   278,   279,   281,   284,   286,   209,   210,
     211,   212,   261,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   287,   292,   303,   304,   309,   290,    46,   294,   295,
      81,    19,    52,    40,    98,    99,   153,    77,   193,     0,
     108,     0,     0,     0,     0,   188
};

static const yytype_int16 yycheck[] =
{
     104,   130,   104,     1,     3,     9,    94,     3,    94,    12,
       3,    14,    15,    71,    86,     0,    20,    15,    12,   116,
     106,    54,    26,   109,    57,    20,   130,    99,   130,    33,
       6,    26,     8,     9,    28,    11,    12,    13,    42,    43,
      16,    12,    12,    54,    48,   124,    57,    42,    59,    47,
      53,    22,    28,   157,   112,   157,   153,    56,    62,    57,
      56,    54,   278,   279,    54,    19,    14,    65,   273,    59,
     275,    19,    70,    71,    12,    23,    14,    15,    54,   158,
     296,    12,   161,    14,    15,    12,    84,   292,    86,   294,
     295,    54,   171,    19,    92,    21,    59,    23,   177,   178,
      12,    99,   100,     6,   183,     8,     9,   105,    11,    12,
      13,    55,    56,    16,   112,    53,   114,    12,   116,    14,
      15,    12,    53,    14,    15,    28,    55,    56,    25,    20,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   231,     5,   231,     7,    12,   146,    14,
      15,    54,    33,    52,    17,   153,    19,    27,    19,   288,
     289,    12,    43,    14,    15,    55,    56,    48,    57,    20,
      59,    55,    56,   302,   278,   279,   278,   279,   264,    24,
      12,    62,    14,    15,   288,   289,   288,   289,    20,    55,
      56,    12,   296,   272,   296,    52,     4,     5,   302,     7,
     302,    54,    10,    12,    12,     4,     5,    12,     7,    14,
      15,    10,    19,    12,    12,    20,    14,    15,    26,    18,
      28,    54,    20,    11,    55,     4,     5,    26,     7,    28,
      52,    10,    12,    12,    12,    43,    52,    45,    46,    47,
      55,    56,    50,    51,    43,    55,    56,    26,    47,    28,
       3,    50,    51,     4,     5,    12,     7,    14,    15,    10,
      12,    12,    58,    20,    43,    55,    56,    53,    47,    12,
      49,    50,    51,    55,    56,    26,    17,    28,    53,     4,
       5,    12,     7,    14,    15,    10,    53,    12,    12,    20,
      54,    54,    43,    54,    54,    46,    47,    59,    54,    50,
      51,    26,     3,    28,    31,    32,    54,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,    54,    43,     3,
       3,    33,    47,    59,    12,    50,    51,    53,    29,    30,
      31,    32,    53,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    29,    30,    31,    32,    12,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    29,    30,    31,    32,
      12,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      29,    30,    31,    32,    12,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    54,    58,    54,    54,    59,    12,
      59,    12,    29,    30,    31,    32,    55,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,    52,    55,    55,
      12,    55,    55,    55,    29,    30,    31,    32,    55,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    55,    12,
      12,    12,    12,     3,     3,     3,    29,    30,    31,    32,
      55,    34,    35,    36,    37,    38,    39,    40,    41,    42,
       3,    55,    59,    44,    48,    53,    12,    12,    29,    30,
      31,    32,    55,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    12,    54,     3,     3,     3,    53,    23,    54,    54,
      65,     5,    29,    15,    84,    84,   114,    60,   154,    -1,
      92,    -1,    -1,    -1,    -1,   146
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    19,    21,    23,    61,    62,    63,    70,    71,    81,
      12,    14,    15,    20,    69,    82,    83,     0,    14,    70,
      81,    96,    12,    64,    65,    66,    81,    12,    72,    73,
      74,    14,    69,    86,    87,    96,    12,    84,    85,    20,
      83,    25,    81,    86,    96,    22,    65,    52,    86,    96,
      27,    24,    72,    52,    12,    87,    96,    54,    57,     3,
      56,    54,    86,    96,    96,    67,    68,    69,    96,    12,
      19,    54,    88,    69,    89,    90,    11,    85,    55,    96,
      53,    68,    12,    69,    75,    76,    77,    78,    89,    52,
      12,    55,    56,    58,    52,     3,    12,    20,    76,    77,
      20,    69,    78,    55,    17,    19,    91,    95,    90,    91,
      95,     3,    54,    53,    20,    69,    79,    80,    12,     4,
       5,     7,    10,    12,    26,    28,    43,    47,    50,    51,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   110,   112,    20,    69,    92,    93,    95,    53,
      95,    53,    89,    79,    12,    53,    80,    54,    54,    54,
      54,    57,    59,     6,     8,     9,    11,    12,    13,    16,
      28,    54,   109,   110,   112,   113,    59,    54,    54,     3,
       3,    18,    98,    33,    59,    12,    94,    20,    93,    53,
      53,    55,    53,    88,   110,    13,   109,    12,    12,   109,
      12,    54,    54,    54,    54,    59,    59,   109,     3,    29,
      30,    31,    32,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    59,    12,   109,   109,   109,    12,     3,    56,
       3,    52,    55,    55,    55,    55,    55,    58,    55,    55,
      12,   109,   111,    12,    12,    55,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,    12,
      55,    55,     3,    12,    91,    95,     3,     3,     3,     3,
      55,    55,    56,    54,    59,    54,    59,    59,    44,    48,
      95,    53,   109,   111,    12,   111,    12,    12,    97,    97,
      53,    55,    54,    55,    54,    54,    45,    46,    49,   111,
     111,   111,    97,     3,     3,    55,    55,    55,    46,     3
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    60,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    62,    63,    64,    64,    65,    66,    67,    67,    68,
      69,    69,    69,    70,    71,    72,    72,    73,    73,    73,
      74,    74,    75,    75,    76,    77,    77,    78,    79,    79,
      80,    80,    81,    81,    82,    82,    83,    84,    84,    85,
      85,    85,    86,    86,    87,    87,    88,    89,    89,    89,
      90,    91,    91,    92,    92,    93,    94,    94,    95,    96,
      96,    97,    97,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    99,   100,   100,   101,   102,   103,   104,
     105,   106,   106,   107,   108,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   110,   110,
     110,   111,   111,   111,   112,   112,   112,   113,   113,   113,
     113,   113
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     4,     4,     3,     4,     3,     2,     3,
       2,     3,     1,     2,     1,     4,     1,     2,     1,     3,
       1,     1,     1,     3,     1,     2,     1,     8,     7,     6,
       1,     3,     2,     1,     3,     2,     1,     6,     2,     1,
       7,     6,     3,     2,     2,     1,     3,     3,     1,     4,
       4,     1,     2,     1,     7,     6,     3,     3,     1,     0,
       2,     3,     2,     2,     1,     3,     3,     1,     3,     8,
       7,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     5,     5,     5,     5,     4,     4,     2,
       2,    10,     8,     8,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     4,     1,     1,     1,     3,     3,     4,     1,     4,
       1,     3,     1,     0,     3,     3,     3,     6,     6,     8,
       8,     8
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
#line 1583 "y.tab.c"
    break;

  case 3: /* Program: TypeDeclBlock ClassDeclBlock GDeclBlock MainBlock  */
#line 43 "parser.y"
                                                                            {}
#line 1589 "y.tab.c"
    break;

  case 4: /* Program: ClassDeclBlock GDeclBlock FuncDefBlock MainBlock  */
#line 44 "parser.y"
                                                                            {}
#line 1595 "y.tab.c"
    break;

  case 5: /* Program: ClassDeclBlock GDeclBlock MainBlock  */
#line 45 "parser.y"
                                                                            {}
#line 1601 "y.tab.c"
    break;

  case 6: /* Program: TypeDeclBlock GDeclBlock FuncDefBlock MainBlock  */
#line 46 "parser.y"
                                                                            {}
#line 1607 "y.tab.c"
    break;

  case 7: /* Program: TypeDeclBlock GDeclBlock MainBlock  */
#line 47 "parser.y"
                                                                            {}
#line 1613 "y.tab.c"
    break;

  case 8: /* Program: TypeDeclBlock MainBlock  */
#line 48 "parser.y"
                                                                            {}
#line 1619 "y.tab.c"
    break;

  case 9: /* Program: GDeclBlock FuncDefBlock MainBlock  */
#line 49 "parser.y"
                                                                            {}
#line 1625 "y.tab.c"
    break;

  case 10: /* Program: GDeclBlock MainBlock  */
#line 50 "parser.y"
                                                                            {}
#line 1631 "y.tab.c"
    break;

  case 11: /* TypeDeclBlock: TypeDeclBlockInit TypeDeclList ENDTYPE  */
#line 55 "parser.y"
                                                             {}
#line 1637 "y.tab.c"
    break;

  case 12: /* TypeDeclBlockInit: TYPE  */
#line 57 "parser.y"
                            { initializeTypeTable (); }
#line 1643 "y.tab.c"
    break;

  case 13: /* TypeDeclList: TypeDeclList TypeStmt  */
#line 59 "parser.y"
                                                {}
#line 1649 "y.tab.c"
    break;

  case 14: /* TypeDeclList: TypeStmt  */
#line 60 "parser.y"
                                                {}
#line 1655 "y.tab.c"
    break;

  case 15: /* TypeStmt: TypeName '{' FieldDeclList '}'  */
#line 62 "parser.y"
                                                      {}
#line 1661 "y.tab.c"
    break;

  case 16: /* TypeName: ID  */
#line 64 "parser.y"
                            { addTypeEntry ((yyvsp[0].node)->varname); (yyval.node) = (yyvsp[0].node); }
#line 1667 "y.tab.c"
    break;

  case 17: /* FieldDeclList: FieldDeclList FieldDecl  */
#line 66 "parser.y"
                                                {}
#line 1673 "y.tab.c"
    break;

  case 18: /* FieldDeclList: FieldDecl  */
#line 67 "parser.y"
                                                {}
#line 1679 "y.tab.c"
    break;

  case 19: /* FieldDecl: Type ID ENDSTMT  */
#line 69 "parser.y"
                                        { (yyval.node) = makeFieldDeclNode ((yyvsp[-1].node)->varname, (yyvsp[-2].node)->datatype, (yyvsp[-2].node)->classtype); addField ((yyval.node)); }
#line 1685 "y.tab.c"
    break;

  case 20: /* Type: INT  */
#line 71 "parser.y"
                            { (yyval.node) = makeTypeNode ("INT"); }
#line 1691 "y.tab.c"
    break;

  case 21: /* Type: STR  */
#line 72 "parser.y"
                            { (yyval.node) = makeTypeNode ("STR"); }
#line 1697 "y.tab.c"
    break;

  case 22: /* Type: ID  */
#line 73 "parser.y"
                            { (yyval.node) = getClassNode ((yyvsp[0].node)->varname) ? makeClassTypeNode ((yyvsp[0].node)->varname) : makeTypeNode ((yyvsp[0].node)->varname); }
#line 1703 "y.tab.c"
    break;

  case 23: /* ClassDeclBlock: ClassDeclBlockInit ClassDeclList ENDCLASS  */
#line 77 "parser.y"
                                                                 {}
#line 1709 "y.tab.c"
    break;

  case 24: /* ClassDeclBlockInit: CLASS  */
#line 80 "parser.y"
                    {
                        registerInit ();
                        FILE *outfile = fopen ("code-o.xsm", "w");
                        headerGenerator (outfile);
                        fclose (outfile);
                    }
#line 1720 "y.tab.c"
    break;

  case 25: /* ClassDeclList: ClassDecl ClassDeclList  */
#line 87 "parser.y"
                                            {}
#line 1726 "y.tab.c"
    break;

  case 26: /* ClassDeclList: ClassDecl  */
#line 88 "parser.y"
                                            {}
#line 1732 "y.tab.c"
    break;

  case 27: /* ClassDecl: ClassName '{' DECL MemberDeclList MethodDeclList ENDDECL MethodDefList '}'  */
#line 90 "parser.y"
                                                                                                {}
#line 1738 "y.tab.c"
    break;

  case 28: /* ClassDecl: ClassName '{' DECL MethodDeclList ENDDECL MethodDefList '}'  */
#line 91 "parser.y"
                                                                                                {}
#line 1744 "y.tab.c"
    break;

  case 29: /* ClassDecl: ClassName '{' DECL MemberDeclList ENDDECL '}'  */
#line 92 "parser.y"
                                                                                                {}
#line 1750 "y.tab.c"
    break;

  case 30: /* ClassName: ID  */
#line 94 "parser.y"
                                    { initializeLTable (); addClassEntry ((yyvsp[0].node)->varname, NULL); }
#line 1756 "y.tab.c"
    break;

  case 31: /* ClassName: ID EXTENDS ID  */
#line 96 "parser.y"
                { 
                    initializeLTable (); addClassEntry ((yyvsp[-2].node)->varname, (yyvsp[0].node)->varname);
                    extendedClass = true;
                }
#line 1765 "y.tab.c"
    break;

  case 32: /* MemberDeclList: MemberDeclList MemberDecl  */
#line 101 "parser.y"
                                                {}
#line 1771 "y.tab.c"
    break;

  case 33: /* MemberDeclList: MemberDecl  */
#line 102 "parser.y"
                                                {}
#line 1777 "y.tab.c"
    break;

  case 34: /* MemberDecl: Type ID ENDSTMT  */
#line 104 "parser.y"
                                    { (yyval.node) = makeFieldDeclNode ((yyvsp[-1].node)->varname, (yyvsp[-2].node)->datatype, (yyvsp[-2].node)->classtype); addMember ((yyval.node)); }
#line 1783 "y.tab.c"
    break;

  case 35: /* MethodDeclList: MethodDeclList MethodDecl  */
#line 106 "parser.y"
                                                {}
#line 1789 "y.tab.c"
    break;

  case 36: /* MethodDeclList: MethodDecl  */
#line 107 "parser.y"
                                                {}
#line 1795 "y.tab.c"
    break;

  case 37: /* MethodDecl: Type ID '(' ParamList ')' ENDSTMT  */
#line 110 "parser.y"
                { 
                    if ((yyvsp[-5].node)->nodetype == CLASSTYPE_NODE) {
                        printf ("ERROR : method : %s return type cannot be class\n", (yyvsp[-4].node)->varname);
                        printf ("Line : %d\n", yylineno);
                        exit (1);
                    }

                    (yyval.node) = makeMethodDeclNode ((yyvsp[-4].node)->varname, (yyvsp[-5].node)->datatype, NULL, (yyvsp[-2].node)); 

                    addMethod ((yyval.node));
                }
#line 1811 "y.tab.c"
    break;

  case 38: /* MethodDefList: MethodDefList MethodDef  */
#line 122 "parser.y"
                                                {}
#line 1817 "y.tab.c"
    break;

  case 39: /* MethodDefList: MethodDef  */
#line 123 "parser.y"
                                                {}
#line 1823 "y.tab.c"
    break;

  case 40: /* MethodDef: Type ID ParamBlock '{' LDeclBlock FuncBody '}'  */
#line 126 "parser.y"
                { 
                    if (matchParameters (getMethod((yyvsp[-5].node)->varname)->param, (yyvsp[-4].node)) == false) {
                        printf ("ERROR : trying to define an undeclared method\n");
                        printf ("Line : %d\n", yylineno);
                        exit (1);
                    }

                    if (getMethod ((yyvsp[-5].node)->varname)->declStatus == DEFINED) {
                        printf ("ERROR : method '%s' is already defined earlier.\n", (yyvsp[-5].node)->varname);
                        printf ("Line : %d\n", yylineno);
                        exit (1);
                    }

                    (yyval.node) = makeMethodDefNode ((yyvsp[-5].node)->varname, (yyvsp[-6].node)->datatype, (yyvsp[-4].node), (yyvsp[-1].node)); 

                    FILE *outfile = fopen ("code-o.xsm", "a");
                    codeGenerator (outfile, (yyval.node));
                    fclose (outfile);

                    getMethod ((yyvsp[-5].node)->varname)->declStatus = DEFINED;
                    initializeLTable ();
                }
#line 1850 "y.tab.c"
    break;

  case 41: /* MethodDef: Type ID ParamBlock '{' FuncBody '}'  */
#line 149 "parser.y"
                { 
                    if (matchParameters (getMethod((yyvsp[-4].node)->varname)->param, (yyvsp[-3].node)) == false) {
                        printf ("ERROR : trying to define an undeclared method\n");
                        printf ("Line : %d\n", yylineno);
                        exit (1);
                    }

                    if (getMethod ((yyvsp[-4].node)->varname)->declStatus == DEFINED) {
                        printf ("ERROR : method '%s' is already defined earlier.\n", (yyvsp[-4].node)->varname);
                        printf ("Line : %d\n", yylineno);
                        exit (1);
                    }

                    (yyval.node) = makeMethodDefNode ((yyvsp[-4].node)->varname, (yyvsp[-5].node)->datatype, (yyvsp[-3].node), (yyvsp[-1].node)); 

                    FILE *outfile = fopen ("code-o.xsm", "a");
                    codeGenerator (outfile, (yyval.node));
                    fclose (outfile);

                    getMethod ((yyvsp[-4].node)->varname)->declStatus = DEFINED;
                    initializeLTable ();
                }
#line 1877 "y.tab.c"
    break;

  case 42: /* GDeclBlock: DECL GDeclList ENDDECL  */
#line 174 "parser.y"
                                                { initializeGTable (); declareGVariables ((yyvsp[-1].node)); initializeLTable (); }
#line 1883 "y.tab.c"
    break;

  case 43: /* GDeclBlock: DECL ENDDECL  */
#line 175 "parser.y"
                                                { initializeLTable (); }
#line 1889 "y.tab.c"
    break;

  case 44: /* GDeclList: GDeclList GDecl  */
#line 177 "parser.y"
                                                { TreeNode *current = (yyvsp[-1].node); while (current->left) current = current->left; current->left = (yyvsp[0].node); (yyval.node) = (yyvsp[-1].node); }
#line 1895 "y.tab.c"
    break;

  case 45: /* GDeclList: GDecl  */
#line 178 "parser.y"
                                                { (yyval.node) = (yyvsp[0].node); }
#line 1901 "y.tab.c"
    break;

  case 46: /* GDecl: Type GVarList ENDSTMT  */
#line 180 "parser.y"
                                                { (yyval.node) = makeDeclarationNode ((yyvsp[-2].node)->datatype, (yyvsp[-2].node)->classtype, NULL, (yyvsp[-1].node)); }
#line 1907 "y.tab.c"
    break;

  case 47: /* GVarList: GVarList ',' GIdentifierDecl  */
#line 182 "parser.y"
                                                { TreeNode *current = (yyvsp[-2].node); while (current->left) current = current->left; current->left = (yyvsp[0].node); (yyval.node) = (yyvsp[-2].node); }
#line 1913 "y.tab.c"
    break;

  case 48: /* GVarList: GIdentifierDecl  */
#line 183 "parser.y"
                                                { (yyval.node) = (yyvsp[0].node); }
#line 1919 "y.tab.c"
    break;

  case 49: /* GIdentifierDecl: ID '[' NUM ']'  */
#line 185 "parser.y"
                                                { (yyval.node) = makeArrayDeclNode ((yyvsp[-3].node)->varname, (yyvsp[-1].node)->varvalue); }
#line 1925 "y.tab.c"
    break;

  case 50: /* GIdentifierDecl: ID '(' ParamList ')'  */
#line 186 "parser.y"
                                                { (yyval.node) = makeFunctionDeclNode ((yyvsp[-3].node)->varname, NULL, (yyvsp[-1].node)); }
#line 1931 "y.tab.c"
    break;

  case 51: /* GIdentifierDecl: ID  */
#line 187 "parser.y"
                                                { (yyval.node) = (yyvsp[0].node); }
#line 1937 "y.tab.c"
    break;

  case 52: /* FuncDefBlock: FuncDefBlock FuncDef  */
#line 191 "parser.y"
                                        {}
#line 1943 "y.tab.c"
    break;

  case 53: /* FuncDefBlock: FuncDef  */
#line 192 "parser.y"
                                        {}
#line 1949 "y.tab.c"
    break;

  case 54: /* FuncDef: Type ID ParamBlock '{' LDeclBlock FuncBody '}'  */
#line 195 "parser.y"
                {
                    if (matchParameters (getGVariable((yyvsp[-5].node)->varname)->param, (yyvsp[-4].node)) == false) {
                        printf ("ERROR: trying to define an undeclared function\n");
                        printf ("Line : %d\n", yylineno);
                        exit (1);
                    }

                    if (getGVariable ((yyvsp[-5].node)->varname)->declStatus == DEFINED) {
                        printf ("ERROR : function '%s' is already defined earlier.\n", (yyvsp[-5].node)->varname);
                        printf ("Line : %d\n", yylineno);
                        exit (1);
                    }

                    FILE *outfile = fopen ("code-o.xsm", "a");
                    codeGenerator (outfile, (yyval.node));
                    fclose (outfile);

                    getGVariable ((yyvsp[-5].node)->varname)->declStatus = DEFINED;

                    initializeLTable ();
                }
#line 1975 "y.tab.c"
    break;

  case 55: /* FuncDef: Type ID ParamBlock '{' FuncBody '}'  */
#line 217 "parser.y"
                {
                    if (matchParameters (getGVariable((yyval.node)->varname)->param, (yyvsp[-3].node)) == false) {
                        printf ("ERROR: trying to define an undeclared function\n");
                        printf ("Line : %d\n", yylineno);
                        exit (1);
                    }

                    if (getGVariable ((yyvsp[-4].node)->varname)->declStatus == DEFINED) {
                        printf ("ERROR : function '%s' is already defined earlier.\n", (yyvsp[-4].node)->varname);
                        printf ("Line : %d\n", yylineno);
                        exit (1);
                    }

                    FILE *outfile = fopen ("code-o.xsm", "a");
                    codeGenerator (outfile, (yyval.node));
                    fclose (outfile);

                    getGVariable ((yyvsp[-4].node)->varname)->declStatus = DEFINED;

                    initializeLTable ();
                }
#line 2001 "y.tab.c"
    break;

  case 56: /* ParamBlock: '(' ParamList ')'  */
#line 239 "parser.y"
                                        { declareLParameters ((yyvsp[-1].node)); (yyval.node) = (yyvsp[-1].node); }
#line 2007 "y.tab.c"
    break;

  case 57: /* ParamList: ParamList ',' Param  */
#line 241 "parser.y"
                                        { TreeNode* current = (yyvsp[-2].node); while (current->left) current = current->left; current->left = (yyvsp[0].node); (yyval.node) = (yyvsp[-2].node); }
#line 2013 "y.tab.c"
    break;

  case 58: /* ParamList: Param  */
#line 242 "parser.y"
                                        { (yyval.node) = (yyvsp[0].node); }
#line 2019 "y.tab.c"
    break;

  case 59: /* ParamList: %empty  */
#line 243 "parser.y"
                                        { (yyval.node) = NULL; }
#line 2025 "y.tab.c"
    break;

  case 60: /* Param: Type ID  */
#line 245 "parser.y"
                            { (yyval.node) = makeParameterNode ((yyvsp[-1].node)->datatype, (yyvsp[0].node)->varname); }
#line 2031 "y.tab.c"
    break;

  case 61: /* LDeclBlock: DECL LDeclList ENDDECL  */
#line 247 "parser.y"
                                             { declareLVariables ((yyvsp[-1].node)); (yyval.node) = (yyvsp[-1].node); }
#line 2037 "y.tab.c"
    break;

  case 62: /* LDeclBlock: DECL ENDDECL  */
#line 248 "parser.y"
                                             { (yyval.node) = NULL; }
#line 2043 "y.tab.c"
    break;

  case 63: /* LDeclList: LDeclList LDecl  */
#line 250 "parser.y"
                                    { TreeNode *current = (yyvsp[-1].node); while (current->left) current = current->left; current->left = (yyvsp[0].node); (yyval.node) = (yyvsp[-1].node); }
#line 2049 "y.tab.c"
    break;

  case 64: /* LDeclList: LDecl  */
#line 251 "parser.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 2055 "y.tab.c"
    break;

  case 65: /* LDecl: Type LVarList ENDSTMT  */
#line 254 "parser.y"
                { 
                    if ((yyvsp[-2].node)->classtype) { printf ("ERROR : class-type variables cannot be declared locally\n"); printf ("Line : %d\n", yylineno); exit (1); }
                    (yyval.node) = makeDeclarationNode ((yyvsp[-2].node)->datatype, NULL, NULL, (yyvsp[-1].node)); 
                }
#line 2064 "y.tab.c"
    break;

  case 66: /* LVarList: LVarList ',' ID  */
#line 259 "parser.y"
                                    { TreeNode *current = (yyvsp[-2].node); while (current->left) current = current->left; current->left = (yyvsp[0].node); (yyval.node) = (yyvsp[-2].node); }
#line 2070 "y.tab.c"
    break;

  case 67: /* LVarList: ID  */
#line 260 "parser.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 2076 "y.tab.c"
    break;

  case 68: /* FuncBody: START StmtList END  */
#line 262 "parser.y"
                                        { (yyval.node) = (yyvsp[-1].node); }
#line 2082 "y.tab.c"
    break;

  case 69: /* MainBlock: INT MAIN '(' ')' '{' LDeclBlock FuncBody '}'  */
#line 267 "parser.y"
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
#line 2105 "y.tab.c"
    break;

  case 70: /* MainBlock: INT MAIN '(' ')' '{' FuncBody '}'  */
#line 286 "parser.y"
            {
                FILE *outfile = fopen ("code-o.xsm", "a");
                fprintf (outfile, "MAIN:\n");
                stackPointerGenerator (outfile);
                methodInitGenerator (outfile);

                codeGenerator (outfile, (yyvsp[-1].node));
                fprintf (outfile, "INT 10\n");
                
                fclose (outfile);
            }
#line 2121 "y.tab.c"
    break;

  case 71: /* StmtList: StmtList Stmt  */
#line 298 "parser.y"
                            { (yyval.node) = makeConnectorNode ((yyvsp[-1].node), (yyvsp[0].node)); }
#line 2127 "y.tab.c"
    break;

  case 72: /* StmtList: Stmt  */
#line 299 "parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 2133 "y.tab.c"
    break;

  case 73: /* Stmt: OutStmt  */
#line 301 "parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 2139 "y.tab.c"
    break;

  case 74: /* Stmt: InStmt  */
#line 302 "parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 2145 "y.tab.c"
    break;

  case 75: /* Stmt: AssgnStmt  */
#line 303 "parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 2151 "y.tab.c"
    break;

  case 76: /* Stmt: FreeStmt  */
#line 304 "parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 2157 "y.tab.c"
    break;

  case 77: /* Stmt: DeleteStmt  */
#line 305 "parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 2163 "y.tab.c"
    break;

  case 78: /* Stmt: IfStmt  */
#line 306 "parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 2169 "y.tab.c"
    break;

  case 79: /* Stmt: WhileStmt  */
#line 307 "parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 2175 "y.tab.c"
    break;

  case 80: /* Stmt: BreakStmt  */
#line 308 "parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 2181 "y.tab.c"
    break;

  case 81: /* Stmt: ContinueStmt  */
#line 309 "parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 2187 "y.tab.c"
    break;

  case 82: /* Stmt: ReturnStmt  */
#line 310 "parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 2193 "y.tab.c"
    break;

  case 83: /* InStmt: READ '(' Identifier ')' ENDSTMT  */
#line 312 "parser.y"
                                                        { (yyval.node) = makeReadNode ((yyvsp[-2].node)); }
#line 2199 "y.tab.c"
    break;

  case 84: /* OutStmt: WRITE '(' Expr ')' ENDSTMT  */
#line 313 "parser.y"
                                                        { (yyval.node) = makeWriteNode ((yyvsp[-2].node)); }
#line 2205 "y.tab.c"
    break;

  case 85: /* OutStmt: WRITE '(' SID ')' ENDSTMT  */
#line 314 "parser.y"
                                                        { (yyval.node) = makeWriteNode ((yyvsp[-2].node)); }
#line 2211 "y.tab.c"
    break;

  case 86: /* FreeStmt: FREE '(' ID ')' ENDSTMT  */
#line 320 "parser.y"
                                                    { (yyval.node) = makeFreeNode ((yyvsp[-2].node)); }
#line 2217 "y.tab.c"
    break;

  case 87: /* DeleteStmt: DELETE '(' ID ')'  */
#line 324 "parser.y"
                                                    { (yyval.node) = makeDeleteNode ((yyvsp[-1].node)); }
#line 2223 "y.tab.c"
    break;

  case 88: /* AssgnStmt: Identifier EQL Expr ENDSTMT  */
#line 326 "parser.y"
                                                    { (yyval.node) = makeOperatorNode ("=", (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 2229 "y.tab.c"
    break;

  case 89: /* BreakStmt: BREAK ENDSTMT  */
#line 328 "parser.y"
                                        { (yyval.node) = makeBreakNode (); }
#line 2235 "y.tab.c"
    break;

  case 90: /* ContinueStmt: CONTINUE ENDSTMT  */
#line 329 "parser.y"
                                        { (yyval.node) = makeContinueNode (); }
#line 2241 "y.tab.c"
    break;

  case 91: /* IfStmt: IF '(' Expr ')' THEN StmtList ELSE StmtList ENDIF ENDSTMT  */
#line 331 "parser.y"
                                                                                { (yyval.node) = makeIfElseNode ((yyvsp[-7].node), (yyvsp[-4].node), (yyvsp[-2].node)); }
#line 2247 "y.tab.c"
    break;

  case 92: /* IfStmt: IF '(' Expr ')' THEN StmtList ENDIF ENDSTMT  */
#line 332 "parser.y"
                                                                                { (yyval.node) = makeIfNode ((yyvsp[-5].node), (yyvsp[-2].node)); }
#line 2253 "y.tab.c"
    break;

  case 93: /* WhileStmt: WHILE '(' Expr ')' DO StmtList ENDWHILE ENDSTMT  */
#line 334 "parser.y"
                                                                                { (yyval.node) = makeWhileNode ((yyvsp[-5].node), (yyvsp[-2].node)); }
#line 2259 "y.tab.c"
    break;

  case 94: /* ReturnStmt: RETURN Expr ENDSTMT  */
#line 336 "parser.y"
                                         { (yyval.node) = makeReturnNode ((yyvsp[-1].node)); }
#line 2265 "y.tab.c"
    break;

  case 95: /* Expr: '(' Expr ')'  */
#line 338 "parser.y"
                                { (yyval.node) = (yyvsp[-1].node); }
#line 2271 "y.tab.c"
    break;

  case 96: /* Expr: Expr ADD Expr  */
#line 339 "parser.y"
                                { (yyval.node) = makeOperatorNode ("+", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2277 "y.tab.c"
    break;

  case 97: /* Expr: Expr SUB Expr  */
#line 340 "parser.y"
                                { (yyval.node) = makeOperatorNode ("-", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2283 "y.tab.c"
    break;

  case 98: /* Expr: Expr MUL Expr  */
#line 341 "parser.y"
                                { (yyval.node) = makeOperatorNode ("*", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2289 "y.tab.c"
    break;

  case 99: /* Expr: Expr DIV Expr  */
#line 342 "parser.y"
                                { (yyval.node) = makeOperatorNode ("/", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2295 "y.tab.c"
    break;

  case 100: /* Expr: Expr LT Expr  */
#line 343 "parser.y"
                                { (yyval.node) = makeOperatorNode ("<", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2301 "y.tab.c"
    break;

  case 101: /* Expr: Expr GT Expr  */
#line 344 "parser.y"
                                { (yyval.node) = makeOperatorNode (">", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2307 "y.tab.c"
    break;

  case 102: /* Expr: Expr EQ Expr  */
#line 345 "parser.y"
                                { (yyval.node) = makeOperatorNode ("==", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2313 "y.tab.c"
    break;

  case 103: /* Expr: Expr LE Expr  */
#line 346 "parser.y"
                                { (yyval.node) = makeOperatorNode ("<=", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2319 "y.tab.c"
    break;

  case 104: /* Expr: Expr GE Expr  */
#line 347 "parser.y"
                                { (yyval.node) = makeOperatorNode (">=", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2325 "y.tab.c"
    break;

  case 105: /* Expr: Expr NE Expr  */
#line 348 "parser.y"
                                { (yyval.node) = makeOperatorNode ("!=", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2331 "y.tab.c"
    break;

  case 106: /* Expr: Expr AND Expr  */
#line 349 "parser.y"
                                { (yyval.node) = makeOperatorNode ("&&", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2337 "y.tab.c"
    break;

  case 107: /* Expr: Expr OR Expr  */
#line 350 "parser.y"
                                { (yyval.node) = makeOperatorNode ("||", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2343 "y.tab.c"
    break;

  case 108: /* Expr: Expr NOT Expr  */
#line 351 "parser.y"
                                { (yyval.node) = makeOperatorNode ("~", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2349 "y.tab.c"
    break;

  case 109: /* Expr: Identifier  */
#line 352 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2355 "y.tab.c"
    break;

  case 110: /* Expr: FieldFunc  */
#line 353 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2361 "y.tab.c"
    break;

  case 111: /* Expr: ID '(' ArgsList ')'  */
#line 354 "parser.y"
                                { (yyvsp[-3].node)->datatype = getVariableType ((yyvsp[-3].node)->varname); (yyval.node) = makeFunctionCallNode ((yyvsp[-3].node)->varname, (yyvsp[-1].node)); }
#line 2367 "y.tab.c"
    break;

  case 112: /* Expr: NUM  */
#line 355 "parser.y"
                                { (yyvsp[0].node)->datatype = getTypeNode ("INT"); (yyval.node) = (yyvsp[0].node); }
#line 2373 "y.tab.c"
    break;

  case 113: /* Expr: SID  */
#line 356 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2379 "y.tab.c"
    break;

  case 114: /* Expr: NULLL  */
#line 357 "parser.y"
                                { (yyval.node) = makeNullNode (); }
#line 2385 "y.tab.c"
    break;

  case 115: /* Expr: ALLOC '(' ')'  */
#line 358 "parser.y"
                                { (yyval.node) = makeAllocNode (); }
#line 2391 "y.tab.c"
    break;

  case 116: /* Expr: INIT '(' ')'  */
#line 359 "parser.y"
                                { (yyval.node) = makeInitNode (); }
#line 2397 "y.tab.c"
    break;

  case 117: /* Expr: NEW '(' ID ')'  */
#line 360 "parser.y"
                                { (yyval.node) = makeNewNode ((yyvsp[-1].node)); }
#line 2403 "y.tab.c"
    break;

  case 118: /* Identifier: ID  */
#line 363 "parser.y"
                                    { (yyvsp[0].node)->datatype = getVariableType ((yyvsp[0].node)->varname); (yyvsp[0].node)->classtype = getVariableClassType ((yyvsp[0].node)->varname); (yyval.node) = (yyvsp[0].node); }
#line 2409 "y.tab.c"
    break;

  case 119: /* Identifier: ID '[' Expr ']'  */
#line 364 "parser.y"
                                    { (yyval.node) = makeArrayNode ((yyvsp[-3].node)->varname, (yyvsp[-1].node)); }
#line 2415 "y.tab.c"
    break;

  case 120: /* Identifier: Field  */
#line 365 "parser.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 2421 "y.tab.c"
    break;

  case 121: /* ArgsList: ArgsList ',' Expr  */
#line 367 "parser.y"
                                    { (yyval.node) = makeConnectorNode ((yyvsp[-2].node), (yyvsp[0].node)); }
#line 2427 "y.tab.c"
    break;

  case 122: /* ArgsList: Expr  */
#line 368 "parser.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 2433 "y.tab.c"
    break;

  case 123: /* ArgsList: %empty  */
#line 369 "parser.y"
                                    { (yyval.node) = NULL; }
#line 2439 "y.tab.c"
    break;

  case 124: /* Field: Field '.' ID  */
#line 372 "parser.y"
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
#line 2460 "y.tab.c"
    break;

  case 125: /* Field: ID '.' ID  */
#line 389 "parser.y"
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
#line 2480 "y.tab.c"
    break;

  case 126: /* Field: SELF '.' ID  */
#line 405 "parser.y"
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
#line 2496 "y.tab.c"
    break;

  case 127: /* FieldFunc: ID '.' ID '(' ArgsList ')'  */
#line 418 "parser.y"
            {
                (yyvsp[-5].node)->classtype = getVariableClassType ((yyvsp[-5].node)->varname);
                if ((yyvsp[-5].node)->classtype == NULL) { 
                    printf ("ERROR : '%s' does not contain methods\n", (yyvsp[-5].node)->varname); 
                    printf ("Line : %d\n", yylineno); exit (1); 
                }

                (yyval.node) = makeMethodCallNode ((yyvsp[-3].node)->varname, (yyvsp[-5].node), (yyvsp[-1].node)); 
                (yyval.node)->classtype = (yyvsp[-5].node)->classtype; (yyval.node)->datatype = getMethodFromClass ((yyvsp[-3].node)->varname, (yyvsp[-5].node)->classtype)->type;
            }
#line 2511 "y.tab.c"
    break;

  case 128: /* FieldFunc: SELF '.' ID '(' ArgsList ')'  */
#line 429 "parser.y"
            {
                if (currentClass == NULL) { 
                    printf ("ERROR : undefined reference to 'self'\n"); 
                    printf ("Line : %d\n", yylineno);
                    exit (1); 
                }

                (yyval.node) = makeMethodCallNode ((yyvsp[-3].node)->varname, (yyvsp[-5].node), (yyvsp[-1].node)); 
                (yyval.node)->classtype = currentClass; (yyval.node)->datatype = getMethod ((yyvsp[-3].node)->varname)->type;
            }
#line 2526 "y.tab.c"
    break;

  case 129: /* FieldFunc: SELF '.' ID '.' ID '(' ArgsList ')'  */
#line 440 "parser.y"
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
#line 2549 "y.tab.c"
    break;

  case 130: /* FieldFunc: ID '.' ID '.' ID '(' ArgsList ')'  */
#line 459 "parser.y"
            {
                printf ("ERROR : illegal access to method %s\n", (yyvsp[-3].node)->varname);
                printf ("Line : %d\n", yylineno);
                exit (1);
            }
#line 2559 "y.tab.c"
    break;

  case 131: /* FieldFunc: Field '.' ID '.' ID '(' ArgsList ')'  */
#line 464 "parser.y"
                                                   {
                printf ("ERROR : illegal access to method %s\n", (yyvsp[-3].node)->varname);
                printf ("Line : %d\n", yylineno);
                exit (1);
            }
#line 2569 "y.tab.c"
    break;


#line 2573 "y.tab.c"

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

#line 470 "parser.y"
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
