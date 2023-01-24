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
    ID = 258,                      /* ID  */
    NUM = 259,                     /* NUM  */
    PLUS = 260,                    /* PLUS  */
    MINUS = 261,                   /* MINUS  */
    MUL = 262,                     /* MUL  */
    DIV = 263,                     /* DIV  */
    ASSIGN = 264,                  /* ASSIGN  */
    BEG = 265,                     /* BEG  */
    END = 266,                     /* END  */
    READ = 267,                    /* READ  */
    WRITE = 268,                   /* WRITE  */
    ELSE = 269,                    /* ELSE  */
    SEMICOLON = 270,               /* SEMICOLON  */
    BREAK = 271,                   /* BREAK  */
    CONTINUE = 272,                /* CONTINUE  */
    IF = 273,                      /* IF  */
    THEN = 274,                    /* THEN  */
    ENDIF = 275,                   /* ENDIF  */
    WHILE = 276,                   /* WHILE  */
    DO = 277,                      /* DO  */
    ENDWHILE = 278,                /* ENDWHILE  */
    REPEAT = 279,                  /* REPEAT  */
    UNTIL = 280,                   /* UNTIL  */
    GT = 281,                      /* GT  */
    GE = 282,                      /* GE  */
    LT = 283,                      /* LT  */
    LE = 284,                      /* LE  */
    EQ = 285,                      /* EQ  */
    NE = 286                       /* NE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define ID 258
#define NUM 259
#define PLUS 260
#define MINUS 261
#define MUL 262
#define DIV 263
#define ASSIGN 264
#define BEG 265
#define END 266
#define READ 267
#define WRITE 268
#define ELSE 269
#define SEMICOLON 270
#define BREAK 271
#define CONTINUE 272
#define IF 273
#define THEN 274
#define ENDIF 275
#define WHILE 276
#define DO 277
#define ENDWHILE 278
#define REPEAT 279
#define UNTIL 280
#define GT 281
#define GE 282
#define LT 283
#define LE 284
#define EQ 285
#define NE 286

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 13 "exprnTree.y"

    struct node *node;


#line 134 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
