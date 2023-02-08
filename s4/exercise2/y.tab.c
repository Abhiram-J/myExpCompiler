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
 
 int yylex(void);
 extern FILE* yyin;
 FILE* ip;

 struct symbolTable* gst;

#line 88 "y.tab.c"

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
    IF = 279,                      /* IF  */
    THEN = 280,                    /* THEN  */
    ENDIF = 281,                   /* ENDIF  */
    WHILE = 282,                   /* WHILE  */
    DO = 283,                      /* DO  */
    ENDWHILE = 284,                /* ENDWHILE  */
    REPEAT = 285,                  /* REPEAT  */
    UNTIL = 286,                   /* UNTIL  */
    GT = 287,                      /* GT  */
    GE = 288,                      /* GE  */
    LT = 289,                      /* LT  */
    LE = 290,                      /* LE  */
    EQ = 291,                      /* EQ  */
    NE = 292,                      /* NE  */
    ADDR = 293                     /* ADDR  */
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
#define IF 279
#define THEN 280
#define ENDIF 281
#define WHILE 282
#define DO 283
#define ENDWHILE 284
#define REPEAT 285
#define UNTIL 286
#define GT 287
#define GE 288
#define LT 289
#define LE 290
#define EQ 291
#define NE 292
#define ADDR 293

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 18 "exprnTree.y"

    struct treeNode* treeNode;
    struct symbolNode* symbolNode;
    int number;
    char* string;


