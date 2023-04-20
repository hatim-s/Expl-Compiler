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
#define YYLAST   501

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  54
/* YYNRULES -- Number of rules.  */
#define YYNRULES  132
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  311

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
      49,    54,    55,    57,    59,    60,    62,    64,    66,    67,
      69,    71,    72,    73,    77,    79,    87,    88,    90,    91,
      92,    94,    95,   101,   102,   104,   106,   107,   109,   122,
     123,   125,   148,   174,   175,   177,   178,   180,   182,   183,
     185,   186,   187,   191,   192,   194,   216,   239,   241,   242,
     243,   245,   247,   248,   250,   251,   253,   259,   260,   262,
     266,   285,   297,   298,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   312,   313,   314,   316,   317,   319,
     321,   322,   324,   325,   327,   329,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   359,   360,   361,   362,   363,   364,   367,
     368,   369,   371,   372,   373,   375,   392,   408,   421,   437,
     453,   477,   483
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

#define YYPACT_NINF (-216)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     142,    84,  -216,  -216,    22,    75,    20,    16,    48,   163,
    -216,  -216,  -216,  -216,    68,   135,  -216,  -216,    74,    16,
     163,  -216,  -216,  -216,    51,  -216,    53,   163,    82,    87,
      48,    69,    74,   136,   163,  -216,  -216,    52,    99,  -216,
    -216,  -216,    92,   163,   163,  -216,  -216,  -216,   227,   163,
    -216,   147,  -216,  -216,   150,   103,  -216,  -216,   227,   176,
    -216,    68,   154,   163,  -216,  -216,     5,  -216,   195,  -216,
    -216,   227,   227,   167,   238,   -50,  -216,   162,  -216,   173,
    -216,  -216,  -216,   186,   246,   140,  -216,   146,  -216,   197,
     160,  -216,  -216,   227,  -216,   160,  -216,   210,   203,  -216,
     207,   227,   257,  -216,  -216,   254,   209,   249,   214,  -216,
     249,   225,  -216,   227,  -216,   227,   275,     7,  -216,   245,
     144,   250,    31,   247,   248,   269,   279,   280,   282,   284,
     285,   191,  -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,
    -216,  -216,  -216,   307,   281,  -216,   375,   221,  -216,   289,
    -216,   328,  -216,   216,    23,   103,  -216,  -216,    31,   377,
     378,  -216,    64,  -216,   324,  -216,   330,   331,   332,    31,
     383,  -216,   343,  -216,   202,   107,   399,   400,    31,    31,
    -216,  -216,  -216,  -216,    31,   401,  -216,   109,  -216,  -216,
    -216,  -216,   334,  -216,   355,   277,  -216,  -216,    31,   403,
     405,   353,   370,   406,   291,    31,    31,    31,    31,    31,
      31,    31,    31,    31,    31,    31,    31,    31,  -216,   422,
     372,   373,   314,   374,   376,   337,   360,   404,  -216,  -216,
     426,  -216,   160,  -216,   425,   220,     8,    39,  -216,  -216,
     391,  -216,   437,   437,   323,   323,   425,   425,   425,   425,
     425,   425,   425,   425,   425,   388,   395,   396,   397,   398,
    -216,   409,   432,  -216,  -216,   249,   417,  -216,    31,    31,
     476,    31,   477,  -216,   478,  -216,  -216,  -216,  -216,   254,
     254,   431,  -216,   425,   228,   430,   231,   433,   434,   177,
     232,  -216,  -216,    31,  -216,    31,    31,   254,   436,   438,
     235,   239,   242,   243,  -216,  -216,  -216,  -216,  -216,   439,
    -216
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    13,    25,     0,     0,     0,     0,     0,     0,
      23,    21,    22,    44,     0,     0,    46,     1,     0,     0,
       0,     8,    17,    12,     0,    15,     0,     0,    31,     0,
      27,     0,    21,     0,     0,    54,    10,    52,     0,    49,
      43,    45,     0,     0,     0,     7,    11,    14,     0,     0,
       5,     0,    24,    26,     0,     0,    53,     9,    60,     0,
      47,     0,     0,     0,     3,     6,     0,    19,     0,     4,
      32,     0,    60,     0,     0,     0,    59,     0,    48,     0,
       2,    16,    18,     0,     0,     0,    34,     0,    37,     0,
       0,    61,    51,     0,    50,     0,    20,     0,     0,    33,
       0,     0,     0,    36,    57,     0,     0,     0,     0,    58,
       0,     0,    35,    60,    30,     0,     0,     0,    40,     0,
     119,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    73,    75,    74,    77,    78,    76,    81,    82,
      79,    80,    83,     0,   121,    63,     0,     0,    65,     0,
      56,     0,    71,     0,     0,     0,    29,    39,     0,     0,
       0,   113,   119,   114,     0,   115,     0,     0,     0,     0,
       0,   110,   121,   111,     0,     0,     0,     0,     0,     0,
      90,    91,    69,    72,     0,     0,    68,     0,    62,    64,
      55,    70,     0,    28,     0,     0,   126,   127,   124,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    95,     0,
       0,   114,     0,     0,     0,     0,     0,     0,   125,    66,
       0,    38,     0,   120,   123,     0,   126,   127,   116,   117,
       0,    96,    97,    98,    99,   100,   101,   102,   103,   105,
     104,   106,   107,   108,   109,   125,     0,     0,     0,     0,
      88,     0,     0,    89,    67,     0,     0,   112,     0,   124,
       0,   124,     0,   118,     0,    84,    86,    85,    87,     0,
       0,     0,    42,   122,     0,     0,     0,     0,     0,     0,
       0,    41,   128,   124,   129,   124,   124,     0,     0,     0,
       0,     0,     0,     0,    93,    94,   131,   130,   132,     0,
      92
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -216,  -216,  -216,  -216,  -216,   461,  -216,  -216,   420,     2,
     485,  -216,   463,  -216,  -216,  -216,   410,   411,   -23,   379,
    -101,    14,  -216,   482,  -216,   440,    43,    -5,   344,   -62,
     407,   -91,  -216,   351,  -216,   -87,    -2,  -214,  -130,  -216,
    -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,   -79,
    -105,  -215,  -103,  -216
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,     5,     6,    24,    25,    26,    66,    67,    33,
       7,     8,    29,    30,    31,    85,    86,    87,    88,   117,
     118,     9,    15,    16,    38,    39,    34,    35,    73,    75,
      76,   107,   147,   148,   187,   108,    21,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   234,
     171,   235,   172,   173
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     143,   183,   144,    14,   110,    92,    93,    36,   111,    10,
      89,    10,    11,    12,    11,    12,   157,    14,    45,    20,
     149,    27,    17,   151,    22,    50,   143,    10,   144,    56,
      11,    12,    57,    43,   161,   162,   163,   164,     1,    56,
     165,    64,    65,   170,    56,    23,   166,    69,   167,   168,
      68,   153,    28,   157,   284,    22,   286,    81,    56,   156,
      74,    80,   269,    44,   103,   289,   290,   270,    68,   220,
      49,   144,    37,    84,    74,   193,    46,   103,   300,   195,
     301,   302,    18,   303,    42,   169,    63,    84,    10,   102,
     204,    11,    12,   271,    51,    74,   222,     1,   272,   225,
     226,     3,   102,   116,    48,   227,    58,    13,   146,    59,
     161,   162,   221,   164,    52,    74,   165,   116,   198,   116,
      54,   158,   166,   199,   167,   168,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,    10,
      55,   265,    11,    12,    10,   266,    62,    11,    12,   146,
      10,    70,    60,    11,    12,    61,   116,    72,    40,   183,
     183,   169,   229,    98,     1,   230,     2,    10,     3,   101,
      32,    12,    71,   183,   143,   143,   144,   144,   281,    77,
     105,   120,   106,   121,   143,   143,   144,   144,   122,   283,
     123,   124,   143,   125,   144,   120,   126,   121,   143,    83,
     144,   158,   122,   159,   123,   124,   120,   125,   121,    79,
     126,    10,   182,    10,    11,    12,    11,    12,    90,   127,
      94,   297,   298,   128,    95,    10,   129,   130,    11,    12,
     115,    10,   145,   127,    11,    12,   120,   128,   121,    96,
     129,   130,    91,   122,   188,   123,   124,   120,   125,   121,
      97,   126,   104,    93,   122,   114,   123,   124,   120,   125,
     121,   119,   126,   112,   113,   122,   150,   123,   124,   105,
     125,   192,    93,   126,   127,   267,   268,   152,   128,   155,
     299,   129,   130,   292,   268,   127,   294,   268,   309,   128,
     306,   268,   129,   130,   307,   268,   127,   308,   268,   113,
     128,   174,   175,   129,   130,   205,   206,   207,   208,   160,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   205,
     206,   207,   208,   176,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   177,   178,   233,   179,   180,   181,   184,
     185,   190,   205,   206,   207,   208,   241,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   205,   206,   207,   208,   258,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   186,
     191,   196,   197,   200,   201,   202,   203,   231,   205,   206,
     207,   208,   261,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   219,   223,   224,   228,   232,   236,   238,   237,
     240,   205,   206,   207,   208,   262,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   239,   255,   256,   257,   259,
     264,   260,   205,   206,   207,   208,   218,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   273,   274,   275,   276,
     277,   278,   279,   205,   206,   207,   208,   263,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   207,   208,   282,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   280,
     285,   287,   288,   291,   293,    47,    82,   295,   296,   304,
      19,   305,   310,    53,   154,    99,   100,    41,   189,   194,
     109,    78
};

