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
#define YYLAST   590

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  87
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  205

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
       0,    54,    54,    60,    65,    71,    77,    97,   105,   106,
     109,   119,   120,   123,   124,   127,   128,   133,   134,   135,
     138,   141,   144,   151,   152,   155,   174,   191,   204,   209,
     230,   248,   259,   260,   261,   264,   265,   268,   278,   279,
     282,   283,   288,   289,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   303,   306,   311,   314,   317,   318,
     324,   326,   329,   331,   333,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   357,   367,   370,   372,   379,   384
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

#define YYPACT_NINF (-38)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      61,    95,   -16,   -38,    34,   102,    44,   102,   -38,    12,
     -38,    17,   -38,   -38,    98,   -38,    66,    30,   -38,   102,
     -38,    35,   -38,   -38,    26,    45,   -38,   -38,   -28,   -12,
     -38,   -38,    82,   -38,    14,   538,   110,   100,   538,   126,
     112,   144,   -38,    66,   -38,   -38,   146,    27,   -38,    54,
     108,   111,   148,   153,    11,   114,   115,   538,   538,   415,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   179,   -38,
     187,   119,   -38,   538,   436,   538,    59,   149,   -38,   -38,
     112,   -38,     6,    11,   194,    11,   -38,   -38,    62,   -38,
     -38,    11,   304,   -38,    11,    11,   558,    96,   150,   -38,
      -2,   152,   -11,   -38,   -38,   -38,   457,   151,   478,   -38,
     -38,   -38,   185,   328,   142,   137,   156,   171,   174,     8,
     186,    11,    11,    11,    11,    11,   -38,    11,    11,    11,
      11,    11,    11,    11,    11,   198,   239,   173,   184,   -38,
     194,   316,   214,   -38,   187,   180,   -38,   181,   -38,    11,
     224,   -38,   225,   226,   -38,   143,   -38,   159,   159,   -38,
     -38,   -38,   365,   365,   365,   365,   365,   365,   365,   365,
     222,   220,    11,    11,   235,   -38,   205,   -38,   -38,   -38,
     328,   -38,   -38,   -38,   -38,   538,   538,   251,   263,   -38,
     -38,   394,   498,    -3,   237,   538,   238,   245,   -38,   -38,
     518,   -38,   -38,   246,   -38
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,    11,    12,     0,     0,     0,     0,    24,     0,
       5,     0,     7,    11,     0,     9,     0,     0,     1,     0,
       3,     0,    23,     4,     0,     0,     6,     8,    21,     0,
      14,    15,     0,     2,    19,     0,     0,     0,     0,     0,
      19,     0,    10,     0,    31,    28,     0,     0,    18,    86,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      43,    44,    45,    46,    47,    48,    49,    50,     0,    33,
       0,     0,    36,     0,     0,     0,     0,     0,    13,    20,
       0,    27,     0,     0,     0,     0,    51,    52,    86,    79,
      80,     0,     0,    83,     0,     0,     0,     0,     0,    42,
       0,    40,     0,    39,    32,    35,     0,     0,     0,    16,
      22,    17,     0,    85,     0,     0,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    55,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
       0,     0,     0,    37,     0,     0,    30,     0,    53,     0,
       0,    87,     0,     0,    81,     0,    78,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
       0,     0,     0,     0,     0,    58,     0,    38,    25,    29,
      84,    54,    56,    57,    82,     0,     0,     0,     0,    59,
      41,     0,     0,     0,     0,     0,     0,     0,    63,    64,
       0,    61,    62,     0,    60
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -38,   -38,   -38,   -38,   241,    67,   -38,   221,   223,   201,
     -38,   260,     0,   -38,    70,   -38,   242,   -38,   195,   -38,
     138,   -32,   -30,   -38,   -38,   -38,   -38,   -38,   -38,   -38,
     -37,   164,   -35
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     4,     5,    14,    15,     6,    29,    30,    47,    48,
      31,     7,     8,     9,    10,    11,    37,    71,    72,   102,
     103,    59,    60,    61,    62,    63,    64,    65,    66,    67,
     113,   114,    93
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      68,    88,    89,    68,    42,   143,    74,    22,    17,    88,
      89,    88,    89,   198,    88,    89,    40,    92,    41,    22,
      90,   140,    68,    68,    68,    96,    97,   186,    90,    99,
      90,    43,   144,    90,    18,    13,     3,    35,    68,    68,
      68,   106,    91,   108,    99,    36,   115,    21,   118,   117,
      91,   112,    91,   154,   120,    91,    38,   135,   136,    45,
      24,    68,    68,   141,    36,    25,    99,    99,    16,    28,
      80,    68,    81,    68,    32,    20,    99,    23,    99,    34,
       1,    16,     2,     3,   157,   158,   159,   160,   161,    33,
     162,   163,   164,   165,   166,   167,   168,   169,    82,    49,
      83,    46,    80,    70,   109,   174,   119,    46,    83,    50,
      51,    73,   180,    52,    53,    12,    13,     3,    26,    13,
       3,    54,    55,     2,     3,    56,    57,    44,    58,   138,
      69,    13,     3,    13,     3,   187,   188,    75,    70,   104,
      13,     3,   121,   122,   123,   124,   125,    46,    77,    79,
      68,    68,    84,   191,   192,    85,    68,    68,    94,    95,
      68,    99,    99,   200,    86,    68,   123,   124,   125,    87,
      99,   127,   128,   129,   130,   131,   132,   133,   134,   121,
     122,   123,   124,   125,   151,   149,   149,   150,   184,   100,
     101,   121,   122,   123,   124,   125,   110,   116,   142,   139,
     146,   148,    83,   121,   122,   123,   124,   125,   127,   128,
     129,   130,   131,   132,   133,   134,   152,   172,   176,   153,
     127,   128,   129,   130,   131,   132,   133,   134,   173,   178,
     179,   156,   127,   128,   129,   130,   131,   132,   133,   134,
     181,   182,   183,   170,   121,   122,   123,   124,   125,   185,
     186,   189,   190,   199,   201,    27,   121,   122,   123,   124,
     125,   202,   204,    76,    78,    19,   105,    39,   121,   122,
     123,   124,   125,   127,   128,   129,   130,   131,   132,   133,
     134,   111,   177,   155,   171,   127,   128,   129,   130,   131,
     132,   133,   134,     0,     0,     0,   193,   127,   128,   129,
     130,   131,   132,   133,   134,     0,     0,     0,   194,   121,
     122,   123,   124,   125,     0,     0,     0,     0,     0,     0,
     126,   121,   122,   123,   124,   125,     0,     0,     0,     0,
       0,     0,   175,   121,   122,   123,   124,   125,   127,   128,
     129,   130,   131,   132,   133,   134,     0,     0,     0,     0,
     127,   128,   129,   130,   131,   132,   133,   134,     0,     0,
       0,     0,   127,   128,   129,   130,   131,   132,   133,   134,
     121,   122,   123,   124,   125,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    49,     0,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,   195,
       0,    52,    53,     0,     0,     0,     0,     0,    49,    54,
      55,     0,   196,    56,    57,     0,    58,    98,    50,    51,
       0,     0,    52,    53,     0,     0,     0,     0,     0,    49,
      54,    55,     0,     0,    56,    57,     0,    58,   107,    50,
      51,     0,     0,    52,    53,     0,     0,     0,     0,     0,
      49,    54,    55,     0,     0,    56,    57,     0,    58,   145,
      50,    51,     0,     0,    52,    53,     0,     0,     0,     0,
       0,    49,    54,    55,     0,     0,    56,    57,     0,    58,
     147,    50,    51,     0,     0,    52,    53,     0,     0,     0,
       0,    49,     0,    54,    55,     0,     0,    56,    57,     0,
      58,    50,    51,     0,     0,    52,    53,     0,     0,     0,
       0,    49,     0,    54,    55,     0,     0,    56,    57,   197,
      58,    50,    51,     0,     0,    52,    53,     0,     0,     0,
       0,    49,     0,    54,    55,     0,   203,    56,    57,     0,
      58,    50,    51,     0,     0,    52,    53,     0,     0,     0,
       0,    49,     0,    54,    55,     0,     0,    56,    57,     0,
      58,    50,    51,     0,     0,    52,    53,     0,     0,     0,
       0,     0,     0,    54,    55,     0,     0,   137,    57,     0,
      58
};

