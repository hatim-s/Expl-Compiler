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

#line 173 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