#line 225 "y.tab.c"

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
  YYSYMBOL_IF = 24,                        /* IF  */
  YYSYMBOL_THEN = 25,                      /* THEN  */
  YYSYMBOL_ENDIF = 26,                     /* ENDIF  */
  YYSYMBOL_WHILE = 27,                     /* WHILE  */
  YYSYMBOL_DO = 28,                        /* DO  */
  YYSYMBOL_ENDWHILE = 29,                  /* ENDWHILE  */
  YYSYMBOL_REPEAT = 30,                    /* REPEAT  */
  YYSYMBOL_UNTIL = 31,                     /* UNTIL  */
  YYSYMBOL_GT = 32,                        /* GT  */
  YYSYMBOL_GE = 33,                        /* GE  */
  YYSYMBOL_LT = 34,                        /* LT  */
  YYSYMBOL_LE = 35,                        /* LE  */
  YYSYMBOL_EQ = 36,                        /* EQ  */
  YYSYMBOL_NE = 37,                        /* NE  */
  YYSYMBOL_ADDR = 38,                      /* ADDR  */
  YYSYMBOL_39_ = 39,                       /* ','  */
  YYSYMBOL_40_ = 40,                       /* '['  */
  YYSYMBOL_41_ = 41,                       /* ']'  */
  YYSYMBOL_42_ = 42,                       /* '('  */
  YYSYMBOL_43_ = 43,                       /* ')'  */
  YYSYMBOL_YYACCEPT = 44,                  /* $accept  */
  YYSYMBOL_program = 45,                   /* program  */
  YYSYMBOL_DECLARATIONS = 46,              /* DECLARATIONS  */
  YYSYMBOL_DLIST = 47,                     /* DLIST  */
  YYSYMBOL_DSTMT = 48,                     /* DSTMT  */
  YYSYMBOL_TYPE = 49,                      /* TYPE  */
  YYSYMBOL_VARLIST = 50,                   /* VARLIST  */
  YYSYMBOL_IDDECL = 51,                    /* IDDECL  */
  YYSYMBOL_SLIST = 52,                     /* SLIST  */
  YYSYMBOL_STMT = 53,                      /* STMT  */
  YYSYMBOL_INPUTSTMT = 54,                 /* INPUTSTMT  */
  YYSYMBOL_OUTPUTSTMT = 55,                /* OUTPUTSTMT  */
  YYSYMBOL_ASSIGNSTMT = 56,                /* ASSIGNSTMT  */
  YYSYMBOL_IFSTMT = 57,                    /* IFSTMT  */
  YYSYMBOL_WHILESTMT = 58,                 /* WHILESTMT  */
  YYSYMBOL_DOWHILESTMT = 59,               /* DOWHILESTMT  */
  YYSYMBOL_REPEATUNTILSTMT = 60,           /* REPEATUNTILSTMT  */
  YYSYMBOL_expr = 61,                      /* expr  */
  YYSYMBOL_IDENTIFIER = 62                 /* IDENTIFIER  */
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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   435

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  56
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  136

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   293


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
      42,    43,     2,     2,    39,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    40,     2,    41,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    38,    38,    52,    57,    62,    68,    71,    72,    75,
      85,    86,    89,    91,    95,    98,   102,   107,   110,   111,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   124,
     127,   130,   131,   137,   139,   142,   144,   146,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   166,   168,   173,   179
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
  "STR", "AMP", "IF", "THEN", "ENDIF", "WHILE", "DO", "ENDWHILE", "REPEAT",
  "UNTIL", "GT", "GE", "LT", "LE", "EQ", "NE", "ADDR", "','", "'['", "']'",
  "'('", "')'", "$accept", "program", "DECLARATIONS", "DLIST", "DSTMT",
  "TYPE", "VARLIST", "IDDECL", "SLIST", "STMT", "INPUTSTMT", "OUTPUTSTMT",
  "ASSIGNSTMT", "IFSTMT", "WHILESTMT", "DOWHILESTMT", "REPEATUNTILSTMT",
  "expr", "IDENTIFIER", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-25)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -2,   -11,     6,    -1,    14,   341,   -25,   -25,   -25,   -25,
     -25,    20,   -25,     4,   -23,    24,     7,    -4,     1,    28,
      34,    23,    29,   397,   397,   349,   -25,   -25,   -25,   -25,
     -25,   -25,   -25,   -25,    62,   -25,   -25,    30,    70,    -6,
     -25,    60,   -25,   -25,    19,    60,   -25,   -25,    60,    60,
     405,   311,    58,   -25,     9,    71,   -25,   -25,     4,   -25,
     -25,    60,   215,   -25,    33,   116,   128,   149,    35,    36,
     -25,    19,   237,    38,   -25,   161,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    41,    64,    67,
      59,    61,    60,    60,    72,   -25,    46,   -25,    40,    40,
     270,   270,   270,   276,   276,   276,   276,   276,   276,    60,
     -25,   -25,   397,   397,   182,   194,   -25,    83,   227,   319,
     367,   -14,    74,    50,   -25,   397,    76,    79,   -25,   -25,
     -25,   375,   -25,   -25,    80,   -25
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     1,     4,     6,    10,
      11,     0,     8,     0,    53,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     5,     7,    14,     0,     0,
      13,     0,    56,     3,     0,     0,    27,    28,     0,     0,
       0,     0,     0,    18,     0,     0,    17,     9,     0,    51,
      52,     0,     0,    50,     0,     0,     0,     0,     0,     0,
       2,     0,     0,     0,    12,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    54,     0,     0,
       0,     0,     0,     0,     0,    31,    15,    49,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,     0,
      29,    30,     0,     0,     0,     0,    32,     0,     0,     0,
       0,     0,     0,     0,    55,     0,     0,     0,    36,    37,
      16,     0,    34,    35,     0,    33
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -25,   -25,   -25,   -25,    88,   -25,   -25,    42,   -19,   -22,
     -25,   -25,   -25,   -25,   -25,   -25,   -25,   -24,    -5
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     5,    11,    12,    13,    39,    40,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    62,    63
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      34,     3,   128,    53,    50,    51,     6,    37,     4,     1,
      57,    38,    14,    59,   113,     7,    15,    41,    34,    34,
      34,    65,    14,    43,    66,    67,    15,    42,    53,    53,
      72,    60,    71,    58,     8,     9,    10,    75,    44,    64,
      35,     9,    10,    45,    46,    34,    34,    78,    79,    80,
      47,    61,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,    14,    59,    48,    94,    15,   114,   115,
      55,    49,    54,    56,    70,    73,    88,    92,    93,    96,
     110,   109,    60,   111,   112,   118,   117,   123,   116,   113,
     129,   130,   132,   119,   120,   133,   135,    53,    53,    36,
      74,     0,    61,     0,     0,     0,   131,    34,    34,    53,
       0,     0,     0,     0,    34,    34,     0,     0,     0,     0,
      34,    76,    77,    78,    79,    80,    34,     0,     0,     0,
       0,     0,     0,    76,    77,    78,    79,    80,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    81,    82,
      83,    84,    85,    86,    76,    77,    78,    79,    80,    89,
      81,    82,    83,    84,    85,    86,    76,    77,    78,    79,
      80,    90,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    81,    82,    83,    84,    85,    86,    76,    77,    78,
      79,    80,    91,    81,    82,    83,    84,    85,    86,    76,
      77,    78,    79,    80,    97,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    81,    82,    83,    84,    85,    86,
      76,    77,    78,    79,    80,   121,    81,    82,    83,    84,
      85,    86,    76,    77,    78,    79,    80,   122,     0,     0,
       0,     0,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    95,     0,     0,    87,     0,     0,    81,
      82,    83,    84,    85,    86,     0,     0,     0,   124,    81,
      82,    83,    84,    85,    86,    76,    77,    78,    79,    80,
       0,    76,    77,    78,    79,    80,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    81,    82,    83,    84,    85,    86,    -1,    -1,
      -1,    -1,    -1,    -1,    14,     0,     0,     0,    15,     0,
       0,     0,    14,     0,    17,    18,    15,     0,    19,    20,
       0,     0,    17,    18,   125,    21,    19,    20,    22,    23,
       0,    24,    69,    21,    14,   126,    22,    23,    15,    24,
       0,     0,    14,    16,    17,    18,    15,     0,    19,    20,
       0,    52,    17,    18,     0,    21,    19,    20,    22,    23,
      14,    24,     0,    21,    15,     0,    22,    23,    14,    24,
      17,    18,    15,     0,    19,    20,     0,     0,    17,    18,
       0,    21,    19,    20,    22,    23,   127,    24,     0,    21,
      14,   134,    22,    23,    15,    24,     0,     0,    14,     0,
      17,    18,    15,     0,    19,    20,     0,     0,    17,    18,
       0,    21,    19,    20,    22,    23,     0,    24,     0,    21,
       0,     0,    68,    23,     0,    24
};