static const yytype_int16 yycheck[] =
{
      35,     3,     4,    38,    16,    16,    38,     7,    24,     3,
       4,     3,     4,    16,     3,     4,    44,    54,    46,    19,
      22,    23,    57,    58,    59,    57,    58,    30,    22,    59,
      22,    43,    43,    22,     0,    21,    22,    11,    73,    74,
      75,    73,    44,    75,    74,    19,    83,     3,    85,    84,
      44,    45,    44,    45,    91,    44,    11,    94,    95,    45,
      48,    96,    97,   100,    19,    48,    96,    97,     1,     3,
      43,   106,    45,   108,    44,     5,   106,     7,   108,    44,
      19,    14,    21,    22,   121,   122,   123,   124,   125,    19,
     127,   128,   129,   130,   131,   132,   133,   134,    44,     3,
      46,    34,    43,    36,    45,   140,    44,    40,    46,    13,
      14,    11,   149,    17,    18,    20,    21,    22,    20,    21,
      22,    25,    26,    21,    22,    29,    30,    45,    32,    33,
      20,    21,    22,    21,    22,   172,   173,    11,    71,    20,
      21,    22,     5,     6,     7,     8,     9,    80,     4,     3,
     185,   186,    44,   185,   186,    44,   191,   192,    44,    44,
     195,   191,   192,   195,    16,   200,     7,     8,     9,    16,
     200,    34,    35,    36,    37,    38,    39,    40,    41,     5,
       6,     7,     8,     9,    47,    43,    43,    45,    45,    10,
       3,     5,     6,     7,     8,     9,    47,     3,    46,    49,
      49,    16,    46,     5,     6,     7,     8,     9,    34,    35,
      36,    37,    38,    39,    40,    41,    45,    44,     4,    45,
      34,    35,    36,    37,    38,    39,    40,    41,    44,    49,
      49,    45,    34,    35,    36,    37,    38,    39,    40,    41,
      16,    16,    16,    45,     5,     6,     7,     8,     9,    27,
      30,    16,    47,    16,    16,    14,     5,     6,     7,     8,
       9,    16,    16,    40,    43,     5,    71,    25,     5,     6,
       7,     8,     9,    34,    35,    36,    37,    38,    39,    40,
      41,    80,   144,   119,    45,    34,    35,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    45,    34,    35,    36,
      37,    38,    39,    40,    41,    -1,    -1,    -1,    45,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      16,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    16,     5,     6,     7,     8,     9,    34,    35,
      36,    37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,    40,    41,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    34,
      35,    36,    37,    38,    39,    40,    41,    13,    14,    15,
      -1,    17,    18,    -1,    -1,    -1,    -1,    -1,     3,    25,
      26,    -1,    28,    29,    30,    -1,    32,    12,    13,    14,
      -1,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,     3,
      25,    26,    -1,    -1,    29,    30,    -1,    32,    12,    13,
      14,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,
       3,    25,    26,    -1,    -1,    29,    30,    -1,    32,    12,
      13,    14,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,
      -1,     3,    25,    26,    -1,    -1,    29,    30,    -1,    32,
      12,    13,    14,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,     3,    -1,    25,    26,    -1,    -1,    29,    30,    -1,
      32,    13,    14,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,     3,    -1,    25,    26,    -1,    -1,    29,    30,    31,
      32,    13,    14,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,     3,    -1,    25,    26,    -1,    28,    29,    30,    -1,
      32,    13,    14,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,     3,    -1,    25,    26,    -1,    -1,    29,    30,    -1,
      32,    13,    14,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    26,    -1,    -1,    29,    30,    -1,
      32
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    19,    21,    22,    51,    52,    55,    61,    62,    63,
      64,    65,    20,    21,    53,    54,    55,    24,     0,    61,
      64,     3,    62,    64,    48,    48,    20,    54,     3,    56,
      57,    60,    44,    64,    44,    11,    19,    66,    11,    66,
      44,    46,    16,    43,    45,    45,    55,    58,    59,     3,
      13,    14,    17,    18,    25,    26,    29,    30,    32,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    82,    20,
      55,    67,    68,    11,    71,    11,    58,     4,    57,     3,
      43,    45,    44,    46,    44,    44,    16,    16,     3,     4,
      22,    44,    80,    82,    44,    44,    71,    71,    12,    72,
      10,     3,    69,    70,    20,    68,    71,    12,    71,    45,
      47,    59,    45,    80,    81,    80,     3,    82,    80,    44,
      80,     5,     6,     7,     8,     9,    16,    34,    35,    36,
      37,    38,    39,    40,    41,    80,    80,    29,    33,    49,
      23,    80,    46,    16,    43,    12,    49,    12,    16,    43,
      45,    47,    45,    45,    45,    81,    45,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      45,    45,    44,    44,    82,    16,     4,    70,    49,    49,
      80,    16,    16,    16,    45,    27,    30,    80,    80,    16,
      47,    71,    71,    45,    45,    15,    28,    31,    16,    16,
      71,    16,    16,    28,    16
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    50,    51,    51,    51,    51,    52,    52,    53,    53,
      54,    55,    55,    56,    56,    57,    57,    58,    58,    58,
      59,    60,    60,    61,    61,    62,    62,    63,    63,    64,
      64,    65,    66,    66,    66,    67,    67,    68,    69,    69,
      70,    70,    71,    71,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    73,    74,    75,    75,
      76,    76,    77,    78,    79,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    81,    81,    82,    82
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     2,     2,     1,     3,     2,     2,     1,
       3,     1,     1,     3,     1,     1,     4,     3,     1,     0,
       2,     1,     4,     2,     1,     7,     6,     5,     4,     7,
       6,     4,     3,     2,     0,     2,     1,     3,     3,     1,
       1,     4,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     4,     5,     3,     5,     5,     4,     5,
      10,     8,     8,     7,     7,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     3,     4,     1,     3,     1,     1,     4
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
                                {printf("gdecl and fdef and main");newl;
                                fclose(fp);
                                fclose(ip);
                                exit(0);}
#line 1517 "y.tab.c"
    break;

  case 3: /* program: GdeclBlock MainBlock  */
#line 60 "exprnTree.y"
                                {printf("gdecl main");newl;
                                fclose(fp);
                                fclose(ip);
                                exit(0);}
#line 1526 "y.tab.c"
    break;

  case 4: /* program: FdefBlock MainBlock  */
#line 66 "exprnTree.y"
                                {printf("function main");newl;
                                fclose(fp);
                                fclose(ip);
                                exit(0);}
#line 1535 "y.tab.c"
    break;

  case 5: /* program: MainBlock  */
#line 71 "exprnTree.y"
                                {printf("main");newl;
                                fclose(fp);
                                fclose(ip);
                                exit(0);}
#line 1544 "y.tab.c"
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

                           }
