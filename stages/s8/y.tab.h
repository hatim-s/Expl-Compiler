/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

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

#line 171 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
