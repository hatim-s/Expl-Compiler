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

    #include "type.h"
    #include "class.h"
    #include "symtab.c"
    #include "tree.c"
    #include "codegen.c"
    
    int yylex(void);
    void yyerror (char const *s);
    
    extern FILE* yyin;
    extern char* yytext;
    extern int yylineno;

#line 86 "y.tab.c"

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
    NUM = 258,                     /* NUM  */
    ID = 259,                      /* ID  */
    SID = 260,                     /* SID  */
    SELF = 261,                    /* SELF  */
    INT = 262,                     /* INT  */
    STR = 263,                     /* STR  */
    NULLL = 264,                   /* NULLL  */
    MAIN = 265,                    /* MAIN  */
    RETURN = 266,                  /* RETURN  */
    EXTENDS = 267,                 /* EXTENDS  */
    READ = 268,                    /* READ  */
    WRITE = 269,                   /* WRITE  */
    ALLOC = 270,                   /* ALLOC  */
    FREE = 271,                    /* FREE  */
    INIT = 272,                    /* INIT  */
    NEW = 273,                     /* NEW  */
    DELETE = 274,                  /* DELETE  */
    START = 275,                   /* START  */
    END = 276,                     /* END  */
    DECL = 277,                    /* DECL  */
    ENDDECL = 278,                 /* ENDDECL  */
    TYPE = 279,                    /* TYPE  */
    ENDTYPE = 280,                 /* ENDTYPE  */
    CLASS = 281,                   /* CLASS  */
    ENDCLASS = 282,                /* ENDCLASS  */
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
#define NUM 258
#define ID 259
#define SID 260
#define SELF 261
#define INT 262
#define STR 263
#define NULLL 264
#define MAIN 265
#define RETURN 266
#define EXTENDS 267
#define READ 268
#define WRITE 269
#define ALLOC 270
#define FREE 271
#define INIT 272
#define NEW 273
#define DELETE 274
#define START 275
#define END 276
#define DECL 277
#define ENDDECL 278
#define TYPE 279
#define ENDTYPE 280
#define CLASS 281
#define ENDCLASS 282
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
#line 16 "parser.y"

    struct TreeNode *node;

