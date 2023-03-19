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
 #include "exprnTree.h"
 #include "symbolTable.h"
 #include "reg.h"
 #include "exprnTree.c"
 #include "symbolTable.c"

 #define newl printf("\n");
 #define debug printf("\ndebug\n");
 
 int yylex(void);
 extern FILE* yyin;
 FILE* ip;
 FILE* fp;

 struct globalSymbolTable* gst;
 struct localSymbolTable* lst;
 struct localSymbolTable* mlst;


 int flabel = 0;

#line 97 "y.tab.c"

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


#line 245 "y.tab.c"

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
  YYSYMBOL_UNTIL = 33,                     /* UNTIL  */
  YYSYMBOL_GT = 34,                        /* GT  */
  YYSYMBOL_GE = 35,                        /* GE  */
  YYSYMBOL_LT = 36,                        /* LT  */
  YYSYMBOL_LE = 37,                        /* LE  */
  YYSYMBOL_EQ = 38,                        /* EQ  */
  YYSYMBOL_NE = 39,                        /* NE  */
  YYSYMBOL_AND = 40,                       /* AND  */
  YYSYMBOL_OR = 41,                        /* OR  */
  YYSYMBOL_ADDR = 42,                      /* ADDR  */
  YYSYMBOL_43_ = 43,                       /* ','  */
  YYSYMBOL_44_ = 44,                       /* '('  */
  YYSYMBOL_45_ = 45,                       /* ')'  */
  YYSYMBOL_46_ = 46,                       /* '['  */
  YYSYMBOL_47_ = 47,                       /* ']'  */
  YYSYMBOL_48_ = 48,                       /* '{'  */
  YYSYMBOL_49_ = 49,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 50,                  /* $accept  */
  YYSYMBOL_program = 51,                   /* program  */
  YYSYMBOL_GdeclBlock = 52,                /* GdeclBlock  */
  YYSYMBOL_GdeclList = 53,                 /* GdeclList  */
  YYSYMBOL_Gdecl = 54,                     /* Gdecl  */
  YYSYMBOL_TYPE = 55,                      /* TYPE  */
  YYSYMBOL_GidList = 56,                   /* GidList  */
  YYSYMBOL_Gid = 57,                       /* Gid  */
  YYSYMBOL_ParamList = 58,                 /* ParamList  */
  YYSYMBOL_Param = 59,                     /* Param  */
  YYSYMBOL_IDDECL = 60,                    /* IDDECL  */
  YYSYMBOL_FdefBlock = 61,                 /* FdefBlock  */
  YYSYMBOL_Fdef = 62,                      /* Fdef  */
  YYSYMBOL_FName = 63,                     /* FName  */
  YYSYMBOL_MainBlock = 64,                 /* MainBlock  */
  YYSYMBOL_MainHeader = 65,                /* MainHeader  */
  YYSYMBOL_LdeclBlock = 66,                /* LdeclBlock  */
  YYSYMBOL_LdeclList = 67,                 /* LdeclList  */
  YYSYMBOL_Ldecl = 68,                     /* Ldecl  */
  YYSYMBOL_LidList = 69,                   /* LidList  */
  YYSYMBOL_Lid = 70,                       /* Lid  */
  YYSYMBOL_SLIST = 71,                     /* SLIST  */
  YYSYMBOL_STMT = 72,                      /* STMT  */
  YYSYMBOL_INPUTSTMT = 73,                 /* INPUTSTMT  */
  YYSYMBOL_OUTPUTSTMT = 74,                /* OUTPUTSTMT  */
  YYSYMBOL_ASSIGNSTMT = 75,                /* ASSIGNSTMT  */
  YYSYMBOL_IFSTMT = 76,                    /* IFSTMT  */
  YYSYMBOL_WHILESTMT = 77,                 /* WHILESTMT  */
  YYSYMBOL_DOWHILESTMT = 78,               /* DOWHILESTMT  */
  YYSYMBOL_REPEATUNTILSTMT = 79,           /* REPEATUNTILSTMT  */
  YYSYMBOL_expr = 80,                      /* expr  */
  YYSYMBOL_ArgList = 81,                   /* ArgList  */
  YYSYMBOL_IDENTIFIER = 82                 /* IDENTIFIER  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  18
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   618

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  90
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  211

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   297


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
      44,    45,     2,     2,    43,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    46,     2,    47,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    54,    54,    60,    65,    71,    77,    98,   106,   107,
     110,   120,   121,   124,   125,   128,   129,   134,   135,   136,
     139,   142,   145,   148,   152,   153,   156,   178,   197,   209,
     218,   241,   262,   273,   274,   275,   278,   279,   282,   292,
     293,   296,   297,   298,   303,   304,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   318,   321,   327,   330,
     333,   334,   340,   342,   345,   347,   349,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   373,   379,   382,   384,   387,   391,
     398
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
  "ENDWHILE", "REPEAT", "UNTIL", "GT", "GE", "LT", "LE", "EQ", "NE", "AND",
  "OR", "ADDR", "','", "'('", "')'", "'['", "']'", "'{'", "'}'", "$accept",
  "program", "GdeclBlock", "GdeclList", "Gdecl", "TYPE", "GidList", "Gid",
  "ParamList", "Param", "IDDECL", "FdefBlock", "Fdef", "FName",
  "MainBlock", "MainHeader", "LdeclBlock", "LdeclList", "Ldecl", "LidList",
  "Lid", "SLIST", "STMT", "INPUTSTMT", "OUTPUTSTMT", "ASSIGNSTMT",
  "IFSTMT", "WHILESTMT", "DOWHILESTMT", "REPEATUNTILSTMT", "expr",
  "ArgList", "IDENTIFIER", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-55)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      59,    74,    -2,   -55,    35,    62,    50,    62,   -55,   -10,
     -55,    28,   -55,   -55,    78,   -55,     6,    23,   -55,    62,
     -55,    42,   -55,   -55,    44,    55,   -55,   -55,    24,    87,
     -11,   -55,   -55,    79,   -55,    40,   566,    90,   139,   566,
     143,   157,   153,   -55,   -55,     6,   -55,   -55,   160,    58,
     -55,    43,   177,   137,   140,   174,   175,     7,   148,   149,
     566,   566,   443,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   184,   -55,    41,    93,   -55,   566,   464,   566,   104,
     163,   -55,   -55,   157,   -55,    27,     7,   -55,    66,     7,
     -55,   -55,   107,   -55,   -55,     7,   298,   -55,     7,     7,
     586,   398,   146,   -55,    14,   150,   208,    -4,   -55,   -55,
     -55,   485,   173,   506,   -55,   -55,   -55,   196,   322,   121,
      99,   178,   189,   168,   138,   180,     7,     7,     7,     7,
       7,   -55,     7,     7,     7,     7,     7,     7,     7,     7,
     192,   233,   179,   191,   -55,    66,   310,   232,   -55,   -55,
      41,   194,   -55,   195,   -55,     7,   229,   -55,   230,   231,
     -55,   124,   -55,   109,   109,   -55,   -55,   -55,   359,   359,
     359,   359,   359,   359,   359,   359,   221,   219,     7,     7,
     239,   -55,   209,   -55,   -55,   -55,   322,   -55,   -55,   -55,
     -55,   566,   566,   245,   257,   -55,   -55,   419,   526,   -15,
     241,   566,   242,   243,   -55,   -55,   546,   -55,   -55,   244,
     -55
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,    11,    12,     0,     0,     0,     0,    25,     0,
       5,     0,     7,    11,     0,     9,     0,     0,     1,     0,
       3,     0,    24,     4,     0,     0,     6,     8,    21,     0,
       0,    14,    15,     0,     2,    19,     0,     0,     0,     0,
       0,    19,     0,    23,    10,     0,    32,    29,     0,     0,
      18,    88,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    45,    46,    47,    48,    49,    50,    51,
      52,     0,    34,     0,     0,    37,     0,     0,     0,     0,
       0,    13,    20,     0,    28,     0,     0,    90,     0,     0,
      53,    54,    88,    81,    82,     0,     0,    85,     0,     0,
       0,     0,     0,    44,     0,    41,     0,     0,    40,    33,
      36,     0,     0,     0,    16,    22,    17,     0,    87,     0,
       0,    88,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    57,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,     0,     0,     0,    43,    38,
       0,     0,    31,     0,    55,     0,     0,    89,     0,     0,
      83,     0,    80,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,     0,     0,     0,     0,
       0,    60,     0,    39,    26,    30,    86,    56,    58,    59,
      84,     0,     0,     0,     0,    61,    42,     0,     0,     0,
       0,     0,     0,     0,    65,    66,     0,    63,    64,     0,
      62
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -55,   -55,   -55,   -55,   247,    19,   -55,   254,   234,   193,
     -55,   272,     0,   -55,    -3,   -55,   262,   -55,   214,   -55,
     151,   -33,   -54,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
      -7,   165,   -36
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     4,     5,    14,    15,     6,    30,    31,    49,    50,
      32,     7,     8,     9,    10,    11,    38,    74,    75,   107,
     108,    62,    63,    64,    65,    66,    67,    68,    69,    70,
     118,   119,    97
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      71,   204,    20,    71,    23,    44,    77,    22,   103,    28,
      92,    93,   149,    29,    52,   192,    34,    92,    93,    22,
      16,    52,    17,   103,    71,    71,    71,   100,   101,    94,
      92,    93,    45,    16,    52,    18,    94,   145,    24,   150,
      71,    71,    71,   111,   105,   113,   103,   103,   106,    94,
      96,    95,   122,    21,    48,    36,    73,   103,    95,   103,
      48,    13,     3,    37,    71,    71,    39,    33,    41,   121,
      42,    95,   117,    52,    37,    71,    25,    71,     1,   120,
       2,     3,   123,     2,     3,    47,    35,    85,   125,    86,
      43,   140,   141,    73,    12,    13,     3,   146,    26,    13,
       3,    83,    48,    84,   126,   127,   128,   129,   130,   180,
      72,    13,     3,   109,    13,     3,   128,   129,   130,   163,
     164,   165,   166,   167,    46,   168,   169,   170,   171,   172,
     173,   174,   175,   132,   133,   134,   135,   136,   137,   138,
     139,    92,    93,   103,   103,    52,   157,    83,   186,   114,
      76,   124,   103,    86,    78,    71,    71,    80,   197,   198,
      94,    71,    71,    82,   155,    71,   156,   155,   206,   190,
      71,   193,   194,   126,   127,   128,   129,   130,    13,     3,
      87,    88,    95,   160,    89,   126,   127,   128,   129,   130,
      90,    91,    98,    99,   104,   144,   147,   126,   127,   128,
     129,   130,   132,   133,   134,   135,   136,   137,   138,   139,
     115,   148,   154,   159,   132,   133,   134,   135,   136,   137,
     138,   139,   152,   178,    86,   162,   132,   133,   134,   135,
     136,   137,   138,   139,   158,   179,   182,   176,   126,   127,
     128,   129,   130,   184,   185,   187,   188,   189,   191,   192,
     126,   127,   128,   129,   130,   195,   196,   205,   207,   208,
     210,    27,   126,   127,   128,   129,   130,   132,   133,   134,
     135,   136,   137,   138,   139,    79,   116,    19,   177,   132,
     133,   134,   135,   136,   137,   138,   139,    40,   110,   161,
     199,   132,   133,   134,   135,   136,   137,   138,   139,    81,
       0,   183,   200,   126,   127,   128,   129,   130,     0,     0,
       0,     0,     0,     0,   131,   126,   127,   128,   129,   130,
       0,     0,     0,     0,     0,     0,   181,   126,   127,   128,
     129,   130,   132,   133,   134,   135,   136,   137,   138,   139,
       0,     0,     0,     0,   132,   133,   134,   135,   136,   137,
     138,   139,     0,     0,     0,     0,   132,   133,   134,   135,
     136,   137,   138,   139,   126,   127,   128,   129,   130,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,     0,     0,     0,    52,     0,     0,     0,     0,
       0,    53,    54,     0,     0,    55,    56,     0,     0,     0,
       0,     0,    51,    57,    58,     0,    52,    59,    60,     0,
      61,   143,    53,    54,   201,     0,    55,    56,     0,     0,
       0,     0,     0,     0,    57,    58,    51,   202,    59,    60,
      52,    61,     0,     0,     0,   102,    53,    54,     0,     0,
      55,    56,     0,     0,     0,     0,     0,    51,    57,    58,
       0,    52,    59,    60,     0,    61,   112,    53,    54,     0,
       0,    55,    56,     0,     0,     0,     0,     0,    51,    57,
      58,     0,    52,    59,    60,     0,    61,   151,    53,    54,
       0,     0,    55,    56,     0,     0,     0,     0,     0,    51,
      57,    58,     0,    52,    59,    60,     0,    61,   153,    53,
      54,     0,     0,    55,    56,     0,     0,     0,     0,    51,
       0,    57,    58,    52,     0,    59,    60,     0,    61,    53,
      54,     0,     0,    55,    56,     0,     0,     0,     0,    51,
       0,    57,    58,    52,     0,    59,    60,   203,    61,    53,
      54,     0,     0,    55,    56,     0,     0,     0,     0,    51,
       0,    57,    58,    52,   209,    59,    60,     0,    61,    53,
      54,     0,     0,    55,    56,     0,     0,     0,     0,    51,
       0,    57,    58,    52,     0,    59,    60,     0,    61,    53,
      54,     0,     0,    55,    56,     0,     0,     0,     0,     0,
       0,    57,    58,     0,     0,   142,    60,     0,    61
};

static const yytype_int16 yycheck[] =
{
      36,    16,     5,    39,     7,    16,    39,     7,    62,     3,
       3,     4,    16,     7,     7,    30,    19,     3,     4,    19,
       1,     7,    24,    77,    60,    61,    62,    60,    61,    22,
       3,     4,    43,    14,     7,     0,    22,    23,    48,    43,
      76,    77,    78,    76,     3,    78,   100,   101,     7,    22,
      57,    44,    88,     3,    35,    11,    37,   111,    44,   113,
      41,    21,    22,    19,   100,   101,    11,    44,    44,     3,
      46,    44,    45,     7,    19,   111,    48,   113,    19,    86,
      21,    22,    89,    21,    22,    45,    44,    44,    95,    46,
       3,    98,    99,    74,    20,    21,    22,   104,    20,    21,
      22,    43,    83,    45,     5,     6,     7,     8,     9,   145,
      20,    21,    22,    20,    21,    22,     7,     8,     9,   126,
     127,   128,   129,   130,    45,   132,   133,   134,   135,   136,
     137,   138,   139,    34,    35,    36,    37,    38,    39,    40,
      41,     3,     4,   197,   198,     7,    47,    43,   155,    45,
      11,    44,   206,    46,    11,   191,   192,     4,   191,   192,
      22,   197,   198,     3,    43,   201,    45,    43,   201,    45,
     206,   178,   179,     5,     6,     7,     8,     9,    21,    22,
       3,    44,    44,    45,    44,     5,     6,     7,     8,     9,
      16,    16,    44,    44,    10,    49,    46,     5,     6,     7,
       8,     9,    34,    35,    36,    37,    38,    39,    40,    41,
      47,     3,    16,    45,    34,    35,    36,    37,    38,    39,
      40,    41,    49,    44,    46,    45,    34,    35,    36,    37,
      38,    39,    40,    41,    45,    44,     4,    45,     5,     6,
       7,     8,     9,    49,    49,    16,    16,    16,    27,    30,
       5,     6,     7,     8,     9,    16,    47,    16,    16,    16,
      16,    14,     5,     6,     7,     8,     9,    34,    35,    36,
      37,    38,    39,    40,    41,    41,    83,     5,    45,    34,
      35,    36,    37,    38,    39,    40,    41,    25,    74,   124,
      45,    34,    35,    36,    37,    38,    39,    40,    41,    45,
      -1,   150,    45,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    16,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    16,     5,     6,     7,
       8,     9,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,    40,    41,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,    40,
      41,     3,    -1,    -1,    -1,     7,    -1,    -1,    -1,    -1,
      -1,    13,    14,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,     3,    25,    26,    -1,     7,    29,    30,    -1,
      32,    33,    13,    14,    15,    -1,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,     3,    28,    29,    30,
       7,    32,    -1,    -1,    -1,    12,    13,    14,    -1,    -1,
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
       0,    19,    21,    22,    51,    52,    55,    61,    62,    63,
      64,    65,    20,    21,    53,    54,    55,    24,     0,    61,
      64,     3,    62,    64,    48,    48,    20,    54,     3,     7,
      56,    57,    60,    44,    64,    44,    11,    19,    66,    11,
      66,    44,    46,     3,    16,    43,    45,    45,    55,    58,
      59,     3,     7,    13,    14,    17,    18,    25,    26,    29,
      30,    32,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    82,    20,    55,    67,    68,    11,    71,    11,    58,
       4,    57,     3,    43,    45,    44,    46,     3,    44,    44,
      16,    16,     3,     4,    22,    44,    80,    82,    44,    44,
      71,    71,    12,    72,    10,     3,     7,    69,    70,    20,
      68,    71,    12,    71,    45,    47,    59,    45,    80,    81,
      80,     3,    82,    80,    44,    80,     5,     6,     7,     8,
       9,    16,    34,    35,    36,    37,    38,    39,    40,    41,
      80,    80,    29,    33,    49,    23,    80,    46,     3,    16,
      43,    12,    49,    12,    16,    43,    45,    47,    45,    45,
      45,    81,    45,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    45,    45,    44,    44,
      82,    16,     4,    70,    49,    49,    80,    16,    16,    16,
      45,    27,    30,    80,    80,    16,    47,    71,    71,    45,
      45,    15,    28,    31,    16,    16,    71,    16,    16,    28,
      16
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    50,    51,    51,    51,    51,    52,    52,    53,    53,
      54,    55,    55,    56,    56,    57,    57,    58,    58,    58,
      59,    60,    60,    60,    61,    61,    62,    62,    63,    63,
      64,    64,    65,    66,    66,    66,    67,    67,    68,    69,
      69,    70,    70,    70,    71,    71,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    73,    74,
      75,    75,    76,    76,    77,    78,    79,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    81,    81,    82,    82,
      82
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     2,     2,     1,     3,     2,     2,     1,
       3,     1,     1,     3,     1,     1,     4,     3,     1,     0,
       2,     1,     4,     2,     2,     1,     7,     6,     5,     4,
       7,     6,     4,     3,     2,     0,     2,     1,     3,     3,
       1,     1,     4,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     4,     5,     3,     5,     5,
       4,     5,    10,     8,     8,     7,     7,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     1,     3,     4,     1,     3,     1,     1,     4,
       2
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
  case 2: /* program: GdeclBlock FdefBlock MainBlock  */
