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
 #include "typeTable.h"
 #include "symbolTable.h"
 #include "exprnTree.h"
 #include "reg.h"
 #include "typeTable.c"
 #include "exprnTree.c"
 #include "symbolTable.c"

 #define newl printf("\n");
 #define pdebug printf("\ndebug\n");
 
 int yylex(void);
 int yyerror(char *s);
 extern FILE* yyin;
 FILE* ip;
 FILE* fp;

 struct globalSymbolTable* gst ;
 struct localSymbolTable* lst ;
 struct typeTable* tt ;

 int flabel = 0;


#line 100 "y.tab.c"

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
    GT = 295,                      /* GT  */
    GE = 296,                      /* GE  */
    LT = 297,                      /* LT  */
    LE = 298,                      /* LE  */
    EQ = 299,                      /* EQ  */
    NE = 300,                      /* NE  */
    AND = 301,                     /* AND  */
    OR = 302                       /* OR  */
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
#define GT 295
#define GE 296
#define LT 297
#define LE 298
#define EQ 299
#define NE 300
#define AND 301
#define OR 302

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 30 "exprnTree.y"


    struct treeNode* treeNode;
    struct globalSymbolNode* globalSymbolNode;
    struct localSymbolNode* localSymbolNode;
    struct paramNode* paramNode;
    struct argNode* argNode;
    struct typeNode* typeNode;
    struct fieldNode* fieldNode;
    int number;
    char* string;