#line 1569 "y.tab.c"
    break;

  case 7: /* GdeclBlock: DECL ENDDECL  */
#line 97 "exprnTree.y"
                                        { 
                                fp = fopen("exprnTree.xsm", "w");
                                printHelper(fp,entryCode,-1,-1);
                                fprintf(fp, "CALL MAIN\n");
                                printHelper(fp,exitCode,-1,-1);
                             }
#line 1580 "y.tab.c"
    break;

  case 8: /* GdeclList: GdeclList Gdecl  */
#line 105 "exprnTree.y"
                                { joinGlobalSymbolNode((yyvsp[-1].globalSymbolNode),(yyvsp[0].globalSymbolNode)); (yyval.globalSymbolNode) = (yyvsp[-1].globalSymbolNode); }
#line 1586 "y.tab.c"
    break;

  case 9: /* GdeclList: Gdecl  */
#line 106 "exprnTree.y"
                                { (yyval.globalSymbolNode) = (yyvsp[0].globalSymbolNode); }
#line 1592 "y.tab.c"
    break;

  case 10: /* Gdecl: TYPE GidList SEMICOLON  */
#line 109 "exprnTree.y"
                                {
                                struct globalSymbolNode* temp = (yyvsp[-1].globalSymbolNode);
                                while(temp != NULL){
                                    if ( temp->type == noType) temp->type = (yyvsp[-2].number);
                                    temp = temp->next;
                                }
                                (yyval.globalSymbolNode) = (yyvsp[-1].globalSymbolNode);
                            }
