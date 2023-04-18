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

#line 171 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