#line 243 "y.tab.c"

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
  YYSYMBOL_NUM = 3,                        /* NUM  */
  YYSYMBOL_ID = 4,                         /* ID  */
  YYSYMBOL_SID = 5,                        /* SID  */
  YYSYMBOL_SELF = 6,                       /* SELF  */
  YYSYMBOL_INT = 7,                        /* INT  */
  YYSYMBOL_STR = 8,                        /* STR  */
  YYSYMBOL_NULLL = 9,                      /* NULLL  */
  YYSYMBOL_MAIN = 10,                      /* MAIN  */
  YYSYMBOL_RETURN = 11,                    /* RETURN  */
  YYSYMBOL_EXTENDS = 12,                   /* EXTENDS  */
  YYSYMBOL_READ = 13,                      /* READ  */
  YYSYMBOL_WRITE = 14,                     /* WRITE  */
  YYSYMBOL_ALLOC = 15,                     /* ALLOC  */
  YYSYMBOL_FREE = 16,                      /* FREE  */
  YYSYMBOL_INIT = 17,                      /* INIT  */
  YYSYMBOL_NEW = 18,                       /* NEW  */
  YYSYMBOL_DELETE = 19,                    /* DELETE  */
  YYSYMBOL_START = 20,                     /* START  */
  YYSYMBOL_END = 21,                       /* END  */
  YYSYMBOL_DECL = 22,                      /* DECL  */
  YYSYMBOL_ENDDECL = 23,                   /* ENDDECL  */
  YYSYMBOL_TYPE = 24,                      /* TYPE  */
  YYSYMBOL_ENDTYPE = 25,                   /* ENDTYPE  */
  YYSYMBOL_CLASS = 26,                     /* CLASS  */
  YYSYMBOL_ENDCLASS = 27,                  /* ENDCLASS  */
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
  YYSYMBOL_53_ = 53,                       /* ';'  */
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      54,    55,     2,     2,    56,     2,    59,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    53,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    57,     2,    58,     2,     2,     2,     2,     2,     2,
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
       0,    41,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    54,    56,    58,    59,    61,    63,    65,    66,    68,
      70,    71,    72,    76,    78,    86,    87,    89,    90,    91,
      93,    94,   100,   101,   103,   105,   106,   108,   121,   122,
     124,   147,   173,   174,   176,   177,   179,   181,   182,   184,
     185,   186,   190,   191,   193,   215,   238,   240,   241,   242,
     244,   246,   247,   249,   250,   252,   258,   259,   261,   265,
     284,   296,   297,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   311,   312,   313,   315,   316,   318,   320,
     321,   323,   324,   326,   328,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   355,   356,
     357,   359,   360,   361,   363,   380,   396,   409,   420,   431,
     450,   456
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
  "\"end of file\"", "error", "\"invalid token\"", "NUM", "ID", "SID",
  "SELF", "INT", "STR", "NULLL", "MAIN", "RETURN", "EXTENDS", "READ",
  "WRITE", "ALLOC", "FREE", "INIT", "NEW", "DELETE", "START", "END",
  "DECL", "ENDDECL", "TYPE", "ENDTYPE", "CLASS", "ENDCLASS", "ADD", "SUB",
  "MUL", "DIV", "EQL", "LT", "GT", "EQ", "GE", "LE", "NE", "AND", "OR",
  "NOT", "IF", "THEN", "ELSE", "ENDIF", "WHILE", "DO", "ENDWHILE", "BREAK",
  "CONTINUE", "'{'", "'}'", "';'", "'('", "')'", "','", "'['", "']'",
  "'.'", "$accept", "Program", "TypeDeclBlock", "TypeDeclBlockInit",
  "TypeDeclList", "TypeStmt", "TypeName", "FieldDeclList", "FieldDecl",
  "Type", "ClassDeclBlock", "ClassDeclBlockInit", "ClassDeclList",
  "ClassDecl", "ClassName", "MemberDeclList", "MemberDecl",
  "MethodDeclList", "MethodDecl", "MethodDefList", "MethodDef",
  "GDeclBlock", "GDeclList", "GDecl", "GVarList", "GIdentifierDecl",
  "FuncDefBlock", "FuncDef", "ParamBlock", "ParamList", "Param",
  "LDeclBlock", "LDeclList", "LDecl", "LVarList", "FuncBody", "MainBlock",
  "StmtList", "Stmt", "InStmt", "OutStmt", "FreeStmt", "DeleteStmt",
  "AssgnStmt", "BreakStmt", "ContinueStmt", "IfStmt", "WhileStmt",
  "ReturnStmt", "Expr", "Identifier", "ArgsList", "Field", "FieldFunc", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-190)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     167,   115,  -190,  -190,    24,   157,    26,    19,    56,   235,
    -190,  -190,  -190,  -190,    76,   135,  -190,  -190,    74,    19,
     235,  -190,  -190,    11,  -190,    41,   235,    88,    93,    56,
      89,    74,   140,   235,  -190,  -190,   -36,    -3,  -190,  -190,
    -190,    97,   235,   235,  -190,  -190,  -190,   242,   235,  -190,
     143,  -190,  -190,   168,   145,  -190,  -190,   242,   193,  -190,
      76,   146,   235,  -190,  -190,     3,  -190,   199,  -190,  -190,
     242,   242,   158,   210,    55,  -190,   162,  -190,   171,  -190,
    -190,  -190,   172,   224,   142,  -190,   149,  -190,   106,   132,
    -190,  -190,   242,  -190,   132,  -190,   127,   182,  -190,   159,
     242,   241,  -190,  -190,   265,   249,   218,   195,  -190,   218,
     212,  -190,   242,  -190,   242,   250,     5,  -190,   223,   111,
     207,    28,   226,   229,   243,   244,   248,   251,   253,   255,
     202,  -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,
    -190,  -190,   263,   261,  -190,   305,   278,  -190,   258,  -190,
     260,  -190,   156,    44,   145,  -190,  -190,    28,   309,   330,
    -190,    58,  -190,   285,  -190,   291,   293,   294,    28,   394,
    -190,   290,  -190,   165,    59,   346,   347,    28,    28,  -190,
    -190,  -190,  -190,    28,   386,  -190,    68,  -190,  -190,  -190,
    -190,   299,  -190,   340,   288,  -190,  -190,    28,   388,   389,
     339,   341,   391,   302,    28,    28,    28,    28,    28,    28,
      28,    28,    28,    28,    28,    28,    28,  -190,   393,   343,
     358,   325,   359,   360,   348,   371,   415,  -190,  -190,   412,
    -190,   132,  -190,   436,   175,     7,    16,  -190,  -190,   362,
    -190,   448,   448,   334,   334,   436,   436,   436,   436,   436,
     436,   436,   436,   436,   361,   365,   366,   368,   383,  -190,
     395,   390,  -190,  -190,   218,   387,  -190,    28,    28,   437,
      28,   438,  -190,   453,  -190,  -190,  -190,  -190,   265,   265,
     406,  -190,   436,   219,   405,   232,   407,   408,   191,   213,
    -190,  -190,    28,  -190,    28,    28,   265,   410,   427,   234,
     236,   238,   254,  -190,  -190,  -190,  -190,  -190,   439,  -190
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
       0,    34,    59,    29,     0,     0,     0,    39,     0,   118,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    72,    74,    73,    76,    77,    75,    80,    81,    78,
      79,    82,     0,   120,    62,     0,     0,    64,     0,    55,
       0,    70,     0,     0,     0,    28,    38,     0,     0,     0,
     112,   118,   113,     0,   114,     0,     0,     0,     0,     0,
     109,   120,   110,     0,     0,     0,     0,     0,     0,    89,
      90,    68,    71,     0,     0,    67,     0,    61,    63,    54,
      69,     0,    27,     0,     0,   125,   126,   123,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    94,     0,     0,
     113,     0,     0,     0,     0,     0,     0,   124,    65,     0,
      37,     0,   119,   122,     0,   125,   126,   115,   116,     0,
      95,    96,    97,    98,    99,   100,   101,   102,   104,   103,
     105,   106,   107,   108,   124,     0,     0,     0,     0,    87,
       0,     0,    88,    66,     0,     0,   111,     0,   123,     0,
     123,     0,   117,     0,    83,    85,    84,    86,     0,     0,
       0,    41,   121,     0,     0,     0,     0,     0,     0,     0,
      40,   127,   123,   128,   123,   123,     0,     0,     0,     0,
       0,     0,     0,    92,    93,   130,   129,   131,     0,    91
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -190,  -190,  -190,  -190,  -190,   417,  -190,  -190,   425,     2,
     455,  -190,   462,  -190,  -190,  -190,   409,   411,   -72,   380,
     -97,    78,  -190,   481,  -190,   440,    67,    -8,   344,   -65,
     413,   -90,  -190,   351,  -190,   -86,    -4,  -188,  -129,  -190,
    -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,   -79,
    -104,  -189,  -102,  -190
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,     5,     6,    23,    24,    25,    65,    66,    32,
       7,     8,    28,    29,    30,    84,    85,    86,    87,   116,
     117,     9,    15,    16,    37,    38,    33,    34,    72,    74,
      75,   106,   146,   147,   186,   107,    21,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   233,
     170,   234,   171,   172
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     142,   182,   143,    14,   109,    35,    88,    10,   110,    10,
      11,    12,    11,    12,   102,    22,    44,    14,    57,   156,
     148,    58,    49,   150,    17,    55,   142,   102,   143,    56,
      22,   160,   161,   162,   163,    55,    45,   164,    63,    64,
      55,     1,   169,   165,    68,   166,   167,   152,    10,    67,
      59,    11,    12,    60,    55,    80,   156,   155,    79,    73,
      27,   268,   160,   161,   220,   163,   269,    67,   164,   219,
     270,   143,    83,    73,   165,   271,   166,   167,   194,   283,
      36,   285,   168,    20,    41,    26,    83,    43,   101,   203,
     288,   289,    47,    48,    73,   221,   192,    42,   224,   225,
      50,   101,   115,   299,   226,   300,   301,   145,   302,    62,
      91,    92,   197,   168,    73,   157,   115,   198,   115,    10,
      51,   228,    11,    12,   229,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,    13,    10,
      53,   264,    11,    12,    54,   265,    10,    69,   145,    11,
      12,    61,   104,    10,   105,   115,    11,    12,    39,   182,
     182,   103,    92,    10,    18,    97,    11,    12,   157,   119,
     158,   120,   100,   182,   142,   142,   143,   143,   280,     1,
     111,   112,   114,     3,   142,   142,   143,   143,   282,     1,
      70,     2,   142,     3,   143,   119,    76,   120,   142,    71,
     143,    78,   121,    82,   122,   123,   119,   124,   120,    89,
     125,   191,    92,   121,    90,   122,   123,   119,   124,   120,
      93,   125,    94,   181,   121,    95,   122,   123,    96,   124,
     266,   267,   125,   126,   113,   296,   297,   127,   104,    10,
     128,   129,    31,    12,   126,   118,    10,   149,   127,    11,
      12,   128,   129,    10,   154,   126,    11,    12,   119,   127,
     120,   298,   128,   129,   151,   121,   159,   122,   123,   119,
     124,   120,   144,   125,   291,   267,   121,   112,   122,   123,
     173,   124,    10,   174,   125,    11,    12,   293,   267,   305,
     267,   306,   267,   307,   267,   183,   126,   175,   176,   308,
     127,   187,   177,   128,   129,   178,   179,   126,   180,   185,
     189,   127,   190,   195,   128,   129,   204,   205,   206,   207,
     184,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     204,   205,   206,   207,   196,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   199,   200,   232,   201,   202,   218,
     222,   223,   230,   204,   205,   206,   207,   240,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   204,   205,   206,   207,
     257,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     227,   231,   235,   236,   237,   239,   238,   254,   255,   204,
     205,   206,   207,   260,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   256,   258,   259,   263,   272,   274,   275,
     273,   276,   204,   205,   206,   207,   261,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   277,   279,   278,   281,
      46,   284,   286,   204,   205,   206,   207,   217,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   287,   290,   292,
      19,   294,   295,   303,   204,   205,   206,   207,   262,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   206,   207,
     304,   208,   209,   210,   211,   212,   213,   214,   215,   216,
      81,    52,   309,    98,   153,    99,    40,   188,   193,     0,
      77,     0,     0,     0,     0,   108
};