#line 55 "exprnTree.y"
                                {printf("gdecl and fdef and main\n\n");newl;
                                fclose(fp);
                                fclose(ip);
                                exit(0);}
#line 1527 "y.tab.c"
    break;

  case 3: /* program: GdeclBlock MainBlock  */
#line 60 "exprnTree.y"
                                {printf("gdecl main\n\n");newl;
                                fclose(fp);
                                fclose(ip);
                                exit(0);}
#line 1536 "y.tab.c"
    break;

  case 4: /* program: FdefBlock MainBlock  */
#line 66 "exprnTree.y"
                                {printf("function main\n\n");newl;
                                fclose(fp);
                                fclose(ip);
                                exit(0);}
#line 1545 "y.tab.c"
    break;

  case 5: /* program: MainBlock  */
#line 71 "exprnTree.y"
                                {printf("main");newl;
                                fclose(fp);
                                fclose(ip);
                                exit(0);}
#line 1554 "y.tab.c"
    break;

  case 6: /* GdeclBlock: DECL GdeclList ENDDECL  */
#line 77 "exprnTree.y"
                                    {
                            gst = ( struct globalSymbolTable* ) malloc(sizeof(struct globalSymbolTable));
                            gst->head = (yyvsp[-1].globalSymbolNode);
                            assignBinding(gst);
                            printSymbolTable(gst);
                            newl;newl;
                            printf("globalMemLoc : %d" , globalMemLoc);
                            newl;newl;
                            if ( checkDuplicate((yyvsp[-1].globalSymbolNode)) ) yyerror("duplicate declaration");
                            fp = fopen("exprnTree.xsm", "w");
                            printHelper(fp,entryCode,-1,-1);
                            
                            while( globalMemLoc-- > 4096){
                                fprintf(fp, "PUSH R0\n");
                            }
                            
                            fprintf(fp, "CALL MAIN\n");
                            printHelper(fp,exitCode,-1,-1);
                            debug;

                           }
