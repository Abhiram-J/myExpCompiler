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
    ALIAS = 258,                   /* ALIAS  */
    DEFINE = 259,                  /* DEFINE  */
    DO = 260,                      /* DO  */
    ELSE = 261,                    /* ELSE  */
    ENDIF = 262,                   /* ENDIF  */
    ENDWHILE = 263,                /* ENDWHILE  */
    IF = 264,                      /* IF  */
    RETURN = 265,                  /* RETURN  */
    IRETURN = 266,                 /* IRETURN  */
    LOAD = 267,                    /* LOAD  */
    STORE = 268,                   /* STORE  */
    THEN = 269,                    /* THEN  */
    WHILE = 270,                   /* WHILE  */
    HALT = 271,                    /* HALT  */
    REG = 272,                     /* REG  */
    NUM = 273,                     /* NUM  */
    ASSIGNOP = 274,                /* ASSIGNOP  */
    ARITHOP1 = 275,                /* ARITHOP1  */
    ARITHOP2 = 276,                /* ARITHOP2  */
    RELOP = 277,                   /* RELOP  */
    LOGOP = 278,                   /* LOGOP  */
    NOTOP = 279,                   /* NOTOP  */
    ID = 280,                      /* ID  */
    BREAK = 281,                   /* BREAK  */
    CONTINUE = 282,                /* CONTINUE  */
    CHKPT = 283,                   /* CHKPT  */
    READ = 284,                    /* READ  */
    READI = 285,                   /* READI  */
    PRINT = 286,                   /* PRINT  */
    STRING = 287,                  /* STRING  */
    INLINE = 288,                  /* INLINE  */
    BACKUP = 289,                  /* BACKUP  */
    RESTORE = 290,                 /* RESTORE  */
    LOADI = 291,                   /* LOADI  */
    GOTO = 292,                    /* GOTO  */
    CALL = 293,                    /* CALL  */
    ENCRYPT = 294,                 /* ENCRYPT  */
    PORT = 295,                    /* PORT  */
    UMIN = 296                     /* UMIN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define ALIAS 258
#define DEFINE 259
#define DO 260
#define ELSE 261
#define ENDIF 262
#define ENDWHILE 263
#define IF 264
#define RETURN 265
#define IRETURN 266
#define LOAD 267
#define STORE 268
#define THEN 269
#define WHILE 270
#define HALT 271
#define REG 272
#define NUM 273
#define ASSIGNOP 274
#define ARITHOP1 275
#define ARITHOP2 276
#define RELOP 277
#define LOGOP 278
#define NOTOP 279
#define ID 280
#define BREAK 281
#define CONTINUE 282
#define CHKPT 283
#define READ 284
#define READI 285
#define PRINT 286
#define STRING 287
#define INLINE 288
#define BACKUP 289
#define RESTORE 290
#define LOADI 291
#define GOTO 292
#define CALL 293
#define ENCRYPT 294
#define PORT 295
#define UMIN 296

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 10 "splparser.y"

    struct tree *n;

#line 153 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
