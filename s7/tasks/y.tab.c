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
#line 1 "exprnTree.y"

  
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

 #define newl printf("\n");
 #define pdebug printf("\ndebug\n");

 struct globalSymbolTable* gst = NULL;
 struct localSymbolTable* lst = NULL;
 struct typeTable* tt = NULL;
 struct classTable* ct = NULL;
 struct classNode* currentClassNode = NULL;
 char* currentClassName = NULL;

 int returnLabel;

 #include "typeTable.h"
 #include "symbolTable.h"
 #include "exprnTree.h"
 #include "reg.h"
 #include "classTable.c"
 #include "typeTable.c"
 #include "symbolTable.c"
 #include "exprnTree.c"


 
 int yylex(void);
 int yyerror(char *s);
 extern FILE* yyin;
 FILE* ip;
 FILE* fp;



 int flabel = 0;


#line 112 "y.tab.c"

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
    NULLTYPE = 288,                /* NULLTYPE  */
    UNTIL = 289,                   /* UNTIL  */
    TYPE = 290,                    /* TYPE  */
    ENDTYPE = 291,                 /* ENDTYPE  */
    INITIALIZE = 292,              /* INITIALIZE  */
    ALLOC = 293,                   /* ALLOC  */
    FREE = 294,                    /* FREE  */
    CLASS = 295,                   /* CLASS  */
    ENDCLASS = 296,                /* ENDCLASS  */
    EXTENDS = 297,                 /* EXTENDS  */
    SELF = 298,                    /* SELF  */
    DELETE = 299,                  /* DELETE  */
    NEW = 300,                     /* NEW  */
    GT = 301,                      /* GT  */
    GE = 302,                      /* GE  */
    LT = 303,                      /* LT  */
    LE = 304,                      /* LE  */
    EQ = 305,                      /* EQ  */
    NE = 306,                      /* NE  */
    AND = 307,                     /* AND  */
    OR = 308                       /* OR  */
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
#define NULLTYPE 288
#define UNTIL 289
#define TYPE 290
#define ENDTYPE 291
#define INITIALIZE 292
#define ALLOC 293
#define FREE 294
#define CLASS 295
#define ENDCLASS 296
#define EXTENDS 297
#define SELF 298
#define DELETE 299
#define NEW 300
#define GT 301
#define GE 302
#define LT 303
#define LE 304
#define EQ 305
#define NE 306
#define AND 307
#define OR 308

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 42 "exprnTree.y"


    struct treeNode* treeNode;
    struct globalSymbolNode* globalSymbolNode;
    struct localSymbolNode* localSymbolNode;
    struct paramNode* paramNode;
    struct argNode* argNode;
    struct typeNode* typeNode;
    struct fieldNode* fieldNode;
    struct classNode* classNode;
    struct memberFuncNode* memberFuncNode;
    int number;
    char* string;