#line 1580 "y.tab.c"
    break;

  case 7: /* GdeclBlock: DECL ENDDECL  */
#line 98 "exprnTree.y"
                                        { 
                                fp = fopen("exprnTree.xsm", "w");
                                printHelper(fp,entryCode,-1,-1);
                                fprintf(fp, "CALL MAIN\n");
                                printHelper(fp,exitCode,-1,-1);
                             }
#line 1591 "y.tab.c"
    break;

  case 8: /* GdeclList: GdeclList Gdecl  */
#line 106 "exprnTree.y"
                                { joinGlobalSymbolNode((yyvsp[-1].globalSymbolNode),(yyvsp[0].globalSymbolNode)); (yyval.globalSymbolNode) = (yyvsp[-1].globalSymbolNode); }
#line 1597 "y.tab.c"
    break;

  case 9: /* GdeclList: Gdecl  */
#line 107 "exprnTree.y"
                                { (yyval.globalSymbolNode) = (yyvsp[0].globalSymbolNode); }
#line 1603 "y.tab.c"
    break;

  case 10: /* Gdecl: TYPE GidList SEMICOLON  */
#line 110 "exprnTree.y"
                                {
                                struct globalSymbolNode* temp = (yyvsp[-1].globalSymbolNode);
                                while(temp != NULL){
                                    if ( temp->type == noType) temp->type = (yyvsp[-2].number);
                                    temp = temp->next;
                                }
                                (yyval.globalSymbolNode) = (yyvsp[-1].globalSymbolNode);
                            }
