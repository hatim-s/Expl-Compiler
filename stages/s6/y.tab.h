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

#line 159 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