#line 261 "y.tab.c"

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
  YYSYMBOL_GT = 40,                        /* GT  */
  YYSYMBOL_GE = 41,                        /* GE  */
  YYSYMBOL_LT = 42,                        /* LT  */
  YYSYMBOL_LE = 43,                        /* LE  */
  YYSYMBOL_EQ = 44,                        /* EQ  */
  YYSYMBOL_NE = 45,                        /* NE  */
  YYSYMBOL_AND = 46,                       /* AND  */
  YYSYMBOL_OR = 47,                        /* OR  */
  YYSYMBOL_48_ = 48,                       /* '{'  */
  YYSYMBOL_49_ = 49,                       /* '}'  */
  YYSYMBOL_50_ = 50,                       /* ','  */
  YYSYMBOL_51_ = 51,                       /* '('  */
  YYSYMBOL_52_ = 52,                       /* ')'  */
  YYSYMBOL_53_ = 53,                       /* '['  */
  YYSYMBOL_54_ = 54,                       /* ']'  */
  YYSYMBOL_55_ = 55,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 56,                  /* $accept  */
  YYSYMBOL_program = 57,                   /* program  */
  YYSYMBOL_TypeDefBlock = 58,              /* TypeDefBlock  */
  YYSYMBOL_TypeDefList = 59,               /* TypeDefList  */
  YYSYMBOL_TypeDef = 60,                   /* TypeDef  */
  YYSYMBOL_FieldDeclList = 61,             /* FieldDeclList  */
  YYSYMBOL_FieldDecl = 62,                 /* FieldDecl  */
  YYSYMBOL_TypeName = 63,                  /* TypeName  */
  YYSYMBOL_GdeclBlock = 64,                /* GdeclBlock  */
  YYSYMBOL_GdeclList = 65,                 /* GdeclList  */
  YYSYMBOL_Gdecl = 66,                     /* Gdecl  */
  YYSYMBOL_Type = 67,                      /* Type  */
  YYSYMBOL_GidList = 68,                   /* GidList  */
  YYSYMBOL_Gid = 69,                       /* Gid  */
  YYSYMBOL_ParamList = 70,                 /* ParamList  */
  YYSYMBOL_Param = 71,                     /* Param  */
  YYSYMBOL_IDDECL = 72,                    /* IDDECL  */
  YYSYMBOL_FdefBlock = 73,                 /* FdefBlock  */
  YYSYMBOL_Fdef = 74,                      /* Fdef  */
  YYSYMBOL_FName = 75,                     /* FName  */
  YYSYMBOL_MainBlock = 76,                 /* MainBlock  */
  YYSYMBOL_MainHeader = 77,                /* MainHeader  */
  YYSYMBOL_LdeclBlock = 78,                /* LdeclBlock  */
  YYSYMBOL_LdeclList = 79,                 /* LdeclList  */
  YYSYMBOL_Ldecl = 80,                     /* Ldecl  */
  YYSYMBOL_LidList = 81,                   /* LidList  */
  YYSYMBOL_Lid = 82,                       /* Lid  */
  YYSYMBOL_SLIST = 83,                     /* SLIST  */
  YYSYMBOL_STMT = 84,                      /* STMT  */
  YYSYMBOL_INPUTSTMT = 85,                 /* INPUTSTMT  */
  YYSYMBOL_OUTPUTSTMT = 86,                /* OUTPUTSTMT  */
  YYSYMBOL_ASSIGNSTMT = 87,                /* ASSIGNSTMT  */
  YYSYMBOL_IFSTMT = 88,                    /* IFSTMT  */
  YYSYMBOL_WHILESTMT = 89,                 /* WHILESTMT  */
  YYSYMBOL_DOWHILESTMT = 90,               /* DOWHILESTMT  */
  YYSYMBOL_REPEATUNTILSTMT = 91,           /* REPEATUNTILSTMT  */
  YYSYMBOL_INITIALIZESTMT = 92,            /* INITIALIZESTMT  */
  YYSYMBOL_ALLOCSTMT = 93,                 /* ALLOCSTMT  */
  YYSYMBOL_FREESTMT = 94,                  /* FREESTMT  */
  YYSYMBOL_expr = 95,                      /* expr  */
  YYSYMBOL_ArgList = 96,                   /* ArgList  */
  YYSYMBOL_IDENTIFIER = 97,                /* IDENTIFIER  */
  YYSYMBOL_Field = 98                      /* Field  */
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
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   668

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  115
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  267

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   302


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
      51,    52,     2,     2,    50,     2,    55,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    53,     2,    54,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    48,     2,    49,     2,     2,     2,     2,
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
      45,    46,    47
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    61,    61,    67,    72,    78,    86,    93,    96,    97,
     100,   106,   107,   110,   111,   114,   115,   118,   138,   141,
     142,   145,   153,   173,   174,   177,   178,   181,   182,   187,
     188,   189,   192,   193,   196,   199,   202,   206,   207,   210,
     231,   249,   265,   273,   290,   314,   336,   345,   346,   347,
     350,   351,   354,   362,   382,   383,   386,   387,   388,   393,
     394,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   411,   414,   419,   422,   425,   426,
     432,   434,   437,   439,   441,   443,   445,   447,   450,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   471,   479,   480,   483,   485,
     488,   492,   499,   505,   508,   515
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
  "INITIALIZE", "ALLOC", "FREE", "GT", "GE", "LT", "LE", "EQ", "NE", "AND",
  "OR", "'{'", "'}'", "','", "'('", "')'", "'['", "']'", "'.'", "$accept",
  "program", "TypeDefBlock", "TypeDefList", "TypeDef", "FieldDeclList",
  "FieldDecl", "TypeName", "GdeclBlock", "GdeclList", "Gdecl", "Type",
  "GidList", "Gid", "ParamList", "Param", "IDDECL", "FdefBlock", "Fdef",
  "FName", "MainBlock", "MainHeader", "LdeclBlock", "LdeclList", "Ldecl",
  "LidList", "Lid", "SLIST", "STMT", "INPUTSTMT", "OUTPUTSTMT",
  "ASSIGNSTMT", "IFSTMT", "WHILESTMT", "DOWHILESTMT", "REPEATUNTILSTMT",
  "INITIALIZESTMT", "ALLOCSTMT", "FREESTMT", "expr", "ArgList",
  "IDENTIFIER", "Field", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-89)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      27,    12,    78,     1,    29,   -89,    70,   -89,   -89,    85,
     117,    57,   -89,    63,    93,    63,   -89,    73,   -89,    79,
     122,   -89,   -89,   118,    10,   -89,   -89,   126,   -89,    10,
     124,    63,   -89,   125,   -89,   -89,    68,    81,   176,   -89,
     -89,    77,   -89,   179,   177,    80,   180,   -14,   -89,   -89,
     -89,   -89,   -11,    76,   -89,    16,   616,   146,   175,   616,
     184,   185,   -89,   -89,   189,   223,   230,    84,   -89,   177,
     231,   -89,   -89,    10,   -89,   -89,   -89,   113,   168,   233,
     186,   187,   229,   232,   138,   195,   196,   616,   616,   493,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   247,   203,    21,   -89,    21,   188,   -89,   616,   514,
     616,   -89,   -89,   -89,   -89,   177,   -89,   120,   205,   -89,
     -89,     7,   138,   236,   -89,    40,   138,   -89,   -89,   169,
     -89,   -89,   -89,   138,   357,   -89,   138,   138,   636,   469,
     211,   -89,   174,   267,   218,   269,    -9,   -89,    -8,   -89,
     -89,   535,   224,   556,   -89,   -89,   -89,   268,   381,   140,
     110,   -89,   149,   234,   209,    42,   222,   138,   138,   138,
     138,   138,   -89,   138,   138,   138,   138,   138,   138,   138,
     138,   235,   283,   242,   243,   -89,    40,   244,   245,   246,
     369,   -89,   279,   -89,   -89,    21,   -89,   249,   -89,   250,
     -89,   138,   284,   -89,   290,   291,   -89,   182,   -89,    82,
      82,   -89,   -89,   -89,   424,   424,   424,   424,   424,   424,
     424,   424,   258,   278,   138,   138,   293,   259,   260,    40,
     -89,   256,   -89,   -89,   -89,   381,   -89,   -89,   -89,   -89,
     616,   616,   296,   309,   -89,   297,   303,   270,   -89,   431,
     576,    -4,   304,   -89,   -89,   305,   616,   315,   316,   -89,
     -89,   -89,   596,   -89,   -89,   317,   -89
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     7,     0,     9,     1,     0,
       0,    23,    24,     0,     0,     0,    38,     0,     5,     0,
       0,     6,     8,     0,     0,    18,    23,     0,    20,     0,
       0,     0,     3,     0,    37,     4,     0,     0,     0,    15,
      16,     0,    12,     0,    31,    34,     0,     0,    26,    27,
      17,    19,     0,     0,     2,    31,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    30,    31,
       0,    36,    22,     0,    21,    46,    42,     0,   110,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,     0,   113,     0,    48,     0,     0,    51,     0,     0,
       0,    14,    13,    33,    32,     0,    43,     0,     0,    25,
      41,     0,     0,     0,   112,     0,     0,    71,    72,   110,
     102,   103,   106,     0,     0,   107,     0,     0,     0,     0,
       0,    59,     0,     0,    56,     0,     0,    55,     0,    47,
      50,     0,     0,     0,    29,    28,    35,     0,   109,     0,
       0,   115,   110,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    75,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    40,     0,     0,     0,     0,
       0,   114,     0,    58,    53,     0,    52,     0,    45,     0,
      73,     0,     0,   111,     0,     0,   104,     0,   101,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,     0,     0,     0,     0,     0,     0,     0,     0,
      78,     0,    54,    39,    44,   108,    74,    76,    77,   105,
       0,     0,     0,     0,    79,     0,     0,     0,    57,     0,
       0,     0,     0,    85,    86,     0,     0,     0,     0,    83,
      84,    87,     0,    81,    82,     0,    80
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -89,   -89,   -89,   -89,   328,   -89,   306,   -89,   -89,   -89,
     318,    17,   329,   271,   -39,   252,   -89,   333,    -6,   -89,
     109,   -89,   320,   -89,   253,   255,   173,   -53,   -88,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -66,
     204,   -56,   -89
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     6,     7,    41,    42,    43,    13,    27,
      28,    14,    47,    48,    67,    68,    49,    15,    16,    17,
      18,    19,    58,   106,   107,   146,   147,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   158,
     159,   135,   102
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     101,   141,    72,   101,     9,    74,   109,   194,   196,    34,
     129,   130,   259,    45,    79,     4,    77,    46,   134,    65,
      10,   141,    11,    12,   144,    34,   241,    29,   145,   131,
     117,   101,   101,   101,   138,   139,    73,    26,    12,    73,
     132,   195,   195,   162,    29,   129,   130,    79,     5,    79,
     141,   141,   101,   101,   101,   151,   160,   153,   133,   157,
     164,    66,     1,   141,   131,   141,     9,   166,    76,   163,
     181,   182,    66,     4,   105,   132,   190,    20,     8,    56,
      38,    30,   101,   101,    11,    12,    66,    57,    23,   169,
     170,   171,    59,   133,   206,   101,    33,   101,    39,    40,
      57,   209,   210,   211,   212,   213,    21,   214,   215,   216,
     217,   218,   219,   220,   221,   167,   168,   169,   170,   171,
      24,    36,    32,   105,    35,    38,    62,    37,    75,    24,
     226,    69,    66,    70,   115,   235,   116,    25,    26,    12,
      54,   129,   130,    39,    40,    79,    50,    26,    12,   103,
     173,   174,   175,   176,   177,   178,   179,   180,   242,   243,
     131,   141,   141,   115,   203,   120,   104,    26,    12,    44,
     115,   132,   155,   247,   141,    53,    55,   129,   130,    61,
      65,    79,    64,    71,   101,   101,   108,   249,   250,   133,
     201,   103,   202,   101,   101,   110,   131,   186,    26,    12,
     101,   111,   122,   262,   123,   112,   101,   132,   149,    26,
      12,   187,   188,   189,   167,   168,   169,   170,   171,   121,
     165,   122,   122,   123,   123,   133,   113,   167,   168,   169,
     170,   171,   201,   114,   239,   118,   124,   125,   126,   161,
     167,   168,   169,   170,   171,   127,   136,   137,   128,   173,
     174,   175,   176,   177,   178,   179,   180,   142,   143,   156,
     185,   205,   173,   174,   175,   176,   177,   178,   179,   180,
     191,   192,   193,   198,   208,   173,   174,   175,   176,   177,
     178,   179,   180,   231,   200,   240,   204,   222,   167,   168,
     169,   170,   171,   224,   225,   227,   228,   229,   233,   234,
     236,   167,   168,   169,   170,   171,   237,   238,   241,   244,
     248,   245,   246,   253,   167,   168,   169,   170,   171,   254,
     260,   261,   255,   173,   174,   175,   176,   177,   178,   179,
     180,   263,   264,   266,    22,   223,   173,   174,   175,   176,
     177,   178,   179,   180,   119,    51,    31,    63,   251,   173,
     174,   175,   176,   177,   178,   179,   180,    60,    52,   150,
     148,   252,   167,   168,   169,   170,   171,   154,   232,   207,
       0,     0,     0,   172,   167,   168,   169,   170,   171,     0,
       0,     0,     0,     0,     0,   230,   167,   168,   169,   170,
     171,     0,     0,     0,     0,     0,     0,   173,   174,   175,
     176,   177,   178,   179,   180,     0,     0,     0,     0,   173,
     174,   175,   176,   177,   178,   179,   180,     0,     0,     0,
       0,   173,   174,   175,   176,   177,   178,   179,   180,   167,
     168,   169,   170,   171,    78,     0,     0,     0,    79,     0,
       0,     0,     0,     0,    80,    81,   256,     0,    82,    83,
       0,     0,     0,     0,     0,     0,    84,    85,     0,   257,
      86,    87,     0,    88,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    78,     0,     0,     0,    79,     0,     0,     0,
       0,     0,    80,    81,     0,     0,    82,    83,     0,     0,
       0,     0,     0,     0,    84,    85,    78,     0,    86,    87,
      79,    88,     0,   184,     0,   140,    80,    81,     0,     0,
      82,    83,     0,     0,     0,     0,     0,    78,    84,    85,
       0,    79,    86,    87,     0,    88,   152,    80,    81,     0,
       0,    82,    83,     0,     0,     0,     0,     0,    78,    84,
      85,     0,    79,    86,    87,     0,    88,   197,    80,    81,
       0,     0,    82,    83,     0,     0,     0,     0,     0,    78,
      84,    85,     0,    79,    86,    87,     0,    88,   199,    80,
      81,     0,     0,    82,    83,     0,     0,     0,     0,    78,
       0,    84,    85,    79,     0,    86,    87,     0,    88,    80,
      81,     0,     0,    82,    83,     0,     0,     0,     0,    78,
       0,    84,    85,    79,     0,    86,    87,   258,    88,    80,
      81,     0,     0,    82,    83,     0,     0,     0,     0,    78,
       0,    84,    85,    79,   265,    86,    87,     0,    88,    80,
      81,     0,     0,    82,    83,     0,     0,     0,     0,    78,
       0,    84,    85,    79,     0,    86,    87,     0,    88,    80,
      81,     0,     0,    82,    83,     0,     0,     0,     0,     0,
       0,    84,    85,     0,     0,   183,    87,     0,    88
};