#line 1616 "y.tab.c"
    break;

  case 11: /* TYPE: INT  */
#line 120 "exprnTree.y"
                                        {(yyval.number) = intType;}
#line 1622 "y.tab.c"
    break;

  case 12: /* TYPE: STR  */
#line 121 "exprnTree.y"
                                        {(yyval.number) = strType;}
#line 1628 "y.tab.c"
    break;

  case 13: /* GidList: GidList ',' Gid  */
#line 124 "exprnTree.y"
                           { joinGlobalSymbolNode((yyvsp[-2].globalSymbolNode),(yyvsp[0].globalSymbolNode)); (yyval.globalSymbolNode) = (yyvsp[-2].globalSymbolNode); }
#line 1634 "y.tab.c"
    break;

  case 14: /* GidList: Gid  */
#line 125 "exprnTree.y"
                                           { (yyval.globalSymbolNode) = (yyvsp[0].globalSymbolNode); }
#line 1640 "y.tab.c"
    break;

  case 15: /* Gid: IDDECL  */
#line 128 "exprnTree.y"
             { (yyval.globalSymbolNode) = (yyvsp[0].globalSymbolNode); }
#line 1646 "y.tab.c"
    break;

  case 16: /* Gid: ID '(' ParamList ')'  */
#line 129 "exprnTree.y"
                           { (yyval.globalSymbolNode) = createGlobalSymbolNode((yyvsp[-3].string), noType, -1);
                             (yyval.globalSymbolNode)->paramList = (yyvsp[-1].paramNode);
                             (yyval.globalSymbolNode)->fLabel = flabel++;
                           }