#line 1605 "y.tab.c"
    break;

  case 11: /* TYPE: INT  */
#line 119 "exprnTree.y"
                                        {(yyval.number) = intType;}
#line 1611 "y.tab.c"
    break;

  case 12: /* TYPE: STR  */
#line 120 "exprnTree.y"
                                        {(yyval.number) = strType;}
#line 1617 "y.tab.c"
    break;

  case 13: /* GidList: GidList ',' Gid  */
#line 123 "exprnTree.y"
                           { joinGlobalSymbolNode((yyvsp[-2].globalSymbolNode),(yyvsp[0].globalSymbolNode)); (yyval.globalSymbolNode) = (yyvsp[-2].globalSymbolNode); }
#line 1623 "y.tab.c"
    break;

  case 14: /* GidList: Gid  */
#line 124 "exprnTree.y"
                                           { (yyval.globalSymbolNode) = (yyvsp[0].globalSymbolNode); }
#line 1629 "y.tab.c"
    break;

  case 15: /* Gid: IDDECL  */
#line 127 "exprnTree.y"
             { (yyval.globalSymbolNode) = (yyvsp[0].globalSymbolNode); }
#line 1635 "y.tab.c"
    break;

  case 16: /* Gid: ID '(' ParamList ')'  */
#line 128 "exprnTree.y"
                           { (yyval.globalSymbolNode) = createGlobalSymbolNode((yyvsp[-3].string), noType, -1);
                             (yyval.globalSymbolNode)->paramList = (yyvsp[-1].paramNode);
                             (yyval.globalSymbolNode)->fLabel = flabel++;
                           }
#line 1644 "y.tab.c"
    break;

  case 17: /* ParamList: ParamList ',' Param  */
#line 133 "exprnTree.y"
                                { joinParamNode((yyvsp[-2].paramNode),(yyvsp[0].paramNode)); (yyval.paramNode) = (yyvsp[-2].paramNode); }
#line 1650 "y.tab.c"
    break;

  case 18: /* ParamList: Param  */
#line 134 "exprnTree.y"
                                {(yyval.paramNode) = (yyvsp[0].paramNode);}
#line 1656 "y.tab.c"
    break;

  case 19: /* ParamList: %empty  */
#line 135 "exprnTree.y"
                                {(yyval.paramNode) = NULL;}
#line 1662 "y.tab.c"
    break;

  case 20: /* Param: TYPE ID  */
#line 138 "exprnTree.y"
                { (yyval.paramNode) = createParamNode((yyvsp[0].string),(yyvsp[-1].number)); }
#line 1668 "y.tab.c"
    break;

  case 21: /* IDDECL: ID  */
#line 141 "exprnTree.y"
                                                {  // add duplicate check
								(yyval.globalSymbolNode) = createGlobalSymbolNode((yyvsp[0].string),noType,1 );
							   }
#line 1676 "y.tab.c"
    break;

  case 22: /* IDDECL: ID '[' NUM ']'  */
#line 144 "exprnTree.y"
                                                {
								(yyval.globalSymbolNode) = createGlobalSymbolNode((yyvsp[-3].string),noType,(yyvsp[-1].number));
							   }
#line 1684 "y.tab.c"
    break;

  case 23: /* FdefBlock: FdefBlock Fdef  */
#line 151 "exprnTree.y"
                                { (yyval.localSymbolNode) = (yyvsp[-1].localSymbolNode);}
#line 1690 "y.tab.c"
    break;

  case 24: /* FdefBlock: Fdef  */
#line 152 "exprnTree.y"
                                {(yyval.localSymbolNode) = (yyvsp[0].localSymbolNode);}
