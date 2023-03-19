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
    STAR = 262,                    /* STAR  */
    DIV = 263,                     /* DIV  */
    MOD = 264,                     /* MOD  */
    ASSIGN = 265,                  /* ASSIGN  */
    BEG = 266,                     /* BEG  */
    END = 267,                     /* END  */
    READ = 268,                    /* READ  */
    WRITE = 269,                   /* WRITE  */
    ELSE = 270,                    /* ELSE  */
    SEMICOLON = 271,               /* SEMICOLON  */
    BREAK = 272,                   /* BREAK  */
    CONTINUE = 273,                /* CONTINUE  */
    DECL = 274,                    /* DECL  */
    ENDDECL = 275,                 /* ENDDECL  */
    INT = 276,                     /* INT  */
    STR = 277,                     /* STR  */
    AMP = 278,                     /* AMP  */
    MAIN = 279,                    /* MAIN  */
    RETURN = 280,                  /* RETURN  */
    IF = 281,                      /* IF  */
    THEN = 282,                    /* THEN  */
    ENDIF = 283,                   /* ENDIF  */
    WHILE = 284,                   /* WHILE  */
    DO = 285,                      /* DO  */
    ENDWHILE = 286,                /* ENDWHILE  */
    REPEAT = 287,                  /* REPEAT  */
    UNTIL = 288,                   /* UNTIL  */
    GT = 289,                      /* GT  */
    GE = 290,                      /* GE  */
    LT = 291,                      /* LT  */
    LE = 292,                      /* LE  */
    EQ = 293,                      /* EQ  */
    NE = 294,                      /* NE  */
    AND = 295,                     /* AND  */
    OR = 296,                      /* OR  */
    ADDR = 297                     /* ADDR  */
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
#define STAR 262
#define DIV 263
#define MOD 264
#define ASSIGN 265
#define BEG 266
#define END 267
#define READ 268
#define WRITE 269
#define ELSE 270
#define SEMICOLON 271
#define BREAK 272
#define CONTINUE 273
#define DECL 274
#define ENDDECL 275
#define INT 276
#define STR 277
#define AMP 278
#define MAIN 279
#define RETURN 280
#define IF 281
#define THEN 282
#define ENDIF 283
#define WHILE 284
#define DO 285
#define ENDWHILE 286
#define REPEAT 287
#define UNTIL 288
#define GT 289
#define GE 290
#define LT 291
#define LE 292
#define EQ 293
#define NE 294
#define AND 295
#define OR 296
#define ADDR 297

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 27 "exprnTree.y"

    struct treeNode* treeNode;
    struct globalSymbolNode* globalSymbolNode;
    struct localSymbolNode* localSymbolNode;
    struct paramNode* paramNode;
    struct argNode* argNode;
    int number;
    char* string;


#line 162 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