#line 1655 "y.tab.c"
    break;

  case 17: /* ParamList: ParamList ',' Param  */
#line 134 "exprnTree.y"
                                { joinParamNode((yyvsp[-2].paramNode),(yyvsp[0].paramNode)); (yyval.paramNode) = (yyvsp[-2].paramNode); }
#line 1661 "y.tab.c"
    break;

  case 18: /* ParamList: Param  */
#line 135 "exprnTree.y"
                                {(yyval.paramNode) = (yyvsp[0].paramNode);}
#line 1667 "y.tab.c"
    break;

  case 19: /* ParamList: %empty  */
#line 136 "exprnTree.y"
                                {(yyval.paramNode) = NULL;}
#line 1673 "y.tab.c"
    break;

  case 20: /* Param: TYPE ID  */
#line 139 "exprnTree.y"
                { (yyval.paramNode) = createParamNode((yyvsp[0].string),(yyvsp[-1].number)); }
#line 1679 "y.tab.c"
    break;

  case 21: /* IDDECL: ID  */
#line 142 "exprnTree.y"
                                                {  // add duplicate check
								(yyval.globalSymbolNode) = createGlobalSymbolNode((yyvsp[0].string),noType,1 );
							   }
#line 1687 "y.tab.c"
    break;

  case 22: /* IDDECL: ID '[' NUM ']'  */
#line 145 "exprnTree.y"
                                                {
								(yyval.globalSymbolNode) = createGlobalSymbolNode((yyvsp[-3].string),noType,(yyvsp[-1].number));
							   }
#line 1695 "y.tab.c"
    break;

  case 23: /* IDDECL: STAR ID  */
#line 148 "exprnTree.y"
                                        { (yyval.globalSymbolNode) = createGlobalSymbolNode((yyvsp[0].string),intType,1);}
#line 1701 "y.tab.c"
    break;

  case 24: /* FdefBlock: FdefBlock Fdef  */
#line 152 "exprnTree.y"
                                { (yyval.localSymbolNode) = (yyvsp[-1].localSymbolNode);}
#line 1707 "y.tab.c"
    break;

  case 25: /* FdefBlock: Fdef  */
#line 153 "exprnTree.y"
                                {(yyval.localSymbolNode) = (yyvsp[0].localSymbolNode);}
#line 1713 "y.tab.c"
    break;

  case 26: /* Fdef: FName '{' LdeclBlock BEG SLIST END '}'  */