#line 1696 "y.tab.c"
    break;

  case 25: /* Fdef: FName '{' LdeclBlock BEG SLIST END '}'  */
#line 155 "exprnTree.y"
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
                        }
#line 1720 "y.tab.c"
    break;

  case 26: /* Fdef: FName '{' BEG SLIST END '}'  */
#line 174 "exprnTree.y"
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
                        }
#line 1740 "y.tab.c"
    break;

  case 27: /* FName: TYPE ID '(' ParamList ')'  */
#line 191 "exprnTree.y"
                                  { 
                                     if( checkFuncDeclaration(gst,(yyvsp[-3].string),(yyvsp[-1].paramNode)) ) yyerror("function declaration not found");
                                      lst = (struct localSymbolTable* ) malloc(sizeof(struct localSymbolTable));
                                        lst->head = NULL;
                                        addParamToLST(lst,(yyvsp[-1].paramNode));
                                        assignBindingToParam(lst);
                                        printf("in func name");newl;
                                        // printLocalSymbolTable(lst);

                                     fprintf(fp, "F%d:\n",getFuncLabel(gst,(yyvsp[-3].treeNode)));
                                     (yyval.string) = (yyvsp[-3].treeNode);
       
                                  }
#line 1758 "y.tab.c"
    break;

  case 28: /* FName: TYPE ID '(' ')'  */
#line 204 "exprnTree.y"
                      {

                        }
#line 1766 "y.tab.c"
    break;

  case 29: /* MainBlock: MainHeader '{' LdeclBlock BEG SLIST END '}'  */
#line 209 "exprnTree.y"
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

                            fprintf(fp, "MOV BP, [SP]\n");
                            fprintf(fp, "POP R0\n");
                            fprintf(fp, "RET\n");
                            
                        }
#line 1792 "y.tab.c"
    break;

  case 30: /* MainBlock: MainHeader '{' BEG SLIST END '}'  */
#line 230 "exprnTree.y"
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
                        }
#line 1812 "y.tab.c"
    break;

  case 31: /* MainHeader: INT MAIN '(' ')'  */
#line 248 "exprnTree.y"
                             {
                            newl;newl;
                            printf("in main header");
                            newl;
                            lst = (struct localSymbolTable* ) malloc(sizeof(struct localSymbolTable));
                            lst->head = NULL;
                           
                        }
#line 1825 "y.tab.c"
    break;

  case 32: /* LdeclBlock: DECL LdeclList ENDDECL  */
#line 259 "exprnTree.y"
                                        {  joinLocalSymbolTableNode(lst,(yyvsp[-1].localSymbolNode));(yyval.localSymbolNode) = (yyvsp[-1].localSymbolNode); }
#line 1831 "y.tab.c"
    break;

  case 33: /* LdeclBlock: DECL ENDDECL  */
#line 260 "exprnTree.y"
                                        {(yyval.localSymbolNode) = NULL;}
#line 1837 "y.tab.c"
    break;

  case 34: /* LdeclBlock: %empty  */
#line 261 "exprnTree.y"
                                        {(yyval.localSymbolNode) = NULL;}
#line 1843 "y.tab.c"
    break;

  case 35: /* LdeclList: LdeclList Ldecl  */
#line 264 "exprnTree.y"
                                        { joinLocalSymbolNode((yyvsp[-1].localSymbolNode),(yyvsp[0].localSymbolNode)); (yyval.localSymbolNode) = (yyvsp[-1].localSymbolNode); }
#line 1849 "y.tab.c"
    break;

  case 36: /* LdeclList: Ldecl  */
#line 265 "exprnTree.y"
                                                {(yyval.localSymbolNode) = (yyvsp[0].localSymbolNode);}
#line 1855 "y.tab.c"
    break;

  case 37: /* Ldecl: TYPE LidList SEMICOLON  */
#line 268 "exprnTree.y"
                                        {
                                        struct localSymbolNode* temp = (yyvsp[-1].localSymbolNode);
                                        while(temp!=NULL){
                                            if ( temp->type == noType) temp->type = (yyvsp[-2].number);
                                            temp = temp->next;
                                        }
                                        (yyval.localSymbolNode) = (yyvsp[-1].localSymbolNode);
                                    }
#line 1868 "y.tab.c"
    break;

  case 38: /* LidList: LidList ',' Lid  */
#line 278 "exprnTree.y"
                                        { joinLocalSymbolNode((yyvsp[-2].localSymbolNode),(yyvsp[0].localSymbolNode)); (yyval.localSymbolNode) = (yyvsp[-2].localSymbolNode); }
#line 1874 "y.tab.c"
    break;

  case 39: /* LidList: Lid  */
#line 279 "exprnTree.y"
                                        {(yyval.localSymbolNode) = (yyvsp[0].localSymbolNode);}
#line 1880 "y.tab.c"
    break;

  case 40: /* Lid: ID  */
#line 282 "exprnTree.y"
                                                        {(yyval.localSymbolNode) = createLocalSymbolNode((yyvsp[0].string),noType,1);}
#line 1886 "y.tab.c"
    break;

  case 41: /* Lid: ID '[' NUM ']'  */
