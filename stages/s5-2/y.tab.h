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

#line 147 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