static const yytype_int16 yycheck[] =
{
       5,    12,    16,    25,    23,    24,     0,     3,    19,    11,
      16,     7,     3,     4,    28,    16,     7,    40,    23,    24,
      25,    45,     3,    16,    48,    49,     7,     3,    50,    51,
      54,    22,    23,    39,    20,    21,    22,    61,    42,    44,
      20,    21,    22,    42,    16,    50,    51,     7,     8,     9,
      16,    42,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,     3,     4,    42,    71,     7,    92,    93,
      40,    42,    10,     3,    16,     4,    43,    42,    42,    41,
      16,    40,    22,    16,    25,   109,    40,     4,    16,    28,
      16,    41,    16,   112,   113,    16,    16,   119,   120,    11,
      58,    -1,    42,    -1,    -1,    -1,   125,   112,   113,   131,
      -1,    -1,    -1,    -1,   119,   120,    -1,    -1,    -1,    -1,
     125,     5,     6,     7,     8,     9,   131,    -1,    -1,    -1,
      -1,    -1,    -1,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      34,    35,    36,    37,     5,     6,     7,     8,     9,    43,
      32,    33,    34,    35,    36,    37,     5,     6,     7,     8,
       9,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,     5,     6,     7,
       8,     9,    43,    32,    33,    34,    35,    36,    37,     5,
       6,     7,     8,     9,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
       5,     6,     7,     8,     9,    43,    32,    33,    34,    35,
      36,    37,     5,     6,     7,     8,     9,    43,    -1,    -1,
      -1,    -1,     5,     6,     7,     8,     9,    32,    33,    34,
      35,    36,    37,    16,    -1,    -1,    41,    -1,    -1,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    41,    32,
      33,    34,    35,    36,    37,     5,     6,     7,     8,     9,
      -1,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    34,    35,    36,    37,    32,    33,
      34,    35,    36,    37,     3,    -1,    -1,    -1,     7,    -1,
      -1,    -1,     3,    -1,    13,    14,     7,    -1,    17,    18,
      -1,    -1,    13,    14,    15,    24,    17,    18,    27,    28,
      -1,    30,    31,    24,     3,    26,    27,    28,     7,    30,
      -1,    -1,     3,    12,    13,    14,     7,    -1,    17,    18,
      -1,    12,    13,    14,    -1,    24,    17,    18,    27,    28,
       3,    30,    -1,    24,     7,    -1,    27,    28,     3,    30,
      13,    14,     7,    -1,    17,    18,    -1,    -1,    13,    14,
      -1,    24,    17,    18,    27,    28,    29,    30,    -1,    24,
       3,    26,    27,    28,     7,    30,    -1,    -1,     3,    -1,
      13,    14,     7,    -1,    17,    18,    -1,    -1,    13,    14,
      -1,    24,    17,    18,    27,    28,    -1,    30,    -1,    24,
      -1,    -1,    27,    28,    -1,    30
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    11,    45,    12,    19,    46,     0,    16,    20,    21,
      22,    47,    48,    49,     3,     7,    12,    13,    14,    17,
      18,    24,    27,    28,    30,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    62,    20,    48,     3,     7,    50,
      51,    40,     3,    16,    42,    42,    16,    16,    42,    42,
      52,    52,    12,    53,    10,    40,     3,    16,    39,     4,
      22,    42,    61,    62,    62,    61,    61,    61,    27,    31,
      16,    23,    61,     4,    51,    61,     5,     6,     7,     8,
       9,    32,    33,    34,    35,    36,    37,    41,    43,    43,
      43,    43,    42,    42,    62,    16,    41,    43,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    40,
      16,    16,    25,    28,    61,    61,    16,    40,    61,    52,
      52,    43,    43,     4,    41,    15,    26,    29,    16,    16,
      41,    52,    16,    16,    26,    16
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    44,    45,    45,    45,    46,    46,    47,    47,    48,
      49,    49,    50,    50,    51,    51,    51,    51,    52,    52,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    54,
      55,    56,    56,    57,    57,    58,    59,    60,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    62,    62,    62,    62
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     4,     3,     3,     2,     2,     1,     3,
       1,     1,     3,     1,     1,     4,     7,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     5,
       5,     4,     5,    10,     8,     8,     7,     7,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     1,     1,     1,     4,     7,     2
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
  case 2: /* program: BEG DECLARATIONS SLIST END SEMICOLON  */
#line 38 "exprnTree.y"
                                              {
                            (yyval.treeNode) = (yyvsp[-2].treeNode);
                            inorder((yyvsp[-2].treeNode));
                            printf("\n");
                            FILE *fp = fopen("exprnTree.xsm", "w");
                            printHelper(fp,entryCode,-1,-1);
                            codeGen((yyvsp[-2].treeNode),fp);
                            printHelper(fp,exitCode,-1,-1);
                            freeGST(gst->head);
                            freeTree((yyvsp[-2].treeNode));
                            fclose(fp);
                            fclose(ip);
                            exit(0);
			              }
#line 1418 "y.tab.c"
    break;

  case 3: /* program: BEG DECLARATIONS END SEMICOLON  */
#line 52 "exprnTree.y"
                                          {
                            freeGST(gst->head);
                            fclose(ip);
				            exit(0);
			              }
#line 1428 "y.tab.c"
    break;

  case 4: /* program: BEG END SEMICOLON  */
#line 57 "exprnTree.y"
                                 {
                            fclose(ip);
				            exit(0);
			              }
#line 1437 "y.tab.c"
    break;

  case 5: /* DECLARATIONS: DECL DLIST ENDDECL  */
#line 62 "exprnTree.y"
                                        {
						gst = (struct symbolTable* ) malloc(sizeof(struct symbolTable));
                        gst->head = (yyvsp[-1].symbolNode);
                        assignBinding(gst);
                        printSymbolTable(gst);
					}
#line 1448 "y.tab.c"
    break;

  case 6: /* DECLARATIONS: DECL ENDDECL  */
#line 68 "exprnTree.y"
                                        {}
#line 1454 "y.tab.c"
    break;

  case 7: /* DLIST: DLIST DSTMT  */
#line 71 "exprnTree.y"
                                        { joinNode((yyvsp[-1].symbolNode),(yyvsp[0].symbolNode));(yyval.symbolNode) = (yyvsp[-1].symbolNode);}
#line 1460 "y.tab.c"
    break;

  case 8: /* DLIST: DSTMT  */
#line 72 "exprnTree.y"
                                        {(yyval.symbolNode) = (yyvsp[0].symbolNode);}
#line 1466 "y.tab.c"
    break;

  case 9: /* DSTMT: TYPE VARLIST SEMICOLON  */
#line 75 "exprnTree.y"
                                        {
                                        struct symbolNode* temp = (yyvsp[-1].symbolNode);
                                        while(temp!=NULL){
                                            if ( temp->type == noType) temp->type = (yyvsp[-2].number);
                                            temp = temp->next;
                                        }
                                        (yyval.symbolNode) = (yyvsp[-1].symbolNode);
                                    }
#line 1479 "y.tab.c"
    break;

  case 10: /* TYPE: INT  */
#line 85 "exprnTree.y"
                                        {(yyval.number) = intType;}
#line 1485 "y.tab.c"
    break;

  case 11: /* TYPE: STR  */
#line 86 "exprnTree.y"
                                        {(yyval.number) = strType;}
#line 1491 "y.tab.c"
    break;

  case 12: /* VARLIST: VARLIST ',' IDDECL  */
#line 89 "exprnTree.y"
                                { joinNode((yyvsp[-2].symbolNode),(yyvsp[0].symbolNode)); (yyval.symbolNode) = (yyvsp[-2].symbolNode);}
#line 1497 "y.tab.c"
    break;

  case 13: /* VARLIST: IDDECL  */
#line 91 "exprnTree.y"
                                {(yyval.symbolNode) = (yyvsp[0].symbolNode);}
#line 1503 "y.tab.c"
    break;

  case 14: /* IDDECL: ID  */
#line 95 "exprnTree.y"
                                                {  // add duplicate check
								(yyval.symbolNode) = createSymbolNode((yyvsp[0].string),noType,1 , 0);
							}
#line 1511 "y.tab.c"
    break;

  case 15: /* IDDECL: ID '[' NUM ']'  */
#line 98 "exprnTree.y"
                                                {
								(yyval.symbolNode) = createSymbolNode((yyvsp[-3].string),noType,(yyvsp[-1].number) , (yyvsp[-1].number));

							}
#line 1520 "y.tab.c"
    break;

  case 16: /* IDDECL: ID '[' NUM ']' '[' NUM ']'  */
#line 102 "exprnTree.y"
                                                {

								(yyval.symbolNode) = createSymbolNode((yyvsp[-6].string),noType,(yyvsp[-4].number) * (yyvsp[-1].number) , (yyvsp[-4].number));

							}
#line 1530 "y.tab.c"
    break;

  case 17: /* IDDECL: STAR ID  */
#line 107 "exprnTree.y"
                                        { (yyval.symbolNode) = createSymbolNode((yyvsp[0].string),intType,1 , 0);}
#line 1536 "y.tab.c"
    break;

  case 18: /* SLIST: SLIST STMT  */
#line 110 "exprnTree.y"
                        {(yyval.treeNode) = createTree(noVal, noType, NULL, connectorNode,(yyvsp[-1].treeNode),(yyvsp[0].treeNode));}
#line 1542 "y.tab.c"
    break;

  case 19: /* SLIST: STMT  */
#line 111 "exprnTree.y"
                                {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 1548 "y.tab.c"
    break;

  case 20: /* STMT: INPUTSTMT  */
#line 113 "exprnTree.y"
                        {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 1554 "y.tab.c"
    break;

  case 21: /* STMT: OUTPUTSTMT  */
#line 114 "exprnTree.y"
                        {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 1560 "y.tab.c"
    break;

  case 22: /* STMT: ASSIGNSTMT  */
#line 115 "exprnTree.y"
                        {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 1566 "y.tab.c"
    break;

  case 23: /* STMT: IFSTMT  */
#line 116 "exprnTree.y"
                    {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 1572 "y.tab.c"
    break;

  case 24: /* STMT: WHILESTMT  */
#line 117 "exprnTree.y"
                    {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 1578 "y.tab.c"
    break;

  case 25: /* STMT: DOWHILESTMT  */
#line 118 "exprnTree.y"
                    {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 1584 "y.tab.c"
    break;

  case 26: /* STMT: REPEATUNTILSTMT  */
#line 119 "exprnTree.y"
                        {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 1590 "y.tab.c"
    break;

  case 27: /* STMT: BREAK SEMICOLON  */
#line 120 "exprnTree.y"
                         {(yyval.treeNode) = createTree(noVal, noType, NULL, breakNode , NULL,NULL);}
#line 1596 "y.tab.c"
    break;

  case 28: /* STMT: CONTINUE SEMICOLON  */
#line 121 "exprnTree.y"
                            {(yyval.treeNode) = createTree(noVal, noType, NULL, continueNode , NULL,NULL);}
#line 1602 "y.tab.c"
    break;

  case 29: /* INPUTSTMT: READ '(' IDENTIFIER ')' SEMICOLON  */
#line 124 "exprnTree.y"
                                                        {(yyval.treeNode) = createTree(noVal, noType, NULL, readNode, (yyvsp[-2].treeNode),NULL);}
#line 1608 "y.tab.c"
    break;

  case 30: /* OUTPUTSTMT: WRITE '(' expr ')' SEMICOLON  */
#line 127 "exprnTree.y"
                                                {(yyval.treeNode) = createTree(noVal, noType, NULL, writeNode, (yyvsp[-2].treeNode),NULL);}
#line 1614 "y.tab.c"
    break;

  case 31: /* ASSIGNSTMT: IDENTIFIER ASSIGN expr SEMICOLON  */
#line 130 "exprnTree.y"
                                                {(yyval.treeNode) = createTree(noVal, noType, NULL, assignNode, (yyvsp[-3].treeNode),(yyvsp[-1].treeNode));}
#line 1620 "y.tab.c"
    break;

  case 32: /* ASSIGNSTMT: IDENTIFIER ASSIGN AMP IDENTIFIER SEMICOLON  */
#line 131 "exprnTree.y"
                                                                {  struct treeNode *temp = createTree(noVal, intType, NULL, addressNode, (yyvsp[-1].treeNode),NULL);
                                                                (yyval.treeNode) = createTree(noVal, noType, NULL, assignNode, (yyvsp[-4].treeNode),temp);
                                                            }
#line 1628 "y.tab.c"
    break;

  case 33: /* IFSTMT: IF '(' expr ')' THEN SLIST ELSE SLIST ENDIF SEMICOLON  */
#line 137 "exprnTree.y"
                                                                   { struct treeNode *temp = createTree(noVal, noType, NULL, elseNode, (yyvsp[-4].treeNode),(yyvsp[-2].treeNode)); 
                                                                     (yyval.treeNode) = createTree(noVal, noType, NULL, ifNode, (yyvsp[-7].treeNode),temp);}
#line 1635 "y.tab.c"
    break;

  case 34: /* IFSTMT: IF '(' expr ')' THEN SLIST ENDIF SEMICOLON  */
#line 139 "exprnTree.y"
                                                        { (yyval.treeNode) = createTree(noVal, noType, NULL, ifNode , (yyvsp[-5].treeNode),(yyvsp[-2].treeNode));}
#line 1641 "y.tab.c"
    break;

  case 35: /* WHILESTMT: WHILE '(' expr ')' DO SLIST ENDWHILE SEMICOLON  */
#line 142 "exprnTree.y"
                                                            { (yyval.treeNode) = createTree(noVal, noType, NULL, whileNode, (yyvsp[-5].treeNode),(yyvsp[-2].treeNode));}
#line 1647 "y.tab.c"
    break;

  case 36: /* DOWHILESTMT: DO SLIST WHILE '(' expr ')' SEMICOLON  */
#line 144 "exprnTree.y"
                                                     { (yyval.treeNode) = createTree(noVal, noType, NULL, doWhileNode, (yyvsp[-2].treeNode),(yyvsp[-5].treeNode));}
#line 1653 "y.tab.c"
    break;

  case 37: /* REPEATUNTILSTMT: REPEAT SLIST UNTIL '(' expr ')' SEMICOLON  */
#line 146 "exprnTree.y"
                                                             { (yyval.treeNode) = createTree(noVal, noType, NULL, repeatUntilNode,(yyvsp[-2].treeNode),(yyvsp[-5].treeNode));}
#line 1659 "y.tab.c"
    break;

  case 38: /* expr: expr PLUS expr  */
#line 149 "exprnTree.y"
                                {(yyval.treeNode) = createTree(noVal, intType, NULL, plusNode, (yyvsp[-2].treeNode),(yyvsp[0].treeNode));}
#line 1665 "y.tab.c"
    break;

  case 39: /* expr: expr MINUS expr  */
#line 150 "exprnTree.y"
                                {(yyval.treeNode) = createTree(noVal, intType, NULL, minusNode,(yyvsp[-2].treeNode),(yyvsp[0].treeNode));}
#line 1671 "y.tab.c"
    break;

  case 40: /* expr: expr STAR expr  */
#line 151 "exprnTree.y"
                                {(yyval.treeNode) = createTree(noVal, intType, NULL, mulNode,(yyvsp[-2].treeNode),(yyvsp[0].treeNode));}
#line 1677 "y.tab.c"
    break;

  case 41: /* expr: expr DIV expr  */
#line 152 "exprnTree.y"
                                {(yyval.treeNode) = createTree(noVal, intType, NULL, divNode,(yyvsp[-2].treeNode),(yyvsp[0].treeNode));}
#line 1683 "y.tab.c"
    break;

  case 42: /* expr: expr MOD expr  */
#line 153 "exprnTree.y"
                        {(yyval.treeNode) = createTree(noVal, intType, NULL, modNode,(yyvsp[-2].treeNode),(yyvsp[0].treeNode));}
#line 1689 "y.tab.c"
    break;

  case 43: /* expr: expr GT expr  */
#line 154 "exprnTree.y"
                            {(yyval.treeNode) = createTree(noVal, boolType, NULL, gtNode,(yyvsp[-2].treeNode),(yyvsp[0].treeNode));}
#line 1695 "y.tab.c"
    break;

  case 44: /* expr: expr GE expr  */
#line 155 "exprnTree.y"
                            {(yyval.treeNode) = createTree(noVal, boolType, NULL, geNode,(yyvsp[-2].treeNode),(yyvsp[0].treeNode));}
#line 1701 "y.tab.c"
    break;

  case 45: /* expr: expr LT expr  */
#line 156 "exprnTree.y"
                            {(yyval.treeNode) = createTree(noVal, boolType, NULL, ltNode,(yyvsp[-2].treeNode),(yyvsp[0].treeNode));}
#line 1707 "y.tab.c"
    break;

  case 46: /* expr: expr LE expr  */
#line 157 "exprnTree.y"
                            {(yyval.treeNode) = createTree(noVal, boolType, NULL, leNode,(yyvsp[-2].treeNode),(yyvsp[0].treeNode));}
#line 1713 "y.tab.c"
    break;

  case 47: /* expr: expr EQ expr  */
#line 158 "exprnTree.y"
                            {(yyval.treeNode) = createTree(noVal, boolType, NULL, eqNode,(yyvsp[-2].treeNode),(yyvsp[0].treeNode));}
#line 1719 "y.tab.c"
    break;

  case 48: /* expr: expr NE expr  */
#line 159 "exprnTree.y"
                            {(yyval.treeNode) = createTree(noVal, boolType, NULL, neNode,(yyvsp[-2].treeNode),(yyvsp[0].treeNode));}
#line 1725 "y.tab.c"
    break;

  case 49: /* expr: '(' expr ')'  */
#line 160 "exprnTree.y"
                                {(yyval.treeNode) = (yyvsp[-1].treeNode);}
#line 1731 "y.tab.c"
    break;

  case 50: /* expr: IDENTIFIER  */
#line 161 "exprnTree.y"
                                {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 1737 "y.tab.c"
    break;

  case 51: /* expr: NUM  */
#line 162 "exprnTree.y"
                                    {(yyval.treeNode) = createTree((yyvsp[0].number), intType, NULL, numNode, NULL,NULL);}
#line 1743 "y.tab.c"
    break;

  case 52: /* expr: STR  */
#line 163 "exprnTree.y"
                        {(yyval.treeNode) = createTree(noVal, strType, (yyvsp[0].string), strNode, NULL,NULL);}
#line 1749 "y.tab.c"
    break;

  case 53: /* IDENTIFIER: ID  */
#line 166 "exprnTree.y"
                                    { struct treeNode* temp = createTree(noVal, noType, (yyvsp[0].string), idNode , NULL,NULL);
                                    findType(gst,temp);(yyval.treeNode) = temp;}
#line 1756 "y.tab.c"
    break;

  case 54: /* IDENTIFIER: ID '[' expr ']'  */
#line 168 "exprnTree.y"
                                    {  
                                    struct treeNode* temp = createTree(noVal, noType, (yyvsp[-3].string), idNode, (yyvsp[-1].treeNode),NULL);
                                    findType(gst,temp);
                                    if ( temp->symbolTableEntry->length <= evaluate((yyvsp[-1].treeNode))) yyerror("Array index out of bounds");
                                    (yyval.treeNode) = temp;}
#line 1766 "y.tab.c"
    break;

  case 55: /* IDENTIFIER: ID '[' expr ']' '[' expr ']'  */
#line 173 "exprnTree.y"
                                            { struct treeNode* temp = createTree(noVal, noType, (yyvsp[-6].string), idNode, (yyvsp[-4].treeNode),(yyvsp[-1].treeNode));
                                            findType(gst,temp);
                                            int x = evaluate((yyvsp[-4].treeNode)) , y = evaluate((yyvsp[-1].treeNode));
                                            if ( temp->symbolTableEntry->length <= evaluate((yyvsp[-4].treeNode)) || (temp->symbolTableEntry->size)/(temp->symbolTableEntry->length) <= evaluate((yyvsp[-1].treeNode))) yyerror("Array index out of bounds"); // need to check for out of bounds
                                           
                                            (yyval.treeNode) = temp;}
#line 1777 "y.tab.c"
    break;

  case 56: /* IDENTIFIER: STAR ID  */
#line 179 "exprnTree.y"
                                     { 
                                        struct treeNode* id = createTree(noVal, noType, (yyvsp[0].string), idNode, NULL,NULL);
                                        findType(gst,id);
                                        struct treeNode* pointer = createTree(noVal, id->type, NULL, pointerNode, id,NULL);
                                        // printf("id type is %d",pointer->type);
                                        (yyval.treeNode) = pointer;
                                     }
#line 1789 "y.tab.c"
    break;


#line 1793 "y.tab.c"

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

#line 189 "exprnTree.y"


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