static const yytype_int16 yycheck[] =
{
      56,    89,    16,    59,     3,    16,    59,    16,    16,    15,
       3,     4,    16,     3,     7,     3,    55,     7,    84,     3,
      19,   109,    21,    22,     3,    31,    30,    10,     7,    22,
      69,    87,    88,    89,    87,    88,    50,    21,    22,    50,
      33,    50,    50,     3,    27,     3,     4,     7,    36,     7,
     138,   139,   108,   109,   110,   108,   122,   110,    51,    52,
     126,    44,    35,   151,    22,   153,     3,   133,    52,   125,
     136,   137,    55,     3,    57,    33,   142,    48,     0,    11,
       3,    24,   138,   139,    21,    22,    69,    19,     3,     7,
       8,     9,    11,    51,    52,   151,     3,   153,    21,    22,
      19,   167,   168,   169,   170,   171,    36,   173,   174,   175,
     176,   177,   178,   179,   180,     5,     6,     7,     8,     9,
       3,    48,    13,   106,    15,     3,    49,    48,    52,     3,
     186,    51,   115,    53,    50,   201,    52,    20,    21,    22,
      31,     3,     4,    21,    22,     7,    20,    21,    22,     3,
      40,    41,    42,    43,    44,    45,    46,    47,   224,   225,
      22,   249,   250,    50,    54,    52,    20,    21,    22,    51,
      50,    33,    52,   229,   262,    51,    51,     3,     4,     3,
       3,     7,     3,     3,   240,   241,    11,   240,   241,    51,
      50,     3,    52,   249,   250,    11,    22,    23,    21,    22,
     256,    16,    53,   256,    55,    16,   262,    33,    20,    21,
      22,    37,    38,    39,     5,     6,     7,     8,     9,    51,
      51,    53,    53,    55,    55,    51,     3,     5,     6,     7,
       8,     9,    50,     3,    52,     4,     3,    51,    51,     3,
       5,     6,     7,     8,     9,    16,    51,    51,    16,    40,
      41,    42,    43,    44,    45,    46,    47,    10,    55,    54,
      49,    52,    40,    41,    42,    43,    44,    45,    46,    47,
       3,    53,     3,    49,    52,    40,    41,    42,    43,    44,
      45,    46,    47,     4,    16,    27,    52,    52,     5,     6,
       7,     8,     9,    51,    51,    51,    51,    51,    49,    49,
      16,     5,     6,     7,     8,     9,    16,    16,    30,    16,
      54,    52,    52,    16,     5,     6,     7,     8,     9,    16,
      16,    16,    52,    40,    41,    42,    43,    44,    45,    46,
      47,    16,    16,    16,     6,    52,    40,    41,    42,    43,
      44,    45,    46,    47,    73,    27,    13,    41,    52,    40,
      41,    42,    43,    44,    45,    46,    47,    37,    29,   106,
     105,    52,     5,     6,     7,     8,     9,   115,   195,   165,
      -1,    -1,    -1,    16,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    16,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    -1,    -1,
      -1,    40,    41,    42,    43,    44,    45,    46,    47,     5,
       6,     7,     8,     9,     3,    -1,    -1,    -1,     7,    -1,
      -1,    -1,    -1,    -1,    13,    14,    15,    -1,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    28,
      29,    30,    -1,    32,    40,    41,    42,    43,    44,    45,
      46,    47,     3,    -1,    -1,    -1,     7,    -1,    -1,    -1,
      -1,    -1,    13,    14,    -1,    -1,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,     3,    -1,    29,    30,
       7,    32,    -1,    34,    -1,    12,    13,    14,    -1,    -1,
      17,    18,    -1,    -1,    -1,    -1,    -1,     3,    25,    26,
      -1,     7,    29,    30,    -1,    32,    12,    13,    14,    -1,
      -1,    17,    18,    -1,    -1,    -1,    -1,    -1,     3,    25,
      26,    -1,     7,    29,    30,    -1,    32,    12,    13,    14,
      -1,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,     3,
      25,    26,    -1,     7,    29,    30,    -1,    32,    12,    13,
      14,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,     3,
      -1,    25,    26,     7,    -1,    29,    30,    -1,    32,    13,
      14,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,     3,
      -1,    25,    26,     7,    -1,    29,    30,    31,    32,    13,
      14,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,     3,
      -1,    25,    26,     7,    28,    29,    30,    -1,    32,    13,
      14,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,     3,
      -1,    25,    26,     7,    -1,    29,    30,    -1,    32,    13,
      14,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    26,    -1,    -1,    29,    30,    -1,    32
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    35,    57,    58,     3,    36,    59,    60,     0,     3,
      19,    21,    22,    64,    67,    73,    74,    75,    76,    77,
      48,    36,    60,     3,     3,    20,    21,    65,    66,    67,
      24,    73,    76,     3,    74,    76,    48,    48,     3,    21,
      22,    61,    62,    63,    51,     3,     7,    68,    69,    72,
      20,    66,    68,    51,    76,    51,    11,    19,    78,    11,
      78,     3,    49,    62,     3,     3,    67,    70,    71,    51,
      53,     3,    16,    50,    16,    52,    52,    70,     3,     7,
      13,    14,    17,    18,    25,    26,    29,    30,    32,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    97,    98,     3,    20,    67,    79,    80,    11,    83,
      11,    16,    16,     3,     3,    50,    52,    70,     4,    69,
      52,    51,    53,    55,     3,    51,    51,    16,    16,     3,
       4,    22,    33,    51,    95,    97,    51,    51,    83,    83,
      12,    84,    10,    55,     3,     7,    81,    82,    81,    20,
      80,    83,    12,    83,    71,    52,    54,    52,    95,    96,
      95,     3,     3,    97,    95,    51,    95,     5,     6,     7,
       8,     9,    16,    40,    41,    42,    43,    44,    45,    46,
      47,    95,    95,    29,    34,    49,    23,    37,    38,    39,
      95,     3,    53,     3,    16,    50,    16,    12,    49,    12,
      16,    50,    52,    54,    52,    52,    52,    96,    52,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    52,    52,    51,    51,    97,    51,    51,    51,
      16,     4,    82,    49,    49,    95,    16,    16,    16,    52,
      27,    30,    95,    95,    16,    52,    52,    97,    54,    83,
      83,    52,    52,    16,    16,    52,    15,    28,    31,    16,
      16,    16,    83,    16,    16,    28,    16
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    56,    57,    57,    57,    57,    58,    58,    59,    59,
      60,    61,    61,    62,    62,    63,    63,    64,    64,    65,
      65,    66,    66,    67,    67,    68,    68,    69,    69,    70,
      70,    70,    71,    71,    72,    72,    72,    73,    73,    74,
      74,    75,    75,    75,    76,    76,    77,    78,    78,    78,
      79,    79,    80,    80,    81,    81,    82,    82,    82,    83,
      83,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    85,    86,    87,    87,
      88,    88,    89,    90,    91,    92,    93,    94,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    96,    96,
      97,    97,    97,    97,    98,    98
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     3,     3,     2,     3,     2,     2,     1,
       4,     2,     1,     3,     3,     1,     1,     3,     2,     2,
       1,     3,     3,     1,     1,     3,     1,     1,     4,     3,
       1,     0,     2,     2,     1,     4,     2,     2,     1,     7,
       6,     5,     4,     5,     7,     6,     4,     3,     2,     0,
       2,     1,     3,     3,     3,     1,     1,     4,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     4,     5,     3,     5,     5,     4,     5,
      10,     8,     8,     7,     7,     6,     6,     7,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     3,     4,     1,     1,     3,     1,
       1,     4,     2,     1,     3,     3
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
  case 2: /* program: TypeDefBlock GdeclBlock FdefBlock MainBlock  */
#line 62 "exprnTree.y"
                                {printf("typedef gdecl fdef  main");newl;
                                fclose(fp);
                                fclose(ip);
                                exit(0);}
#line 1596 "y.tab.c"
    break;

  case 3: /* program: TypeDefBlock GdeclBlock MainBlock  */
#line 67 "exprnTree.y"
                                             {printf("typedef gdecl main");newl;
                                fclose(fp);
                                fclose(ip);
                                exit(0);}
#line 1605 "y.tab.c"
    break;

  case 4: /* program: TypeDefBlock FdefBlock MainBlock  */
#line 73 "exprnTree.y"
                                {printf("type function main");newl;
                                fclose(fp);
                                fclose(ip);
                                exit(0);}
#line 1614 "y.tab.c"
    break;

  case 5: /* program: TypeDefBlock MainBlock  */
#line 78 "exprnTree.y"
                                 {printf("type main");newl;
                                fclose(fp);
                                fclose(ip);
                                exit(0);}
#line 1623 "y.tab.c"
    break;

  case 6: /* TypeDefBlock: TYPE TypeDefList ENDTYPE  */
#line 86 "exprnTree.y"
                                         { 
                                            tt->head = (yyvsp[-1].typeNode);
                                            printTypeTable(tt);
                                            newl;
                                            if ( checkDuplicateType(tt) ) yyerror("duplicate type definition");
                                            (yyval.typeNode) = (yyvsp[-1].typeNode);
                                            }
#line 1635 "y.tab.c"
    break;

  case 7: /* TypeDefBlock: TYPE ENDTYPE  */
#line 93 "exprnTree.y"
                             { yyerror("no type definition");}
#line 1641 "y.tab.c"
    break;

  case 8: /* TypeDefList: TypeDefList TypeDef  */
#line 96 "exprnTree.y"
                                    { joinTypeNode((yyvsp[-1].typeNode),(yyvsp[0].typeNode)); (yyval.typeNode) = (yyvsp[-1].typeNode);}
#line 1647 "y.tab.c"
    break;

  case 9: /* TypeDefList: TypeDef  */
#line 97 "exprnTree.y"
                        { (yyval.typeNode) = (yyvsp[0].typeNode);}
#line 1653 "y.tab.c"
    break;

  case 10: /* TypeDef: ID '{' FieldDeclList '}'  */
#line 100 "exprnTree.y"
                                           { 
                                            if (checkIfValidType(tt,(yyvsp[-1].fieldNode),(yyvsp[-3].string))) yyerror("type not defined");
                                            (yyval.typeNode) = createTypeNode((yyvsp[-3].string),(yyvsp[-1].fieldNode));
                                            }
#line 1662 "y.tab.c"
    break;

  case 11: /* FieldDeclList: FieldDeclList FieldDecl  */
#line 106 "exprnTree.y"
                                        { joinFieldNode((yyvsp[-1].fieldNode),(yyvsp[0].fieldNode)); (yyval.fieldNode) = (yyvsp[-1].fieldNode);}
#line 1668 "y.tab.c"
    break;

  case 12: /* FieldDeclList: FieldDecl  */
#line 107 "exprnTree.y"
                             {(yyval.fieldNode) = (yyvsp[0].fieldNode);}
#line 1674 "y.tab.c"
    break;

  case 13: /* FieldDecl: TypeName ID SEMICOLON  */
#line 110 "exprnTree.y"
                                     { (yyval.fieldNode) = createFieldNode((yyvsp[-2].number),(yyvsp[-1].string),NULL); }
#line 1680 "y.tab.c"
    break;

  case 14: /* FieldDecl: ID ID SEMICOLON  */
#line 111 "exprnTree.y"
                               { (yyval.fieldNode) = createFieldNode(noType,(yyvsp[-1].string),(yyvsp[-2].string)); }
#line 1686 "y.tab.c"
    break;

  case 15: /* TypeName: INT  */
#line 114 "exprnTree.y"
                        { (yyval.number) = intType;}
#line 1692 "y.tab.c"
    break;

  case 16: /* TypeName: STR  */
#line 115 "exprnTree.y"
                        { (yyval.number) = strType;}
#line 1698 "y.tab.c"
    break;

  case 17: /* GdeclBlock: DECL GdeclList ENDDECL  */
#line 118 "exprnTree.y"
                                    {
                            gst = ( struct globalSymbolTable* ) malloc(sizeof(struct globalSymbolTable));
                            gst->head = (yyvsp[-1].globalSymbolNode);
                            assignBindingToGST(gst);
                            printGlobalSymbolTable(gst);
                            newl;
                            printf("globalMemLoc : %d" , globalMemLoc);
                            newl;
                            if ( checkDuplicateforGST((yyvsp[-1].globalSymbolNode)) ) yyerror("duplicate declaration in gst");
                            fp = fopen("exprnTree.xsm", "w");
                            printHelper(fp,entryCode,-1,-1);
                            
                            while( globalMemLoc-- > 4096){
                                fprintf(fp, "PUSH R0\n");
                            }
                            
                            fprintf(fp, "CALL MAIN\n");
                            printHelper(fp,exitCode,-1,-1);

                           }
#line 1723 "y.tab.c"
    break;

  case 18: /* GdeclBlock: DECL ENDDECL  */
#line 138 "exprnTree.y"
                                        { yyerror("no declaration");}
#line 1729 "y.tab.c"
    break;

  case 19: /* GdeclList: GdeclList Gdecl  */
#line 141 "exprnTree.y"
                                { joinGlobalSymbolNode((yyvsp[-1].globalSymbolNode),(yyvsp[0].globalSymbolNode)); (yyval.globalSymbolNode) = (yyvsp[-1].globalSymbolNode); }
#line 1735 "y.tab.c"
    break;

  case 20: /* GdeclList: Gdecl  */
#line 142 "exprnTree.y"
                                { (yyval.globalSymbolNode) = (yyvsp[0].globalSymbolNode); }
#line 1741 "y.tab.c"
    break;

  case 21: /* Gdecl: Type GidList SEMICOLON  */
#line 145 "exprnTree.y"
                                {
                                struct globalSymbolNode* temp = (yyvsp[-1].globalSymbolNode);
                                while(temp != NULL){
                                    temp->type = (yyvsp[-2].number);
                                    temp = temp->next;
                                }
                                (yyval.globalSymbolNode) = (yyvsp[-1].globalSymbolNode);
                            }
#line 1754 "y.tab.c"
    break;

  case 22: /* Gdecl: ID GidList SEMICOLON  */
#line 153 "exprnTree.y"
                            {
                                struct globalSymbolNode* temp = (yyvsp[-1].globalSymbolNode);
                                // if entry in typetable for id exists
                                struct typeNode* tNode = getTypeNode(tt,(yyvsp[-2].string));
                                if ( tNode != NULL ){
                                    while(temp != NULL){
                                        temp->typeName = (yyvsp[-2].string);
                                        temp->type = noType;
                                        temp->tNode = tNode;
                                        temp = temp->next;
                                    }
                                }
                                else{
                                    yyerror("no type found for id in gdecl");
                                }
                                (yyval.globalSymbolNode) = (yyvsp[-1].globalSymbolNode);
                            }
#line 1776 "y.tab.c"
    break;

  case 23: /* Type: INT  */
#line 173 "exprnTree.y"
                                        {(yyval.number) = intType;}
#line 1782 "y.tab.c"
    break;

  case 24: /* Type: STR  */
#line 174 "exprnTree.y"
                                        {(yyval.number) = strType;}
#line 1788 "y.tab.c"
    break;

  case 25: /* GidList: GidList ',' Gid  */
#line 177 "exprnTree.y"
                           { joinGlobalSymbolNode((yyvsp[-2].globalSymbolNode),(yyvsp[0].globalSymbolNode)); (yyval.globalSymbolNode) = (yyvsp[-2].globalSymbolNode); }
#line 1794 "y.tab.c"
    break;

  case 26: /* GidList: Gid  */
#line 178 "exprnTree.y"
                                           { (yyval.globalSymbolNode) = (yyvsp[0].globalSymbolNode); }
#line 1800 "y.tab.c"
    break;

  case 27: /* Gid: IDDECL  */
#line 181 "exprnTree.y"
             { (yyval.globalSymbolNode) = (yyvsp[0].globalSymbolNode); }
#line 1806 "y.tab.c"
    break;

  case 28: /* Gid: ID '(' ParamList ')'  */
#line 182 "exprnTree.y"
                           { (yyval.globalSymbolNode) = createGlobalSymbolNode((yyvsp[-3].string), noType, -1);
                             (yyval.globalSymbolNode)->paramList = (yyvsp[-1].paramNode);
                             (yyval.globalSymbolNode)->fLabel = flabel++;
                           }
#line 1815 "y.tab.c"
    break;

  case 29: /* ParamList: ParamList ',' Param  */
#line 187 "exprnTree.y"
                                { joinParamNode((yyvsp[-2].paramNode),(yyvsp[0].paramNode)); (yyval.paramNode) = (yyvsp[-2].paramNode); }
#line 1821 "y.tab.c"
    break;

  case 30: /* ParamList: Param  */
#line 188 "exprnTree.y"
                                {(yyval.paramNode) = (yyvsp[0].paramNode);}
#line 1827 "y.tab.c"
    break;

  case 31: /* ParamList: %empty  */
#line 189 "exprnTree.y"
                                {(yyval.paramNode) = NULL;}
#line 1833 "y.tab.c"
    break;

  case 32: /* Param: Type ID  */
#line 192 "exprnTree.y"
                { (yyval.paramNode) = createParamNode((yyvsp[0].string),(yyvsp[-1].number),NULL); }
#line 1839 "y.tab.c"
    break;

  case 33: /* Param: ID ID  */
#line 193 "exprnTree.y"
              { (yyval.paramNode) = createParamNode((yyvsp[0].string),noType,(yyvsp[-1].string)); }
#line 1845 "y.tab.c"
    break;

  case 34: /* IDDECL: ID  */
#line 196 "exprnTree.y"
                                                { 
								(yyval.globalSymbolNode) = createGlobalSymbolNode((yyvsp[0].string),noType,1 );
							   }
#line 1853 "y.tab.c"
    break;

  case 35: /* IDDECL: ID '[' NUM ']'  */
#line 199 "exprnTree.y"
                                                {
								(yyval.globalSymbolNode) = createGlobalSymbolNode((yyvsp[-3].string),noType,(yyvsp[-1].number));
							   }
#line 1861 "y.tab.c"
    break;

  case 36: /* IDDECL: STAR ID  */
#line 202 "exprnTree.y"
                                        { (yyval.globalSymbolNode) = createGlobalSymbolNode((yyvsp[0].string),noType,1);}
#line 1867 "y.tab.c"
    break;

  case 37: /* FdefBlock: FdefBlock Fdef  */
#line 206 "exprnTree.y"
                                { (yyval.localSymbolNode) = (yyvsp[-1].localSymbolNode);}
#line 1873 "y.tab.c"
    break;

  case 38: /* FdefBlock: Fdef  */
#line 207 "exprnTree.y"
                                {(yyval.localSymbolNode) = (yyvsp[0].localSymbolNode);}
#line 1879 "y.tab.c"
    break;

  case 39: /* Fdef: FName '{' LdeclBlock BEG SLIST END '}'  */
#line 210 "exprnTree.y"
                                              {
                            printf("in func");
                            newl;
                            assignLocalBindingtoLST(lst);
                            printLocalSymbolTable(lst);
                            newl;newl;
                            inorder((yyvsp[-2].treeNode));
                            newl;
                           
                            fprintf(fp , "PUSH BP\n");
                            fprintf(fp , "MOV BP, SP\n");
                            codeGenForLocal((yyvsp[-4].localSymbolNode),fp);
                            codeGen((yyvsp[-2].treeNode),fp);
                            codeDelForLocal((yyvsp[-4].localSymbolNode),fp);
                            fprintf(fp, "MOV BP, [SP]\n");
                            fprintf(fp, "POP R0\n");
                            fprintf(fp, "RET\n");
                           
                            freeLST(lst->head);

                        }
#line 1905 "y.tab.c"
    break;

  case 40: /* Fdef: FName '{' BEG SLIST END '}'  */
#line 231 "exprnTree.y"
                                  {
                            printf("in func");
                            newl;
                            inorder((yyvsp[-2].treeNode));
                            newl;
                           
                            fprintf(fp , "PUSH BP\n");
                            fprintf(fp , "MOV BP, SP\n");
                            codeGen((yyvsp[-2].treeNode),fp);
                            fprintf(fp, "MOV BP, [SP]\n");
                            fprintf(fp, "POP R0\n");
                            fprintf(fp, "RET\n");
                           
                            freeLST(lst->head);

                        }
#line 1926 "y.tab.c"
    break;

  case 41: /* FName: Type ID '(' ParamList ')'  */
#line 249 "exprnTree.y"
                                  { 
                                     if( checkFuncDeclaration(gst,(yyvsp[-3].string),(yyvsp[-1].paramNode)) ) yyerror("function declaration not found");
                                     lst = (struct localSymbolTable* ) malloc(sizeof(struct localSymbolTable));
                                     lst->head = NULL;
                                     addParamToLST(lst,(yyvsp[-1].paramNode));
                                     assignBindingToParam(lst);
                                     newl;newl;
                                     printf("in func name");newl;
                                     assignTypeNodetoLST(lst,tt);
                                     printLocalSymbolTable(lst);
                                     pdebug;

                                     fprintf(fp, "F%d:\n",getFuncLabel(gst,(yyvsp[-3].treeNode)));
                                     (yyval.string) = (yyvsp[-3].string);
       
                                  }
#line 1947 "y.tab.c"
    break;

  case 42: /* FName: Type ID '(' ')'  */
#line 265 "exprnTree.y"
                      {  if( checkFuncDeclaration(gst,(yyvsp[-2].string),NULL) ) yyerror("function declaration not found");
                         lst = (struct localSymbolTable* ) malloc(sizeof(struct localSymbolTable));
                         lst->head = NULL;
                         newl;newl;
                         printf("in func name");newl;
                         fprintf(fp, "F%d:\n",getFuncLabel(gst,(yyvsp[-2].treeNode)));
                         (yyval.string) = (yyvsp[-2].string);
                        }
#line 1960 "y.tab.c"
    break;

  case 43: /* FName: ID ID '(' ParamList ')'  */
#line 273 "exprnTree.y"
                              { 
                                     if( checkFuncDeclaration(gst,(yyvsp[-3].string),(yyvsp[-1].paramNode)) ) yyerror("function declaration not found");
                                     lst = (struct localSymbolTable* ) malloc(sizeof(struct localSymbolTable));
                                     lst->head = NULL;
                                     addParamToLST(lst,(yyvsp[-1].paramNode));
                                     assignBindingToParam(lst);
                                     newl;newl;
                                     printf("in func name");newl;
                                     assignTypeNodetoLST(lst,tt);
                                     printLocalSymbolTable(lst);

                                     fprintf(fp, "F%d:\n",getFuncLabel(gst,(yyvsp[-3].treeNode)));
                                     (yyval.string) = (yyvsp[-3].string);
       
                                  }
#line 1980 "y.tab.c"
    break;

  case 44: /* MainBlock: MainHeader '{' LdeclBlock BEG SLIST END '}'  */
#line 290 "exprnTree.y"
                                                        {
                            printf("in main");
                            newl;
                            assignLocalBindingtoLST(lst);
                            printLocalSymbolTable(lst);
                            newl;newl;
                            inorder((yyvsp[-2].treeNode));
                            newl;
                          
                            fprintf(fp, "MAIN:\n");
                            fprintf(fp , "PUSH BP\n");
                            fprintf(fp , "MOV BP, SP\n");

                            codeGenForLocal((yyvsp[-4].localSymbolNode),fp);
                            codeGen((yyvsp[-2].treeNode),fp);
                            codeDelForLocal((yyvsp[-4].localSymbolNode),fp);

                            fprintf(fp, "MOV BP, [SP]\n");
                            fprintf(fp, "POP R0\n");
                            fprintf(fp, "RET\n");
                            freeLST(lst->head);
                            freeGST(gst->head);
                            
                        }
#line 2009 "y.tab.c"
    break;

  case 45: /* MainBlock: MainHeader '{' BEG SLIST END '}'  */
#line 314 "exprnTree.y"
                                               {
                            printf("in main");
                            newl;
                            inorder((yyvsp[-2].treeNode));
                            newl;newl;

                            fprintf(fp, "MAIN:\n");
                            fprintf(fp , "PUSH BP\n");
                            fprintf(fp , "MOV BP, SP\n");

                            codeGen((yyvsp[-2].treeNode),fp);

                            fprintf(fp, "MOV BP, [SP]\n");
                            fprintf(fp, "POP R0\n");
                            fprintf(fp, "RET\n");
                            freeLST(lst->head);
                            freeGST(gst->head);

                        }
#line 2033 "y.tab.c"
    break;

  case 46: /* MainHeader: INT MAIN '(' ')'  */
#line 336 "exprnTree.y"
                             {
                            newl;printf("in main header");newl;
                            lst = (struct localSymbolTable* ) malloc(sizeof(struct localSymbolTable));
                            lst->head = NULL;
                           
                        }
#line 2044 "y.tab.c"
    break;

  case 47: /* LdeclBlock: DECL LdeclList ENDDECL  */
#line 345 "exprnTree.y"
                                        {joinLocalSymbolTableNode(lst,(yyvsp[-1].localSymbolNode));(yyval.localSymbolNode) = (yyvsp[-1].localSymbolNode);}
#line 2050 "y.tab.c"
    break;

  case 48: /* LdeclBlock: DECL ENDDECL  */
#line 346 "exprnTree.y"
                                        {(yyval.localSymbolNode) = NULL;}
#line 2056 "y.tab.c"
    break;

  case 49: /* LdeclBlock: %empty  */
#line 347 "exprnTree.y"
                                        {(yyval.localSymbolNode) = NULL;}
#line 2062 "y.tab.c"
    break;

  case 50: /* LdeclList: LdeclList Ldecl  */
#line 350 "exprnTree.y"
                                        { joinLocalSymbolNode((yyvsp[-1].localSymbolNode),(yyvsp[0].localSymbolNode)); (yyval.localSymbolNode) = (yyvsp[-1].localSymbolNode); }
#line 2068 "y.tab.c"
    break;

  case 51: /* LdeclList: Ldecl  */
#line 351 "exprnTree.y"
                                                {(yyval.localSymbolNode) = (yyvsp[0].localSymbolNode);}
#line 2074 "y.tab.c"
    break;

  case 52: /* Ldecl: Type LidList SEMICOLON  */
#line 354 "exprnTree.y"
                                        {
                                        struct localSymbolNode* temp = (yyvsp[-1].localSymbolNode);
                                        while(temp!=NULL){
                                            temp->type = (yyvsp[-2].number);
                                            temp = temp->next;
                                        }
                                        (yyval.localSymbolNode) = (yyvsp[-1].localSymbolNode);
                                    }
#line 2087 "y.tab.c"
    break;

  case 53: /* Ldecl: ID LidList SEMICOLON  */
#line 362 "exprnTree.y"
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
                                }
                                else{
                                    yyerror("type not defined from lst");
                                }
                                (yyval.localSymbolNode) = (yyvsp[-1].localSymbolNode);
                                }