static const yytype_int16 yycheck[] =
{
     104,   130,   104,     1,    94,     9,    71,     4,    94,     4,
       7,     8,     7,     8,    86,     4,    20,    15,    54,   116,
     106,    57,    26,   109,     0,    33,   130,    99,   130,    33,
       4,     3,     4,     5,     6,    43,    25,     9,    42,    43,
      48,    22,   121,    15,    48,    17,    18,   112,     4,    47,
      53,     7,     8,    56,    62,    52,   153,    52,    62,    57,
       4,    54,     3,     4,     5,     6,    59,    65,     9,   173,
      54,   173,    70,    71,    15,    59,    17,    18,   157,   268,
       4,   270,    54,     5,    10,     7,    84,    20,    86,   168,
     278,   279,    51,    26,    92,   174,    52,    19,   177,   178,
      12,    99,   100,   292,   183,   294,   295,   105,   296,    42,
      55,    56,    54,    54,   112,    57,   114,    59,   116,     4,
      27,    53,     7,     8,    56,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,    23,     4,
      51,   231,     7,     8,     4,   231,     4,     4,   146,     7,
       8,    54,    20,     4,    22,   153,     7,     8,    23,   288,
     289,    55,    56,     4,     7,    23,     7,     8,    57,     4,
      59,     6,    23,   302,   278,   279,   278,   279,   264,    22,
      53,    54,    23,    26,   288,   289,   288,   289,   267,    22,
      22,    24,   296,    26,   296,     4,     3,     6,   302,    54,
     302,    55,    11,     4,    13,    14,     4,    16,     6,    51,
      19,    55,    56,    11,     4,    13,    14,     4,    16,     6,
      58,    19,    51,    21,    11,    53,    13,    14,     4,    16,
      55,    56,    19,    42,    52,    44,    45,    46,    20,     4,
      49,    50,     7,     8,    42,     4,     4,    52,    46,     7,
       8,    49,    50,     4,     4,    42,     7,     8,     4,    46,
       6,    48,    49,    50,    52,    11,    59,    13,    14,     4,
      16,     6,    23,    19,    55,    56,    11,    54,    13,    14,
      54,    16,     4,    54,    19,     7,     8,    55,    56,    55,
      56,    55,    56,    55,    56,    32,    42,    54,    54,    45,
      46,    23,    54,    49,    50,    54,    53,    42,    53,     4,
      52,    46,    52,     4,    49,    50,    28,    29,    30,    31,
      59,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      28,    29,    30,    31,     4,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    59,    54,    58,    54,    54,    59,
       4,     4,    53,    28,    29,    30,    31,    55,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    28,    29,    30,    31,
      55,    33,    34,    35,    36,    37,    38,    39,    40,    41,
       4,    51,     4,     4,    55,     4,    55,     4,    55,    28,
      29,    30,    31,    55,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    55,    55,    55,     4,    55,    53,    53,
      59,    53,    28,    29,    30,    31,    55,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    53,    47,    43,    52,
      23,     4,     4,    28,    29,    30,    31,    53,    33,    34,
      35,    36,    37,    38,    39,    40,    41,     4,    52,    54,
       5,    54,    54,    53,    28,    29,    30,    31,    53,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    30,    31,
      53,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      65,    29,    53,    84,   114,    84,    15,   146,   154,    -1,
      60,    -1,    -1,    -1,    -1,    92
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    22,    24,    26,    61,    62,    63,    70,    71,    81,
       4,     7,     8,    23,    69,    82,    83,     0,     7,    70,
      81,    96,     4,    64,    65,    66,    81,     4,    72,    73,
      74,     7,    69,    86,    87,    96,     4,    84,    85,    23,
      83,    10,    81,    86,    96,    25,    65,    51,    86,    96,
      12,    27,    72,    51,     4,    87,    96,    54,    57,    53,
      56,    54,    86,    96,    96,    67,    68,    69,    96,     4,
      22,    54,    88,    69,    89,    90,     3,    85,    55,    96,
      52,    68,     4,    69,    75,    76,    77,    78,    89,    51,
       4,    55,    56,    58,    51,    53,     4,    23,    76,    77,
      23,    69,    78,    55,    20,    22,    91,    95,    90,    91,
      95,    53,    54,    52,    23,    69,    79,    80,     4,     4,
       6,    11,    13,    14,    16,    19,    42,    46,    49,    50,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   110,   112,    23,    69,    92,    93,    95,    52,
      95,    52,    89,    79,     4,    52,    80,    57,    59,    59,
       3,     4,     5,     6,     9,    15,    17,    18,    54,   109,
     110,   112,   113,    54,    54,    54,    54,    54,    54,    53,
      53,    21,    98,    32,    59,     4,    94,    23,    93,    52,
      52,    55,    52,    88,   109,     4,     4,    54,    59,    59,
      54,    54,    54,   109,    28,    29,    30,    31,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    53,    59,   110,
       5,   109,     4,     4,   109,   109,   109,     4,    53,    56,
      53,    51,    58,   109,   111,     4,     4,    55,    55,     4,
      55,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,     4,    55,    55,    55,    55,    55,
      55,    55,    53,     4,    91,    95,    55,    56,    54,    59,
      54,    59,    55,    59,    53,    53,    53,    53,    43,    47,
      95,    52,   109,   111,     4,   111,     4,     4,    97,    97,
      52,    55,    54,    55,    54,    54,    44,    45,    48,   111,
     111,   111,    97,    53,    53,    55,    55,    55,    45,    53
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
#line 41 "parser.y"
                                                                            {}
#line 1581 "y.tab.c"
    break;

  case 3: /* Program: TypeDeclBlock ClassDeclBlock GDeclBlock MainBlock  */
#line 42 "parser.y"
                                                                            {}
#line 1587 "y.tab.c"
    break;

  case 4: /* Program: ClassDeclBlock GDeclBlock FuncDefBlock MainBlock  */
#line 43 "parser.y"
                                                                            {}
#line 1593 "y.tab.c"
    break;

  case 5: /* Program: ClassDeclBlock GDeclBlock MainBlock  */
#line 44 "parser.y"
                                                                            {}
#line 1599 "y.tab.c"
    break;

  case 6: /* Program: TypeDeclBlock GDeclBlock FuncDefBlock MainBlock  */
#line 45 "parser.y"
                                                                            {}
#line 1605 "y.tab.c"
    break;

  case 7: /* Program: TypeDeclBlock GDeclBlock MainBlock  */
#line 46 "parser.y"
                                                                            {}
#line 1611 "y.tab.c"
    break;

  case 8: /* Program: TypeDeclBlock MainBlock  */
#line 47 "parser.y"
                                                                            {}
#line 1617 "y.tab.c"
    break;

  case 9: /* Program: GDeclBlock FuncDefBlock MainBlock  */
#line 48 "parser.y"
                                                                            {}
#line 1623 "y.tab.c"
    break;

  case 10: /* Program: GDeclBlock MainBlock  */
#line 49 "parser.y"
                                                                            {}
#line 1629 "y.tab.c"
    break;

  case 11: /* TypeDeclBlock: TypeDeclBlockInit TypeDeclList ENDTYPE  */
#line 54 "parser.y"
                                                             {}
#line 1635 "y.tab.c"
    break;

  case 12: /* TypeDeclBlockInit: TYPE  */
#line 56 "parser.y"
                            { initializeTypeTable (); }
#line 1641 "y.tab.c"
    break;

  case 13: /* TypeDeclList: TypeDeclList TypeStmt  */
#line 58 "parser.y"
                                                {}
#line 1647 "y.tab.c"
    break;

  case 14: /* TypeDeclList: TypeStmt  */
#line 59 "parser.y"
                                                {}
#line 1653 "y.tab.c"
    break;

  case 15: /* TypeStmt: TypeName '{' FieldDeclList '}'  */
#line 61 "parser.y"
                                                      {}
#line 1659 "y.tab.c"
    break;

  case 16: /* TypeName: ID  */
#line 63 "parser.y"
                            { addTypeEntry ((yyvsp[0].node)->varname); }
#line 1665 "y.tab.c"
    break;

  case 17: /* FieldDeclList: FieldDeclList FieldDecl  */
#line 65 "parser.y"
                                                {}
#line 1671 "y.tab.c"
    break;

  case 18: /* FieldDeclList: FieldDecl  */
#line 66 "parser.y"
                                                {}
#line 1677 "y.tab.c"
    break;

  case 19: /* FieldDecl: Type ID ';'  */
#line 68 "parser.y"
                                        { (yyval.node) = makeFieldDeclNode ((yyvsp[-1].node)->varname, (yyvsp[-2].node)->datatype, (yyvsp[-2].node)->classtype); addField ((yyval.node)); }
#line 1683 "y.tab.c"
    break;

  case 20: /* Type: INT  */
#line 70 "parser.y"
                            { (yyval.node) = makeTypeNode ("INT"); }
#line 1689 "y.tab.c"
    break;

  case 21: /* Type: STR  */
#line 71 "parser.y"
                            { (yyval.node) = makeTypeNode ("STR"); }
#line 1695 "y.tab.c"
    break;

  case 22: /* Type: ID  */
#line 72 "parser.y"
                            { (yyval.node) = getClassNode ((yyvsp[0].node)->varname) ? makeClassTypeNode ((yyvsp[0].node)->varname) : makeTypeNode ((yyvsp[0].node)->varname); }
#line 1701 "y.tab.c"
    break;

  case 23: /* ClassDeclBlock: ClassDeclBlockInit ClassDeclList ENDCLASS  */
#line 76 "parser.y"
                                                                     {}
#line 1707 "y.tab.c"
    break;

  case 24: /* ClassDeclBlockInit: CLASS  */
#line 79 "parser.y"
                    {
                        registerInit ();
                        FILE *outfile = fopen ("code-o.xsm", "w");
                        headerGenerator (outfile);
                        fclose (outfile);
                    }
#line 1718 "y.tab.c"
    break;

  case 25: /* ClassDeclList: ClassDecl ClassDeclList  */
#line 86 "parser.y"
                                                {}
#line 1724 "y.tab.c"
    break;

  case 26: /* ClassDeclList: ClassDecl  */
#line 87 "parser.y"
                                                {}
#line 1730 "y.tab.c"
    break;

  case 27: /* ClassDecl: ClassName '{' DECL MemberDeclList MethodDeclList ENDDECL MethodDefList '}'  */
#line 89 "parser.y"
                                                                                                    {}
#line 1736 "y.tab.c"
    break;

  case 28: /* ClassDecl: ClassName '{' DECL MethodDeclList ENDDECL MethodDefList '}'  */
#line 90 "parser.y"
                                                                                                    {}
#line 1742 "y.tab.c"
    break;

  case 29: /* ClassDecl: ClassName '{' DECL MemberDeclList ENDDECL '}'  */
#line 91 "parser.y"
                                                                                                    {}
#line 1748 "y.tab.c"
    break;

  case 30: /* ClassName: ID  */
#line 93 "parser.y"
                                        { initializeLTable (); addClassEntry ((yyvsp[0].node)->varname, NULL); }
#line 1754 "y.tab.c"
    break;

  case 31: /* ClassName: ID EXTENDS ID  */
#line 95 "parser.y"
                    { 
                        initializeLTable (); addClassEntry ((yyvsp[-2].node)->varname, (yyvsp[0].node)->varname);
                        extendedClass = true;
                    }
#line 1763 "y.tab.c"
    break;

  case 32: /* MemberDeclList: MemberDeclList MemberDecl  */
#line 100 "parser.y"
                                                    {}
#line 1769 "y.tab.c"
    break;

  case 33: /* MemberDeclList: MemberDecl  */
#line 101 "parser.y"
                                                    {}
#line 1775 "y.tab.c"
    break;

  case 34: /* MemberDecl: Type ID ';'  */
#line 103 "parser.y"
                                        { (yyval.node) = makeFieldDeclNode ((yyvsp[-1].node)->varname, (yyvsp[-2].node)->datatype, (yyvsp[-2].node)->classtype); addMember ((yyval.node)); }
#line 1781 "y.tab.c"
    break;

  case 35: /* MethodDeclList: MethodDeclList MethodDecl  */
#line 105 "parser.y"
                                                    {}
#line 1787 "y.tab.c"
    break;

  case 36: /* MethodDeclList: MethodDecl  */
#line 106 "parser.y"
                                                    {}
#line 1793 "y.tab.c"
    break;

  case 37: /* MethodDecl: Type ID '(' ParamList ')' ';'  */
#line 109 "parser.y"
                    { 
                        if ((yyvsp[-5].node)->nodetype == CLASSTYPE_NODE) {
                            printf ("ERROR : method : %s return type cannot be class\n", (yyvsp[-4].node)->varname);
                            printf ("Line : %d\n", yylineno);
                            exit (1);
                        }

                        (yyval.node) = makeMethodDeclNode ((yyvsp[-4].node)->varname, (yyvsp[-5].node)->datatype, NULL, (yyvsp[-2].node)); 

                        addMethod ((yyval.node));
                    }
#line 1809 "y.tab.c"
    break;

  case 38: /* MethodDefList: MethodDefList MethodDef  */
#line 121 "parser.y"
                                                    {}
#line 1815 "y.tab.c"
    break;

  case 39: /* MethodDefList: MethodDef  */
#line 122 "parser.y"
                                                    {}
#line 1821 "y.tab.c"
    break;

  case 40: /* MethodDef: Type ID ParamBlock '{' LDeclBlock FuncBody '}'  */
#line 125 "parser.y"
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
#line 1848 "y.tab.c"
    break;

  case 41: /* MethodDef: Type ID ParamBlock '{' FuncBody '}'  */
#line 148 "parser.y"
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
#line 1875 "y.tab.c"
    break;

  case 42: /* GDeclBlock: DECL GDeclList ENDDECL  */
#line 173 "parser.y"
                                                { initializeGTable (); declareGVariables ((yyvsp[-1].node)); initializeLTable (); }
#line 1881 "y.tab.c"
    break;

  case 43: /* GDeclBlock: DECL ENDDECL  */
#line 174 "parser.y"
                                                { initializeLTable (); }
#line 1887 "y.tab.c"
    break;

  case 44: /* GDeclList: GDeclList GDecl  */
#line 176 "parser.y"
                                                { TreeNode *current = (yyvsp[-1].node); while (current->left) current = current->left; current->left = (yyvsp[0].node); (yyval.node) = (yyvsp[-1].node); }
#line 1893 "y.tab.c"
    break;

  case 45: /* GDeclList: GDecl  */
#line 177 "parser.y"
                                                { (yyval.node) = (yyvsp[0].node); }
#line 1899 "y.tab.c"
    break;

  case 46: /* GDecl: Type GVarList ';'  */
#line 179 "parser.y"
                                                { (yyval.node) = makeDeclarationNode ((yyvsp[-2].node)->datatype, (yyvsp[-2].node)->classtype, NULL, (yyvsp[-1].node)); }
#line 1905 "y.tab.c"
    break;

  case 47: /* GVarList: GVarList ',' GIdentifierDecl  */
#line 181 "parser.y"
                                                { TreeNode *current = (yyvsp[-2].node); while (current->left) current = current->left; current->left = (yyvsp[0].node); (yyval.node) = (yyvsp[-2].node); }
#line 1911 "y.tab.c"
    break;

  case 48: /* GVarList: GIdentifierDecl  */
#line 182 "parser.y"
                                                { (yyval.node) = (yyvsp[0].node); }
#line 1917 "y.tab.c"
    break;

  case 49: /* GIdentifierDecl: ID '[' NUM ']'  */
#line 184 "parser.y"
                                                { (yyval.node) = makeArrayDeclNode ((yyvsp[-3].node)->varname, (yyvsp[-1].node)->varvalue); }
#line 1923 "y.tab.c"
    break;

  case 50: /* GIdentifierDecl: ID '(' ParamList ')'  */
#line 185 "parser.y"
                                                { (yyval.node) = makeFunctionDeclNode ((yyvsp[-3].node)->varname, NULL, (yyvsp[-1].node)); }
#line 1929 "y.tab.c"
    break;

  case 51: /* GIdentifierDecl: ID  */
#line 186 "parser.y"
                                                { (yyval.node) = (yyvsp[0].node); }
#line 1935 "y.tab.c"
    break;

  case 52: /* FuncDefBlock: FuncDefBlock FuncDef  */
#line 190 "parser.y"
                                        {}
#line 1941 "y.tab.c"
    break;

  case 53: /* FuncDefBlock: FuncDef  */
#line 191 "parser.y"
                                        {}
#line 1947 "y.tab.c"
    break;

  case 54: /* FuncDef: Type ID ParamBlock '{' LDeclBlock FuncBody '}'  */
#line 194 "parser.y"
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
#line 1973 "y.tab.c"
    break;

  case 55: /* FuncDef: Type ID ParamBlock '{' FuncBody '}'  */
#line 216 "parser.y"
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
#line 1999 "y.tab.c"
    break;

  case 56: /* ParamBlock: '(' ParamList ')'  */
#line 238 "parser.y"
                                        { declareLParameters ((yyvsp[-1].node)); (yyval.node) = (yyvsp[-1].node); }
#line 2005 "y.tab.c"
    break;

  case 57: /* ParamList: ParamList ',' Param  */
#line 240 "parser.y"
                                        { TreeNode* current = (yyvsp[-2].node); while (current->left) current = current->left; current->left = (yyvsp[0].node); (yyval.node) = (yyvsp[-2].node); }
#line 2011 "y.tab.c"
    break;

  case 58: /* ParamList: Param  */
#line 241 "parser.y"
                                        { (yyval.node) = (yyvsp[0].node); }
#line 2017 "y.tab.c"
    break;

  case 59: /* ParamList: %empty  */
#line 242 "parser.y"
                                        { (yyval.node) = NULL; }
#line 2023 "y.tab.c"
    break;

  case 60: /* Param: Type ID  */
#line 244 "parser.y"
                            { (yyval.node) = makeParameterNode ((yyvsp[-1].node)->datatype, (yyvsp[0].node)->varname); }
#line 2029 "y.tab.c"
    break;

  case 61: /* LDeclBlock: DECL LDeclList ENDDECL  */
#line 246 "parser.y"
                                             { declareLVariables ((yyvsp[-1].node)); }
#line 2035 "y.tab.c"
    break;

  case 62: /* LDeclBlock: DECL ENDDECL  */
#line 247 "parser.y"
                                             { }
#line 2041 "y.tab.c"
    break;

  case 63: /* LDeclList: LDeclList LDecl  */
#line 249 "parser.y"
                                    { TreeNode *current = (yyvsp[-1].node); while (current->left) current = current->left; current->left = (yyvsp[0].node); (yyval.node) = (yyvsp[-1].node); }
#line 2047 "y.tab.c"
    break;

  case 64: /* LDeclList: LDecl  */
#line 250 "parser.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 2053 "y.tab.c"
    break;

  case 65: /* LDecl: Type LVarList ';'  */
#line 253 "parser.y"
                { 
                    if ((yyvsp[-2].node)->classtype) { printf ("ERROR : class-type variables cannot be declared locally\n"); printf ("Line : %d\n", yylineno); exit (1); }
                    (yyval.node) = makeDeclarationNode ((yyvsp[-2].node)->datatype, NULL, NULL, (yyvsp[-1].node)); 
                }
#line 2062 "y.tab.c"
    break;

  case 66: /* LVarList: LVarList ',' ID  */
#line 258 "parser.y"
                                    { TreeNode *current = (yyvsp[-2].node); while (current->left) current = current->left; current->left = (yyvsp[0].node); (yyval.node) = (yyvsp[-2].node); }
#line 2068 "y.tab.c"
    break;

  case 67: /* LVarList: ID  */
#line 259 "parser.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 2074 "y.tab.c"
    break;

  case 68: /* FuncBody: START StmtList END  */
#line 261 "parser.y"
                                        { (yyval.node) = (yyvsp[-1].node); }
#line 2080 "y.tab.c"
    break;

  case 69: /* MainBlock: INT MAIN '(' ')' '{' LDeclBlock FuncBody '}'  */
#line 266 "parser.y"
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
#line 2103 "y.tab.c"
    break;

  case 70: /* MainBlock: INT MAIN '(' ')' '{' FuncBody '}'  */
#line 285 "parser.y"
            {
                FILE *outfile = fopen ("code-o.xsm", "a");
                fprintf (outfile, "MAIN:\n");
                stackPointerGenerator (outfile);
                methodInitGenerator (outfile);

                codeGenerator (outfile, (yyvsp[-1].node));
                fprintf (outfile, "INT 10\n");
                fclose (outfile);
            }
#line 2118 "y.tab.c"
    break;

  case 71: /* StmtList: StmtList Stmt  */
#line 296 "parser.y"
                            { (yyval.node) = makeConnectorNode ((yyvsp[-1].node), (yyvsp[0].node)); }
#line 2124 "y.tab.c"
    break;

  case 72: /* StmtList: Stmt  */
#line 297 "parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 2130 "y.tab.c"
    break;

  case 73: /* Stmt: OutStmt  */
#line 299 "parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 2136 "y.tab.c"
    break;

  case 74: /* Stmt: InStmt  */
#line 300 "parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 2142 "y.tab.c"
    break;

  case 75: /* Stmt: AssgnStmt  */
#line 301 "parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 2148 "y.tab.c"
    break;

  case 76: /* Stmt: FreeStmt  */
#line 302 "parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 2154 "y.tab.c"
    break;

  case 77: /* Stmt: DeleteStmt  */
#line 303 "parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 2160 "y.tab.c"
    break;

  case 78: /* Stmt: IfStmt  */
#line 304 "parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 2166 "y.tab.c"
    break;

  case 79: /* Stmt: WhileStmt  */
#line 305 "parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 2172 "y.tab.c"
    break;

  case 80: /* Stmt: BreakStmt  */
#line 306 "parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 2178 "y.tab.c"
    break;

  case 81: /* Stmt: ContinueStmt  */
#line 307 "parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 2184 "y.tab.c"
    break;

  case 82: /* Stmt: ReturnStmt  */
#line 308 "parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 2190 "y.tab.c"
    break;

  case 83: /* InStmt: READ '(' Identifier ')' ';'  */
#line 311 "parser.y"
                                                        { (yyval.node) = makeReadNode ((yyvsp[-2].node)); }
#line 2196 "y.tab.c"
    break;

  case 84: /* OutStmt: WRITE '(' Expr ')' ';'  */
#line 312 "parser.y"
                                                        { (yyval.node) = makeWriteNode ((yyvsp[-2].node)); }
#line 2202 "y.tab.c"
    break;

  case 85: /* OutStmt: WRITE '(' SID ')' ';'  */
#line 313 "parser.y"
                                                        { (yyval.node) = makeWriteNode ((yyvsp[-2].node)); }
#line 2208 "y.tab.c"
    break;

  case 86: /* FreeStmt: FREE '(' ID ')' ';'  */
#line 315 "parser.y"
                                            { (yyval.node) = makeFreeNode ((yyvsp[-2].node)); }
#line 2214 "y.tab.c"
    break;

  case 87: /* DeleteStmt: DELETE '(' ID ')'  */
#line 316 "parser.y"
                                            { (yyval.node) = makeDeleteNode ((yyvsp[-1].node)); }
#line 2220 "y.tab.c"
    break;

  case 88: /* AssgnStmt: Identifier EQL Expr ';'  */
#line 318 "parser.y"
                                            { (yyval.node) = makeOperatorNode ("=", (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 2226 "y.tab.c"
    break;

  case 89: /* BreakStmt: BREAK ';'  */
#line 320 "parser.y"
                                        { (yyval.node) = makeBreakNode (); }
#line 2232 "y.tab.c"
    break;

  case 90: /* ContinueStmt: CONTINUE ';'  */
#line 321 "parser.y"
                                        { (yyval.node) = makeContinueNode (); }
#line 2238 "y.tab.c"
    break;

  case 91: /* IfStmt: IF '(' Expr ')' THEN StmtList ELSE StmtList ENDIF ';'  */
#line 323 "parser.y"
                                                                                { (yyval.node) = makeIfElseNode ((yyvsp[-7].node), (yyvsp[-4].node), (yyvsp[-2].node)); }
#line 2244 "y.tab.c"
    break;

  case 92: /* IfStmt: IF '(' Expr ')' THEN StmtList ENDIF ';'  */
#line 324 "parser.y"
                                                                                { (yyval.node) = makeIfNode ((yyvsp[-5].node), (yyvsp[-2].node)); }
#line 2250 "y.tab.c"
    break;

  case 93: /* WhileStmt: WHILE '(' Expr ')' DO StmtList ENDWHILE ';'  */
#line 326 "parser.y"
                                                                                { (yyval.node) = makeWhileNode ((yyvsp[-5].node), (yyvsp[-2].node)); }
#line 2256 "y.tab.c"
    break;

  case 94: /* ReturnStmt: RETURN Expr ';'  */
#line 328 "parser.y"
                                         { (yyval.node) = makeReturnNode ((yyvsp[-1].node)); }
#line 2262 "y.tab.c"
    break;

  case 95: /* Expr: '(' Expr ')'  */
#line 330 "parser.y"
                                { (yyval.node) = (yyvsp[-1].node); }
#line 2268 "y.tab.c"
    break;

  case 96: /* Expr: Expr ADD Expr  */
#line 331 "parser.y"
                                { (yyval.node) = makeOperatorNode ("+", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2274 "y.tab.c"
    break;

  case 97: /* Expr: Expr SUB Expr  */
#line 332 "parser.y"
                                { (yyval.node) = makeOperatorNode ("-", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2280 "y.tab.c"
    break;

  case 98: /* Expr: Expr MUL Expr  */
#line 333 "parser.y"
                                { (yyval.node) = makeOperatorNode ("*", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2286 "y.tab.c"
    break;

  case 99: /* Expr: Expr DIV Expr  */
#line 334 "parser.y"
                                { (yyval.node) = makeOperatorNode ("/", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2292 "y.tab.c"
    break;

  case 100: /* Expr: Expr LT Expr  */
#line 335 "parser.y"
                                { (yyval.node) = makeOperatorNode ("<", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2298 "y.tab.c"
    break;

  case 101: /* Expr: Expr GT Expr  */
#line 336 "parser.y"
                                { (yyval.node) = makeOperatorNode (">", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2304 "y.tab.c"
    break;

  case 102: /* Expr: Expr EQ Expr  */
#line 337 "parser.y"
                                { (yyval.node) = makeOperatorNode ("==", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2310 "y.tab.c"
    break;

  case 103: /* Expr: Expr LE Expr  */
#line 338 "parser.y"
                                { (yyval.node) = makeOperatorNode ("<=", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2316 "y.tab.c"
    break;

  case 104: /* Expr: Expr GE Expr  */
#line 339 "parser.y"
                                { (yyval.node) = makeOperatorNode (">=", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2322 "y.tab.c"
    break;

  case 105: /* Expr: Expr NE Expr  */
#line 340 "parser.y"
                                { (yyval.node) = makeOperatorNode ("!=", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2328 "y.tab.c"
    break;

  case 106: /* Expr: Expr AND Expr  */
#line 341 "parser.y"
                                { (yyval.node) = makeOperatorNode ("&&", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2334 "y.tab.c"
    break;

  case 107: /* Expr: Expr OR Expr  */
#line 342 "parser.y"
                                { (yyval.node) = makeOperatorNode ("||", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2340 "y.tab.c"
    break;

  case 108: /* Expr: Expr NOT Expr  */
#line 343 "parser.y"
                                { (yyval.node) = makeOperatorNode ("~",  (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2346 "y.tab.c"
    break;

  case 109: /* Expr: Identifier  */
#line 344 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2352 "y.tab.c"
    break;

  case 110: /* Expr: FieldFunc  */
#line 345 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2358 "y.tab.c"
    break;

  case 111: /* Expr: ID '(' ArgsList ')'  */
#line 346 "parser.y"
                                { (yyvsp[-3].node)->datatype = getVariableType ((yyvsp[-3].node)->varname); (yyval.node) = makeFunctionCallNode ((yyvsp[-3].node)->varname, (yyvsp[-1].node)); }
#line 2364 "y.tab.c"
    break;

  case 112: /* Expr: NUM  */
#line 347 "parser.y"
                                { (yyvsp[0].node)->datatype = getTypeNode ("INT"); (yyval.node) = (yyvsp[0].node); }
#line 2370 "y.tab.c"
    break;

  case 113: /* Expr: SID  */
#line 348 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2376 "y.tab.c"
    break;

  case 114: /* Expr: NULLL  */
#line 349 "parser.y"
                                { (yyval.node) = makeNullNode  (); }
#line 2382 "y.tab.c"
    break;

  case 115: /* Expr: ALLOC '(' ')'  */
#line 350 "parser.y"
                                { (yyval.node) = makeAllocNode (); }
#line 2388 "y.tab.c"
    break;

  case 116: /* Expr: INIT '(' ')'  */
#line 351 "parser.y"
                                { (yyval.node) = makeInitNode  (); }
#line 2394 "y.tab.c"
    break;

  case 117: /* Expr: NEW '(' ID ')'  */
#line 352 "parser.y"
                                { (yyval.node) = makeNewNode ((yyvsp[-1].node)); }
#line 2400 "y.tab.c"
    break;

  case 118: /* Identifier: ID  */
#line 355 "parser.y"
                                    { (yyvsp[0].node)->datatype = getVariableType ((yyvsp[0].node)->varname); (yyvsp[0].node)->classtype = getVariableClassType ((yyvsp[0].node)->varname); (yyval.node) = (yyvsp[0].node); }
#line 2406 "y.tab.c"
    break;

  case 119: /* Identifier: ID '[' Expr ']'  */
#line 356 "parser.y"
                                    { (yyval.node) = makeArrayNode ((yyvsp[-3].node)->varname, (yyvsp[-1].node)); }
#line 2412 "y.tab.c"
    break;

  case 120: /* Identifier: Field  */
#line 357 "parser.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 2418 "y.tab.c"
    break;

  case 121: /* ArgsList: ArgsList ',' Expr  */
#line 359 "parser.y"
                                    { (yyval.node) = makeConnectorNode ((yyvsp[-2].node), (yyvsp[0].node)); }
#line 2424 "y.tab.c"
    break;

  case 122: /* ArgsList: Expr  */
#line 360 "parser.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 2430 "y.tab.c"
    break;

  case 123: /* ArgsList: %empty  */
#line 361 "parser.y"
                                    { (yyval.node) = NULL; }
#line 2436 "y.tab.c"
    break;

  case 124: /* Field: Field '.' ID  */
#line 364 "parser.y"
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
#line 2457 "y.tab.c"
    break;

  case 125: /* Field: ID '.' ID  */
#line 381 "parser.y"
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
#line 2477 "y.tab.c"
    break;

  case 126: /* Field: SELF '.' ID  */
#line 397 "parser.y"
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
#line 2493 "y.tab.c"
    break;

  case 127: /* FieldFunc: ID '.' ID '(' ArgsList ')'  */
#line 410 "parser.y"
            {
                (yyvsp[-5].node)->classtype = getVariableClassType ((yyvsp[-5].node)->varname);
                if ((yyvsp[-5].node)->classtype == NULL) { 
                    printf ("ERROR : '%s' does not contain methods\n", (yyvsp[-5].node)->varname); 
                    printf ("Line : %d\n", yylineno); exit (1); 
                }

                (yyval.node) = makeMethodCallNode ((yyvsp[-3].node)->varname, (yyvsp[-5].node), (yyvsp[-1].node)); 
                (yyval.node)->classtype = (yyvsp[-5].node)->classtype; (yyval.node)->datatype = getMethodFromClass ((yyvsp[-3].node)->varname, (yyvsp[-5].node)->classtype)->type;
            }
#line 2508 "y.tab.c"
    break;

  case 128: /* FieldFunc: SELF '.' ID '(' ArgsList ')'  */
#line 421 "parser.y"
            {
                if (currentClass == NULL) { 
                    printf ("ERROR : undefined reference to 'self'\n"); 
                    printf ("Line : %d\n", yylineno);
                    exit (1); 
                }

                (yyval.node) = makeMethodCallNode ((yyvsp[-3].node)->varname, (yyvsp[-5].node), (yyvsp[-1].node)); 
                (yyval.node)->classtype = currentClass; (yyval.node)->datatype = getMethod ((yyvsp[-3].node)->varname)->type;
            }
#line 2523 "y.tab.c"
    break;

  case 129: /* FieldFunc: SELF '.' ID '.' ID '(' ArgsList ')'  */
#line 432 "parser.y"
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
#line 2546 "y.tab.c"
    break;

  case 130: /* FieldFunc: ID '.' ID '.' ID '(' ArgsList ')'  */
#line 451 "parser.y"
            {
                printf ("ERROR : illegal access to method %s\n", (yyvsp[-3].node)->varname);
                printf ("Line : %d\n", yylineno);
                exit (1);
            }
#line 2556 "y.tab.c"
    break;

  case 131: /* FieldFunc: Field '.' ID '.' ID '(' ArgsList ')'  */
#line 456 "parser.y"
                                                   {
                printf ("ERROR : illegal access to method %s\n", (yyvsp[-3].node)->varname);
                printf ("Line : %d\n", yylineno);
                exit (1);
            }
#line 2566 "y.tab.c"
    break;


#line 2570 "y.tab.c"

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

#line 462 "parser.y"
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