#line 156 "exprnTree.y"
                                              {
                            printf("in func");
                            newl;
                            assignLocalBinding(lst);
                            printLocalSymbolTable(lst);
                            assignLSTtoFunction(gst,(yyvsp[-6].string),lst);
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
#line 1740 "y.tab.c"
    break;

  case 27: /* Fdef: FName '{' BEG SLIST END '}'  */
#line 178 "exprnTree.y"
                                  {
                            printf("in func");
                            newl;
                            assignLSTtoFunction(gst,(yyvsp[-5].string),NULL);
                            newl;newl;
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
#line 1762 "y.tab.c"
    break;

  case 28: /* FName: TYPE ID '(' ParamList ')'  */
#line 197 "exprnTree.y"
                                  { 
                                     if( checkFuncDeclaration(gst,(yyvsp[-3].string),(yyvsp[-1].paramNode)) ) yyerror("function declaration not found");
                                     lst = (struct localSymbolTable* ) malloc(sizeof(struct localSymbolTable));
                                     lst->head = NULL;
                                     addParamToLST(lst,(yyvsp[-1].paramNode));
                                     assignBindingToParam(lst);
                                     printf("in func name");newl;

                                     fprintf(fp, "F%d:\n",getFuncLabel(gst,(yyvsp[-3].treeNode)));
                                     (yyval.string) = (yyvsp[-3].treeNode);
       
                                  }
#line 1779 "y.tab.c"
    break;

  case 29: /* FName: TYPE ID '(' ')'  */
#line 209 "exprnTree.y"
                      {  if( checkFuncDeclaration(gst,(yyvsp[-2].string),NULL) ) yyerror("function declaration not found");
                         lst = (struct localSymbolTable* ) malloc(sizeof(struct localSymbolTable));
                         lst->head = NULL;
                         printf("in func name");newl;
                         fprintf(fp, "F%d:\n",getFuncLabel(gst,(yyvsp[-2].treeNode)));
                         (yyval.string) = (yyvsp[-2].treeNode);
                        }
#line 1791 "y.tab.c"
    break;

  case 30: /* MainBlock: MainHeader '{' LdeclBlock BEG SLIST END '}'  */
#line 218 "exprnTree.y"
                                                        {
                            printf("in main");
                            newl;
                            assignLocalBinding(lst);
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
                            // debug;
                            fprintf(fp, "MOV BP, [SP]\n");
                            fprintf(fp, "POP R0\n");
                            fprintf(fp, "RET\n");
                            freeLST(lst->head);
                            freeGST(gst->head);
                            
                        }
#line 1819 "y.tab.c"
    break;

  case 31: /* MainBlock: MainHeader '{' BEG SLIST END '}'  */
#line 241 "exprnTree.y"
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
#line 1842 "y.tab.c"
    break;

  case 32: /* MainHeader: INT MAIN '(' ')'  */
#line 262 "exprnTree.y"
                             {
                            newl;newl;
                            printf("in main header");
                            newl;
                            lst = (struct localSymbolTable* ) malloc(sizeof(struct localSymbolTable));
                            lst->head = NULL;
                           
                        }
#line 1855 "y.tab.c"
    break;

  case 33: /* LdeclBlock: DECL LdeclList ENDDECL  */
#line 273 "exprnTree.y"
                                        {  joinLocalSymbolTableNode(lst,(yyvsp[-1].localSymbolNode));(yyval.localSymbolNode) = (yyvsp[-1].localSymbolNode); }
#line 1861 "y.tab.c"
    break;

  case 34: /* LdeclBlock: DECL ENDDECL  */
#line 274 "exprnTree.y"
                                        {(yyval.localSymbolNode) = NULL;}
#line 1867 "y.tab.c"
    break;

  case 35: /* LdeclBlock: %empty  */
#line 275 "exprnTree.y"
                                        {(yyval.localSymbolNode) = NULL;}
#line 1873 "y.tab.c"
    break;

  case 36: /* LdeclList: LdeclList Ldecl  */
#line 278 "exprnTree.y"
                                        { joinLocalSymbolNode((yyvsp[-1].localSymbolNode),(yyvsp[0].localSymbolNode)); (yyval.localSymbolNode) = (yyvsp[-1].localSymbolNode); }
#line 1879 "y.tab.c"
    break;

  case 37: /* LdeclList: Ldecl  */
#line 279 "exprnTree.y"
                                                {(yyval.localSymbolNode) = (yyvsp[0].localSymbolNode);}
#line 1885 "y.tab.c"
    break;

  case 38: /* Ldecl: TYPE LidList SEMICOLON  */
#line 282 "exprnTree.y"
                                        {
                                        struct localSymbolNode* temp = (yyvsp[-1].localSymbolNode);
                                        while(temp!=NULL){
                                            if ( temp->type == noType) temp->type = (yyvsp[-2].number);
                                            temp = temp->next;
                                        }
                                        (yyval.localSymbolNode) = (yyvsp[-1].localSymbolNode);
                                    }
#line 1898 "y.tab.c"
    break;

  case 39: /* LidList: LidList ',' Lid  */
#line 292 "exprnTree.y"
                                        { joinLocalSymbolNode((yyvsp[-2].localSymbolNode),(yyvsp[0].localSymbolNode)); (yyval.localSymbolNode) = (yyvsp[-2].localSymbolNode); }
#line 1904 "y.tab.c"
    break;

  case 40: /* LidList: Lid  */
#line 293 "exprnTree.y"
                                        {(yyval.localSymbolNode) = (yyvsp[0].localSymbolNode);}
#line 1910 "y.tab.c"
    break;

  case 41: /* Lid: ID  */
#line 296 "exprnTree.y"
                                                        {(yyval.localSymbolNode) = createLocalSymbolNode((yyvsp[0].string),noType,1);}
#line 1916 "y.tab.c"
    break;

  case 42: /* Lid: ID '[' NUM ']'  */
#line 297 "exprnTree.y"
                                        {(yyval.localSymbolNode) = createLocalSymbolNode((yyvsp[-3].string),noType,(yyvsp[-1].number));}
#line 1922 "y.tab.c"
    break;

  case 43: /* Lid: STAR ID  */
#line 298 "exprnTree.y"
                                                {(yyval.localSymbolNode) = createLocalSymbolNode((yyvsp[0].string),intType,1);}
#line 1928 "y.tab.c"
    break;

  case 44: /* SLIST: SLIST STMT  */
#line 303 "exprnTree.y"
                        {(yyval.treeNode) = createTree(noVal, noType, NULL, connectorNode,(yyvsp[-1].treeNode),(yyvsp[0].treeNode) , NULL);}
#line 1934 "y.tab.c"
    break;

  case 45: /* SLIST: STMT  */
#line 304 "exprnTree.y"
                                {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 1940 "y.tab.c"
    break;

  case 46: /* STMT: INPUTSTMT  */
#line 307 "exprnTree.y"
                        {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 1946 "y.tab.c"
    break;

  case 47: /* STMT: OUTPUTSTMT  */
#line 308 "exprnTree.y"
                        {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 1952 "y.tab.c"
    break;

  case 48: /* STMT: ASSIGNSTMT  */
#line 309 "exprnTree.y"
                        {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 1958 "y.tab.c"
    break;

  case 49: /* STMT: IFSTMT  */
#line 310 "exprnTree.y"
                    {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 1964 "y.tab.c"
    break;

  case 50: /* STMT: WHILESTMT  */
#line 311 "exprnTree.y"
                    {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 1970 "y.tab.c"
    break;

  case 51: /* STMT: DOWHILESTMT  */
#line 312 "exprnTree.y"
                    {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 1976 "y.tab.c"
    break;

  case 52: /* STMT: REPEATUNTILSTMT  */
#line 313 "exprnTree.y"
                        {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 1982 "y.tab.c"
    break;

  case 53: /* STMT: BREAK SEMICOLON  */
#line 314 "exprnTree.y"
                         {(yyval.treeNode) = createTree(noVal, noType, NULL, breakNode , NULL,NULL, NULL);}
#line 1988 "y.tab.c"
    break;

  case 54: /* STMT: CONTINUE SEMICOLON  */
#line 315 "exprnTree.y"
                            {(yyval.treeNode) = createTree(noVal, noType, NULL, continueNode , NULL,NULL, NULL);}
#line 1994 "y.tab.c"
    break;

  case 55: /* STMT: ID '(' ')' SEMICOLON  */
#line 316 "exprnTree.y"
                            { (yyval.treeNode) = createTree(noVal, noType,  (yyvsp[-3].string), funcNode , NULL, NULL , NULL); 
                                if(checkArgList(NULL,(yyvsp[-3].string),gst)) yyerror("argument list not matched");}
#line 2001 "y.tab.c"
    break;

  case 56: /* STMT: ID '(' ArgList ')' SEMICOLON  */
#line 318 "exprnTree.y"
                                    { (yyval.treeNode) = createTree(noVal, noType,  (yyvsp[-4].string), funcNode , NULL,NULL , (yyvsp[-2].argNode)); 
                                     if(checkArgList((yyvsp[-2].argNode),(yyvsp[-4].string),gst)) yyerror("argument list not matched");}
#line 2008 "y.tab.c"
    break;

  case 57: /* STMT: RETURN expr SEMICOLON  */
#line 321 "exprnTree.y"
                                {(yyval.treeNode) = createTree(noVal, noType, NULL, returnNode , (yyvsp[-1].treeNode),NULL, NULL);
                                   if( (yyvsp[-1].treeNode)->type != intType) yyerror("not int type"); }
#line 2015 "y.tab.c"
    break;

  case 58: /* INPUTSTMT: READ '(' IDENTIFIER ')' SEMICOLON  */
#line 327 "exprnTree.y"
                                                        {(yyval.treeNode) = createTree(noVal, noType, NULL, readNode, (yyvsp[-2].treeNode),NULL, NULL);}
#line 2021 "y.tab.c"
    break;

  case 59: /* OUTPUTSTMT: WRITE '(' expr ')' SEMICOLON  */
#line 330 "exprnTree.y"
                                                {(yyval.treeNode) = createTree(noVal, noType, NULL, writeNode, (yyvsp[-2].treeNode),NULL, NULL);}
#line 2027 "y.tab.c"
    break;

  case 60: /* ASSIGNSTMT: IDENTIFIER ASSIGN expr SEMICOLON  */
#line 333 "exprnTree.y"
                                                {(yyval.treeNode) = createTree(noVal, noType, NULL, assignNode, (yyvsp[-3].treeNode),(yyvsp[-1].treeNode), NULL);}
#line 2033 "y.tab.c"
    break;

  case 61: /* ASSIGNSTMT: IDENTIFIER ASSIGN AMP IDENTIFIER SEMICOLON  */
#line 334 "exprnTree.y"
                                                                {  struct treeNode *temp = createTree(noVal, intType, NULL, addressNode, (yyvsp[-1].treeNode),NULL, NULL);
                                                                (yyval.treeNode) = createTree(noVal, noType, NULL, assignNode, (yyvsp[-4].treeNode),temp, NULL);
                                                            }
#line 2041 "y.tab.c"
    break;

  case 62: /* IFSTMT: IF '(' expr ')' THEN SLIST ELSE SLIST ENDIF SEMICOLON  */
#line 340 "exprnTree.y"
                                                                   { struct treeNode *temp = createTree(noVal, noType, NULL, elseNode, (yyvsp[-4].treeNode),(yyvsp[-2].treeNode), NULL); 
                                                                     (yyval.treeNode) = createTree(noVal, noType, NULL, ifNode, (yyvsp[-7].treeNode),temp, NULL);}
#line 2048 "y.tab.c"
    break;

  case 63: /* IFSTMT: IF '(' expr ')' THEN SLIST ENDIF SEMICOLON  */
#line 342 "exprnTree.y"
                                                        { (yyval.treeNode) = createTree(noVal, noType, NULL, ifNode , (yyvsp[-5].treeNode),(yyvsp[-2].treeNode), NULL);}
#line 2054 "y.tab.c"
    break;

  case 64: /* WHILESTMT: WHILE '(' expr ')' DO SLIST ENDWHILE SEMICOLON  */
#line 345 "exprnTree.y"
                                                            { (yyval.treeNode) = createTree(noVal, noType, NULL, whileNode, (yyvsp[-5].treeNode),(yyvsp[-2].treeNode), NULL);}
#line 2060 "y.tab.c"
    break;

  case 65: /* DOWHILESTMT: DO SLIST WHILE '(' expr ')' SEMICOLON  */
#line 347 "exprnTree.y"
                                                     { (yyval.treeNode) = createTree(noVal, noType, NULL, doWhileNode, (yyvsp[-2].treeNode),(yyvsp[-5].treeNode), NULL);}
#line 2066 "y.tab.c"
    break;

  case 66: /* REPEATUNTILSTMT: REPEAT SLIST UNTIL '(' expr ')' SEMICOLON  */
#line 349 "exprnTree.y"
                                                             { (yyval.treeNode) = createTree(noVal, noType, NULL, repeatUntilNode,(yyvsp[-2].treeNode),(yyvsp[-5].treeNode), NULL);}
#line 2072 "y.tab.c"
    break;

  case 67: /* expr: expr PLUS expr  */
#line 352 "exprnTree.y"
                                {(yyval.treeNode) = createTree(noVal, intType, NULL, plusNode, (yyvsp[-2].treeNode),(yyvsp[0].treeNode), NULL);}
#line 2078 "y.tab.c"
    break;

  case 68: /* expr: expr MINUS expr  */
#line 353 "exprnTree.y"
                                {(yyval.treeNode) = createTree(noVal, intType, NULL, minusNode,(yyvsp[-2].treeNode),(yyvsp[0].treeNode), NULL);}
#line 2084 "y.tab.c"
    break;

  case 69: /* expr: expr STAR expr  */
#line 354 "exprnTree.y"
                                {(yyval.treeNode) = createTree(noVal, intType, NULL, mulNode,(yyvsp[-2].treeNode),(yyvsp[0].treeNode), NULL);}
#line 2090 "y.tab.c"
    break;

  case 70: /* expr: expr DIV expr  */
#line 355 "exprnTree.y"
                                {(yyval.treeNode) = createTree(noVal, intType, NULL, divNode,(yyvsp[-2].treeNode),(yyvsp[0].treeNode), NULL);}
#line 2096 "y.tab.c"
    break;

  case 71: /* expr: expr MOD expr  */
#line 356 "exprnTree.y"
                        {(yyval.treeNode) = createTree(noVal, intType, NULL, modNode,(yyvsp[-2].treeNode),(yyvsp[0].treeNode), NULL);}
#line 2102 "y.tab.c"
    break;

  case 72: /* expr: expr GT expr  */
#line 357 "exprnTree.y"
                            {(yyval.treeNode) = createTree(noVal, boolType, NULL, gtNode,(yyvsp[-2].treeNode),(yyvsp[0].treeNode), NULL);}
#line 2108 "y.tab.c"
    break;

  case 73: /* expr: expr GE expr  */
#line 358 "exprnTree.y"
                            {(yyval.treeNode) = createTree(noVal, boolType, NULL, geNode,(yyvsp[-2].treeNode),(yyvsp[0].treeNode), NULL);}
#line 2114 "y.tab.c"
    break;

  case 74: /* expr: expr LT expr  */
#line 359 "exprnTree.y"
                            {(yyval.treeNode) = createTree(noVal, boolType, NULL, ltNode,(yyvsp[-2].treeNode),(yyvsp[0].treeNode), NULL);}
#line 2120 "y.tab.c"
    break;

  case 75: /* expr: expr LE expr  */
#line 360 "exprnTree.y"
                            {(yyval.treeNode) = createTree(noVal, boolType, NULL, leNode,(yyvsp[-2].treeNode),(yyvsp[0].treeNode), NULL);}
#line 2126 "y.tab.c"
    break;

  case 76: /* expr: expr EQ expr  */
#line 361 "exprnTree.y"
                            {(yyval.treeNode) = createTree(noVal, boolType, NULL, eqNode,(yyvsp[-2].treeNode),(yyvsp[0].treeNode), NULL);}
#line 2132 "y.tab.c"
    break;

  case 77: /* expr: expr NE expr  */
#line 362 "exprnTree.y"
                            {(yyval.treeNode) = createTree(noVal, boolType, NULL, neNode,(yyvsp[-2].treeNode),(yyvsp[0].treeNode), NULL);}
#line 2138 "y.tab.c"
    break;

  case 78: /* expr: expr AND expr  */
#line 363 "exprnTree.y"
                        {(yyval.treeNode) = createTree(noVal, boolType, NULL, andNode,(yyvsp[-2].treeNode),(yyvsp[0].treeNode), NULL);}
#line 2144 "y.tab.c"
    break;

  case 79: /* expr: expr OR expr  */
#line 364 "exprnTree.y"
                            {(yyval.treeNode) = createTree(noVal, boolType, NULL, orNode,(yyvsp[-2].treeNode),(yyvsp[0].treeNode), NULL);}
#line 2150 "y.tab.c"
    break;

  case 80: /* expr: '(' expr ')'  */
#line 365 "exprnTree.y"
                                {(yyval.treeNode) = (yyvsp[-1].treeNode);}
#line 2156 "y.tab.c"
    break;

  case 81: /* expr: NUM  */
#line 366 "exprnTree.y"
                                    {(yyval.treeNode) = createTree((yyvsp[0].number), intType, NULL, numNode, NULL,NULL, NULL);}
#line 2162 "y.tab.c"
    break;

  case 82: /* expr: STR  */
#line 367 "exprnTree.y"
                        {(yyval.treeNode) = createTree(noVal, strType, (yyvsp[0].string), strNode, NULL,NULL, NULL);}
#line 2168 "y.tab.c"
    break;

  case 83: /* expr: ID '(' ')'  */
#line 368 "exprnTree.y"
                        {  struct treeNode* temp = createTree(noVal, noType, (yyvsp[-2].string), funcNode , NULL,NULL, NULL);
                            findType(gst,lst,temp);
                            temp->val = getFuncLabel(gst,(yyvsp[-2].string));
                            if(checkArgList(NULL,(yyvsp[-2].string),gst)) yyerror("argument list not matched");
                            (yyval.treeNode) = temp;}
#line 2178 "y.tab.c"
    break;

  case 84: /* expr: ID '(' ArgList ')'  */
#line 373 "exprnTree.y"
                                {  struct treeNode* temp = createTree(noVal, noType, (yyvsp[-3].string), funcNode , NULL ,NULL ,(yyvsp[-1].argNode));
                            findType(gst,lst,temp);
                            temp->val = getFuncLabel(gst,(yyvsp[-3].string));
                            if(checkArgList((yyvsp[-1].argNode),(yyvsp[-3].string),gst)) yyerror("argument list not matched");
                            (yyval.treeNode) = temp;
                            }
#line 2189 "y.tab.c"
    break;

  case 85: /* expr: IDENTIFIER  */
#line 379 "exprnTree.y"
                                {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 2195 "y.tab.c"
    break;

  case 86: /* ArgList: ArgList ',' expr  */
#line 382 "exprnTree.y"
                                {   struct argNode* temp = createArgNode((yyvsp[0].treeNode));joinArgNode((yyvsp[-2].argNode),temp); (yyval.argNode) = (yyvsp[-2].argNode);  }
#line 2201 "y.tab.c"
    break;

  case 87: /* ArgList: expr  */
#line 384 "exprnTree.y"
                                {     struct argNode* temp  = createArgNode((yyvsp[0].treeNode)); (yyval.argNode) = temp; }
#line 2207 "y.tab.c"
    break;

  case 88: /* IDENTIFIER: ID  */
#line 387 "exprnTree.y"
                                    { struct treeNode* temp = createTree(noVal, noType, (yyvsp[0].string), idNode , NULL,NULL, NULL);
                                    findType(gst,lst,temp);
                                    (yyval.treeNode) = temp;}
#line 2215 "y.tab.c"
    break;

  case 89: /* IDENTIFIER: ID '[' expr ']'  */
#line 391 "exprnTree.y"
                                    {  
                                    struct treeNode* temp = createTree(noVal, noType, (yyvsp[-3].string), idNode, (yyvsp[-1].treeNode),NULL, NULL);
                                    findType(gst,lst,temp);
                                    if ( temp->localSymbolTableEntry != NULL && temp->localSymbolTableEntry->size <= evaluate((yyvsp[-1].treeNode))) yyerror("Array index out of bounds");
                                    if ( temp->localSymbolTableEntry == NULL && temp->globalSymbolTableEntry->size <= evaluate((yyvsp[-1].treeNode))) yyerror("Array index out of bounds");
                                    (yyval.treeNode) = temp;}
#line 2226 "y.tab.c"
    break;

  case 90: /* IDENTIFIER: STAR ID  */
#line 398 "exprnTree.y"
                                     { 
                                        struct treeNode* id = createTree(noVal, noType, (yyvsp[0].string), idNode, NULL,NULL,NULL);
                                        findType(gst,lst,id);
                                        struct treeNode* pointer = createTree(noVal, id->type, NULL, pointerNode, id,NULL,NULL);
                                        // printf("id type is %d",pointer->type);
                                        (yyval.treeNode) = pointer;
                                     }
#line 2238 "y.tab.c"
    break;


#line 2242 "y.tab.c"

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

#line 408 "exprnTree.y"


int yyerror(char const *s)
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
  yyparse();
  return 0;
}

                  