#line 2110 "y.tab.c"
    break;

  case 54: /* LidList: LidList ',' Lid  */
#line 382 "exprnTree.y"
                                        { joinLocalSymbolNode((yyvsp[-2].localSymbolNode),(yyvsp[0].localSymbolNode)); (yyval.localSymbolNode) = (yyvsp[-2].localSymbolNode); }
#line 2116 "y.tab.c"
    break;

  case 55: /* LidList: Lid  */
#line 383 "exprnTree.y"
                                        {(yyval.localSymbolNode) = (yyvsp[0].localSymbolNode);}
#line 2122 "y.tab.c"
    break;

  case 56: /* Lid: ID  */
#line 386 "exprnTree.y"
                                                        {(yyval.localSymbolNode) = createLocalSymbolNode((yyvsp[0].string),noType,1, NULL);}
#line 2128 "y.tab.c"
    break;

  case 57: /* Lid: ID '[' NUM ']'  */
#line 387 "exprnTree.y"
                                        {(yyval.localSymbolNode) = createLocalSymbolNode((yyvsp[-3].string),noType,(yyvsp[-1].number), NULL);}
#line 2134 "y.tab.c"
    break;

  case 58: /* Lid: STAR ID  */
#line 388 "exprnTree.y"
                                                {(yyval.localSymbolNode) = createLocalSymbolNode((yyvsp[0].string),intType,1, NULL);}