#line 283 "exprnTree.y"
                                        {(yyval.localSymbolNode) = createLocalSymbolNode((yyvsp[-3].string),noType,(yyvsp[-1].number));}
#line 1892 "y.tab.c"
    break;

  case 42: /* SLIST: SLIST STMT  */
#line 288 "exprnTree.y"
                        {(yyval.treeNode) = createTree(noVal, noType, NULL, connectorNode,(yyvsp[-1].treeNode),(yyvsp[0].treeNode) , NULL);}
#line 1898 "y.tab.c"
    break;

  case 43: /* SLIST: STMT  */
#line 289 "exprnTree.y"
                                {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 1904 "y.tab.c"
    break;

  case 44: /* STMT: INPUTSTMT  */
#line 292 "exprnTree.y"
                        {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 1910 "y.tab.c"
    break;

  case 45: /* STMT: OUTPUTSTMT  */
#line 293 "exprnTree.y"
                        {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 1916 "y.tab.c"
    break;

  case 46: /* STMT: ASSIGNSTMT  */
#line 294 "exprnTree.y"
                        {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 1922 "y.tab.c"
    break;

  case 47: /* STMT: IFSTMT  */
#line 295 "exprnTree.y"
                    {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 1928 "y.tab.c"
    break;

  case 48: /* STMT: WHILESTMT  */
#line 296 "exprnTree.y"
                    {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 1934 "y.tab.c"
    break;

  case 49: /* STMT: DOWHILESTMT  */
#line 297 "exprnTree.y"
                    {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 1940 "y.tab.c"
    break;

  case 50: /* STMT: REPEATUNTILSTMT  */
#line 298 "exprnTree.y"
                        {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 1946 "y.tab.c"
    break;

  case 51: /* STMT: BREAK SEMICOLON  */
#line 299 "exprnTree.y"
                         {(yyval.treeNode) = createTree(noVal, noType, NULL, breakNode , NULL,NULL, NULL);}
#line 1952 "y.tab.c"
    break;

  case 52: /* STMT: CONTINUE SEMICOLON  */
#line 300 "exprnTree.y"
                            {(yyval.treeNode) = createTree(noVal, noType, NULL, continueNode , NULL,NULL, NULL);}
#line 1958 "y.tab.c"
    break;

  case 53: /* STMT: ID '(' ')' SEMICOLON  */
#line 301 "exprnTree.y"
                            { (yyval.treeNode) = createTree(noVal, noType,  (yyvsp[-3].string), funcNode , NULL, NULL , NULL); 
                                if(checkArgList(NULL,(yyvsp[-3].string),gst)) yyerror("argument list not matched");}
#line 1965 "y.tab.c"
    break;

  case 54: /* STMT: ID '(' ArgList ')' SEMICOLON  */
#line 303 "exprnTree.y"
                                    { (yyval.treeNode) = createTree(noVal, noType,  (yyvsp[-4].string), funcNode , NULL,NULL , (yyvsp[-2].argNode)); 
                                     if(checkArgList((yyvsp[-2].argNode),(yyvsp[-4].string),gst)) yyerror("argument list not matched");}
#line 1972 "y.tab.c"
    break;

  case 55: /* STMT: RETURN expr SEMICOLON  */
#line 306 "exprnTree.y"
                                {(yyval.treeNode) = createTree(noVal, noType, NULL, returnNode , (yyvsp[-1].treeNode),NULL, NULL);}
#line 1978 "y.tab.c"
    break;

  case 56: /* INPUTSTMT: READ '(' IDENTIFIER ')' SEMICOLON  */
#line 311 "exprnTree.y"
                                                        {(yyval.treeNode) = createTree(noVal, noType, NULL, readNode, (yyvsp[-2].treeNode),NULL, NULL);}
#line 1984 "y.tab.c"
    break;

  case 57: /* OUTPUTSTMT: WRITE '(' expr ')' SEMICOLON  */
#line 314 "exprnTree.y"
                                                {(yyval.treeNode) = createTree(noVal, noType, NULL, writeNode, (yyvsp[-2].treeNode),NULL, NULL);}
#line 1990 "y.tab.c"
    break;

  case 58: /* ASSIGNSTMT: IDENTIFIER ASSIGN expr SEMICOLON  */
#line 317 "exprnTree.y"
                                                {(yyval.treeNode) = createTree(noVal, noType, NULL, assignNode, (yyvsp[-3].treeNode),(yyvsp[-1].treeNode), NULL);}
#line 1996 "y.tab.c"
    break;

  case 59: /* ASSIGNSTMT: IDENTIFIER ASSIGN AMP IDENTIFIER SEMICOLON  */
#line 318 "exprnTree.y"
                                                                {  struct treeNode *temp = createTree(noVal, intType, NULL, addressNode, (yyvsp[-1].treeNode),NULL, NULL);
                                                                (yyval.treeNode) = createTree(noVal, noType, NULL, assignNode, (yyvsp[-4].treeNode),temp, NULL);
                                                            }
#line 2004 "y.tab.c"
    break;

  case 60: /* IFSTMT: IF '(' expr ')' THEN SLIST ELSE SLIST ENDIF SEMICOLON  */
#line 324 "exprnTree.y"
                                                                   { struct treeNode *temp = createTree(noVal, noType, NULL, elseNode, (yyvsp[-4].treeNode),(yyvsp[-2].treeNode), NULL); 
                                                                     (yyval.treeNode) = createTree(noVal, noType, NULL, ifNode, (yyvsp[-7].treeNode),temp, NULL);}
#line 2011 "y.tab.c"
    break;

  case 61: /* IFSTMT: IF '(' expr ')' THEN SLIST ENDIF SEMICOLON  */
#line 326 "exprnTree.y"
                                                        { (yyval.treeNode) = createTree(noVal, noType, NULL, ifNode , (yyvsp[-5].treeNode),(yyvsp[-2].treeNode), NULL);}
#line 2017 "y.tab.c"
    break;

  case 62: /* WHILESTMT: WHILE '(' expr ')' DO SLIST ENDWHILE SEMICOLON  */
#line 329 "exprnTree.y"
                                                            { (yyval.treeNode) = createTree(noVal, noType, NULL, whileNode, (yyvsp[-5].treeNode),(yyvsp[-2].treeNode), NULL);}
#line 2023 "y.tab.c"
    break;

  case 63: /* DOWHILESTMT: DO SLIST WHILE '(' expr ')' SEMICOLON  */
#line 331 "exprnTree.y"
                                                     { (yyval.treeNode) = createTree(noVal, noType, NULL, doWhileNode, (yyvsp[-2].treeNode),(yyvsp[-5].treeNode), NULL);}
#line 2029 "y.tab.c"
    break;

  case 64: /* REPEATUNTILSTMT: REPEAT SLIST UNTIL '(' expr ')' SEMICOLON  */
#line 333 "exprnTree.y"
                                                             { (yyval.treeNode) = createTree(noVal, noType, NULL, repeatUntilNode,(yyvsp[-2].treeNode),(yyvsp[-5].treeNode), NULL);}
#line 2035 "y.tab.c"
    break;

  case 65: /* expr: expr PLUS expr  */
#line 336 "exprnTree.y"
                                {(yyval.treeNode) = createTree(noVal, intType, NULL, plusNode, (yyvsp[-2].treeNode),(yyvsp[0].treeNode), NULL);}
#line 2041 "y.tab.c"
    break;

  case 66: /* expr: expr MINUS expr  */
#line 337 "exprnTree.y"
                                {(yyval.treeNode) = createTree(noVal, intType, NULL, minusNode,(yyvsp[-2].treeNode),(yyvsp[0].treeNode), NULL);}
#line 2047 "y.tab.c"
    break;

  case 67: /* expr: expr STAR expr  */
#line 338 "exprnTree.y"
                                {(yyval.treeNode) = createTree(noVal, intType, NULL, mulNode,(yyvsp[-2].treeNode),(yyvsp[0].treeNode), NULL);}
#line 2053 "y.tab.c"
    break;

  case 68: /* expr: expr DIV expr  */
#line 339 "exprnTree.y"
                                {(yyval.treeNode) = createTree(noVal, intType, NULL, divNode,(yyvsp[-2].treeNode),(yyvsp[0].treeNode), NULL);}
#line 2059 "y.tab.c"
    break;

  case 69: /* expr: expr MOD expr  */
#line 340 "exprnTree.y"
                        {(yyval.treeNode) = createTree(noVal, intType, NULL, modNode,(yyvsp[-2].treeNode),(yyvsp[0].treeNode), NULL);}
#line 2065 "y.tab.c"
    break;

  case 70: /* expr: expr GT expr  */
#line 341 "exprnTree.y"
                            {(yyval.treeNode) = createTree(noVal, boolType, NULL, gtNode,(yyvsp[-2].treeNode),(yyvsp[0].treeNode), NULL);}
#line 2071 "y.tab.c"
    break;

  case 71: /* expr: expr GE expr  */
#line 342 "exprnTree.y"
                            {(yyval.treeNode) = createTree(noVal, boolType, NULL, geNode,(yyvsp[-2].treeNode),(yyvsp[0].treeNode), NULL);}
#line 2077 "y.tab.c"
    break;

  case 72: /* expr: expr LT expr  */
#line 343 "exprnTree.y"
                            {(yyval.treeNode) = createTree(noVal, boolType, NULL, ltNode,(yyvsp[-2].treeNode),(yyvsp[0].treeNode), NULL);}
#line 2083 "y.tab.c"
    break;

  case 73: /* expr: expr LE expr  */
#line 344 "exprnTree.y"
                            {(yyval.treeNode) = createTree(noVal, boolType, NULL, leNode,(yyvsp[-2].treeNode),(yyvsp[0].treeNode), NULL);}
#line 2089 "y.tab.c"
    break;

  case 74: /* expr: expr EQ expr  */
#line 345 "exprnTree.y"
                            {(yyval.treeNode) = createTree(noVal, boolType, NULL, eqNode,(yyvsp[-2].treeNode),(yyvsp[0].treeNode), NULL);}
#line 2095 "y.tab.c"
    break;

  case 75: /* expr: expr NE expr  */
#line 346 "exprnTree.y"
                            {(yyval.treeNode) = createTree(noVal, boolType, NULL, neNode,(yyvsp[-2].treeNode),(yyvsp[0].treeNode), NULL);}
#line 2101 "y.tab.c"
    break;

  case 76: /* expr: expr AND expr  */
#line 347 "exprnTree.y"
                        {(yyval.treeNode) = createTree(noVal, boolType, NULL, andNode,(yyvsp[-2].treeNode),(yyvsp[0].treeNode), NULL);}
#line 2107 "y.tab.c"
    break;

  case 77: /* expr: expr OR expr  */
#line 348 "exprnTree.y"
                            {(yyval.treeNode) = createTree(noVal, boolType, NULL, orNode,(yyvsp[-2].treeNode),(yyvsp[0].treeNode), NULL);}
#line 2113 "y.tab.c"
    break;

  case 78: /* expr: '(' expr ')'  */
#line 349 "exprnTree.y"
                                {(yyval.treeNode) = (yyvsp[-1].treeNode);}
#line 2119 "y.tab.c"
    break;

  case 79: /* expr: NUM  */
#line 350 "exprnTree.y"
                                    {(yyval.treeNode) = createTree((yyvsp[0].number), intType, NULL, numNode, NULL,NULL, NULL);}
#line 2125 "y.tab.c"
    break;

  case 80: /* expr: STR  */
#line 351 "exprnTree.y"
                        {(yyval.treeNode) = createTree(noVal, strType, (yyvsp[0].string), strNode, NULL,NULL, NULL);}
#line 2131 "y.tab.c"
    break;

  case 81: /* expr: ID '(' ')'  */
#line 352 "exprnTree.y"
                        {  struct treeNode* temp = createTree(noVal, noType, (yyvsp[-2].string), funcNode , NULL,NULL, NULL);
                            findType(gst,lst,temp);
                            temp->val = getFuncLabel(gst,(yyvsp[-2].string));
                            if(checkArgList(NULL,(yyvsp[-2].string),gst)) yyerror("argument list not matched");
                            (yyval.treeNode) = temp;}
#line 2141 "y.tab.c"
    break;

  case 82: /* expr: ID '(' ArgList ')'  */
#line 357 "exprnTree.y"
                                {  struct treeNode* temp = createTree(noVal, noType, (yyvsp[-3].string), funcNode , NULL ,NULL ,(yyvsp[-1].argNode));
                                    // newl;newl;newl;inorder($3);newl;newl;
                            findType(gst,lst,temp);
                            // debug;
                            // printArgList($3);
                            temp->val = getFuncLabel(gst,(yyvsp[-3].string));
                    
                            if(checkArgList((yyvsp[-1].argNode),(yyvsp[-3].string),gst)) yyerror("argument list not matched");
                            (yyval.treeNode) = temp;
                            }
#line 2156 "y.tab.c"
    break;

  case 83: /* expr: IDENTIFIER  */
#line 367 "exprnTree.y"
                                {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 2162 "y.tab.c"
    break;

  case 84: /* ArgList: ArgList ',' expr  */
#line 370 "exprnTree.y"
                                {   struct argNode* temp = createArgNode((yyvsp[0].treeNode));joinArgNode((yyvsp[-2].argNode),temp); (yyval.argNode) = (yyvsp[-2].argNode);  }
#line 2168 "y.tab.c"
    break;

  case 85: /* ArgList: expr  */
#line 372 "exprnTree.y"
                                {     struct argNode* temp  = createArgNode((yyvsp[0].treeNode));  
                            // newl;newl;newl;inorder(temp->arg);newl;newl; 
                            // printArgList(temp);
                            (yyval.argNode) = temp; 
                        }
#line 2178 "y.tab.c"
    break;

  case 86: /* IDENTIFIER: ID  */
#line 379 "exprnTree.y"
                                    { struct treeNode* temp = createTree(noVal, noType, (yyvsp[0].string), idNode , NULL,NULL, NULL);
                                    // printf("%s" , $<string>1);
                                    findType(gst,lst,temp);
                                    
                                    (yyval.treeNode) = temp;}
#line 2188 "y.tab.c"
    break;

  case 87: /* IDENTIFIER: ID '[' expr ']'  */
#line 384 "exprnTree.y"
                                    {  
                                    struct treeNode* temp = createTree(noVal, noType, (yyvsp[-3].string), idNode, (yyvsp[-1].treeNode),NULL, NULL);
                                    findType(gst,lst,temp);
                                    if ( temp->localSymbolTableEntry != NULL && temp->localSymbolTableEntry->size <= evaluate((yyvsp[-1].treeNode))) yyerror("Array index out of bounds");
                                    if ( temp->localSymbolTableEntry == NULL && temp->globalSymbolTableEntry->size <= evaluate((yyvsp[-1].treeNode))) yyerror("Array index out of bounds");
                                    (yyval.treeNode) = temp;}
#line 2199 "y.tab.c"
    break;


#line 2203 "y.tab.c"

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

#line 401 "exprnTree.y"


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

                  