static const yytype_int16 yycheck[] =
{
     105,   131,   105,     1,    95,    55,    56,     9,    95,     4,
      72,     4,     7,     8,     7,     8,   117,    15,    20,     5,
     107,     7,     0,   110,     4,    27,   131,     4,   131,    34,
       7,     8,    34,    19,     3,     4,     5,     6,    22,    44,
       9,    43,    44,   122,    49,    25,    15,    49,    17,    18,
      48,   113,     4,   154,   269,     4,   271,    52,    63,    52,
      58,    63,    54,    20,    87,   279,   280,    59,    66,   174,
      27,   174,     4,    71,    72,    52,    25,   100,   293,   158,
     295,   296,     7,   297,    10,    54,    43,    85,     4,    87,
     169,     7,     8,    54,    12,    93,   175,    22,    59,   178,
     179,    26,   100,   101,    51,   184,    54,    23,   106,    57,
       3,     4,     5,     6,    27,   113,     9,   115,    54,   117,
      51,    57,    15,    59,    17,    18,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,     4,
       4,   232,     7,     8,     4,   232,    54,     7,     8,   147,
       4,     4,    53,     7,     8,    56,   154,    54,    23,   289,
     290,    54,    53,    23,    22,    56,    24,     4,    26,    23,
       7,     8,    22,   303,   279,   280,   279,   280,   265,     3,
      20,     4,    22,     6,   289,   290,   289,   290,    11,   268,
      13,    14,   297,    16,   297,     4,    19,     6,   303,     4,
     303,    57,    11,    59,    13,    14,     4,    16,     6,    55,
      19,     4,    21,     4,     7,     8,     7,     8,    51,    42,
      58,    44,    45,    46,    51,     4,    49,    50,     7,     8,
      23,     4,    23,    42,     7,     8,     4,    46,     6,    53,
      49,    50,     4,    11,    23,    13,    14,     4,    16,     6,
       4,    19,    55,    56,    11,    52,    13,    14,     4,    16,
       6,     4,    19,    53,    54,    11,    52,    13,    14,    20,
      16,    55,    56,    19,    42,    55,    56,    52,    46,     4,
      48,    49,    50,    55,    56,    42,    55,    56,    45,    46,
      55,    56,    49,    50,    55,    56,    42,    55,    56,    54,
      46,    54,    54,    49,    50,    28,    29,    30,    31,    59,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    28,
      29,    30,    31,    54,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    54,    54,    58,    54,    53,    53,    32,
      59,    52,    28,    29,    30,    31,    55,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    28,    29,    30,    31,    55,
      33,    34,    35,    36,    37,    38,    39,    40,    41,     4,
      52,     4,     4,    59,    54,    54,    54,    53,    28,    29,
      30,    31,    55,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    59,     4,     4,     4,    51,     4,    55,     4,
       4,    28,    29,    30,    31,    55,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    55,     4,    55,    55,    55,
       4,    55,    28,    29,    30,    31,    53,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    55,    59,    53,    53,
      53,    53,    43,    28,    29,    30,    31,    53,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    30,    31,    52,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    47,
       4,     4,     4,    52,    54,    24,    66,    54,    54,    53,
       5,    53,    53,    30,   115,    85,    85,    15,   147,   155,
      93,    61
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    22,    24,    26,    61,    62,    63,    70,    71,    81,
       4,     7,     8,    23,    69,    82,    83,     0,     7,    70,
      81,    96,     4,    25,    64,    65,    66,    81,     4,    72,
      73,    74,     7,    69,    86,    87,    96,     4,    84,    85,
      23,    83,    10,    81,    86,    96,    25,    65,    51,    86,
      96,    12,    27,    72,    51,     4,    87,    96,    54,    57,
      53,    56,    54,    86,    96,    96,    67,    68,    69,    96,
       4,    22,    54,    88,    69,    89,    90,     3,    85,    55,
      96,    52,    68,     4,    69,    75,    76,    77,    78,    89,
      51,     4,    55,    56,    58,    51,    53,     4,    23,    76,
      77,    23,    69,    78,    55,    20,    22,    91,    95,    90,
      91,    95,    53,    54,    52,    23,    69,    79,    80,     4,
       4,     6,    11,    13,    14,    16,    19,    42,    46,    49,
      50,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   110,   112,    23,    69,    92,    93,    95,
      52,    95,    52,    89,    79,     4,    52,    80,    57,    59,
      59,     3,     4,     5,     6,     9,    15,    17,    18,    54,
     109,   110,   112,   113,    54,    54,    54,    54,    54,    54,
      53,    53,    21,    98,    32,    59,     4,    94,    23,    93,
      52,    52,    55,    52,    88,   109,     4,     4,    54,    59,
      59,    54,    54,    54,   109,    28,    29,    30,    31,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    53,    59,
     110,     5,   109,     4,     4,   109,   109,   109,     4,    53,
      56,    53,    51,    58,   109,   111,     4,     4,    55,    55,
       4,    55,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,     4,    55,    55,    55,    55,
      55,    55,    55,    53,     4,    91,    95,    55,    56,    54,
      59,    54,    59,    55,    59,    53,    53,    53,    53,    43,
      47,    95,    52,   109,   111,     4,   111,     4,     4,    97,
      97,    52,    55,    54,    55,    54,    54,    44,    45,    48,
     111,   111,   111,    97,    53,    53,    55,    55,    55,    45,
      53
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    60,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    62,    62,    63,    64,    64,    65,    66,    67,    67,
      68,    69,    69,    69,    70,    71,    72,    72,    73,    73,
      73,    74,    74,    75,    75,    76,    77,    77,    78,    79,
      79,    80,    80,    81,    81,    82,    82,    83,    84,    84,
      85,    85,    85,    86,    86,    87,    87,    88,    89,    89,
      89,    90,    91,    91,    92,    92,    93,    94,    94,    95,
      96,    96,    97,    97,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    99,   100,   100,   101,   102,   103,
     104,   105,   106,   106,   107,   108,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   110,
     110,   110,   111,   111,   111,   112,   112,   112,   113,   113,
     113,   113,   113
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     4,     4,     3,     4,     3,     2,     3,
       2,     3,     2,     1,     2,     1,     4,     1,     2,     1,
       3,     1,     1,     1,     3,     1,     2,     1,     8,     7,
       6,     1,     3,     2,     1,     3,     2,     1,     6,     2,
       1,     7,     6,     3,     2,     2,     1,     3,     3,     1,
       4,     4,     1,     2,     1,     7,     6,     3,     3,     1,
       0,     2,     3,     2,     2,     1,     3,     3,     1,     3,
       8,     7,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     5,     5,     5,     5,     4,     4,
       2,     2,    10,     8,     8,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     1,     4,     1,     1,     1,     3,     3,     4,     1,
       4,     1,     3,     1,     0,     3,     3,     3,     6,     6,
       8,     8,     8
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
#line 1584 "y.tab.c"
    break;

  case 3: /* Program: TypeDeclBlock ClassDeclBlock GDeclBlock MainBlock  */
#line 42 "parser.y"
                                                                            {}
#line 1590 "y.tab.c"
    break;

  case 4: /* Program: ClassDeclBlock GDeclBlock FuncDefBlock MainBlock  */
#line 43 "parser.y"
                                                                            {}
#line 1596 "y.tab.c"
    break;

  case 5: /* Program: ClassDeclBlock GDeclBlock MainBlock  */
#line 44 "parser.y"
                                                                            {}
#line 1602 "y.tab.c"
    break;

  case 6: /* Program: TypeDeclBlock GDeclBlock FuncDefBlock MainBlock  */
#line 45 "parser.y"
                                                                            {}
#line 1608 "y.tab.c"
    break;

  case 7: /* Program: TypeDeclBlock GDeclBlock MainBlock  */
#line 46 "parser.y"
                                                                            {}
#line 1614 "y.tab.c"
    break;

  case 8: /* Program: TypeDeclBlock MainBlock  */
#line 47 "parser.y"
                                                                            {}
#line 1620 "y.tab.c"
    break;

  case 9: /* Program: GDeclBlock FuncDefBlock MainBlock  */
#line 48 "parser.y"
                                                                            {}
#line 1626 "y.tab.c"
    break;

  case 10: /* Program: GDeclBlock MainBlock  */
#line 49 "parser.y"
                                                                            {}
#line 1632 "y.tab.c"
    break;

  case 11: /* TypeDeclBlock: TypeDeclBlockInit TypeDeclList ENDTYPE  */
#line 54 "parser.y"
                                                                {}
#line 1638 "y.tab.c"
    break;

  case 12: /* TypeDeclBlock: TypeDeclBlockInit ENDTYPE  */
#line 55 "parser.y"
                                                                {}
#line 1644 "y.tab.c"
    break;

  case 13: /* TypeDeclBlockInit: TYPE  */
#line 57 "parser.y"
                            { initializeTypeTable (); }
#line 1650 "y.tab.c"
    break;

  case 14: /* TypeDeclList: TypeDeclList TypeStmt  */
#line 59 "parser.y"
                                                {}
#line 1656 "y.tab.c"
    break;

  case 15: /* TypeDeclList: TypeStmt  */
#line 60 "parser.y"
                                                {}
#line 1662 "y.tab.c"
    break;

  case 16: /* TypeStmt: TypeName '{' FieldDeclList '}'  */
#line 62 "parser.y"
                                                      {}
#line 1668 "y.tab.c"
    break;

  case 17: /* TypeName: ID  */
#line 64 "parser.y"
                            { addTypeEntry ((yyvsp[0].node)->varname); }
#line 1674 "y.tab.c"
    break;

  case 18: /* FieldDeclList: FieldDeclList FieldDecl  */
#line 66 "parser.y"
                                                {}
#line 1680 "y.tab.c"
    break;

  case 19: /* FieldDeclList: FieldDecl  */
#line 67 "parser.y"
                                                {}
#line 1686 "y.tab.c"
    break;

  case 20: /* FieldDecl: Type ID ';'  */
#line 69 "parser.y"
                                        { (yyval.node) = makeFieldDeclNode ((yyvsp[-1].node)->varname, (yyvsp[-2].node)->datatype, (yyvsp[-2].node)->classtype); addField ((yyval.node)); }
#line 1692 "y.tab.c"
    break;

  case 21: /* Type: INT  */
#line 71 "parser.y"
                            { (yyval.node) = makeTypeNode ("INT"); }
#line 1698 "y.tab.c"
    break;

  case 22: /* Type: STR  */
#line 72 "parser.y"
                            { (yyval.node) = makeTypeNode ("STR"); }
#line 1704 "y.tab.c"
    break;

  case 23: /* Type: ID  */
#line 73 "parser.y"
                            { (yyval.node) = getClassNode ((yyvsp[0].node)->varname) ? makeClassTypeNode ((yyvsp[0].node)->varname) : makeTypeNode ((yyvsp[0].node)->varname); }
#line 1710 "y.tab.c"
    break;

  case 24: /* ClassDeclBlock: ClassDeclBlockInit ClassDeclList ENDCLASS  */
#line 77 "parser.y"
                                                                     {}
#line 1716 "y.tab.c"
    break;

  case 25: /* ClassDeclBlockInit: CLASS  */
#line 80 "parser.y"
                    {
                        registerInit ();
                        FILE *outfile = fopen ("code-o.xsm", "w");
                        headerGenerator (outfile);
                        fclose (outfile);
                    }
#line 1727 "y.tab.c"
    break;

  case 26: /* ClassDeclList: ClassDecl ClassDeclList  */
#line 87 "parser.y"
                                                {}
#line 1733 "y.tab.c"
    break;

  case 27: /* ClassDeclList: ClassDecl  */
#line 88 "parser.y"
                                                {}
#line 1739 "y.tab.c"
    break;

  case 28: /* ClassDecl: ClassName '{' DECL MemberDeclList MethodDeclList ENDDECL MethodDefList '}'  */
#line 90 "parser.y"
                                                                                                    {}
#line 1745 "y.tab.c"
    break;

  case 29: /* ClassDecl: ClassName '{' DECL MethodDeclList ENDDECL MethodDefList '}'  */
#line 91 "parser.y"
                                                                                                    {}
#line 1751 "y.tab.c"
    break;

  case 30: /* ClassDecl: ClassName '{' DECL MemberDeclList ENDDECL '}'  */
#line 92 "parser.y"
                                                                                                    {}
#line 1757 "y.tab.c"
    break;

  case 31: /* ClassName: ID  */
#line 94 "parser.y"
                                        { initializeLTable (); addClassEntry ((yyvsp[0].node)->varname, NULL); }
#line 1763 "y.tab.c"
    break;

  case 32: /* ClassName: ID EXTENDS ID  */
#line 96 "parser.y"
                    { 
                        initializeLTable (); addClassEntry ((yyvsp[-2].node)->varname, (yyvsp[0].node)->varname);
                        extendedClass = true;
                    }
#line 1772 "y.tab.c"
    break;

  case 33: /* MemberDeclList: MemberDeclList MemberDecl  */
#line 101 "parser.y"
                                                    {}
#line 1778 "y.tab.c"
    break;

  case 34: /* MemberDeclList: MemberDecl  */
#line 102 "parser.y"
                                                    {}
#line 1784 "y.tab.c"
    break;

  case 35: /* MemberDecl: Type ID ';'  */
#line 104 "parser.y"
                                        { (yyval.node) = makeFieldDeclNode ((yyvsp[-1].node)->varname, (yyvsp[-2].node)->datatype, (yyvsp[-2].node)->classtype); addMember ((yyval.node)); }
#line 1790 "y.tab.c"
    break;

  case 36: /* MethodDeclList: MethodDeclList MethodDecl  */
#line 106 "parser.y"
                                                    {}
#line 1796 "y.tab.c"
    break;

  case 37: /* MethodDeclList: MethodDecl  */
#line 107 "parser.y"
                                                    {}
#line 1802 "y.tab.c"
    break;

  case 38: /* MethodDecl: Type ID '(' ParamList ')' ';'  */
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
#line 1818 "y.tab.c"
    break;

  case 39: /* MethodDefList: MethodDefList MethodDef  */
#line 122 "parser.y"
                                                    {}
#line 1824 "y.tab.c"
    break;

  case 40: /* MethodDefList: MethodDef  */
#line 123 "parser.y"
                                                    {}
#line 1830 "y.tab.c"
    break;

  case 41: /* MethodDef: Type ID ParamBlock '{' LDeclBlock FuncBody '}'  */
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
#line 1857 "y.tab.c"
    break;

  case 42: /* MethodDef: Type ID ParamBlock '{' FuncBody '}'  */
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
#line 1884 "y.tab.c"
    break;

  case 43: /* GDeclBlock: DECL GDeclList ENDDECL  */
#line 174 "parser.y"
                                                { initializeGTable (); declareGVariables ((yyvsp[-1].node)); initializeLTable (); }
#line 1890 "y.tab.c"
    break;

  case 44: /* GDeclBlock: DECL ENDDECL  */
#line 175 "parser.y"
                                                { initializeLTable (); }
#line 1896 "y.tab.c"
    break;

  case 45: /* GDeclList: GDeclList GDecl  */
#line 177 "parser.y"
                                                { TreeNode *current = (yyvsp[-1].node); while (current->left) current = current->left; current->left = (yyvsp[0].node); (yyval.node) = (yyvsp[-1].node); }
#line 1902 "y.tab.c"
    break;

  case 46: /* GDeclList: GDecl  */
#line 178 "parser.y"
                                                { (yyval.node) = (yyvsp[0].node); }
#line 1908 "y.tab.c"
    break;

  case 47: /* GDecl: Type GVarList ';'  */
#line 180 "parser.y"
                                                { (yyval.node) = makeDeclarationNode ((yyvsp[-2].node)->datatype, (yyvsp[-2].node)->classtype, NULL, (yyvsp[-1].node)); }
#line 1914 "y.tab.c"
    break;

  case 48: /* GVarList: GVarList ',' GIdentifierDecl  */
#line 182 "parser.y"
                                                { TreeNode *current = (yyvsp[-2].node); while (current->left) current = current->left; current->left = (yyvsp[0].node); (yyval.node) = (yyvsp[-2].node); }
#line 1920 "y.tab.c"
    break;

  case 49: /* GVarList: GIdentifierDecl  */
#line 183 "parser.y"
                                                { (yyval.node) = (yyvsp[0].node); }
#line 1926 "y.tab.c"
    break;

  case 50: /* GIdentifierDecl: ID '[' NUM ']'  */
#line 185 "parser.y"
                                                { (yyval.node) = makeArrayDeclNode ((yyvsp[-3].node)->varname, (yyvsp[-1].node)->varvalue); }
#line 1932 "y.tab.c"
    break;

  case 51: /* GIdentifierDecl: ID '(' ParamList ')'  */
#line 186 "parser.y"
                                                { (yyval.node) = makeFunctionDeclNode ((yyvsp[-3].node)->varname, NULL, (yyvsp[-1].node)); }
#line 1938 "y.tab.c"
    break;

  case 52: /* GIdentifierDecl: ID  */
#line 187 "parser.y"
                                                { (yyval.node) = (yyvsp[0].node); }
#line 1944 "y.tab.c"
    break;

  case 53: /* FuncDefBlock: FuncDefBlock FuncDef  */
#line 191 "parser.y"
                                        {}
#line 1950 "y.tab.c"
    break;

  case 54: /* FuncDefBlock: FuncDef  */
#line 192 "parser.y"
                                        {}
#line 1956 "y.tab.c"
    break;

  case 55: /* FuncDef: Type ID ParamBlock '{' LDeclBlock FuncBody '}'  */
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
#line 1982 "y.tab.c"
    break;

  case 56: /* FuncDef: Type ID ParamBlock '{' FuncBody '}'  */
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
#line 2008 "y.tab.c"
    break;

  case 57: /* ParamBlock: '(' ParamList ')'  */
#line 239 "parser.y"
                                        { declareLParameters ((yyvsp[-1].node)); (yyval.node) = (yyvsp[-1].node); }
#line 2014 "y.tab.c"
    break;

  case 58: /* ParamList: ParamList ',' Param  */
#line 241 "parser.y"
                                        { TreeNode* current = (yyvsp[-2].node); while (current->left) current = current->left; current->left = (yyvsp[0].node); (yyval.node) = (yyvsp[-2].node); }
#line 2020 "y.tab.c"
    break;

  case 59: /* ParamList: Param  */
#line 242 "parser.y"
                                        { (yyval.node) = (yyvsp[0].node); }
#line 2026 "y.tab.c"
    break;

  case 60: /* ParamList: %empty  */
#line 243 "parser.y"
                                        { (yyval.node) = NULL; }
#line 2032 "y.tab.c"
    break;

  case 61: /* Param: Type ID  */
#line 245 "parser.y"
                            { (yyval.node) = makeParameterNode ((yyvsp[-1].node)->datatype, (yyvsp[0].node)->varname); }
#line 2038 "y.tab.c"
    break;

  case 62: /* LDeclBlock: DECL LDeclList ENDDECL  */
#line 247 "parser.y"
                                             { declareLVariables ((yyvsp[-1].node)); }
#line 2044 "y.tab.c"
    break;

  case 63: /* LDeclBlock: DECL ENDDECL  */
#line 248 "parser.y"
                                             { }
#line 2050 "y.tab.c"
    break;

  case 64: /* LDeclList: LDeclList LDecl  */
#line 250 "parser.y"
                                    { TreeNode *current = (yyvsp[-1].node); while (current->left) current = current->left; current->left = (yyvsp[0].node); (yyval.node) = (yyvsp[-1].node); }
#line 2056 "y.tab.c"
    break;

  case 65: /* LDeclList: LDecl  */
#line 251 "parser.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 2062 "y.tab.c"
    break;

  case 66: /* LDecl: Type LVarList ';'  */
#line 254 "parser.y"
                { 
                    if ((yyvsp[-2].node)->classtype) { printf ("ERROR : class-type variables cannot be declared locally\n"); printf ("Line : %d\n", yylineno); exit (1); }
                    (yyval.node) = makeDeclarationNode ((yyvsp[-2].node)->datatype, NULL, NULL, (yyvsp[-1].node)); 
                }
#line 2071 "y.tab.c"
    break;

  case 67: /* LVarList: LVarList ',' ID  */
#line 259 "parser.y"
                                    { TreeNode *current = (yyvsp[-2].node); while (current->left) current = current->left; current->left = (yyvsp[0].node); (yyval.node) = (yyvsp[-2].node); }
#line 2077 "y.tab.c"
    break;

  case 68: /* LVarList: ID  */
#line 260 "parser.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 2083 "y.tab.c"
    break;

  case 69: /* FuncBody: START StmtList END  */
#line 262 "parser.y"
                                        { (yyval.node) = (yyvsp[-1].node); }
#line 2089 "y.tab.c"
    break;

  case 70: /* MainBlock: INT MAIN '(' ')' '{' LDeclBlock FuncBody '}'  */
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
#line 2112 "y.tab.c"
    break;

  case 71: /* MainBlock: INT MAIN '(' ')' '{' FuncBody '}'  */
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
#line 2127 "y.tab.c"
    break;

  case 72: /* StmtList: StmtList Stmt  */
#line 297 "parser.y"
                            { (yyval.node) = makeConnectorNode ((yyvsp[-1].node), (yyvsp[0].node)); }
#line 2133 "y.tab.c"
    break;

  case 73: /* StmtList: Stmt  */
#line 298 "parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 2139 "y.tab.c"
    break;

  case 74: /* Stmt: OutStmt  */
#line 300 "parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 2145 "y.tab.c"
    break;

  case 75: /* Stmt: InStmt  */
#line 301 "parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 2151 "y.tab.c"
    break;

  case 76: /* Stmt: AssgnStmt  */
#line 302 "parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 2157 "y.tab.c"
    break;

  case 77: /* Stmt: FreeStmt  */
#line 303 "parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 2163 "y.tab.c"
    break;

  case 78: /* Stmt: DeleteStmt  */
#line 304 "parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 2169 "y.tab.c"
    break;

  case 79: /* Stmt: IfStmt  */
#line 305 "parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 2175 "y.tab.c"
    break;

  case 80: /* Stmt: WhileStmt  */
#line 306 "parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 2181 "y.tab.c"
    break;

  case 81: /* Stmt: BreakStmt  */
#line 307 "parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 2187 "y.tab.c"
    break;

  case 82: /* Stmt: ContinueStmt  */
#line 308 "parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 2193 "y.tab.c"
    break;

  case 83: /* Stmt: ReturnStmt  */
#line 309 "parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 2199 "y.tab.c"
    break;

  case 84: /* InStmt: READ '(' Identifier ')' ';'  */
#line 312 "parser.y"
                                                        { (yyval.node) = makeReadNode ((yyvsp[-2].node)); }
#line 2205 "y.tab.c"
    break;

  case 85: /* OutStmt: WRITE '(' Expr ')' ';'  */
#line 313 "parser.y"
                                                        { (yyval.node) = makeWriteNode ((yyvsp[-2].node)); }
#line 2211 "y.tab.c"
    break;

  case 86: /* OutStmt: WRITE '(' SID ')' ';'  */
#line 314 "parser.y"
                                                        { (yyval.node) = makeWriteNode ((yyvsp[-2].node)); }
#line 2217 "y.tab.c"
    break;

  case 87: /* FreeStmt: FREE '(' ID ')' ';'  */
#line 316 "parser.y"
                                            { (yyval.node) = makeFreeNode ((yyvsp[-2].node)); }
#line 2223 "y.tab.c"
    break;

  case 88: /* DeleteStmt: DELETE '(' ID ')'  */
#line 317 "parser.y"
                                            { (yyval.node) = makeDeleteNode ((yyvsp[-1].node)); }
#line 2229 "y.tab.c"
    break;

  case 89: /* AssgnStmt: Identifier EQL Expr ';'  */
#line 319 "parser.y"
                                            { (yyval.node) = makeOperatorNode ("=", (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 2235 "y.tab.c"
    break;

  case 90: /* BreakStmt: BREAK ';'  */
#line 321 "parser.y"
                                        { (yyval.node) = makeBreakNode (); }
#line 2241 "y.tab.c"
    break;

  case 91: /* ContinueStmt: CONTINUE ';'  */
#line 322 "parser.y"
                                        { (yyval.node) = makeContinueNode (); }
#line 2247 "y.tab.c"
    break;

  case 92: /* IfStmt: IF '(' Expr ')' THEN StmtList ELSE StmtList ENDIF ';'  */
#line 324 "parser.y"
                                                                                { (yyval.node) = makeIfElseNode ((yyvsp[-7].node), (yyvsp[-4].node), (yyvsp[-2].node)); }
#line 2253 "y.tab.c"
    break;

  case 93: /* IfStmt: IF '(' Expr ')' THEN StmtList ENDIF ';'  */
#line 325 "parser.y"
                                                                                { (yyval.node) = makeIfNode ((yyvsp[-5].node), (yyvsp[-2].node)); }
#line 2259 "y.tab.c"
    break;

  case 94: /* WhileStmt: WHILE '(' Expr ')' DO StmtList ENDWHILE ';'  */
#line 327 "parser.y"
                                                                                { (yyval.node) = makeWhileNode ((yyvsp[-5].node), (yyvsp[-2].node)); }
#line 2265 "y.tab.c"
    break;

  case 95: /* ReturnStmt: RETURN Expr ';'  */
#line 329 "parser.y"
                                         { (yyval.node) = makeReturnNode ((yyvsp[-1].node)); }
#line 2271 "y.tab.c"
    break;

  case 96: /* Expr: '(' Expr ')'  */
#line 331 "parser.y"
                                { (yyval.node) = (yyvsp[-1].node); }
#line 2277 "y.tab.c"
    break;

  case 97: /* Expr: Expr ADD Expr  */
#line 332 "parser.y"
                                { (yyval.node) = makeOperatorNode ("+", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2283 "y.tab.c"
    break;

  case 98: /* Expr: Expr SUB Expr  */
#line 333 "parser.y"
                                { (yyval.node) = makeOperatorNode ("-", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2289 "y.tab.c"
    break;

  case 99: /* Expr: Expr MUL Expr  */
#line 334 "parser.y"
                                { (yyval.node) = makeOperatorNode ("*", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2295 "y.tab.c"
    break;

  case 100: /* Expr: Expr DIV Expr  */
#line 335 "parser.y"
                                { (yyval.node) = makeOperatorNode ("/", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2301 "y.tab.c"
    break;

  case 101: /* Expr: Expr LT Expr  */
#line 336 "parser.y"
                                { (yyval.node) = makeOperatorNode ("<", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2307 "y.tab.c"
    break;

  case 102: /* Expr: Expr GT Expr  */
#line 337 "parser.y"
                                { (yyval.node) = makeOperatorNode (">", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2313 "y.tab.c"
    break;

  case 103: /* Expr: Expr EQ Expr  */
#line 338 "parser.y"
                                { (yyval.node) = makeOperatorNode ("==", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2319 "y.tab.c"
    break;

  case 104: /* Expr: Expr LE Expr  */
#line 339 "parser.y"
                                { (yyval.node) = makeOperatorNode ("<=", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2325 "y.tab.c"
    break;

  case 105: /* Expr: Expr GE Expr  */
#line 340 "parser.y"
                                { (yyval.node) = makeOperatorNode (">=", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2331 "y.tab.c"
    break;

  case 106: /* Expr: Expr NE Expr  */
#line 341 "parser.y"
                                { (yyval.node) = makeOperatorNode ("!=", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2337 "y.tab.c"
    break;

  case 107: /* Expr: Expr AND Expr  */
#line 342 "parser.y"
                                { (yyval.node) = makeOperatorNode ("&&", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2343 "y.tab.c"
    break;

  case 108: /* Expr: Expr OR Expr  */
#line 343 "parser.y"
                                { (yyval.node) = makeOperatorNode ("||", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2349 "y.tab.c"
    break;

  case 109: /* Expr: Expr NOT Expr  */
#line 344 "parser.y"
                                { (yyval.node) = makeOperatorNode ("~",  (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2355 "y.tab.c"
    break;

  case 110: /* Expr: Identifier  */
#line 345 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2361 "y.tab.c"
    break;

  case 111: /* Expr: FieldFunc  */
#line 346 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2367 "y.tab.c"
    break;

  case 112: /* Expr: ID '(' ArgsList ')'  */
#line 348 "parser.y"
        { 
            (yyvsp[-3].node)->datatype = getVariableType ((yyvsp[-3].node)->varname);

            if (matchArguements (getGVariable((yyvsp[-3].node)->varname)->param, (yyvsp[-1].node)) == false) {
                printf ("ERROR : invalid arguement type\n");
                printf ("Line : %d\n", yylineno);
                exit (1);
            } 
            
            (yyval.node) = makeFunctionCallNode ((yyvsp[-3].node)->varname, (yyvsp[-1].node)); 
        }
#line 2383 "y.tab.c"
    break;

  case 113: /* Expr: NUM  */
#line 359 "parser.y"
                                { (yyvsp[0].node)->datatype = getTypeNode ("INT"); (yyval.node) = (yyvsp[0].node); }
#line 2389 "y.tab.c"
    break;

  case 114: /* Expr: SID  */
#line 360 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2395 "y.tab.c"
    break;

  case 115: /* Expr: NULLL  */
#line 361 "parser.y"
                                { (yyval.node) = makeNullNode  (); }
#line 2401 "y.tab.c"
    break;

  case 116: /* Expr: ALLOC '(' ')'  */
#line 362 "parser.y"
                                { (yyval.node) = makeAllocNode (); }
#line 2407 "y.tab.c"
    break;

  case 117: /* Expr: INIT '(' ')'  */
#line 363 "parser.y"
                                { (yyval.node) = makeInitNode  (); }
#line 2413 "y.tab.c"
    break;

  case 118: /* Expr: NEW '(' ID ')'  */
#line 364 "parser.y"
                                { (yyval.node) = makeNewNode ((yyvsp[-1].node)); }
#line 2419 "y.tab.c"
    break;

  case 119: /* Identifier: ID  */
#line 367 "parser.y"
                                    { (yyvsp[0].node)->datatype = getVariableType ((yyvsp[0].node)->varname); (yyvsp[0].node)->classtype = getVariableClassType ((yyvsp[0].node)->varname); (yyval.node) = (yyvsp[0].node); }
#line 2425 "y.tab.c"
    break;

  case 120: /* Identifier: ID '[' Expr ']'  */
#line 368 "parser.y"
                                    { (yyval.node) = makeArrayNode ((yyvsp[-3].node)->varname, (yyvsp[-1].node)); }
#line 2431 "y.tab.c"
    break;

  case 121: /* Identifier: Field  */
#line 369 "parser.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 2437 "y.tab.c"
    break;

  case 122: /* ArgsList: ArgsList ',' Expr  */
#line 371 "parser.y"
                                    { (yyval.node) = makeConnectorNode ((yyvsp[-2].node), (yyvsp[0].node)); }
#line 2443 "y.tab.c"
    break;

  case 123: /* ArgsList: Expr  */
#line 372 "parser.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 2449 "y.tab.c"
    break;

  case 124: /* ArgsList: %empty  */
#line 373 "parser.y"
                                    { (yyval.node) = NULL; }
#line 2455 "y.tab.c"
    break;

  case 125: /* Field: Field '.' ID  */
#line 376 "parser.y"
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
#line 2476 "y.tab.c"
    break;

  case 126: /* Field: ID '.' ID  */
#line 393 "parser.y"
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
#line 2496 "y.tab.c"
    break;

  case 127: /* Field: SELF '.' ID  */
#line 409 "parser.y"
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
#line 2512 "y.tab.c"
    break;

  case 128: /* FieldFunc: ID '.' ID '(' ArgsList ')'  */
#line 422 "parser.y"
            {
                (yyvsp[-5].node)->classtype = getVariableClassType ((yyvsp[-5].node)->varname);
                if ((yyvsp[-5].node)->classtype == NULL) { 
                    printf ("ERROR : '%s' does not contain methods\n", (yyvsp[-5].node)->varname); 
                    printf ("Line : %d\n", yylineno); exit (1); 
                }

                if (matchArguements (getMethodFromClass ((yyvsp[-3].node)->varname, (yyvsp[-5].node)->classtype)->param, (yyvsp[-1].node)) == false) {
                    printf ("ERROR : invalid arguement type\n");
                    printf ("Line : %d\n", yylineno); exit (1);
                }

                (yyval.node) = makeMethodCallNode ((yyvsp[-3].node)->varname, (yyvsp[-5].node), (yyvsp[-1].node)); 
                (yyval.node)->classtype = (yyvsp[-5].node)->classtype; (yyval.node)->datatype = getMethodFromClass ((yyvsp[-3].node)->varname, (yyvsp[-5].node)->classtype)->type;
            }
#line 2532 "y.tab.c"
    break;

  case 129: /* FieldFunc: SELF '.' ID '(' ArgsList ')'  */
#line 438 "parser.y"
            {
                if (currentClass == NULL) { 
                    printf ("ERROR : undefined reference to 'self'\n"); 
                    printf ("Line : %d\n", yylineno);
                    exit (1); 
                }

                if (matchArguements (getMethod ((yyvsp[-3].node)->varname)->param, (yyvsp[-1].node)) == false) {
                    printf ("ERROR : invalid arguement type\n");
                    printf ("Line : %d\n", yylineno); exit (1);
                }

                (yyval.node) = makeMethodCallNode ((yyvsp[-3].node)->varname, (yyvsp[-5].node), (yyvsp[-1].node)); 
                (yyval.node)->classtype = currentClass; (yyval.node)->datatype = getMethod ((yyvsp[-3].node)->varname)->type;
            }
#line 2552 "y.tab.c"
    break;

  case 130: /* FieldFunc: SELF '.' ID '.' ID '(' ArgsList ')'  */
#line 454 "parser.y"
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
                
                if (matchArguements (getMethodFromClass ((yyvsp[-3].node)->varname, (yyvsp[-7].node)->classtype)->param, (yyvsp[-1].node)) == false) {
                    printf ("ERROR : invalid arguement type\n");
                    printf ("Line : %d\n", yylineno); exit (1);
                }

                (yyval.node) = makeMethodCallNode ((yyvsp[-3].node)->varname, (yyvsp[-7].node), (yyvsp[-1].node));
                (yyval.node)->classtype = (yyvsp[-7].node)->classtype; (yyval.node)->datatype = getMethodFromClass ((yyvsp[-3].node)->varname, (yyvsp[-7].node)->classtype)->type;
            }
#line 2580 "y.tab.c"
    break;

  case 131: /* FieldFunc: ID '.' ID '.' ID '(' ArgsList ')'  */
#line 478 "parser.y"
            {
                printf ("ERROR : illegal access to method %s\n", (yyvsp[-3].node)->varname);
                printf ("Line : %d\n", yylineno);
                exit (1);
            }
#line 2590 "y.tab.c"
    break;

  case 132: /* FieldFunc: Field '.' ID '.' ID '(' ArgsList ')'  */
#line 483 "parser.y"
                                                   {
                printf ("ERROR : illegal access to method %s\n", (yyvsp[-3].node)->varname);
                printf ("Line : %d\n", yylineno);
                exit (1);
            }
#line 2600 "y.tab.c"
    break;


#line 2604 "y.tab.c"

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

#line 489 "parser.y"
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