#line 2140 "y.tab.c"
    break;

  case 59: /* SLIST: SLIST STMT  */
#line 393 "exprnTree.y"
                        {(yyval.treeNode) = createTree(noVal, noType, NULL, connectorNode,(yyvsp[-1].treeNode),(yyvsp[0].treeNode) , NULL);}
#line 2146 "y.tab.c"
    break;

  case 60: /* SLIST: STMT  */
#line 394 "exprnTree.y"
                                {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 2152 "y.tab.c"
    break;

  case 61: /* STMT: INPUTSTMT  */
#line 397 "exprnTree.y"
                        {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 2158 "y.tab.c"
    break;

  case 62: /* STMT: OUTPUTSTMT  */
#line 398 "exprnTree.y"
                        {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 2164 "y.tab.c"
    break;

  case 63: /* STMT: ASSIGNSTMT  */
#line 399 "exprnTree.y"
                        {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 2170 "y.tab.c"
    break;

  case 64: /* STMT: IFSTMT  */
#line 400 "exprnTree.y"
                    {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 2176 "y.tab.c"
    break;

  case 65: /* STMT: WHILESTMT  */
#line 401 "exprnTree.y"
                    {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 2182 "y.tab.c"
    break;

  case 66: /* STMT: DOWHILESTMT  */
#line 402 "exprnTree.y"
                    {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 2188 "y.tab.c"
    break;

  case 67: /* STMT: REPEATUNTILSTMT  */
#line 403 "exprnTree.y"
                        {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 2194 "y.tab.c"
    break;

  case 68: /* STMT: INITIALIZESTMT  */
#line 404 "exprnTree.y"
                       {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 2200 "y.tab.c"
    break;

  case 69: /* STMT: ALLOCSTMT  */
#line 405 "exprnTree.y"
                  {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 2206 "y.tab.c"
    break;

  case 70: /* STMT: FREESTMT  */
#line 406 "exprnTree.y"
                 {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 2212 "y.tab.c"
    break;

  case 71: /* STMT: BREAK SEMICOLON  */
#line 407 "exprnTree.y"
                         {(yyval.treeNode) = createTree(noVal, noType, NULL, breakNode , NULL,NULL, NULL);}
#line 2218 "y.tab.c"
    break;

  case 72: /* STMT: CONTINUE SEMICOLON  */
#line 408 "exprnTree.y"
                            {(yyval.treeNode) = createTree(noVal, noType, NULL, continueNode , NULL,NULL, NULL);}
#line 2224 "y.tab.c"
    break;

  case 73: /* STMT: ID '(' ')' SEMICOLON  */
#line 409 "exprnTree.y"
                            { (yyval.treeNode) = createTree(noVal, noType,  (yyvsp[-3].string), funcNode , NULL, NULL , NULL); 
                                if(checkArgList(NULL,(yyvsp[-3].string),gst)) yyerror("argument list not matched");}
#line 2231 "y.tab.c"
    break;

  case 74: /* STMT: ID '(' ArgList ')' SEMICOLON  */
#line 411 "exprnTree.y"
                                    { (yyval.treeNode) = createTree(noVal, noType,  (yyvsp[-4].string), funcNode , NULL,NULL , (yyvsp[-2].argNode)); 
                                     if(checkArgList((yyvsp[-2].argNode),(yyvsp[-4].string),gst)) yyerror("argument list not matched");}
#line 2238 "y.tab.c"
    break;

  case 75: /* STMT: RETURN expr SEMICOLON  */
#line 414 "exprnTree.y"
                                {(yyval.treeNode) = createTree(noVal, noType, NULL, returnNode , (yyvsp[-1].treeNode),NULL, NULL);}
#line 2244 "y.tab.c"
    break;

  case 76: /* INPUTSTMT: READ '(' IDENTIFIER ')' SEMICOLON  */
#line 419 "exprnTree.y"
                                                        {(yyval.treeNode) = createTree(noVal, noType, NULL, readNode, (yyvsp[-2].treeNode),NULL, NULL);}
#line 2250 "y.tab.c"
    break;

  case 77: /* OUTPUTSTMT: WRITE '(' expr ')' SEMICOLON  */
#line 422 "exprnTree.y"
                                                {(yyval.treeNode) = createTree(noVal, noType, NULL, writeNode, (yyvsp[-2].treeNode),NULL, NULL);}
#line 2256 "y.tab.c"
    break;

  case 78: /* ASSIGNSTMT: IDENTIFIER ASSIGN expr SEMICOLON  */
#line 425 "exprnTree.y"
                                                { (yyval.treeNode) = createTree(noVal, noType, NULL, assignNode, (yyvsp[-3].treeNode),(yyvsp[-1].treeNode), NULL);}
#line 2262 "y.tab.c"
    break;

  case 79: /* ASSIGNSTMT: IDENTIFIER ASSIGN AMP IDENTIFIER SEMICOLON  */
#line 426 "exprnTree.y"
                                                                {  struct treeNode *temp = createTree(noVal, intType, NULL, addressNode, (yyvsp[-1].treeNode),NULL, NULL);
                                                                (yyval.treeNode) = createTree(noVal, noType, NULL, assignNode, (yyvsp[-4].treeNode),temp, NULL);
                                                            }
#line 2270 "y.tab.c"
    break;

  case 80: /* IFSTMT: IF '(' expr ')' THEN SLIST ELSE SLIST ENDIF SEMICOLON  */
#line 432 "exprnTree.y"
                                                                   { struct treeNode *temp = createTree(noVal, noType, NULL, elseNode, (yyvsp[-4].treeNode),(yyvsp[-2].treeNode), NULL); 
                                                                     (yyval.treeNode) = createTree(noVal, noType, NULL, ifNode, (yyvsp[-7].treeNode),temp, NULL);}
#line 2277 "y.tab.c"
    break;

  case 81: /* IFSTMT: IF '(' expr ')' THEN SLIST ENDIF SEMICOLON  */
#line 434 "exprnTree.y"
                                                        { (yyval.treeNode) = createTree(noVal, noType, NULL, ifNode , (yyvsp[-5].treeNode),(yyvsp[-2].treeNode), NULL);}
#line 2283 "y.tab.c"
    break;

  case 82: /* WHILESTMT: WHILE '(' expr ')' DO SLIST ENDWHILE SEMICOLON  */
#line 437 "exprnTree.y"
                                                            { (yyval.treeNode) = createTree(noVal, noType, NULL, whileNode, (yyvsp[-5].treeNode),(yyvsp[-2].treeNode), NULL);}
#line 2289 "y.tab.c"
    break;

  case 83: /* DOWHILESTMT: DO SLIST WHILE '(' expr ')' SEMICOLON  */
#line 439 "exprnTree.y"
                                                     { (yyval.treeNode) = createTree(noVal, noType, NULL, doWhileNode, (yyvsp[-2].treeNode),(yyvsp[-5].treeNode), NULL);}
#line 2295 "y.tab.c"
    break;

  case 84: /* REPEATUNTILSTMT: REPEAT SLIST UNTIL '(' expr ')' SEMICOLON  */
#line 441 "exprnTree.y"
                                                             { (yyval.treeNode) = createTree(noVal, noType, NULL, repeatUntilNode,(yyvsp[-2].treeNode),(yyvsp[-5].treeNode), NULL);}
#line 2301 "y.tab.c"
    break;

  case 85: /* INITIALIZESTMT: IDENTIFIER ASSIGN INITIALIZE '(' ')' SEMICOLON  */
#line 443 "exprnTree.y"
                                                                 { struct treeNode* temp = createTree(noVal, intType, NULL, initializeNode, NULL,NULL, NULL); (yyval.treeNode) = createTree(noVal, noType, NULL, assignNode, (yyvsp[-5].treeNode),temp, NULL);}
#line 2307 "y.tab.c"
    break;

  case 86: /* ALLOCSTMT: IDENTIFIER ASSIGN ALLOC '(' ')' SEMICOLON  */
#line 445 "exprnTree.y"
                                                       { struct treeNode* temp = createTree(noVal, intType, NULL, allocNode, NULL,NULL, NULL); (yyval.treeNode) = createTree(noVal, noType, NULL, assignNode, (yyvsp[-5].treeNode),temp, NULL);}
#line 2313 "y.tab.c"
    break;

  case 87: /* FREESTMT: IDENTIFIER ASSIGN FREE '(' IDENTIFIER ')' SEMICOLON  */
#line 447 "exprnTree.y"
                                                               { (yyval.treeNode) = createTree(noVal, intType, NULL, freeNode, (yyvsp[-2].treeNode),NULL, NULL);}
#line 2319 "y.tab.c"
    break;

  case 88: /* expr: expr PLUS expr  */
#line 450 "exprnTree.y"
                                {(yyval.treeNode) = createTree(noVal, intType, NULL, plusNode, (yyvsp[-2].treeNode),(yyvsp[0].treeNode), NULL);}
#line 2325 "y.tab.c"
    break;

  case 89: /* expr: expr MINUS expr  */
#line 451 "exprnTree.y"
                                {(yyval.treeNode) = createTree(noVal, intType, NULL, minusNode,(yyvsp[-2].treeNode),(yyvsp[0].treeNode), NULL);}
#line 2331 "y.tab.c"
    break;

  case 90: /* expr: expr STAR expr  */
#line 452 "exprnTree.y"
                                {(yyval.treeNode) = createTree(noVal, intType, NULL, mulNode,(yyvsp[-2].treeNode),(yyvsp[0].treeNode), NULL);}
#line 2337 "y.tab.c"
    break;

  case 91: /* expr: expr DIV expr  */
#line 453 "exprnTree.y"
                                {(yyval.treeNode) = createTree(noVal, intType, NULL, divNode,(yyvsp[-2].treeNode),(yyvsp[0].treeNode), NULL);}
#line 2343 "y.tab.c"
    break;

  case 92: /* expr: expr MOD expr  */
#line 454 "exprnTree.y"
                        {(yyval.treeNode) = createTree(noVal, intType, NULL, modNode,(yyvsp[-2].treeNode),(yyvsp[0].treeNode), NULL);}
#line 2349 "y.tab.c"
    break;

  case 93: /* expr: expr GT expr  */
#line 455 "exprnTree.y"
                            {(yyval.treeNode) = createTree(noVal, boolType, NULL, gtNode,(yyvsp[-2].treeNode),(yyvsp[0].treeNode), NULL);}
#line 2355 "y.tab.c"
    break;

  case 94: /* expr: expr GE expr  */
#line 456 "exprnTree.y"
                            {(yyval.treeNode) = createTree(noVal, boolType, NULL, geNode,(yyvsp[-2].treeNode),(yyvsp[0].treeNode), NULL);}
#line 2361 "y.tab.c"
    break;

  case 95: /* expr: expr LT expr  */
#line 457 "exprnTree.y"
                            {(yyval.treeNode) = createTree(noVal, boolType, NULL, ltNode,(yyvsp[-2].treeNode),(yyvsp[0].treeNode), NULL);}
#line 2367 "y.tab.c"
    break;

  case 96: /* expr: expr LE expr  */
#line 458 "exprnTree.y"
                            {(yyval.treeNode) = createTree(noVal, boolType, NULL, leNode,(yyvsp[-2].treeNode),(yyvsp[0].treeNode), NULL);}
#line 2373 "y.tab.c"
    break;

  case 97: /* expr: expr EQ expr  */
#line 459 "exprnTree.y"
                            {(yyval.treeNode) = createTree(noVal, boolType, NULL, eqNode,(yyvsp[-2].treeNode),(yyvsp[0].treeNode), NULL);}
#line 2379 "y.tab.c"
    break;

  case 98: /* expr: expr NE expr  */
#line 460 "exprnTree.y"
                            {(yyval.treeNode) = createTree(noVal, boolType, NULL, neNode,(yyvsp[-2].treeNode),(yyvsp[0].treeNode), NULL);}
#line 2385 "y.tab.c"
    break;

  case 99: /* expr: expr AND expr  */
#line 461 "exprnTree.y"
                        {(yyval.treeNode) = createTree(noVal, boolType, NULL, andNode,(yyvsp[-2].treeNode),(yyvsp[0].treeNode), NULL);}
#line 2391 "y.tab.c"
    break;

  case 100: /* expr: expr OR expr  */
#line 462 "exprnTree.y"
                            {(yyval.treeNode) = createTree(noVal, boolType, NULL, orNode,(yyvsp[-2].treeNode),(yyvsp[0].treeNode), NULL);}
#line 2397 "y.tab.c"
    break;

  case 101: /* expr: '(' expr ')'  */
#line 463 "exprnTree.y"
                                {(yyval.treeNode) = (yyvsp[-1].treeNode);}
#line 2403 "y.tab.c"
    break;

  case 102: /* expr: NUM  */
#line 464 "exprnTree.y"
                                    {(yyval.treeNode) = createTree((yyvsp[0].number), intType, NULL, numNode, NULL,NULL, NULL);}
#line 2409 "y.tab.c"
    break;

  case 103: /* expr: STR  */
#line 465 "exprnTree.y"
                        {(yyval.treeNode) = createTree(noVal, strType, (yyvsp[0].string), strNode, NULL,NULL, NULL);}
#line 2415 "y.tab.c"
    break;

  case 104: /* expr: ID '(' ')'  */
#line 466 "exprnTree.y"
                        {  struct treeNode* temp = createTree(noVal, noType, (yyvsp[-2].string), funcNode , NULL,NULL, NULL);
                            findType(gst,lst,temp);
                            temp->val = getFuncLabel(gst,(yyvsp[-2].string));
                            if(checkArgList(NULL,(yyvsp[-2].string),gst)) yyerror("argument list not matched");
                            (yyval.treeNode) = temp;}
#line 2425 "y.tab.c"
    break;

  case 105: /* expr: ID '(' ArgList ')'  */
#line 471 "exprnTree.y"
                            {  struct treeNode* temp = createTree(noVal, noType, (yyvsp[-3].string), funcNode , NULL ,NULL ,(yyvsp[-1].argNode));
                          
                            findType(gst,lst,temp);
                             printf("%d ", temp->nodetype);
                            temp->val = getFuncLabel(gst,(yyvsp[-3].string));
                            if(checkArgList((yyvsp[-1].argNode),(yyvsp[-3].string),gst)) yyerror("argument list not matched");
                            (yyval.treeNode) = temp;
                            }
#line 2438 "y.tab.c"
    break;

  case 106: /* expr: NULLTYPE  */
#line 479 "exprnTree.y"
                  { (yyval.treeNode) = createTree(noVal, nullType, NULL, nullNode, NULL,NULL, NULL);}
#line 2444 "y.tab.c"
    break;

  case 107: /* expr: IDENTIFIER  */
#line 480 "exprnTree.y"
                                {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 2450 "y.tab.c"
    break;

  case 108: /* ArgList: ArgList ',' expr  */
#line 483 "exprnTree.y"
                                {   struct argNode* temp = createArgNode((yyvsp[0].treeNode)); joinArgNode((yyvsp[-2].argNode),temp); (yyval.argNode) = (yyvsp[-2].argNode);  }
#line 2456 "y.tab.c"
    break;

  case 109: /* ArgList: expr  */
#line 485 "exprnTree.y"
                                {     struct argNode* temp  = createArgNode((yyvsp[0].treeNode)); (yyval.argNode) = temp; }
#line 2462 "y.tab.c"
    break;

  case 110: /* IDENTIFIER: ID  */
#line 488 "exprnTree.y"
                                    { struct treeNode* temp = createTree(noVal, noType, (yyvsp[0].string), idNode , NULL,NULL, NULL);
                                    findType(gst,lst,temp);
                                    (yyval.treeNode) = temp;}
#line 2470 "y.tab.c"
    break;

  case 111: /* IDENTIFIER: ID '[' expr ']'  */
#line 492 "exprnTree.y"
                                    {  
                                    struct treeNode* temp = createTree(noVal, noType, (yyvsp[-3].string), idNode, (yyvsp[-1].treeNode),NULL, NULL);
                                    findType(gst,lst,temp);
                                    if ( temp->localSymbolTableEntry != NULL && temp->localSymbolTableEntry->size <= evaluate((yyvsp[-1].treeNode))) yyerror("Array index out of bounds");
                                    if ( temp->localSymbolTableEntry == NULL && temp->globalSymbolTableEntry->size <= evaluate((yyvsp[-1].treeNode))) yyerror("Array index out of bounds");
                                    (yyval.treeNode) = temp;}
#line 2481 "y.tab.c"
    break;

  case 112: /* IDENTIFIER: STAR ID  */
#line 499 "exprnTree.y"
                                     { 
                                        struct treeNode* id = createTree(noVal, noType, (yyvsp[0].string), idNode, NULL,NULL,NULL);
                                        findType(gst,lst,id);
                                        struct treeNode* pointer = createTree(noVal, id->type, NULL, pointerNode, id,NULL,NULL);
                                        (yyval.treeNode) = pointer;
                                     }
#line 2492 "y.tab.c"
    break;

  case 113: /* IDENTIFIER: Field  */
#line 505 "exprnTree.y"
                             {  findTypeofTypeNode(tt,gst,lst,(yyvsp[0].treeNode));assignlocalSymbolTableEntry(gst,lst,(yyvsp[0].treeNode));(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 2498 "y.tab.c"
    break;

  case 114: /* Field: Field '.' ID  */
#line 508 "exprnTree.y"
                              {  struct treeNode* temp = createTree(noVal, noType, (yyvsp[0].string), tipeNode , NULL,NULL, NULL);
                                 struct treeNode* temp1 = (yyvsp[-2].treeNode);
                                 while (temp1->left != NULL) temp1 = temp1->left;
                                 temp1->left = temp;
                                (yyval.treeNode) = (yyvsp[-2].treeNode);
                              }
#line 2509 "y.tab.c"
    break;

  case 115: /* Field: ID '.' ID  */
#line 515 "exprnTree.y"
                              { struct treeNode* temp = createTree(noVal, noType, (yyvsp[0].string), tipeNode , NULL,NULL, NULL);
                                (yyval.treeNode) = createTree(noVal, noType, (yyvsp[-2].string), tipeNode , temp,NULL, NULL);
                            }
#line 2517 "y.tab.c"
    break;


#line 2521 "y.tab.c"

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

#line 521 "exprnTree.y"


int yyerror(char*s)
{
    printf("yyerror : %s\n",s);
    fclose(ip);
    exit(1);
}


int main(int argc, char* argv[]) {

  if(argc > 1) { 
  ip = fopen(argv[1], "r");
  if(ip) yyin = ip;
  }
  tt = (struct typeTable*) malloc(sizeof(struct typeTable));
  tt->head = NULL;
  yyparse();
  return 0;
}

                  