#line 287 "y.tab.c"

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
  YYSYMBOL_ID = 3,                         /* ID  */
  YYSYMBOL_NUM = 4,                        /* NUM  */
  YYSYMBOL_PLUS = 5,                       /* PLUS  */
  YYSYMBOL_MINUS = 6,                      /* MINUS  */
  YYSYMBOL_STAR = 7,                       /* STAR  */
  YYSYMBOL_DIV = 8,                        /* DIV  */
  YYSYMBOL_MOD = 9,                        /* MOD  */
  YYSYMBOL_ASSIGN = 10,                    /* ASSIGN  */
  YYSYMBOL_BEG = 11,                       /* BEG  */
  YYSYMBOL_END = 12,                       /* END  */
  YYSYMBOL_READ = 13,                      /* READ  */
  YYSYMBOL_WRITE = 14,                     /* WRITE  */
  YYSYMBOL_ELSE = 15,                      /* ELSE  */
  YYSYMBOL_SEMICOLON = 16,                 /* SEMICOLON  */
  YYSYMBOL_BREAK = 17,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 18,                  /* CONTINUE  */
  YYSYMBOL_DECL = 19,                      /* DECL  */
  YYSYMBOL_ENDDECL = 20,                   /* ENDDECL  */
  YYSYMBOL_INT = 21,                       /* INT  */
  YYSYMBOL_STR = 22,                       /* STR  */
  YYSYMBOL_AMP = 23,                       /* AMP  */
  YYSYMBOL_MAIN = 24,                      /* MAIN  */
  YYSYMBOL_RETURN = 25,                    /* RETURN  */
  YYSYMBOL_IF = 26,                        /* IF  */
  YYSYMBOL_THEN = 27,                      /* THEN  */
  YYSYMBOL_ENDIF = 28,                     /* ENDIF  */
  YYSYMBOL_WHILE = 29,                     /* WHILE  */
  YYSYMBOL_DO = 30,                        /* DO  */
  YYSYMBOL_ENDWHILE = 31,                  /* ENDWHILE  */
  YYSYMBOL_REPEAT = 32,                    /* REPEAT  */
  YYSYMBOL_NULLTYPE = 33,                  /* NULLTYPE  */
  YYSYMBOL_UNTIL = 34,                     /* UNTIL  */
  YYSYMBOL_TYPE = 35,                      /* TYPE  */
  YYSYMBOL_ENDTYPE = 36,                   /* ENDTYPE  */
  YYSYMBOL_INITIALIZE = 37,                /* INITIALIZE  */
  YYSYMBOL_ALLOC = 38,                     /* ALLOC  */
  YYSYMBOL_FREE = 39,                      /* FREE  */
  YYSYMBOL_CLASS = 40,                     /* CLASS  */
  YYSYMBOL_ENDCLASS = 41,                  /* ENDCLASS  */
  YYSYMBOL_EXTENDS = 42,                   /* EXTENDS  */
  YYSYMBOL_SELF = 43,                      /* SELF  */
  YYSYMBOL_DELETE = 44,                    /* DELETE  */
  YYSYMBOL_NEW = 45,                       /* NEW  */
  YYSYMBOL_GT = 46,                        /* GT  */
  YYSYMBOL_GE = 47,                        /* GE  */
  YYSYMBOL_LT = 48,                        /* LT  */
  YYSYMBOL_LE = 49,                        /* LE  */
  YYSYMBOL_EQ = 50,                        /* EQ  */
  YYSYMBOL_NE = 51,                        /* NE  */
  YYSYMBOL_AND = 52,                       /* AND  */
  YYSYMBOL_OR = 53,                        /* OR  */
  YYSYMBOL_54_ = 54,                       /* '{'  */
  YYSYMBOL_55_ = 55,                       /* '}'  */
  YYSYMBOL_56_ = 56,                       /* '('  */
  YYSYMBOL_57_ = 57,                       /* ')'  */
  YYSYMBOL_58_ = 58,                       /* ','  */
  YYSYMBOL_59_ = 59,                       /* '['  */
  YYSYMBOL_60_ = 60,                       /* ']'  */
  YYSYMBOL_61_ = 61,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 62,                  /* $accept  */
  YYSYMBOL_program = 63,                   /* program  */
  YYSYMBOL_TypeDefBlock = 64,              /* TypeDefBlock  */
  YYSYMBOL_TypeDefList = 65,               /* TypeDefList  */
  YYSYMBOL_TypeDef = 66,                   /* TypeDef  */
  YYSYMBOL_FieldDeclList = 67,             /* FieldDeclList  */
  YYSYMBOL_FieldDecl = 68,                 /* FieldDecl  */
  YYSYMBOL_ClassDefBlock = 69,             /* ClassDefBlock  */
  YYSYMBOL_ClassDefList = 70,              /* ClassDefList  */
  YYSYMBOL_ClassDef = 71,                  /* ClassDef  */
  YYSYMBOL_ClassDeclBlock = 72,            /* ClassDeclBlock  */
  YYSYMBOL_CName = 73,                     /* CName  */
  YYSYMBOL_MethodDeclList = 74,            /* MethodDeclList  */
  YYSYMBOL_MethodDecl = 75,                /* MethodDecl  */
  YYSYMBOL_MethodDefns = 76,               /* MethodDefns  */
  YYSYMBOL_MFdef = 77,                     /* MFdef  */
  YYSYMBOL_MName = 78,                     /* MName  */
  YYSYMBOL_GdeclBlock = 79,                /* GdeclBlock  */
  YYSYMBOL_GdeclList = 80,                 /* GdeclList  */
  YYSYMBOL_Gdecl = 81,                     /* Gdecl  */
  YYSYMBOL_Type = 82,                      /* Type  */
  YYSYMBOL_GidList = 83,                   /* GidList  */
  YYSYMBOL_Gid = 84,                       /* Gid  */
  YYSYMBOL_ParamList = 85,                 /* ParamList  */
  YYSYMBOL_Param = 86,                     /* Param  */
  YYSYMBOL_IDDECL = 87,                    /* IDDECL  */
  YYSYMBOL_FdefBlock = 88,                 /* FdefBlock  */
  YYSYMBOL_Fdef = 89,                      /* Fdef  */
  YYSYMBOL_FName = 90,                     /* FName  */
  YYSYMBOL_MainBlock = 91,                 /* MainBlock  */
  YYSYMBOL_MainHeader = 92,                /* MainHeader  */
  YYSYMBOL_LdeclBlock = 93,                /* LdeclBlock  */
  YYSYMBOL_LdeclList = 94,                 /* LdeclList  */
  YYSYMBOL_Ldecl = 95,                     /* Ldecl  */
  YYSYMBOL_LidList = 96,                   /* LidList  */
  YYSYMBOL_Lid = 97,                       /* Lid  */
  YYSYMBOL_SLIST = 98,                     /* SLIST  */
  YYSYMBOL_STMT = 99,                      /* STMT  */
  YYSYMBOL_INPUTSTMT = 100,                /* INPUTSTMT  */
  YYSYMBOL_OUTPUTSTMT = 101,               /* OUTPUTSTMT  */
  YYSYMBOL_ASSIGNSTMT = 102,               /* ASSIGNSTMT  */
  YYSYMBOL_IFSTMT = 103,                   /* IFSTMT  */
  YYSYMBOL_WHILESTMT = 104,                /* WHILESTMT  */
  YYSYMBOL_DOWHILESTMT = 105,              /* DOWHILESTMT  */
  YYSYMBOL_REPEATUNTILSTMT = 106,          /* REPEATUNTILSTMT  */
  YYSYMBOL_INITIALIZESTMT = 107,           /* INITIALIZESTMT  */
  YYSYMBOL_ALLOCSTMT = 108,                /* ALLOCSTMT  */
  YYSYMBOL_FREESTMT = 109,                 /* FREESTMT  */
  YYSYMBOL_expr = 110,                     /* expr  */
  YYSYMBOL_ArgList = 111,                  /* ArgList  */
  YYSYMBOL_IDENTIFIER = 112,               /* IDENTIFIER  */
  YYSYMBOL_FieldU = 113,                   /* FieldU  */
  YYSYMBOL_Field = 114,                    /* Field  */
  YYSYMBOL_FieldFunction = 115             /* FieldFunction  */
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
#define YYFINAL  23
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   952

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  54
/* YYNRULES -- Number of rules.  */
#define YYNRULES  146
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  377

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   308


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
      56,    57,     2,     2,    58,     2,    61,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    59,     2,    60,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    54,     2,    55,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    77,    77,    82,    86,    90,    96,   101,   107,   111,
     115,   124,   131,   134,   135,   138,   144,   145,   148,   149,
     153,   160,   161,   164,   167,   174,   178,   179,   182,   184,
     188,   189,   191,   216,   235,   250,   263,   275,   288,   291,
     292,   295,   303,   332,   333,   336,   337,   340,   341,   346,
     347,   348,   351,   352,   355,   358,   361,   365,   366,   369,
     392,   413,   430,   438,   455,   492,   526,   535,   536,   537,
     540,   541,   544,   552,   571,   572,   575,   576,   577,   582,
     583,   586,   587,   588,   589,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   600,   603,   604,   612,   620,   625,
     628,   631,   632,   635,   639,   641,   644,   646,   648,   650,
     652,   654,   656,   657,   658,   659,   660,   661,   662,   663,
     664,   665,   666,   667,   668,   669,   670,   671,   672,   677,
     684,   685,   686,   687,   690,   692,   693,   696,   701,   708,
     715,   720,   727,   731,   735,   746,   754
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
  "\"end of file\"", "error", "\"invalid token\"", "ID", "NUM", "PLUS",
  "MINUS", "STAR", "DIV", "MOD", "ASSIGN", "BEG", "END", "READ", "WRITE",
  "ELSE", "SEMICOLON", "BREAK", "CONTINUE", "DECL", "ENDDECL", "INT",
  "STR", "AMP", "MAIN", "RETURN", "IF", "THEN", "ENDIF", "WHILE", "DO",
  "ENDWHILE", "REPEAT", "NULLTYPE", "UNTIL", "TYPE", "ENDTYPE",
  "INITIALIZE", "ALLOC", "FREE", "CLASS", "ENDCLASS", "EXTENDS", "SELF",
  "DELETE", "NEW", "GT", "GE", "LT", "LE", "EQ", "NE", "AND", "OR", "'{'",
  "'}'", "'('", "')'", "','", "'['", "']'", "'.'", "$accept", "program",
  "TypeDefBlock", "TypeDefList", "TypeDef", "FieldDeclList", "FieldDecl",
  "ClassDefBlock", "ClassDefList", "ClassDef", "ClassDeclBlock", "CName",
  "MethodDeclList", "MethodDecl", "MethodDefns", "MFdef", "MName",
  "GdeclBlock", "GdeclList", "Gdecl", "Type", "GidList", "Gid",
  "ParamList", "Param", "IDDECL", "FdefBlock", "Fdef", "FName",
  "MainBlock", "MainHeader", "LdeclBlock", "LdeclList", "Ldecl", "LidList",
  "Lid", "SLIST", "STMT", "INPUTSTMT", "OUTPUTSTMT", "ASSIGNSTMT",
  "IFSTMT", "WHILESTMT", "DOWHILESTMT", "REPEATUNTILSTMT",
  "INITIALIZESTMT", "ALLOCSTMT", "FREESTMT", "expr", "ArgList",
  "IDENTIFIER", "FieldU", "Field", "FieldFunction", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-218)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      55,   115,    67,     7,    16,   131,    63,   117,   206,  -218,
    -218,  -218,   175,  -218,   206,   -32,  -218,    72,  -218,  -218,
      64,  -218,    50,  -218,    90,    97,    63,   117,   120,   117,
    -218,    76,  -218,    78,   122,   117,  -218,   -33,   145,    29,
    -218,  -218,  -218,  -218,    30,   159,  -218,  -218,  -218,  -218,
     139,   104,   109,   117,   117,  -218,   111,  -218,  -218,     0,
      19,    97,  -218,  -218,   182,   170,  -218,  -218,   206,  -218,
     173,     3,  -218,   187,   159,   212,   182,   150,   117,  -218,
    -218,     6,   888,   196,   203,   888,   215,   253,   259,   125,
    -218,   204,  -218,   255,  -218,  -218,   261,   236,   266,    28,
    -218,   229,   271,   179,  -218,  -218,  -218,   218,    35,   283,
     240,   242,   290,   297,   248,   267,   273,   888,   888,   275,
     287,   693,  -218,  -218,  -218,  -218,  -218,  -218,  -218,  -218,
    -218,  -218,  -218,   334,   336,   286,   217,  -218,   217,   209,
    -218,   888,   714,   888,  -218,  -218,  -218,   182,  -218,  -218,
    -218,   346,   220,  -218,   347,   295,  -218,  -218,    66,   296,
    -218,  -218,   165,   248,   350,  -218,   256,   248,  -218,  -218,
     114,  -218,  -218,  -218,   293,   248,   555,  -218,  -218,   299,
    -218,   248,   248,   908,   735,   366,    -1,   315,  -218,   377,
     385,   368,   323,   380,    39,  -218,    40,  -218,  -218,   759,
     330,   780,  -218,     1,   384,  -218,  -218,   387,    13,   182,
     888,   382,    11,   375,   591,   243,   326,  -218,   335,   338,
     396,   281,   393,   394,   418,   248,   248,   248,   248,   248,
    -218,   248,   248,   248,   248,   248,   248,   248,   248,   395,
     430,   449,   352,   353,  -218,   351,   354,  -218,   256,   357,
     361,   363,   365,   567,   373,   579,  -218,   436,  -218,  -218,
     217,  -218,   379,  -218,   397,   182,   403,   404,   182,   252,
     801,   888,  -218,   258,  -218,   434,   248,  -218,   435,   445,
    -218,   260,   406,   407,  -218,   238,   238,  -218,  -218,  -218,
     640,   640,   640,   640,   640,   640,   640,   640,   416,   446,
     444,   248,   248,   468,   469,   429,   437,   256,   490,  -218,
     500,  -218,   452,  -218,  -218,  -218,   264,   268,  -218,   450,
     822,  -218,  -218,   591,  -218,  -218,  -218,   248,   248,   248,
     888,   888,   483,   502,  -218,  -218,   488,   497,   457,   458,
     459,  -218,   501,   503,  -218,   463,   270,   282,   284,   651,
     843,    -9,   504,  -218,  -218,   505,   506,   507,  -218,  -218,
    -218,  -218,  -218,  -218,   888,   508,   509,  -218,  -218,  -218,
    -218,  -218,   864,  -218,  -218,   510,  -218
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,    38,
      43,    44,     0,    40,     0,     0,    12,     0,    14,    25,
       0,    22,     0,     1,     0,    43,     0,     0,     0,     0,
      58,     0,     8,     0,     0,     0,    10,    54,     0,     0,
      46,    47,    37,    39,     0,     0,    11,    13,    20,    21,
       0,     0,     0,     0,     0,     6,     0,    57,     7,     0,
       0,     0,     3,     9,    51,     0,    56,    42,     0,    41,
       0,     0,    17,     0,     0,     0,    51,     0,     0,     4,
       5,    51,     0,     0,     0,     0,     0,     0,     0,     0,
      50,     0,    45,     0,    15,    16,     0,     0,     0,     0,
      31,     0,     0,     0,    66,     2,    62,     0,   137,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,     0,     0,   140,     0,    68,     0,     0,
      71,     0,     0,     0,    53,    52,    48,     0,    55,    19,
      18,     0,     0,    27,     0,     0,    23,    30,     0,     0,
      63,    61,   136,     0,     0,   139,     0,     0,    91,    92,
     137,   126,   127,   130,     0,     0,     0,   131,   132,   140,
     133,     0,     0,     0,     0,     0,     0,     0,    79,     0,
       0,     0,    76,     0,     0,    75,     0,    67,    70,     0,
       0,     0,    49,     0,     0,    24,    26,     0,     0,    51,
       0,     0,    51,     0,   135,     0,     0,   142,   137,     0,
       0,   136,     0,     0,     0,     0,     0,     0,     0,     0,
      95,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   143,     0,     0,    60,     0,     0,
       0,     0,     0,     0,     0,     0,   141,     0,    78,    73,
       0,    72,     0,    65,     0,    51,     0,     0,    51,     0,
       0,     0,    36,     0,    93,     0,     0,   138,     0,     0,
     128,     0,   142,   143,   125,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   141,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   101,
       0,   103,     0,    74,    59,    64,     0,     0,    35,     0,
       0,    34,    94,   134,    99,   100,   129,   136,   136,   136,
       0,     0,     0,     0,    98,   102,     0,     0,     0,     0,
       0,    77,     0,     0,    33,     0,     0,     0,     0,     0,
       0,     0,     0,   109,   110,     0,     0,     0,    29,    28,
      32,   145,   144,   146,     0,     0,     0,   107,   108,   111,
      96,    97,     0,   105,   106,     0,   104
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -218,  -218,  -218,  -218,   511,   453,    18,   532,  -218,   518,
    -218,  -218,  -218,   389,  -218,   440,  -218,   121,  -218,   530,
      80,   529,   476,   -63,   398,  -218,    27,     8,  -218,   157,
    -218,   -59,  -218,   408,   419,   298,   -65,   -42,  -218,  -218,
    -218,  -218,  -218,  -218,  -218,  -218,  -218,  -218,   130,  -217,
     -82,   -77,   -70,  -218
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,     5,    17,    18,    71,    72,     6,    20,    21,
      75,    22,   152,   153,    99,   100,   101,     7,    12,    13,
      28,    39,    40,    89,    90,    41,    29,    30,    31,    32,
      33,    84,   139,   140,   194,   195,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   214,   215,
     177,   178,   179,   180
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     133,    86,   245,   133,   281,   134,    70,   367,   134,    87,
      19,    82,   135,   103,    87,   135,    23,   149,   107,    83,
     142,   331,    45,    64,    10,    11,    65,    10,    11,   150,
      85,    98,    10,    11,    35,   133,   133,    57,    83,   133,
     134,   134,   119,    57,   134,    67,    69,   135,   135,    10,
      11,   135,   183,   184,    54,   259,   261,   265,    94,   133,
     133,   133,    57,   106,   134,   134,   134,    19,   272,   268,
      15,   135,   135,   135,     1,    15,   199,   210,   201,   188,
      78,    14,     1,   156,   219,    83,    57,    68,    68,    95,
       2,   162,    14,    51,   163,     3,   164,   260,   260,   211,
     188,   133,   133,    16,    50,    48,   134,   134,    46,   246,
     346,   347,   348,   135,   135,    95,   135,   133,     8,   133,
      24,    52,   134,    56,   134,    73,    27,    34,   133,   135,
      59,   135,    60,   134,    24,     9,    10,    11,    25,    11,
     135,   188,   188,    61,    88,   270,   269,    53,    66,   273,
       1,    73,    25,    11,    73,   102,    88,   188,    74,   188,
      76,    88,    70,   138,    36,    77,   304,    81,   170,   171,
     221,     3,   109,   163,    91,   222,    93,   154,     8,   102,
      10,    11,   146,   147,    55,    87,    58,   172,   133,   133,
      96,    62,    63,   134,   134,    42,    10,    11,   173,   136,
     135,   135,   316,    10,    11,   317,   320,   104,   174,    37,
      79,    80,   136,    38,   141,    98,   137,    10,    11,   138,
     192,   175,   213,   204,   193,   338,   143,    88,   188,   197,
      10,    11,   207,    10,    11,   105,   160,   147,   133,   151,
     205,    10,    11,   134,   176,   227,   228,   229,   133,   133,
     135,   170,   171,   134,   134,   109,   144,    10,    11,   218,
     135,   135,   145,   109,   148,   349,   350,   133,   133,   155,
     172,   149,   134,   134,   159,   161,   147,   150,   188,   135,
     135,   173,   133,   158,   170,   171,   165,   134,   109,    88,
     133,   174,    88,   216,   135,   134,   166,   220,   167,   372,
     275,   276,   135,   172,   175,   224,   168,   188,   188,   318,
     147,   240,   241,   169,   173,   321,   147,   326,   276,   253,
     255,   342,   147,   181,   174,   343,   147,   361,   276,   182,
     188,   225,   226,   227,   228,   229,   185,   175,   280,   362,
     276,   363,   276,   186,   189,    88,   190,   191,    88,   203,
     208,   209,   212,   217,   223,   285,   286,   287,   288,   289,
     239,   290,   291,   292,   293,   294,   295,   296,   297,   244,
     247,   256,   231,   232,   233,   234,   235,   236,   237,   238,
     170,   171,   257,   258,   109,   263,   277,   266,   170,   171,
     267,   274,   109,   271,   163,   278,   282,   283,   298,   172,
     248,   225,   226,   227,   228,   229,   323,   172,   301,   302,
     173,   303,   164,   305,   249,   250,   251,   306,   173,   307,
     174,   308,   252,   225,   226,   227,   228,   229,   174,   310,
     254,   332,   333,   175,   314,   225,   226,   227,   228,   229,
     312,   175,   231,   232,   233,   234,   235,   236,   237,   238,
     322,   324,   315,   279,   225,   226,   227,   228,   229,   265,
     268,   325,   327,   328,   231,   232,   233,   234,   235,   236,
     237,   238,   329,   330,   331,   284,   231,   232,   233,   234,
     235,   236,   237,   238,   334,   335,   336,   299,   225,   226,
     227,   228,   229,   339,   337,   231,   232,   233,   234,   235,
     236,   237,   238,   340,   353,   344,   300,   225,   226,   227,
     228,   229,   341,   354,   355,   356,   357,   358,   360,   359,
     368,   369,   370,   371,   373,   374,   376,    97,    47,   231,
     232,   233,   234,   235,   236,   237,   238,    26,    49,   157,
     351,   206,    43,    44,    92,   202,     0,   198,   231,   232,
     233,   234,   235,   236,   237,   238,     0,   196,   313,   352,
     225,   226,   227,   228,   229,     0,     0,     0,     0,     0,
       0,   230,   225,   226,   227,   228,   229,     0,     0,     0,
       0,     0,     0,   309,   225,   226,   227,   228,   229,     0,
       0,     0,     0,     0,     0,   311,   225,   226,   227,   228,
     229,   231,   232,   233,   234,   235,   236,   237,   238,     0,
       0,     0,     0,   231,   232,   233,   234,   235,   236,   237,
     238,     0,     0,     0,     0,   231,   232,   233,   234,   235,
     236,   237,   238,     0,     0,     0,     0,   231,   232,   233,
     234,   235,   236,   237,   238,   225,   226,   227,   228,   229,
       0,     0,     0,     0,   108,     0,     0,     0,   109,     0,
       0,     0,     0,     0,   110,   111,   364,     0,   112,   113,
       0,     0,     0,     0,     0,     0,   114,   115,     0,   365,
     116,   117,     0,   118,     0,     0,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   119,   120,   108,     0,     0,     0,
     109,     0,     0,     0,     0,   187,   110,   111,     0,     0,
     112,   113,     0,     0,     0,     0,     0,   108,   114,   115,
       0,   109,   116,   117,     0,   118,   200,   110,   111,     0,
       0,   112,   113,     0,     0,     0,   119,   120,   108,   114,
     115,     0,   109,   116,   117,     0,   118,     0,   110,   111,
       0,     0,   112,   113,     0,     0,     0,   119,   120,     0,
     114,   115,   108,     0,   116,   117,   109,   118,     0,   243,
       0,   262,   110,   111,     0,     0,   112,   113,   119,   120,
       0,     0,     0,   108,   114,   115,     0,   109,   116,   117,
       0,   118,   264,   110,   111,     0,     0,   112,   113,     0,
       0,     0,   119,   120,   108,   114,   115,     0,   109,   116,
     117,     0,   118,   319,   110,   111,     0,     0,   112,   113,
       0,     0,     0,   119,   120,   108,   114,   115,     0,   109,
     116,   117,     0,   118,   345,   110,   111,     0,     0,   112,
     113,     0,     0,     0,   119,   120,   108,   114,   115,     0,
     109,   116,   117,     0,   118,     0,   110,   111,     0,     0,
     112,   113,     0,     0,     0,   119,   120,   108,   114,   115,
       0,   109,   116,   117,   366,   118,     0,   110,   111,     0,
       0,   112,   113,     0,     0,     0,   119,   120,     0,   114,
     115,   108,   375,   116,   117,   109,   118,     0,     0,     0,
       0,   110,   111,     0,     0,   112,   113,   119,   120,     0,
       0,   108,     0,   114,   115,   109,     0,   116,   117,     0,
     118,   110,   111,     0,     0,   112,   113,     0,     0,     0,
       0,   119,   120,   114,   115,     0,     0,   242,   117,     0,
     118,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   119,   120
};

static const yytype_int16 yycheck[] =
{
      82,    60,     3,    85,   221,    82,     3,    16,    85,     3,
       3,    11,    82,    76,     3,    85,     0,    16,    81,    19,
      85,    30,    54,    56,    21,    22,    59,    21,    22,    16,
      11,     3,    21,    22,     7,   117,   118,    29,    19,   121,
     117,   118,    43,    35,   121,    16,    16,   117,   118,    21,
      22,   121,   117,   118,    27,    16,    16,    56,    55,   141,
     142,   143,    54,    57,   141,   142,   143,     3,    57,    56,
       3,   141,   142,   143,    19,     3,   141,    11,   143,   121,
      53,     1,    19,    55,   166,    19,    78,    58,    58,    71,
      35,    56,    12,     3,    59,    40,    61,    58,    58,   158,
     142,   183,   184,    36,    54,    41,   183,   184,    36,   186,
     327,   328,   329,   183,   184,    97,   186,   199,     3,   201,
       3,    24,   199,     3,   201,    45,     5,     6,   210,   199,
      54,   201,    54,   210,     3,    20,    21,    22,    21,    22,
     210,   183,   184,    21,    64,   210,   209,    26,     3,   212,
      19,    71,    21,    22,    74,    75,    76,   199,    19,   201,
      56,    81,     3,    83,     7,    56,   248,    56,     3,     4,
      56,    40,     7,    59,     4,    61,     3,    97,     3,    99,
      21,    22,    57,    58,    27,     3,    29,    22,   270,   271,
       3,    34,    35,   270,   271,    20,    21,    22,    33,     3,
     270,   271,   265,    21,    22,   268,   271,    57,    43,     3,
      53,    54,     3,     7,    11,     3,    20,    21,    22,   139,
       3,    56,    57,     3,     7,   307,    11,   147,   270,    20,
      21,    22,   152,    21,    22,    78,    57,    58,   320,     3,
      20,    21,    22,   320,   114,     7,     8,     9,   330,   331,
     320,     3,     4,   330,   331,     7,     3,    21,    22,     3,
     330,   331,     3,     7,    60,   330,   331,   349,   350,     3,
      22,    16,   349,   350,     3,    57,    58,    16,   320,   349,
     350,    33,   364,    54,     3,     4,     3,   364,     7,   209,
     372,    43,   212,   163,   364,   372,    56,   167,    56,   364,
      57,    58,   372,    22,    56,   175,    16,   349,   350,    57,
      58,   181,   182,    16,    33,    57,    58,    57,    58,   189,
     190,    57,    58,    56,    43,    57,    58,    57,    58,    56,
     372,     5,     6,     7,     8,     9,    61,    56,    57,    57,
      58,    57,    58,    56,    10,   265,    10,    61,   268,     3,
       3,    56,    56,     3,    61,   225,   226,   227,   228,   229,
      61,   231,   232,   233,   234,   235,   236,   237,   238,     3,
      55,     3,    46,    47,    48,    49,    50,    51,    52,    53,
       3,     4,    59,     3,     7,    55,    60,     3,     3,     4,
       3,    16,     7,    11,    59,    57,     3,     3,     3,    22,
      23,     5,     6,     7,     8,     9,   276,    22,    56,    56,
      33,    57,    61,    56,    37,    38,    39,    56,    33,    56,
      43,    56,    45,     5,     6,     7,     8,     9,    43,    56,
      45,   301,   302,    56,    55,     5,     6,     7,     8,     9,
       4,    56,    46,    47,    48,    49,    50,    51,    52,    53,
      16,    16,    55,    57,     5,     6,     7,     8,     9,    56,
      56,    16,    56,    56,    46,    47,    48,    49,    50,    51,
      52,    53,    56,    27,    30,    57,    46,    47,    48,    49,
      50,    51,    52,    53,    16,    16,    57,    57,     5,     6,
       7,     8,     9,     3,    57,    46,    47,    48,    49,    50,
      51,    52,    53,     3,    16,    55,    57,     5,     6,     7,
       8,     9,    60,    16,    57,    57,    57,    16,    55,    16,
      16,    16,    16,    16,    16,    16,    16,    74,    17,    46,
      47,    48,    49,    50,    51,    52,    53,     5,    20,    99,
      57,   152,    12,    14,    68,   147,    -1,   139,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,   138,   260,    57,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    16,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    16,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    16,     5,     6,     7,     8,
       9,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      -1,    -1,    -1,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    -1,    -1,    -1,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    -1,    -1,    -1,    46,    47,    48,
      49,    50,    51,    52,    53,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,     7,    -1,
      -1,    -1,    -1,    -1,    13,    14,    15,    -1,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    28,
      29,    30,    -1,    32,    -1,    -1,    46,    47,    48,    49,
      50,    51,    52,    53,    43,    44,     3,    -1,    -1,    -1,
       7,    -1,    -1,    -1,    -1,    12,    13,    14,    -1,    -1,
      17,    18,    -1,    -1,    -1,    -1,    -1,     3,    25,    26,
      -1,     7,    29,    30,    -1,    32,    12,    13,    14,    -1,
      -1,    17,    18,    -1,    -1,    -1,    43,    44,     3,    25,
      26,    -1,     7,    29,    30,    -1,    32,    -1,    13,    14,
      -1,    -1,    17,    18,    -1,    -1,    -1,    43,    44,    -1,
      25,    26,     3,    -1,    29,    30,     7,    32,    -1,    34,
      -1,    12,    13,    14,    -1,    -1,    17,    18,    43,    44,
      -1,    -1,    -1,     3,    25,    26,    -1,     7,    29,    30,
      -1,    32,    12,    13,    14,    -1,    -1,    17,    18,    -1,
      -1,    -1,    43,    44,     3,    25,    26,    -1,     7,    29,
      30,    -1,    32,    12,    13,    14,    -1,    -1,    17,    18,
      -1,    -1,    -1,    43,    44,     3,    25,    26,    -1,     7,
      29,    30,    -1,    32,    12,    13,    14,    -1,    -1,    17,
      18,    -1,    -1,    -1,    43,    44,     3,    25,    26,    -1,
       7,    29,    30,    -1,    32,    -1,    13,    14,    -1,    -1,
      17,    18,    -1,    -1,    -1,    43,    44,     3,    25,    26,
      -1,     7,    29,    30,    31,    32,    -1,    13,    14,    -1,
      -1,    17,    18,    -1,    -1,    -1,    43,    44,    -1,    25,
      26,     3,    28,    29,    30,     7,    32,    -1,    -1,    -1,
      -1,    13,    14,    -1,    -1,    17,    18,    43,    44,    -1,
      -1,     3,    -1,    25,    26,     7,    -1,    29,    30,    -1,
      32,    13,    14,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    43,    44,    25,    26,    -1,    -1,    29,    30,    -1,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    44
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    19,    35,    40,    63,    64,    69,    79,     3,    20,
      21,    22,    80,    81,    82,     3,    36,    65,    66,     3,
      70,    71,    73,     0,     3,    21,    69,    79,    82,    88,
      89,    90,    91,    92,    79,    88,    91,     3,     7,    83,
      84,    87,    20,    81,    83,    54,    36,    66,    41,    71,
      54,     3,    24,    79,    88,    91,     3,    89,    91,    54,
      54,    21,    91,    91,    56,    59,     3,    16,    58,    16,
       3,    67,    68,    82,    19,    72,    56,    56,    88,    91,
      91,    56,    11,    19,    93,    11,    93,     3,    82,    85,
      86,     4,    84,     3,    55,    68,     3,    67,     3,    76,
      77,    78,    82,    85,    57,    91,    57,    85,     3,     7,
      13,    14,    17,    18,    25,    26,    29,    30,    32,    43,
      44,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   112,   113,   114,     3,    20,    82,    94,
      95,    11,    98,    11,     3,     3,    57,    58,    60,    16,
      16,     3,    74,    75,    82,     3,    55,    77,    54,     3,
      57,    57,    56,    59,    61,     3,    56,    56,    16,    16,
       3,     4,    22,    33,    43,    56,   110,   112,   113,   114,
     115,    56,    56,    98,    98,    61,    56,    12,    99,    10,
      10,    61,     3,     7,    96,    97,    96,    20,    95,    98,
      12,    98,    86,     3,     3,    20,    75,    82,     3,    56,
      11,    93,    56,    57,   110,   111,   110,     3,     3,   112,
     110,    56,    61,    61,   110,     5,     6,     7,     8,     9,
      16,    46,    47,    48,    49,    50,    51,    52,    53,    61,
     110,   110,    29,    34,     3,     3,   113,    55,    23,    37,
      38,    39,    45,   110,    45,   110,     3,    59,     3,    16,
      58,    16,    12,    55,    12,    56,     3,     3,    56,    85,
      98,    11,    57,    85,    16,    57,    58,    60,    57,    57,
      57,   111,     3,     3,    57,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,     3,    57,
      57,    56,    56,    57,   112,    56,    56,    56,    56,    16,
      56,    16,     4,    97,    55,    55,    85,    85,    57,    12,
      98,    57,    16,   110,    16,    16,    57,    56,    56,    56,
      27,    30,   110,   110,    16,    16,    57,    57,   112,     3,
       3,    60,    57,    57,    55,    12,   111,   111,   111,    98,
      98,    57,    57,    16,    16,    57,    57,    57,    16,    16,
      55,    57,    57,    57,    15,    28,    31,    16,    16,    16,
      16,    16,    98,    16,    16,    28,    16
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    62,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    64,    64,    65,    65,    66,    67,    67,    68,    68,
      69,    70,    70,    71,    72,    73,    74,    74,    75,    75,
      76,    76,    77,    77,    78,    78,    78,    79,    79,    80,
      80,    81,    81,    82,    82,    83,    83,    84,    84,    85,
      85,    85,    86,    86,    87,    87,    87,    88,    88,    89,
      89,    90,    90,    90,    91,    91,    92,    93,    93,    93,
      94,    94,    95,    95,    96,    96,    97,    97,    97,    98,
      98,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,   100,
     101,   102,   102,   102,   103,   103,   104,   105,   106,   107,
     108,   109,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   111,   111,   111,   112,   112,   112,
     113,   114,   114,   114,   115,   115,   115
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     3,     4,     4,     3,     3,     2,     3,
       2,     3,     2,     2,     1,     4,     2,     1,     3,     3,
       3,     2,     1,     5,     4,     1,     2,     1,     6,     6,
       2,     1,     7,     6,     5,     5,     4,     3,     2,     2,
       1,     3,     3,     1,     1,     3,     1,     1,     4,     3,
       1,     0,     2,     2,     1,     4,     2,     2,     1,     7,
       6,     5,     4,     5,     7,     6,     4,     3,     2,     0,
       2,     1,     3,     3,     3,     1,     1,     4,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     4,     5,     3,     7,     7,     5,     5,
       5,     4,     5,     4,    10,     8,     8,     7,     7,     6,
       6,     7,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     1,     3,     4,
       1,     1,     1,     1,     3,     1,     0,     1,     4,     2,
       1,     3,     3,     3,     6,     6,     6
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
  case 2: /* program: TypeDefBlock ClassDefBlock GdeclBlock FdefBlock MainBlock  */
#line 78 "exprnTree.y"
                                {printf("typedef gdecl fdef  main");newl;
                                fclose(fp);
                                fclose(ip);
                                exit(0);}
#line 1744 "y.tab.c"
    break;

  case 3: /* program: ClassDefBlock GdeclBlock MainBlock  */
#line 82 "exprnTree.y"
                                              {printf("classdef gdecl main");newl;
                                fclose(fp);
                                fclose(ip);
                                exit(0);}
#line 1753 "y.tab.c"
    break;

  case 4: /* program: TypeDefBlock ClassDefBlock GdeclBlock MainBlock  */
#line 86 "exprnTree.y"
                                                           {printf("typedef classdef gdecl main");newl;
                                fclose(fp);
                                fclose(ip);
                                exit(0);}
#line 1762 "y.tab.c"
    break;

  case 5: /* program: TypeDefBlock GdeclBlock FdefBlock MainBlock  */
#line 91 "exprnTree.y"
                                {printf("typedef gdecl fdef  main");newl;
                                fclose(fp);
                                fclose(ip);
                                exit(0);}
#line 1771 "y.tab.c"
    break;

  case 6: /* program: TypeDefBlock GdeclBlock MainBlock  */
#line 96 "exprnTree.y"
                                             {printf("typedef gdecl main");newl;
                                fclose(fp);
                                fclose(ip);
                                exit(0);}
#line 1780 "y.tab.c"
    break;

  case 7: /* program: TypeDefBlock FdefBlock MainBlock  */
#line 102 "exprnTree.y"
                                {printf("type function main");newl;
                                fclose(fp);
                                fclose(ip);
                                exit(0);}
#line 1789 "y.tab.c"
    break;

  case 8: /* program: TypeDefBlock MainBlock  */
#line 107 "exprnTree.y"
                                 {printf("type main");newl;
                                fclose(fp);
                                fclose(ip);
                                exit(0);}
#line 1798 "y.tab.c"
    break;

  case 9: /* program: GdeclBlock FdefBlock MainBlock  */
#line 111 "exprnTree.y"
                                         {printf("gdecl fdef main");newl;
                                fclose(fp);
                                fclose(ip);
                                exit(0);}
#line 1807 "y.tab.c"
    break;

  case 10: /* program: GdeclBlock MainBlock  */
#line 115 "exprnTree.y"
                               {printf("gdecl main");newl;
                                fclose(fp);
                                fclose(ip);
                                exit(0);}
#line 1816 "y.tab.c"
    break;

  case 11: /* TypeDefBlock: TYPE TypeDefList ENDTYPE  */
#line 124 "exprnTree.y"
                                         { 
                                            tt->head = (yyvsp[-1].typeNode);
                                            printTypeTable(tt);
                                            newl;
                                            if ( checkDuplicateType(tt) ) yyerror("duplicate type definition");
                                            (yyval.typeNode) = (yyvsp[-1].typeNode);
                                            }
#line 1828 "y.tab.c"
    break;

  case 12: /* TypeDefBlock: TYPE ENDTYPE  */
#line 131 "exprnTree.y"
                             { yyerror("no type definition");}
#line 1834 "y.tab.c"
    break;

  case 13: /* TypeDefList: TypeDefList TypeDef  */
#line 134 "exprnTree.y"
                                    { joinTypeNode((yyvsp[-1].typeNode),(yyvsp[0].typeNode)); (yyval.typeNode) = (yyvsp[-1].typeNode);}
#line 1840 "y.tab.c"
    break;

  case 14: /* TypeDefList: TypeDef  */
#line 135 "exprnTree.y"
                        { (yyval.typeNode) = (yyvsp[0].typeNode);}
#line 1846 "y.tab.c"
    break;

  case 15: /* TypeDef: ID '{' FieldDeclList '}'  */
#line 138 "exprnTree.y"
                                           { 
                                            if (checkIfValidType(tt,(yyvsp[-1].fieldNode),(yyvsp[-3].string))) yyerror("type not defined");
                                            (yyval.typeNode) = createTypeNode((yyvsp[-3].string),(yyvsp[-1].fieldNode));
                                            }
#line 1855 "y.tab.c"
    break;

  case 16: /* FieldDeclList: FieldDeclList FieldDecl  */
#line 144 "exprnTree.y"
                                        { joinFieldNode((yyvsp[-1].fieldNode),(yyvsp[0].fieldNode)); (yyval.fieldNode) = (yyvsp[-1].fieldNode);}
#line 1861 "y.tab.c"
    break;

  case 17: /* FieldDeclList: FieldDecl  */
#line 145 "exprnTree.y"
                             {(yyval.fieldNode) = (yyvsp[0].fieldNode);}
#line 1867 "y.tab.c"
    break;

  case 18: /* FieldDecl: Type ID SEMICOLON  */
#line 148 "exprnTree.y"
                                 { (yyval.fieldNode) = createFieldNode((yyvsp[-2].number),(yyvsp[-1].string),NULL); }
#line 1873 "y.tab.c"
    break;

  case 19: /* FieldDecl: ID ID SEMICOLON  */
#line 149 "exprnTree.y"
                               { (yyval.fieldNode) = createFieldNode(noType,(yyvsp[-1].string),(yyvsp[-2].string)); }
#line 1879 "y.tab.c"
    break;

  case 20: /* ClassDefBlock: CLASS ClassDefList ENDCLASS  */
#line 153 "exprnTree.y"
                                            { 
                                            // ct->head = $2;
                                            newl;
                                            if ( checkDuplicateClassorType(ct,tt)) yyerror("duplicate class definition");
                                            (yyval.classNode) = (yyvsp[-1].classNode);
                                            }
#line 1890 "y.tab.c"
    break;

  case 21: /* ClassDefList: ClassDefList ClassDef  */
#line 160 "exprnTree.y"
                                        { }
#line 1896 "y.tab.c"
    break;

  case 22: /* ClassDefList: ClassDef  */
#line 161 "exprnTree.y"
                           {}
#line 1902 "y.tab.c"
    break;

  case 23: /* ClassDef: CName '{' ClassDeclBlock MethodDefns '}'  */
#line 164 "exprnTree.y"
                                                          { (yyval.classNode) = (yyvsp[-2].classNode);}
#line 1908 "y.tab.c"
    break;

  case 24: /* ClassDeclBlock: DECL FieldDeclList MethodDeclList ENDDECL  */
#line 167 "exprnTree.y"
                                                           { 
                                                            currentClassNode = createClassNode(currentClassName,(yyvsp[-2].fieldNode),(yyvsp[-1].memberFuncNode));
                                                            printClassNode(currentClassNode);newl;
                                                            addClassNode(ct,currentClassNode);
                                                            (yyval.classNode) = currentClassNode;}
#line 1918 "y.tab.c"
    break;

  case 25: /* CName: ID  */
#line 174 "exprnTree.y"
                        { (yyval.string) = (yyvsp[0].string);  currentClassName = (yyvsp[0].string);}
#line 1924 "y.tab.c"
    break;

  case 26: /* MethodDeclList: MethodDeclList MethodDecl  */
#line 178 "exprnTree.y"
                                            { joinMemberFuncNode((yyvsp[-1].memberFuncNode),(yyvsp[0].memberFuncNode)); (yyval.memberFuncNode) = (yyvsp[-1].memberFuncNode);}
#line 1930 "y.tab.c"
    break;

  case 27: /* MethodDeclList: MethodDecl  */
#line 179 "exprnTree.y"
                                { (yyval.memberFuncNode) = (yyvsp[0].memberFuncNode);}
#line 1936 "y.tab.c"
    break;

  case 28: /* MethodDecl: Type ID '(' ParamList ')' SEMICOLON  */
#line 182 "exprnTree.y"
                                                      { (yyval.memberFuncNode) = createMemberFuncNode((yyvsp[-5].number),(yyvsp[-4].string),(yyvsp[-2].paramNode),NULL);
                                                        (yyval.memberFuncNode)->fLabel = flabel++;}
#line 1943 "y.tab.c"
    break;

  case 29: /* MethodDecl: ID ID '(' ParamList ')' SEMICOLON  */
#line 184 "exprnTree.y"
                                                    { (yyval.memberFuncNode) = createMemberFuncNode(noType,(yyvsp[-4].string),(yyvsp[-2].paramNode),(yyvsp[-5].string)); 
                                                        (yyval.memberFuncNode)->fLabel = flabel++;}
#line 1950 "y.tab.c"
    break;

  case 30: /* MethodDefns: MethodDefns MFdef  */
#line 188 "exprnTree.y"
                                    { (yyval.memberFuncNode) = (yyvsp[-1].memberFuncNode);}
#line 1956 "y.tab.c"
    break;

  case 31: /* MethodDefns: MFdef  */
#line 189 "exprnTree.y"
                        { (yyval.memberFuncNode) = (yyvsp[0].memberFuncNode);}
#line 1962 "y.tab.c"
    break;

  case 32: /* MFdef: MName '{' LdeclBlock BEG SLIST END '}'  */
#line 191 "exprnTree.y"
                                                         { 
                            printf("in method func1");
                            newl;
                            assignLocalBindingtoLST(lst,0);
                            printLocalSymbolTable(lst);
                            newl;newl;
                            inorder((yyvsp[-2].treeNode));
                            newl;newl;

                            returnLabel = getLabel();
                            fprintf(fp , "PUSH BP\n");
                            fprintf(fp , "MOV BP, SP\n");

                            codeGenForLocal((yyvsp[-4].localSymbolNode),fp);
                            codeGen((yyvsp[-2].treeNode),fp);
                            fprintf(fp, "L%d:\n",returnLabel);
                            codeDelForLocal((yyvsp[-4].localSymbolNode),fp);
                            
                            fprintf(fp, "MOV BP, [SP]\n");
                            fprintf(fp, "POP R0\n");
                            fprintf(fp, "RET\n");
                            
                            freeLST(lst->head);
                            
                            }
#line 1992 "y.tab.c"
    break;

  case 33: /* MFdef: MName '{' BEG SLIST END '}'  */
#line 216 "exprnTree.y"
                                             {
                            printf("in method func2");
                            newl;
                            inorder((yyvsp[-2].treeNode));
                            newl;

                            returnLabel = getLabel();                      
                            fprintf(fp , "PUSH BP\n");
                            fprintf(fp , "MOV BP, SP\n");

                            codeGen((yyvsp[-2].treeNode),fp);
                            fprintf(fp, "L%d:\n",returnLabel);                           
                            fprintf(fp, "MOV BP, [SP]\n");
                            fprintf(fp, "POP R0\n");
                            fprintf(fp, "RET\n");
                           
                            freeLST(lst->head);
                }
#line 2015 "y.tab.c"
    break;

  case 34: /* MName: Type ID '(' ParamList ')'  */
#line 235 "exprnTree.y"
                                            { struct classNode* CNode = currentClassNode;
                                            if ( CNode == NULL) yyerror("class not defined");
                                            if ( checkFuncDeclarationFromCT(CNode->funcList,(yyvsp[-3].string),(yyvsp[-1].paramNode),(yyvsp[-4].number),NULL) ) yyerror("function not declared in class");
                                            lst = ( struct localSymbolTable* ) malloc(sizeof(struct localSymbolTable));
                                            lst->head = NULL;
                                            addParamToLST(lst,(yyvsp[-1].paramNode));
                                            assignBindingToParam(lst);
                                            newl;
                                            printf("in method func name1");newl;newl;
                                            // assignTypeNodetoLST(lst,tt);
                                            printLocalSymbolTable(lst);newl;
                                            fprintf(fp, "F%d:\n",getFuncLabelforMemberFunc(CNode->funcList,(yyvsp[-3].string)));
                                            (yyval.string) = (yyvsp[-3].string);
                                            
                                            }
#line 2035 "y.tab.c"
    break;

  case 35: /* MName: ID ID '(' ParamList ')'  */
#line 250 "exprnTree.y"
                                          { struct classNode* CNode = currentClassNode;
                                            if ( checkFuncDeclarationFromCT(CNode->funcList,(yyvsp[-3].string),(yyvsp[-1].paramNode),noType,(yyvsp[-4].string)) ) yyerror("function not declared in class");
                                            lst = ( struct localSymbolTable* ) malloc(sizeof(struct localSymbolTable));
                                            lst->head = NULL;
                                            addParamToLST(lst,(yyvsp[-1].paramNode));
                                            assignBindingToParam(lst);
                                            newl;
                                            printf("in method func name2");newl;newl;
                                            // assignTypeNodetoLST(lst,tt);
                                            printLocalSymbolTable(lst);newl;
                                            fprintf(fp, "F%d:\n",getFuncLabelforMemberFunc(CNode->funcList,(yyvsp[-3].string)));
                                            (yyval.string) = (yyvsp[-3].string);
                                         }
#line 2053 "y.tab.c"
    break;

  case 36: /* MName: Type ID '(' ')'  */
#line 263 "exprnTree.y"
                                  { struct classNode* CNode = currentClassNode;
                                    if( checkFuncDeclarationFromCT(CNode->funcList,(yyvsp[-2].string),NULL, (yyvsp[-3].number), NULL) ) yyerror("function declaration not found");
                                    lst = (struct localSymbolTable* ) malloc(sizeof(struct localSymbolTable));
                                    lst->head = NULL;
                                    newl;
                                    printf("in method func name3");newl;newl;
                                    fprintf(fp, "F%d:\n",getFuncLabelforMemberFunc(CNode->funcList,(yyvsp[-2].string)));
                                
                                    (yyval.string) = (yyvsp[-2].string);
                                }
#line 2068 "y.tab.c"
    break;

  case 37: /* GdeclBlock: DECL GdeclList ENDDECL  */
#line 275 "exprnTree.y"
                                    {
                            gst = ( struct globalSymbolTable* ) malloc(sizeof(struct globalSymbolTable));
                            gst->head = (yyvsp[-1].globalSymbolNode);
                            assignBindingToGST(gst);
                            printGlobalSymbolTable(gst);
                            newl;
                            printf("globalMemLoc : %d" , globalMemLoc);
                            newl;
                            if ( checkDuplicateforGST((yyvsp[-1].globalSymbolNode)) ) yyerror("duplicate declaration in gst"); 
                            }
#line 2083 "y.tab.c"
    break;

  case 38: /* GdeclBlock: DECL ENDDECL  */
#line 288 "exprnTree.y"
                                        { yyerror("no declaration");}
#line 2089 "y.tab.c"
    break;

  case 39: /* GdeclList: GdeclList Gdecl  */
#line 291 "exprnTree.y"
                                { joinGlobalSymbolNode((yyvsp[-1].globalSymbolNode),(yyvsp[0].globalSymbolNode)); (yyval.globalSymbolNode) = (yyvsp[-1].globalSymbolNode); }
#line 2095 "y.tab.c"
    break;

  case 40: /* GdeclList: Gdecl  */
#line 292 "exprnTree.y"
                                { (yyval.globalSymbolNode) = (yyvsp[0].globalSymbolNode); }
#line 2101 "y.tab.c"
    break;

  case 41: /* Gdecl: Type GidList SEMICOLON  */
#line 295 "exprnTree.y"
                                {
                                struct globalSymbolNode* temp = (yyvsp[-1].globalSymbolNode);
                                while(temp != NULL){
                                    temp->type = (yyvsp[-2].number);
                                    temp = temp->next;
                                }
                                (yyval.globalSymbolNode) = (yyvsp[-1].globalSymbolNode);
                            }
#line 2114 "y.tab.c"
    break;

  case 42: /* Gdecl: ID GidList SEMICOLON  */
#line 303 "exprnTree.y"
                            {
                                struct globalSymbolNode* temp = (yyvsp[-1].globalSymbolNode);
                                // if entry in typetable for id exists
                                struct typeNode* tNode = getTypeNode(tt,(yyvsp[-2].string));
                                // if entry in classtable for id exists
                                struct classNode* cNode = getClassNode(ct,(yyvsp[-2].string));
                                if ( tNode != NULL ){
                                    while(temp != NULL){
                                        temp->typeName = (yyvsp[-2].string);
                                        temp->type = noType;
                                        temp->tNode = tNode;
                                        temp = temp->next;
                                    }
                                }else if( cNode != NULL ){
                                    while(temp != NULL){
                                        temp->typeName = (yyvsp[-2].string);
                                        temp->type = noType;
                                        temp->cNode = cNode;
                                        temp = temp->next;
                                    }
                                }
                                else{
                                    yyerror("no type found for id in gdecl");
                                }
                                (yyval.globalSymbolNode) = (yyvsp[-1].globalSymbolNode);
                            }
#line 2145 "y.tab.c"
    break;

  case 43: /* Type: INT  */
#line 332 "exprnTree.y"
                                        {(yyval.number) = intType;}
#line 2151 "y.tab.c"
    break;

  case 44: /* Type: STR  */
#line 333 "exprnTree.y"
                                        {(yyval.number) = strType;}
#line 2157 "y.tab.c"
    break;

  case 45: /* GidList: GidList ',' Gid  */
#line 336 "exprnTree.y"
                           { joinGlobalSymbolNode((yyvsp[-2].globalSymbolNode),(yyvsp[0].globalSymbolNode)); (yyval.globalSymbolNode) = (yyvsp[-2].globalSymbolNode); }
#line 2163 "y.tab.c"
    break;

  case 46: /* GidList: Gid  */
#line 337 "exprnTree.y"
                                           { (yyval.globalSymbolNode) = (yyvsp[0].globalSymbolNode); }
#line 2169 "y.tab.c"
    break;

  case 47: /* Gid: IDDECL  */
#line 340 "exprnTree.y"
             { (yyval.globalSymbolNode) = (yyvsp[0].globalSymbolNode); }
#line 2175 "y.tab.c"
    break;

  case 48: /* Gid: ID '(' ParamList ')'  */
#line 341 "exprnTree.y"
                           { (yyval.globalSymbolNode) = createGlobalSymbolNode((yyvsp[-3].string), noType, -1);
                             (yyval.globalSymbolNode)->paramList = (yyvsp[-1].paramNode);
                             (yyval.globalSymbolNode)->fLabel = flabel++;
                           }
#line 2184 "y.tab.c"
    break;

  case 49: /* ParamList: ParamList ',' Param  */
#line 346 "exprnTree.y"
                                { joinParamNode((yyvsp[-2].paramNode),(yyvsp[0].paramNode)); (yyval.paramNode) = (yyvsp[-2].paramNode); }
#line 2190 "y.tab.c"
    break;

  case 50: /* ParamList: Param  */
#line 347 "exprnTree.y"
                                {(yyval.paramNode) = (yyvsp[0].paramNode);}
#line 2196 "y.tab.c"
    break;

  case 51: /* ParamList: %empty  */
#line 348 "exprnTree.y"
                                {(yyval.paramNode) = NULL;}
#line 2202 "y.tab.c"
    break;

  case 52: /* Param: Type ID  */
#line 351 "exprnTree.y"
                { (yyval.paramNode) = createParamNode((yyvsp[0].string),(yyvsp[-1].number),NULL); }
#line 2208 "y.tab.c"
    break;

  case 53: /* Param: ID ID  */
#line 352 "exprnTree.y"
              { (yyval.paramNode) = createParamNode((yyvsp[0].string),noType,(yyvsp[-1].string)); }
#line 2214 "y.tab.c"
    break;

  case 54: /* IDDECL: ID  */
#line 355 "exprnTree.y"
                                                { 
								(yyval.globalSymbolNode) = createGlobalSymbolNode((yyvsp[0].string),noType,1 );
							   }
#line 2222 "y.tab.c"
    break;

  case 55: /* IDDECL: ID '[' NUM ']'  */
#line 358 "exprnTree.y"
                                                {
								(yyval.globalSymbolNode) = createGlobalSymbolNode((yyvsp[-3].string),noType,(yyvsp[-1].number));
							   }
#line 2230 "y.tab.c"
    break;

  case 56: /* IDDECL: STAR ID  */
#line 361 "exprnTree.y"
                                        { (yyval.globalSymbolNode) = createGlobalSymbolNode((yyvsp[0].string),noType,1);}
#line 2236 "y.tab.c"
    break;

  case 57: /* FdefBlock: FdefBlock Fdef  */
#line 365 "exprnTree.y"
                                { (yyval.localSymbolNode) = (yyvsp[-1].localSymbolNode);}
#line 2242 "y.tab.c"
    break;

  case 58: /* FdefBlock: Fdef  */
#line 366 "exprnTree.y"
                                {(yyval.localSymbolNode) = (yyvsp[0].localSymbolNode);}
#line 2248 "y.tab.c"
    break;

  case 59: /* Fdef: FName '{' LdeclBlock BEG SLIST END '}'  */
#line 369 "exprnTree.y"
                                              {
                            printf("in func");
                            newl;
                            assignLocalBindingtoLST(lst,0);
                            printLocalSymbolTable(lst);
                            newl;newl;
                            inorder((yyvsp[-2].treeNode));
                            newl;

                            returnLabel = getLabel();
                            fprintf(fp , "PUSH BP\n");
                            fprintf(fp , "MOV BP, SP\n");
                            codeGenForLocal((yyvsp[-4].localSymbolNode),fp);
                            codeGen((yyvsp[-2].treeNode),fp);
                            fprintf(fp, "L%d:\n",returnLabel);
                            codeDelForLocal((yyvsp[-4].localSymbolNode),fp);
                            fprintf(fp, "MOV BP, [SP]\n");
                            fprintf(fp, "POP R0\n");
                            fprintf(fp, "RET\n");
                           
                            freeLST(lst->head);

                        }
#line 2276 "y.tab.c"
    break;

  case 60: /* Fdef: FName '{' BEG SLIST END '}'  */
#line 392 "exprnTree.y"
                                  {
                            printf("in func");
                            newl;
                            inorder((yyvsp[-2].treeNode));
                            newl;
                            
                            returnLabel = getLabel();
                            
                            fprintf(fp , "PUSH BP\n");
                            fprintf(fp , "MOV BP, SP\n");
                            codeGen((yyvsp[-2].treeNode),fp);
                            fprintf(fp, "L%d:\n",returnLabel);
                            fprintf(fp, "MOV BP, [SP]\n");
                            fprintf(fp, "POP R0\n");
                            fprintf(fp, "RET\n");
                           
                            freeLST(lst->head);

                        }
#line 2300 "y.tab.c"
    break;

  case 61: /* FName: Type ID '(' ParamList ')'  */
#line 413 "exprnTree.y"
                                  { 

                                     if( checkFuncDeclaration(gst,(yyvsp[-3].string),(yyvsp[-1].paramNode),(yyvsp[-4].number), NULL) ) yyerror("function declaration not found");
                                     lst = (struct localSymbolTable* ) malloc(sizeof(struct localSymbolTable));
                                     lst->head = NULL;
                                     addParamToLST(lst,(yyvsp[-1].paramNode));
                                     assignBindingToParam(lst);
                                     newl;newl;
                                     printf("in func name");newl;
                                     assignTypeNodetoLST(lst,tt);
                                     printLocalSymbolTable(lst);
                                     pdebug;

                                     fprintf(fp, "F%d:\n",getFuncLabel(gst,(yyvsp[-3].string)));
                                     (yyval.string) = (yyvsp[-3].string);
       
                                  }
#line 2322 "y.tab.c"
    break;

  case 62: /* FName: Type ID '(' ')'  */
#line 430 "exprnTree.y"
                      {  if( checkFuncDeclaration(gst,(yyvsp[-2].string),NULL, (yyvsp[-3].number), NULL) ) yyerror("function declaration not found");
                         lst = (struct localSymbolTable* ) malloc(sizeof(struct localSymbolTable));
                         lst->head = NULL;
                         newl;newl;
                         printf("in func name");newl;
                         fprintf(fp, "F%d:\n",getFuncLabel(gst,(yyvsp[-2].string)));
                         (yyval.string) = (yyvsp[-2].string);
                        }
#line 2335 "y.tab.c"
    break;

  case 63: /* FName: ID ID '(' ParamList ')'  */
#line 438 "exprnTree.y"
                              { 
                                     if( checkFuncDeclaration(gst,(yyvsp[-3].string),(yyvsp[-1].paramNode),noType,(yyvsp[-4].string)) ) yyerror("function declaration not found");
                                     lst = (struct localSymbolTable* ) malloc(sizeof(struct localSymbolTable));
                                     lst->head = NULL;
                                     addParamToLST(lst,(yyvsp[-1].paramNode));
                                     assignBindingToParam(lst);
                                     newl;newl;
                                     printf("in func name");newl;
                                     assignTypeNodetoLST(lst,tt);
                                     printLocalSymbolTable(lst);

                                     fprintf(fp, "F%d:\n",getFuncLabel(gst,(yyvsp[-3].string)));
                                     (yyval.string) = (yyvsp[-3].string);
       
                                  }
#line 2355 "y.tab.c"
    break;

  case 64: /* MainBlock: MainHeader '{' LdeclBlock BEG SLIST END '}'  */
#line 455 "exprnTree.y"
                                                        {
                            printf("in main");
                            newl;
                            assignLocalBindingtoLST(lst,globalMemLoc - 4099);   // for global variables
                            printLocalSymbolTable(lst);
                            newl;newl;
                            inorder((yyvsp[-2].treeNode));
                            newl;
                          
                            fprintf(fp, "MAIN:\n");

                            returnLabel = getLabel();

                            fprintf(fp , "PUSH BP\n");
                            fprintf(fp , "MOV BP, SP\n");

                            for ( int i = globalMemLoc; i > 4099; i--){
                                fprintf(fp, "PUSH R0\n");
                            }
                            codeGenForLocal((yyvsp[-4].localSymbolNode),fp);
                            codeGen((yyvsp[-2].treeNode),fp);
                            fprintf(fp, "L%d:\n",returnLabel);

                             for ( int i = globalMemLoc; i > 4099; i--){
                                fprintf(fp, "POP R0\n");
                            }
                            codeDelForLocal((yyvsp[-4].localSymbolNode),fp);

                           
                            fprintf(fp, "MOV BP, [SP]\n");

                            fprintf(fp, "POP R0\n");
                            fprintf(fp, "RET\n");
                            freeLST(lst->head);
                            freeGST(gst->head);
                            
                        }
#line 2397 "y.tab.c"
    break;

  case 65: /* MainBlock: MainHeader '{' BEG SLIST END '}'  */
#line 492 "exprnTree.y"
                                               {
                            printf("in main");
                            newl;
                            inorder((yyvsp[-2].treeNode));
                            newl;newl;

                            fprintf(fp, "MAIN:\n");

                            returnLabel = getLabel();

                            fprintf(fp , "PUSH BP\n");
                            fprintf(fp , "MOV BP, SP\n");

                            for ( int i = globalMemLoc; i > 4099; i--){
                                fprintf(fp, "PUSH R0\n");
                            }
                            codeGen((yyvsp[-2].treeNode),fp);
                            fprintf(fp, "L%d:\n",returnLabel);

                            for ( int i = globalMemLoc; i > 4099; i--){
                                fprintf(fp, "POP R0\n");
                            }
                            fprintf(fp, "MOV BP, [SP]\n");


                            fprintf(fp, "POP R0\n");
                            fprintf(fp, "RET\n");
                            freeLST(lst->head);
                            freeGST(gst->head);

                        }
#line 2433 "y.tab.c"
    break;

  case 66: /* MainHeader: INT MAIN '(' ')'  */
#line 526 "exprnTree.y"
                             {
                            newl;printf("in main header");newl;
                            lst = (struct localSymbolTable* ) malloc(sizeof(struct localSymbolTable));
                            lst->head = NULL;
                           
                        }
#line 2444 "y.tab.c"
    break;

  case 67: /* LdeclBlock: DECL LdeclList ENDDECL  */
#line 535 "exprnTree.y"
                                        {joinLocalSymbolTableNode(lst,(yyvsp[-1].localSymbolNode));(yyval.localSymbolNode) = (yyvsp[-1].localSymbolNode);}
#line 2450 "y.tab.c"
    break;

  case 68: /* LdeclBlock: DECL ENDDECL  */
#line 536 "exprnTree.y"
                                        {(yyval.localSymbolNode) = NULL;}
#line 2456 "y.tab.c"
    break;

  case 69: /* LdeclBlock: %empty  */
#line 537 "exprnTree.y"
       { (yyval.localSymbolNode) = NULL;}
#line 2462 "y.tab.c"
    break;

  case 70: /* LdeclList: LdeclList Ldecl  */
#line 540 "exprnTree.y"
                                        { joinLocalSymbolNode((yyvsp[-1].localSymbolNode),(yyvsp[0].localSymbolNode)); (yyval.localSymbolNode) = (yyvsp[-1].localSymbolNode); }
#line 2468 "y.tab.c"
    break;

  case 71: /* LdeclList: Ldecl  */
#line 541 "exprnTree.y"
                                                {(yyval.localSymbolNode) = (yyvsp[0].localSymbolNode);}
#line 2474 "y.tab.c"
    break;

  case 72: /* Ldecl: Type LidList SEMICOLON  */
#line 544 "exprnTree.y"
                                        {
                                        struct localSymbolNode* temp = (yyvsp[-1].localSymbolNode);
                                        while(temp!=NULL){
                                            temp->type = (yyvsp[-2].number);
                                            temp = temp->next;
                                        }
                                        (yyval.localSymbolNode) = (yyvsp[-1].localSymbolNode);
                                    }
#line 2487 "y.tab.c"
    break;

  case 73: /* Ldecl: ID LidList SEMICOLON  */
#line 552 "exprnTree.y"
                                        {
                                struct localSymbolNode* temp = (yyvsp[-1].localSymbolNode);
                                // if entry in typetable for id exists
                                struct typeNode* tNode = getTypeNode(tt,(yyvsp[-2].string));
                          
                                if ( tNode != NULL ){
                                    while(temp != NULL){
                                        temp->typeName = (yyvsp[-2].string);
                                        temp->type = noType;
                                        temp->tNode = tNode;
                                        temp = temp->next;
                                    }
                                }else{
                                    yyerror("type fdefined from lst");
                                }
                                (yyval.localSymbolNode) = (yyvsp[-1].localSymbolNode);
                                }
#line 2509 "y.tab.c"
    break;

  case 74: /* LidList: LidList ',' Lid  */
#line 571 "exprnTree.y"
                                        { joinLocalSymbolNode((yyvsp[-2].localSymbolNode),(yyvsp[0].localSymbolNode)); (yyval.localSymbolNode) = (yyvsp[-2].localSymbolNode); }
#line 2515 "y.tab.c"
    break;

  case 75: /* LidList: Lid  */
#line 572 "exprnTree.y"
                                        {(yyval.localSymbolNode) = (yyvsp[0].localSymbolNode);}
#line 2521 "y.tab.c"
    break;

  case 76: /* Lid: ID  */
#line 575 "exprnTree.y"
                                                        {(yyval.localSymbolNode) = createLocalSymbolNode((yyvsp[0].string),noType,1, NULL);}
#line 2527 "y.tab.c"
    break;

  case 77: /* Lid: ID '[' NUM ']'  */
#line 576 "exprnTree.y"
                                        {(yyval.localSymbolNode) = createLocalSymbolNode((yyvsp[-3].string),noType,(yyvsp[-1].number), NULL);}
#line 2533 "y.tab.c"
    break;

  case 78: /* Lid: STAR ID  */
#line 577 "exprnTree.y"
                                                {(yyval.localSymbolNode) = createLocalSymbolNode((yyvsp[0].string),intType,1, NULL);}
#line 2539 "y.tab.c"
    break;

  case 79: /* SLIST: SLIST STMT  */
#line 582 "exprnTree.y"
                        {(yyval.treeNode) = createTree(noVal, noType, NULL, connectorNode,(yyvsp[-1].treeNode),(yyvsp[0].treeNode) , NULL);}
#line 2545 "y.tab.c"
    break;

  case 80: /* SLIST: STMT  */
#line 583 "exprnTree.y"
                                {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 2551 "y.tab.c"
    break;

  case 81: /* STMT: INPUTSTMT  */
#line 586 "exprnTree.y"
                        {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 2557 "y.tab.c"
    break;

  case 82: /* STMT: OUTPUTSTMT  */
#line 587 "exprnTree.y"
                        {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 2563 "y.tab.c"
    break;

  case 83: /* STMT: ASSIGNSTMT  */
#line 588 "exprnTree.y"
                        {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 2569 "y.tab.c"
    break;

  case 84: /* STMT: IFSTMT  */
#line 589 "exprnTree.y"
                    {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 2575 "y.tab.c"
    break;

  case 85: /* STMT: WHILESTMT  */
#line 590 "exprnTree.y"
                    {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 2581 "y.tab.c"
    break;

  case 86: /* STMT: DOWHILESTMT  */
#line 591 "exprnTree.y"
                    {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 2587 "y.tab.c"
    break;

  case 87: /* STMT: REPEATUNTILSTMT  */
#line 592 "exprnTree.y"
                        {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 2593 "y.tab.c"
    break;

  case 88: /* STMT: INITIALIZESTMT  */
#line 593 "exprnTree.y"
                       {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 2599 "y.tab.c"
    break;

  case 89: /* STMT: ALLOCSTMT  */
#line 594 "exprnTree.y"
                  {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 2605 "y.tab.c"
    break;

  case 90: /* STMT: FREESTMT  */
#line 595 "exprnTree.y"
                 {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 2611 "y.tab.c"
    break;

  case 91: /* STMT: BREAK SEMICOLON  */
#line 596 "exprnTree.y"
                         {(yyval.treeNode) = createTree(noVal, noType, NULL, breakNode , NULL,NULL, NULL);}
#line 2617 "y.tab.c"
    break;

  case 92: /* STMT: CONTINUE SEMICOLON  */
#line 597 "exprnTree.y"
                            {(yyval.treeNode) = createTree(noVal, noType, NULL, continueNode , NULL,NULL, NULL);}
#line 2623 "y.tab.c"
    break;

  case 93: /* STMT: ID '(' ')' SEMICOLON  */
#line 598 "exprnTree.y"
                            { (yyval.treeNode) = createTree(noVal, noType,  (yyvsp[-3].string), funcNode , NULL, NULL , NULL); 
                                if(checkArgList(NULL,(yyvsp[-3].string),gst)) yyerror("argument list not matched");}
#line 2630 "y.tab.c"
    break;

  case 94: /* STMT: ID '(' ArgList ')' SEMICOLON  */
#line 600 "exprnTree.y"
                                    { (yyval.treeNode) = createTree(noVal, noType,  (yyvsp[-4].string), funcNode , NULL,NULL , (yyvsp[-2].argNode)); 
                                     if(checkArgList((yyvsp[-2].argNode),(yyvsp[-4].string),gst)) yyerror("argument list not matched");}
#line 2637 "y.tab.c"
    break;

  case 95: /* STMT: RETURN expr SEMICOLON  */
#line 603 "exprnTree.y"
                                {(yyval.treeNode) = createTree(noVal, noType, NULL, returnNode , (yyvsp[-1].treeNode),NULL, NULL);}
#line 2643 "y.tab.c"
    break;

  case 96: /* STMT: IDENTIFIER ASSIGN NEW '(' ID ')' SEMICOLON  */
#line 604 "exprnTree.y"
                                                  {
                                           if ( getClassNode(ct,(yyvsp[-2].string)) == NULL) yyerror("class not defined");
                                           if ( (yyvsp[-6].treeNode)->type != noType) yyerror("type not matched1");
                                    
                                         struct treeNode* newtemp = createTree(noVal, noType, (yyvsp[-2].string), newNode , NULL,NULL, NULL);
                                         (yyval.treeNode) = createTree(noVal, noType, NULL, assignNode , (yyvsp[-6].treeNode),newtemp, NULL);
                                        // newl;printf("%s", $<string>5); newl;
                                         }
#line 2656 "y.tab.c"
    break;

  case 97: /* STMT: FieldU ASSIGN NEW '(' ID ')' SEMICOLON  */
#line 612 "exprnTree.y"
                                              {
                                            if ( getClassNode(ct,(yyvsp[-2].string)) == NULL) yyerror("class not defined");
                                            // printf("%d" , $1->type);
                                            if ( (yyvsp[-6].treeNode)->type != noType && (yyvsp[-6].treeNode)->nodetype != selfNode) yyerror("type not matched2");
                                            struct treeNode* temp = createTree(noVal, noType, NULL, clasNode , NULL,NULL, NULL);
                                         struct treeNode* newtemp = createTree(noVal, noType, NULL, newNode , temp,NULL, NULL);
                                         (yyval.treeNode) = createTree(noVal, noType, NULL, assignNode , (yyvsp[-6].treeNode),newtemp, NULL);
                                         }
#line 2669 "y.tab.c"
    break;

  case 98: /* STMT: DELETE '(' FieldU ')' SEMICOLON  */
#line 620 "exprnTree.y"
                                       { (yyval.treeNode) = createTree(noVal, noType, NULL, deleteNode , (yyvsp[-2].treeNode),NULL, NULL);}
#line 2675 "y.tab.c"
    break;

  case 99: /* INPUTSTMT: READ '(' IDENTIFIER ')' SEMICOLON  */
#line 625 "exprnTree.y"
                                                        {(yyval.treeNode) = createTree(noVal, noType, NULL, readNode, (yyvsp[-2].treeNode),NULL, NULL);}
#line 2681 "y.tab.c"
    break;

  case 100: /* OUTPUTSTMT: WRITE '(' expr ')' SEMICOLON  */
#line 628 "exprnTree.y"
                                                {(yyval.treeNode) = createTree(noVal, noType, NULL, writeNode, (yyvsp[-2].treeNode),NULL, NULL);}
#line 2687 "y.tab.c"
    break;

  case 101: /* ASSIGNSTMT: IDENTIFIER ASSIGN expr SEMICOLON  */
#line 631 "exprnTree.y"
                                                { (yyval.treeNode) = createTree(noVal, noType, NULL, assignNode, (yyvsp[-3].treeNode),(yyvsp[-1].treeNode), NULL);}
#line 2693 "y.tab.c"
    break;

  case 102: /* ASSIGNSTMT: IDENTIFIER ASSIGN AMP IDENTIFIER SEMICOLON  */
#line 632 "exprnTree.y"
                                                                {  struct treeNode *temp = createTree(noVal, intType, NULL, addressNode, (yyvsp[-1].treeNode),NULL, NULL);
                                                             (yyval.treeNode) = createTree(noVal, noType, NULL, assignNode, (yyvsp[-4].treeNode),temp, NULL);
                                                            }
#line 2701 "y.tab.c"
    break;

  case 103: /* ASSIGNSTMT: FieldU ASSIGN expr SEMICOLON  */
#line 635 "exprnTree.y"
                                                { (yyval.treeNode) = createTree(noVal, noType, NULL, assignNode, (yyvsp[-3].treeNode),(yyvsp[-1].treeNode), NULL);}
#line 2707 "y.tab.c"
    break;

  case 104: /* IFSTMT: IF '(' expr ')' THEN SLIST ELSE SLIST ENDIF SEMICOLON  */
#line 639 "exprnTree.y"
                                                                   { struct treeNode *temp = createTree(noVal, noType, NULL, elseNode, (yyvsp[-4].treeNode),(yyvsp[-2].treeNode), NULL); 
                                                                     (yyval.treeNode) = createTree(noVal, noType, NULL, ifNode, (yyvsp[-7].treeNode),temp, NULL);}
#line 2714 "y.tab.c"
    break;

  case 105: /* IFSTMT: IF '(' expr ')' THEN SLIST ENDIF SEMICOLON  */
#line 641 "exprnTree.y"
                                                        { (yyval.treeNode) = createTree(noVal, noType, NULL, ifNode , (yyvsp[-5].treeNode),(yyvsp[-2].treeNode), NULL);}
#line 2720 "y.tab.c"
    break;

  case 106: /* WHILESTMT: WHILE '(' expr ')' DO SLIST ENDWHILE SEMICOLON  */
#line 644 "exprnTree.y"
                                                            { (yyval.treeNode) = createTree(noVal, noType, NULL, whileNode, (yyvsp[-5].treeNode),(yyvsp[-2].treeNode), NULL);}
#line 2726 "y.tab.c"
    break;

  case 107: /* DOWHILESTMT: DO SLIST WHILE '(' expr ')' SEMICOLON  */
#line 646 "exprnTree.y"
                                                     { (yyval.treeNode) = createTree(noVal, noType, NULL, doWhileNode, (yyvsp[-2].treeNode),(yyvsp[-5].treeNode), NULL);}
#line 2732 "y.tab.c"
    break;

  case 108: /* REPEATUNTILSTMT: REPEAT SLIST UNTIL '(' expr ')' SEMICOLON  */
#line 648 "exprnTree.y"
                                                             { (yyval.treeNode) = createTree(noVal, noType, NULL, repeatUntilNode,(yyvsp[-2].treeNode),(yyvsp[-5].treeNode), NULL);}
#line 2738 "y.tab.c"
    break;

  case 109: /* INITIALIZESTMT: IDENTIFIER ASSIGN INITIALIZE '(' ')' SEMICOLON  */
#line 650 "exprnTree.y"
                                                                 { struct treeNode* temp = createTree(noVal, intType, NULL, initializeNode, NULL,NULL, NULL); (yyval.treeNode) = createTree(noVal, noType, NULL, assignNode, (yyvsp[-5].treeNode),temp, NULL);}
#line 2744 "y.tab.c"
    break;

  case 110: /* ALLOCSTMT: IDENTIFIER ASSIGN ALLOC '(' ')' SEMICOLON  */
#line 652 "exprnTree.y"
                                                       {struct treeNode* temp = createTree(noVal, intType, NULL, allocNode, NULL,NULL, NULL); (yyval.treeNode) = createTree(noVal, noType, NULL, assignNode, (yyvsp[-5].treeNode),temp, NULL);}
#line 2750 "y.tab.c"
    break;

  case 111: /* FREESTMT: IDENTIFIER ASSIGN FREE '(' IDENTIFIER ')' SEMICOLON  */
#line 654 "exprnTree.y"
                                                               { (yyval.treeNode) = createTree(noVal, intType, NULL, freeNode, (yyvsp[-2].treeNode),NULL, NULL);}
#line 2756 "y.tab.c"
    break;

  case 112: /* expr: expr PLUS expr  */
#line 656 "exprnTree.y"
                                {(yyval.treeNode) = createTree(noVal, intType, NULL, plusNode, (yyvsp[-2].treeNode),(yyvsp[0].treeNode), NULL);}
#line 2762 "y.tab.c"
    break;

  case 113: /* expr: expr MINUS expr  */
#line 657 "exprnTree.y"
                                {(yyval.treeNode) = createTree(noVal, intType, NULL, minusNode,(yyvsp[-2].treeNode),(yyvsp[0].treeNode), NULL);}
#line 2768 "y.tab.c"
    break;

  case 114: /* expr: expr STAR expr  */
#line 658 "exprnTree.y"
                                {(yyval.treeNode) = createTree(noVal, intType, NULL, mulNode,(yyvsp[-2].treeNode),(yyvsp[0].treeNode), NULL);}
#line 2774 "y.tab.c"
    break;

  case 115: /* expr: expr DIV expr  */
#line 659 "exprnTree.y"
                                {(yyval.treeNode) = createTree(noVal, intType, NULL, divNode,(yyvsp[-2].treeNode),(yyvsp[0].treeNode), NULL);}
#line 2780 "y.tab.c"
    break;

  case 116: /* expr: expr MOD expr  */
#line 660 "exprnTree.y"
                        {(yyval.treeNode) = createTree(noVal, intType, NULL, modNode,(yyvsp[-2].treeNode),(yyvsp[0].treeNode), NULL);}
#line 2786 "y.tab.c"
    break;

  case 117: /* expr: expr GT expr  */
#line 661 "exprnTree.y"
                            {(yyval.treeNode) = createTree(noVal, boolType, NULL, gtNode,(yyvsp[-2].treeNode),(yyvsp[0].treeNode), NULL);}
#line 2792 "y.tab.c"
    break;

  case 118: /* expr: expr GE expr  */
#line 662 "exprnTree.y"
                            {(yyval.treeNode) = createTree(noVal, boolType, NULL, geNode,(yyvsp[-2].treeNode),(yyvsp[0].treeNode), NULL);}
#line 2798 "y.tab.c"
    break;

  case 119: /* expr: expr LT expr  */
#line 663 "exprnTree.y"
                            {(yyval.treeNode) = createTree(noVal, boolType, NULL, ltNode,(yyvsp[-2].treeNode),(yyvsp[0].treeNode), NULL);}
#line 2804 "y.tab.c"
    break;

  case 120: /* expr: expr LE expr  */
#line 664 "exprnTree.y"
                            {(yyval.treeNode) = createTree(noVal, boolType, NULL, leNode,(yyvsp[-2].treeNode),(yyvsp[0].treeNode), NULL);}
#line 2810 "y.tab.c"
    break;

  case 121: /* expr: expr EQ expr  */
#line 665 "exprnTree.y"
                            {(yyval.treeNode) = createTree(noVal, boolType, NULL, eqNode,(yyvsp[-2].treeNode),(yyvsp[0].treeNode), NULL);}
#line 2816 "y.tab.c"
    break;

  case 122: /* expr: expr NE expr  */
#line 666 "exprnTree.y"
                            {(yyval.treeNode) = createTree(noVal, boolType, NULL, neNode,(yyvsp[-2].treeNode),(yyvsp[0].treeNode), NULL);}
#line 2822 "y.tab.c"
    break;

  case 123: /* expr: expr AND expr  */
#line 667 "exprnTree.y"
                        {(yyval.treeNode) = createTree(noVal, boolType, NULL, andNode,(yyvsp[-2].treeNode),(yyvsp[0].treeNode), NULL);}
#line 2828 "y.tab.c"
    break;

  case 124: /* expr: expr OR expr  */
#line 668 "exprnTree.y"
                            {(yyval.treeNode) = createTree(noVal, boolType, NULL, orNode,(yyvsp[-2].treeNode),(yyvsp[0].treeNode), NULL);}
#line 2834 "y.tab.c"
    break;

  case 125: /* expr: '(' expr ')'  */
#line 669 "exprnTree.y"
                                {(yyval.treeNode) = (yyvsp[-1].treeNode);}
#line 2840 "y.tab.c"
    break;

  case 126: /* expr: NUM  */
#line 670 "exprnTree.y"
                                    {(yyval.treeNode) = createTree((yyvsp[0].number), intType, NULL, numNode, NULL,NULL, NULL);}
#line 2846 "y.tab.c"
    break;

  case 127: /* expr: STR  */
#line 671 "exprnTree.y"
                        {(yyval.treeNode) = createTree(noVal, strType, (yyvsp[0].string), strNode, NULL,NULL, NULL);}
#line 2852 "y.tab.c"
    break;

  case 128: /* expr: ID '(' ')'  */
#line 672 "exprnTree.y"
                        {   struct treeNode* temp = createTree(noVal, noType, (yyvsp[-2].string), funcNode , NULL,NULL, NULL);
                            findType(gst,lst,temp);
                            temp->val = getFuncLabel(gst,(yyvsp[-2].string));
                            if(checkArgList(NULL,(yyvsp[-2].string),gst)) yyerror("argument list not matched");
                            (yyval.treeNode) = temp;}
#line 2862 "y.tab.c"
    break;

  case 129: /* expr: ID '(' ArgList ')'  */
#line 677 "exprnTree.y"
                            {  struct treeNode* temp = createTree(noVal, noType, (yyvsp[-3].string), funcNode , NULL ,NULL ,(yyvsp[-1].argNode));
                            findType(gst,lst,temp);
                            //  printf("%d ", temp->nodetype);
                            temp->val = getFuncLabel(gst,(yyvsp[-3].string));
                            if(checkArgList((yyvsp[-1].argNode),(yyvsp[-3].string),gst)) yyerror("argument list not matched");
                            (yyval.treeNode) = temp;
                            }
#line 2874 "y.tab.c"
    break;

  case 130: /* expr: NULLTYPE  */
#line 684 "exprnTree.y"
                  { (yyval.treeNode) = createTree(noVal, nullType, NULL, nullNode, NULL,NULL, NULL);}
#line 2880 "y.tab.c"
    break;

  case 131: /* expr: IDENTIFIER  */
#line 685 "exprnTree.y"
                         { (yyval.treeNode) = (yyvsp[0].treeNode);}
#line 2886 "y.tab.c"
    break;

  case 132: /* expr: FieldU  */
#line 686 "exprnTree.y"
                       { (yyval.treeNode) = (yyvsp[0].treeNode);}
#line 2892 "y.tab.c"
    break;

  case 133: /* expr: FieldFunction  */
#line 687 "exprnTree.y"
                      {  assignDetailsToFieldNode((yyvsp[0].treeNode)); (yyval.treeNode) = (yyvsp[0].treeNode);}
#line 2898 "y.tab.c"
    break;

  case 134: /* ArgList: ArgList ',' expr  */
#line 690 "exprnTree.y"
                                {   struct argNode* temp = createArgNode((yyvsp[0].treeNode)); joinArgNode((yyvsp[-2].argNode),temp); (yyval.argNode) = (yyvsp[-2].argNode);  }
#line 2904 "y.tab.c"
    break;

  case 135: /* ArgList: expr  */
#line 692 "exprnTree.y"
                                {     struct argNode* temp  = createArgNode((yyvsp[0].treeNode)); (yyval.argNode) = temp; }
#line 2910 "y.tab.c"
    break;

  case 136: /* ArgList: %empty  */
#line 693 "exprnTree.y"
                        { (yyval.argNode) = NULL; }
#line 2916 "y.tab.c"
    break;

  case 137: /* IDENTIFIER: ID  */
#line 696 "exprnTree.y"
                                    { struct treeNode* temp = createTree(noVal, noType, (yyvsp[0].string), idNode , NULL,NULL, NULL);
                                    findType(gst,lst,temp);
                                   
                                    (yyval.treeNode) = temp;}
#line 2925 "y.tab.c"
    break;

  case 138: /* IDENTIFIER: ID '[' expr ']'  */
#line 701 "exprnTree.y"
                                    {  
                                    struct treeNode* temp = createTree(noVal, noType, (yyvsp[-3].string), idNode, (yyvsp[-1].treeNode),NULL, NULL);
                                    findType(gst,lst,temp);
                                    if ( temp->localSymbolTableEntry != NULL && temp->localSymbolTableEntry->size <= evaluate((yyvsp[-1].treeNode))) yyerror("Array index out of bounds");
                                    if ( temp->localSymbolTableEntry == NULL && temp->globalSymbolTableEntry->size <= evaluate((yyvsp[-1].treeNode))) yyerror("Array index out of bounds");
                                    (yyval.treeNode) = temp;}
#line 2936 "y.tab.c"
    break;

  case 139: /* IDENTIFIER: STAR ID  */
#line 708 "exprnTree.y"
                                     { 
                                        struct treeNode* id = createTree(noVal, noType, (yyvsp[0].string), idNode, NULL,NULL,NULL);
                                        findType(gst,lst,id);
                                        struct treeNode* pointer = createTree(noVal, id->type, NULL, pointerNode, id,NULL,NULL);
                                        (yyval.treeNode) = pointer;
                                     }
#line 2947 "y.tab.c"
    break;

  case 140: /* FieldU: Field  */
#line 715 "exprnTree.y"
                    {  assignDetailsToFieldNode((yyvsp[0].treeNode));
                       if ( (yyvsp[0].treeNode)->nodetype == clasNode) yyerror("Cannot access private member field");
                            (yyval.treeNode) = (yyvsp[0].treeNode);}
#line 2955 "y.tab.c"
    break;

  case 141: /* Field: Field '.' ID  */
#line 720 "exprnTree.y"
                              {  struct treeNode* temp = createTree(noVal, noType, (yyvsp[0].string), tipeNode , NULL,NULL, NULL);
                                 struct treeNode* temp1 = (yyvsp[-2].treeNode);
                                 while (temp1->left != NULL) temp1 = temp1->left;
                                 temp1->left = temp;
                                (yyval.treeNode) = (yyvsp[-2].treeNode);
                              }
#line 2966 "y.tab.c"
    break;

  case 142: /* Field: ID '.' ID  */
#line 727 "exprnTree.y"
                              { struct treeNode* temp = createTree(noVal, noType, (yyvsp[0].string), tipeNode , NULL,NULL, NULL);
                                (yyval.treeNode) = createTree(noVal, noType, (yyvsp[-2].string), tipeNode , temp,NULL, NULL);
    
                            }
#line 2975 "y.tab.c"
    break;

  case 143: /* Field: SELF '.' ID  */
#line 731 "exprnTree.y"
                          {   struct treeNode* temp = createTree(noVal, noType, (yyvsp[0].string), tipeNode , NULL,NULL, NULL);
                                (yyval.treeNode) = createTree(noVal, classType, currentClassName, selfNode , temp,NULL, NULL); }
#line 2982 "y.tab.c"
    break;

  case 144: /* FieldFunction: SELF '.' ID '(' ArgList ')'  */
#line 735 "exprnTree.y"
                                              { 
                               
                                struct treeNode* temp = createTree(noVal, noType, (yyvsp[-3].string), funcNode , NULL ,NULL ,(yyvsp[-1].argNode));
                                char* cName = checkArgListforFieldFunc((yyvsp[-1].argNode),(yyvsp[-3].string),ct,currentClassName,currentClassName);
                                if(cName == NULL) yyerror("argument list not matched");
                                printf("\n%s\n",cName);
                                temp->val = getFuncLabelfromct(ct,currentClassName,(yyvsp[-3].string));
                                (yyval.treeNode) = createTree(noVal, noType, currentClassName, selfNode , temp,NULL, NULL);
                                // findTypeofClassFunc(ct,currentClassName,$<string>3,$$);
                            }
#line 2997 "y.tab.c"
    break;

  case 145: /* FieldFunction: ID '.' ID '(' ArgList ')'  */
#line 746 "exprnTree.y"
                                              { 
                                struct treeNode* temp = createTree(noVal, noType, (yyvsp[-3].string), funcNode , NULL ,NULL ,(yyvsp[-1].argNode));
                                char* cName = checkArgListforFieldFunc((yyvsp[-1].argNode),(yyvsp[-3].string),ct,(yyvsp[-5].string),currentClassName);
                                if(cName == NULL) yyerror("argument list not matched");
                                temp->val = getFuncLabelfromct(ct, cName,(yyvsp[-3].string));
                                (yyval.treeNode) = createTree(noVal, noType, (yyvsp[-5].string), clasNode , temp,NULL, NULL);
                                // findTypeofClassFunc(ct,currentClassName,$<string>3,$$);
                                }
#line 3010 "y.tab.c"
    break;

  case 146: /* FieldFunction: Field '.' ID '(' ArgList ')'  */
#line 754 "exprnTree.y"
                                               { 
                                         struct treeNode* temp = createTree(noVal, noType, (yyvsp[-3].string), funcNode , NULL ,NULL ,(yyvsp[-1].argNode));
                                         struct treeNode* temp1 = (yyvsp[-5].treeNode);
                                         while( temp1->left != NULL) temp1= temp1->left;
                                        
                                         char* cName = checkArgListforFieldFunc((yyvsp[-1].argNode),(yyvsp[-3].string),ct,temp1->varname,currentClassName);
                                         if(cName == NULL) yyerror("argument list not matched");

                                         temp->val = getFuncLabelfromct(ct, cName,(yyvsp[-3].string));
                                        //   findTypeofClassFunc(ct,cName,$<string>3,$$);
                                         temp1->left = temp;
                                        }
#line 3027 "y.tab.c"
    break;


#line 3031 "y.tab.c"

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

#line 769 "exprnTree.y"


int yyerror(char*s){
    printf("yyerror : %s\n",s);
    fclose(ip);
    exit(1);
}


int main(int argc, char* argv[]) {

  if(argc > 1) { 
  ip = fopen(argv[1], "r");
  if(ip) yyin = ip;
  }
  fp = fopen("exprnTree.xsm", "w");
  tt = (struct typeTable*) malloc(sizeof(struct typeTable));
  tt->head = NULL;
  ct = (struct classTable*) malloc(sizeof(struct classTable));
  ct->head = NULL;
  printHelper(fp,entryCode,-1,-1);
  fprintf(fp, "CALL MAIN\n");
  printHelper(fp,exitCode,-1,-1);
  yyparse();
  return 0;
}

                  
