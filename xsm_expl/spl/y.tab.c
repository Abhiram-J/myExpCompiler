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
#line 1 "splparser.y"

#include<stdio.h>
#include<stdlib.h>
#include "data.h"
#include "spl.h"
#include "file.h"
#include "node.h"

#line 80 "y.tab.c"

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

#line 219 "y.tab.c"

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
  YYSYMBOL_ALIAS = 3,                      /* ALIAS  */
  YYSYMBOL_DEFINE = 4,                     /* DEFINE  */
  YYSYMBOL_DO = 5,                         /* DO  */
  YYSYMBOL_ELSE = 6,                       /* ELSE  */
  YYSYMBOL_ENDIF = 7,                      /* ENDIF  */
  YYSYMBOL_ENDWHILE = 8,                   /* ENDWHILE  */
  YYSYMBOL_IF = 9,                         /* IF  */
  YYSYMBOL_RETURN = 10,                    /* RETURN  */
  YYSYMBOL_IRETURN = 11,                   /* IRETURN  */
  YYSYMBOL_LOAD = 12,                      /* LOAD  */
  YYSYMBOL_STORE = 13,                     /* STORE  */
  YYSYMBOL_THEN = 14,                      /* THEN  */
  YYSYMBOL_WHILE = 15,                     /* WHILE  */
  YYSYMBOL_HALT = 16,                      /* HALT  */
  YYSYMBOL_REG = 17,                       /* REG  */
  YYSYMBOL_NUM = 18,                       /* NUM  */
  YYSYMBOL_ASSIGNOP = 19,                  /* ASSIGNOP  */
  YYSYMBOL_ARITHOP1 = 20,                  /* ARITHOP1  */
  YYSYMBOL_ARITHOP2 = 21,                  /* ARITHOP2  */
  YYSYMBOL_RELOP = 22,                     /* RELOP  */
  YYSYMBOL_LOGOP = 23,                     /* LOGOP  */
  YYSYMBOL_NOTOP = 24,                     /* NOTOP  */
  YYSYMBOL_ID = 25,                        /* ID  */
  YYSYMBOL_BREAK = 26,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 27,                  /* CONTINUE  */
  YYSYMBOL_CHKPT = 28,                     /* CHKPT  */
  YYSYMBOL_READ = 29,                      /* READ  */
  YYSYMBOL_READI = 30,                     /* READI  */
  YYSYMBOL_PRINT = 31,                     /* PRINT  */
  YYSYMBOL_STRING = 32,                    /* STRING  */
  YYSYMBOL_INLINE = 33,                    /* INLINE  */
  YYSYMBOL_BACKUP = 34,                    /* BACKUP  */
  YYSYMBOL_RESTORE = 35,                   /* RESTORE  */
  YYSYMBOL_LOADI = 36,                     /* LOADI  */
  YYSYMBOL_GOTO = 37,                      /* GOTO  */
  YYSYMBOL_CALL = 38,                      /* CALL  */
  YYSYMBOL_ENCRYPT = 39,                   /* ENCRYPT  */
  YYSYMBOL_PORT = 40,                      /* PORT  */
  YYSYMBOL_UMIN = 41,                      /* UMIN  */
  YYSYMBOL_42_ = 42,                       /* ';'  */
  YYSYMBOL_43_ = 43,                       /* '('  */
  YYSYMBOL_44_ = 44,                       /* ','  */
  YYSYMBOL_45_ = 45,                       /* ')'  */
  YYSYMBOL_46_ = 46,                       /* ':'  */
  YYSYMBOL_47_ = 47,                       /* '['  */
  YYSYMBOL_48_ = 48,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 49,                  /* $accept  */
  YYSYMBOL_body = 50,                      /* body  */
  YYSYMBOL_definelistpad = 51,             /* definelistpad  */
  YYSYMBOL_definelist = 52,                /* definelist  */
  YYSYMBOL_definestmt = 53,                /* definestmt  */
  YYSYMBOL_stmtlist = 54,                  /* stmtlist  */
  YYSYMBOL_stmt = 55,                      /* stmt  */
  YYSYMBOL_expr = 56,                      /* expr  */
  YYSYMBOL_ifpad = 57,                     /* ifpad  */
  YYSYMBOL_elsepad = 58,                   /* elsepad  */
  YYSYMBOL_whilepad = 59,                  /* whilepad  */
  YYSYMBOL_ids = 60                        /* ids  */
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
typedef yytype_int8 yy_state_t;

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   319

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  12
/* YYNRULES -- Number of rules.  */
#define YYNRULES  50
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  127

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   296


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
      43,    45,     2,     2,    44,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    46,    42,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    47,     2,    48,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    23,    23,    30,    35,    36,    39,    42,    50,    53,
      58,    70,    82,    87,    93,    99,   103,   106,   109,   112,
     115,   118,   126,   134,   137,   143,   146,   149,   157,   160,
     163,   166,   174,   185,   196,   203,   206,   209,   212,   215,
     220,   223,   226,   229,   232,   235,   240,   245,   250,   257,
     260
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
  "\"end of file\"", "error", "\"invalid token\"", "ALIAS", "DEFINE",
  "DO", "ELSE", "ENDIF", "ENDWHILE", "IF", "RETURN", "IRETURN", "LOAD",
  "STORE", "THEN", "WHILE", "HALT", "REG", "NUM", "ASSIGNOP", "ARITHOP1",
  "ARITHOP2", "RELOP", "LOGOP", "NOTOP", "ID", "BREAK", "CONTINUE",
  "CHKPT", "READ", "READI", "PRINT", "STRING", "INLINE", "BACKUP",
  "RESTORE", "LOADI", "GOTO", "CALL", "ENCRYPT", "PORT", "UMIN", "';'",
  "'('", "','", "')'", "':'", "'['", "']'", "$accept", "body",
  "definelistpad", "definelist", "definestmt", "stmtlist", "stmt", "expr",
  "ifpad", "elsepad", "whilepad", "ids", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-73)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -73,     6,   206,     4,   -73,    11,   -73,   -29,   -11,    -1,
       0,   -73,     5,   -73,   -73,    32,    20,     8,     9,    19,
      22,    23,   -10,    20,   -73,    21,    26,    27,    37,    60,
      66,   -10,    20,    20,   206,   -73,   287,    20,    20,   -73,
      67,   -73,    45,   -73,   -73,    20,    20,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,    53,   254,    68,   -73,
     -73,    20,    85,    86,    90,    56,     7,   -73,    -8,    20,
      20,    20,    20,    52,   282,    28,    91,   242,   246,   -73,
     -73,   -73,   250,   -73,   -73,   -73,   -73,   -73,    93,   277,
      88,   -73,    -2,   -19,   206,   206,   100,   111,   -73,    20,
      20,    20,   -73,   -73,    87,   128,   -73,   105,    61,   234,
     238,   -73,   107,   206,   108,   -73,   109,   126,   127,   -73,
     167,   -73,   -73,   -73,   -73,   130,   -73
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       5,     0,     0,     3,     1,     0,    46,     0,     0,     0,
       0,    48,     0,    50,    43,     0,     0,    49,     0,     0,
       0,     0,     0,     0,    45,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     2,     9,     0,     0,     0,    44,
       0,     4,     0,    19,    20,     0,     0,    23,    39,    49,
      40,    34,    21,    22,    25,    26,     0,     0,     0,    29,
      30,     0,     0,     0,     0,     0,     0,     8,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27,
      28,    24,     0,    32,    33,    31,    42,    41,     0,     0,
      35,    36,    37,    38,     0,     0,     0,     0,    15,     0,
       0,     0,    11,    10,     0,     0,     6,     0,     0,     0,
       0,    47,     0,     0,     0,     7,     0,     0,     0,    12,
       0,    14,    16,    17,    18,     0,    13
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -73,   -73,   -73,   -73,   -73,   -72,   -34,   -12,   -73,   -73,
     -73,   -17
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,     2,     3,    41,    34,    35,    36,    37,   113,
      38,    39
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      67,    69,    70,    71,    50,    56,     4,    13,    40,    13,
      14,    57,    15,    43,    64,    49,    16,    49,    69,    70,
      65,    66,   104,   105,    24,    73,    74,    69,    70,    71,
      72,    44,    88,    77,    78,    32,    42,    13,    14,    33,
      15,   120,    45,    46,    16,    49,    96,    47,    97,    82,
      48,    52,    24,    58,    51,    87,    89,    90,    91,    92,
      93,    53,    76,    32,    54,    55,    94,    33,    59,    60,
      67,    67,    69,    70,    71,    72,    69,    70,    71,    72,
      61,    69,    70,    71,    72,    62,    67,   108,   109,   110,
       5,    63,    75,   111,   112,    79,     6,     7,     8,     9,
      10,    86,    11,    12,    13,    14,   116,    15,     0,    70,
      81,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    83,    84,   107,
      32,     5,    85,    98,    33,   102,   114,     6,     7,     8,
       9,    10,   106,    11,    12,    13,    14,   115,    15,   119,
     121,   122,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,   123,   124,
       5,    32,   126,     0,   125,    33,     6,     7,     8,     9,
      10,     0,    11,    12,    13,    14,     0,    15,     0,     0,
       0,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,     0,     0,     5,
      32,     0,     0,     0,    33,     6,     7,     8,     9,    10,
       0,    11,    12,    13,    14,     0,    15,     0,     0,     0,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,     0,     0,     0,    32,
       0,     0,     0,    33,    69,    70,    71,    72,    69,    70,
      71,    72,    69,    70,    71,    72,    69,    70,    71,    72,
      69,    70,    71,    72,    69,    70,    71,    72,     0,   117,
       0,     0,     0,   118,     0,     0,    99,    95,     0,     0,
     100,     0,     0,     0,   101,     0,    80,    69,    70,    71,
      72,     0,    69,    70,    71,    72,    68,    69,    70,    71,
      72,     0,     0,     0,     0,     0,     0,     0,     0,   103
};

static const yytype_int8 yycheck[] =
{
      34,    20,    21,    22,    16,    22,     0,    17,     4,    17,
      18,    23,    20,    42,    31,    25,    24,    25,    20,    21,
      32,    33,    94,    95,    32,    37,    38,    20,    21,    22,
      23,    42,    40,    45,    46,    43,    25,    17,    18,    47,
      20,   113,    43,    43,    24,    25,    18,    42,    20,    61,
      18,    42,    32,    32,    46,    48,    68,    69,    70,    71,
      72,    42,    17,    43,    42,    42,    14,    47,    42,    42,
     104,   105,    20,    21,    22,    23,    20,    21,    22,    23,
      43,    20,    21,    22,    23,    25,   120,    99,   100,   101,
       3,    25,    25,     6,     7,    42,     9,    10,    11,    12,
      13,    45,    15,    16,    17,    18,    45,    20,    -1,    21,
      42,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    42,    42,    18,
      43,     3,    42,    42,    47,    42,     8,     9,    10,    11,
      12,    13,    42,    15,    16,    17,    18,    42,    20,    42,
      42,    42,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    42,    42,
       3,    43,    42,    -1,     7,    47,     9,    10,    11,    12,
      13,    -1,    15,    16,    17,    18,    -1,    20,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    -1,     3,
      43,    -1,    -1,    -1,    47,     9,    10,    11,    12,    13,
      -1,    15,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    -1,    -1,    -1,    43,
      -1,    -1,    -1,    47,    20,    21,    22,    23,    20,    21,
      22,    23,    20,    21,    22,    23,    20,    21,    22,    23,
      20,    21,    22,    23,    20,    21,    22,    23,    -1,    45,
      -1,    -1,    -1,    45,    -1,    -1,    44,     5,    -1,    -1,
      44,    -1,    -1,    -1,    44,    -1,    42,    20,    21,    22,
      23,    -1,    20,    21,    22,    23,    19,    20,    21,    22,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    50,    51,    52,     0,     3,     9,    10,    11,    12,
      13,    15,    16,    17,    18,    20,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    43,    47,    54,    55,    56,    57,    59,    60,
       4,    53,    25,    42,    42,    43,    43,    42,    18,    25,
      56,    46,    42,    42,    42,    42,    60,    56,    32,    42,
      42,    43,    25,    25,    60,    56,    56,    55,    19,    20,
      21,    22,    23,    56,    56,    25,    17,    56,    56,    42,
      42,    42,    56,    42,    42,    42,    45,    48,    40,    56,
      56,    56,    56,    56,    14,     5,    18,    20,    42,    44,
      44,    44,    42,    42,    54,    54,    42,    18,    56,    56,
      56,     6,     7,    58,     8,    42,    45,    45,    45,    42,
      54,    42,    42,    42,    42,     7,    42
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    49,    50,    51,    52,    52,    53,    53,    54,    54,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    57,    58,    59,    60,
      60
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     2,     0,     4,     5,     2,     1,
       4,     4,     6,     8,     6,     4,     7,     7,     7,     2,
       2,     2,     2,     2,     3,     2,     2,     3,     3,     2,
       2,     3,     3,     3,     2,     3,     3,     3,     3,     2,
       2,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1
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
  case 2: /* body: definelistpad stmtlist  */
#line 23 "splparser.y"
                                {
                                    codegen((yyvsp[0].n));
                                    out_linecount++;
                                    fprintf(fp,"HALT");
                                }
#line 1374 "y.tab.c"
    break;

  case 3: /* definelistpad: definelist  */
#line 30 "splparser.y"
                                {
                                    add_predefined_constants();
                                }
#line 1382 "y.tab.c"
    break;

  case 6: /* definestmt: DEFINE ID NUM ';'  */
#line 39 "splparser.y"
                                                {
                                                    insert_constant((yyvsp[-2].n)->name,(yyvsp[-1].n)->value);
                                                }
#line 1390 "y.tab.c"
    break;

  case 7: /* definestmt: DEFINE ID ARITHOP1 NUM ';'  */
#line 42 "splparser.y"
                                                {
                                                    if(node_getType((yyvsp[-2].n))==NODE_SUB)
                                                        insert_constant((yyvsp[-3].n)->name,-1*(yyvsp[-1].n)->value);
                                                    else
                                                        insert_constant((yyvsp[-3].n)->name,(yyvsp[-1].n)->value);
                                                }
#line 1401 "y.tab.c"
    break;

  case 8: /* stmtlist: stmtlist stmt  */
#line 50 "splparser.y"
                                                {
                                                    (yyval.n)=create_nontermNode(NODE_STMTLIST,(yyvsp[-1].n),(yyvsp[0].n));
                                                }
#line 1409 "y.tab.c"
    break;

  case 9: /* stmtlist: stmt  */
#line 53 "splparser.y"
                                                {
                                                    (yyval.n)=(yyvsp[0].n);
                                                }
#line 1417 "y.tab.c"
    break;

  case 10: /* stmt: expr ASSIGNOP expr ';'  */
#line 58 "splparser.y"
                                                {
                                                    if(node_getType((yyvsp[-3].n))==NODE_REG || node_getType((yyvsp[-3].n))==NODE_ADDR_EXPR)
                                                    {
                                                        (yyvsp[-2].n)->value=2;
                                                        (yyval.n)=create_tree((yyvsp[-2].n),(yyvsp[-3].n),(yyvsp[-1].n),NULL);
                                                    }
                                                    else
                                                    {
                                                        printf("\n%d:Invalid operands in assignment!!\n",linecount);
                                                        exit(0);
                                                    }
                                                }
#line 1434 "y.tab.c"
    break;

  case 11: /* stmt: expr ASSIGNOP PORT ';'  */
#line 70 "splparser.y"
                                                {
                                                    if(node_getType((yyvsp[-3].n))==NODE_REG || node_getType((yyvsp[-3].n))==NODE_ADDR_EXPR)
                                                    {
                                                        (yyvsp[-2].n)->value=2;
                                                        (yyval.n)=create_tree((yyvsp[-2].n),(yyvsp[-3].n),(yyvsp[-1].n),NULL);
                                                    }
                                                    else
                                                    {
                                                        printf("\n%d:Invalid operands in assignment!!\n",linecount);
                                                        exit(0);
                                                    }
                                                }
#line 1451 "y.tab.c"
    break;

  case 12: /* stmt: ifpad expr THEN stmtlist ENDIF ';'  */
#line 82 "splparser.y"
                                                        {                                
                                                            (yyval.n)=create_tree((yyvsp[-5].n),(yyvsp[-4].n),(yyvsp[-2].n),NULL);
                                                            pop_alias();
                                                            depth--;
                                                        }
#line 1461 "y.tab.c"
    break;

  case 13: /* stmt: ifpad expr THEN stmtlist elsepad stmtlist ENDIF ';'  */
#line 88 "splparser.y"
                                                        {    
                                                            (yyval.n)=create_tree((yyvsp[-7].n),(yyvsp[-6].n),(yyvsp[-4].n),(yyvsp[-2].n));
                                                            pop_alias();
                                                            depth--;
                                                        }
#line 1471 "y.tab.c"
    break;

  case 14: /* stmt: whilepad expr DO stmtlist ENDWHILE ';'  */
#line 93 "splparser.y"
                                                        {
                                                            (yyval.n)=create_tree((yyvsp[-5].n),(yyvsp[-4].n),(yyvsp[-2].n),NULL);
                                                            pop_alias();
                                                            depth--;
                                                            flag_break--;
                                                        }
#line 1482 "y.tab.c"
    break;

  case 15: /* stmt: ALIAS ID REG ';'  */
#line 99 "splparser.y"
                                                        {    
                                                            push_alias((yyvsp[-2].n)->name,(yyvsp[-1].n)->value);
                                                            (yyval.n)=NULL;
                                                        }
#line 1491 "y.tab.c"
    break;

  case 16: /* stmt: LOAD '(' expr ',' expr ')' ';'  */
#line 103 "splparser.y"
                                                        {
                                                            (yyval.n)=create_tree((yyvsp[-6].n),(yyvsp[-4].n),(yyvsp[-2].n),NULL);
                                                        }
#line 1499 "y.tab.c"
    break;

  case 17: /* stmt: STORE '(' expr ',' expr ')' ';'  */
#line 106 "splparser.y"
                                                        {
                                                            (yyval.n)=create_tree((yyvsp[-6].n),(yyvsp[-4].n),(yyvsp[-2].n),NULL);
                                                        }
#line 1507 "y.tab.c"
    break;

  case 18: /* stmt: LOADI '(' expr ',' expr ')' ';'  */
#line 109 "splparser.y"
                                                        {
                                                            (yyval.n)=create_tree((yyvsp[-6].n),(yyvsp[-4].n),(yyvsp[-2].n),NULL);
                                                        }
#line 1515 "y.tab.c"
    break;

  case 19: /* stmt: RETURN ';'  */
#line 112 "splparser.y"
                                                       {
                                                            (yyval.n)=(yyvsp[-1].n);
                                                        }
#line 1523 "y.tab.c"
    break;

  case 20: /* stmt: IRETURN ';'  */
#line 115 "splparser.y"
                                                        {
                                                            (yyval.n)=(yyvsp[-1].n);
                                                        }
#line 1531 "y.tab.c"
    break;

  case 21: /* stmt: BREAK ';'  */
#line 118 "splparser.y"
                                                        {
                                                            if(flag_break==0)
                                                            {
                                                                printf("\n%d: break or continue should be used inside while!!\n",linecount);
                                                                exit(0);                                
                                                            }
                                                            (yyval.n)=(yyvsp[-1].n);
                                                        }
#line 1544 "y.tab.c"
    break;

  case 22: /* stmt: CONTINUE ';'  */
#line 126 "splparser.y"
                                            {
                                                if(flag_break==0)
                                                {
                                                    printf("\n%d: break or continue should be used inside while!!\n",linecount);
                                                    exit(0);                                
                                                }
                                                (yyval.n)=(yyvsp[-1].n);
                                            }
#line 1557 "y.tab.c"
    break;

  case 23: /* stmt: HALT ';'  */
#line 134 "splparser.y"
                                            {    
                                                (yyval.n)=(yyvsp[-1].n);
                                            }
#line 1565 "y.tab.c"
    break;

  case 24: /* stmt: INLINE STRING ';'  */
#line 137 "splparser.y"
                                            {
                                                (yyvsp[-1].n)->name++;
                                                int temp=strlen((yyvsp[-1].n)->name);
                                                (yyvsp[-1].n)->name[temp-1]='\0';
                                                (yyval.n)=create_tree((yyvsp[-2].n),(yyvsp[-1].n),NULL,NULL);
                                            }
#line 1576 "y.tab.c"
    break;

  case 25: /* stmt: CHKPT ';'  */
#line 143 "splparser.y"
                                            {    
                                                (yyval.n)=(yyvsp[-1].n);
                                            }
#line 1584 "y.tab.c"
    break;

  case 26: /* stmt: READ ';'  */
#line 146 "splparser.y"
                                            {
                                                (yyval.n)=(yyvsp[-1].n);
                                            }
#line 1592 "y.tab.c"
    break;

  case 27: /* stmt: READI ids ';'  */
#line 149 "splparser.y"
                                            {    
                                                if(node_getType((yyvsp[-1].n))!=NODE_REG||!isAllowedRegister((yyvsp[-1].n)->value))
                                                {
                                                    printf("\n%d:Invalid operand in read!!\n",linecount);
                                                    exit(0);
                                                }                            
                                                (yyval.n)=create_tree((yyvsp[-2].n),(yyvsp[-1].n),NULL,NULL);
                                            }
#line 1605 "y.tab.c"
    break;

  case 28: /* stmt: PRINT expr ';'  */
#line 157 "splparser.y"
                                            {
                                                (yyval.n)=create_tree((yyvsp[-2].n),(yyvsp[-1].n),NULL,NULL);
                                            }
#line 1613 "y.tab.c"
    break;

  case 29: /* stmt: BACKUP ';'  */
#line 160 "splparser.y"
                                {
                                                (yyval.n) = create_tree((yyvsp[-1].n), NULL, NULL, NULL);
                                            }
#line 1621 "y.tab.c"
    break;

  case 30: /* stmt: RESTORE ';'  */
#line 163 "splparser.y"
                                {
                                                (yyval.n) = create_tree((yyvsp[-1].n), NULL, NULL, NULL);
                                            }
#line 1629 "y.tab.c"
    break;

  case 31: /* stmt: ENCRYPT ids ';'  */
#line 166 "splparser.y"
                                            {    
                                                if(node_getType((yyvsp[-1].n))!=NODE_REG||!isAllowedRegister((yyvsp[-1].n)->value))
                                                {
                                                    printf("\n%d:Invalid operand in encrypt!!\n",linecount);
                                                    exit(0);
                                                }                            
                                                (yyval.n)=create_tree((yyvsp[-2].n),(yyvsp[-1].n),NULL,NULL);
                                            }
#line 1642 "y.tab.c"
    break;

  case 32: /* stmt: GOTO ID ';'  */
#line 174 "splparser.y"
                                            {
                                                if(lookup_constant(node_getName((yyvsp[-1].n)))!=NULL)/*if the address to jump to is a predefined value in constants file*/
                                                {
                                                    (yyval.n)=create_tree((yyvsp[-2].n),substitute_id((yyvsp[-1].n)),NULL,NULL);
                                                }
                                                else
                                                {
                                                    (yyval.n)=create_tree((yyvsp[-2].n),(yyvsp[-1].n),NULL,NULL);
                                                }
                                                (yyval.n)->value=linecount;/*Hack to show line numbers in case of syntax errors*/
                                            }
#line 1658 "y.tab.c"
    break;

  case 33: /* stmt: CALL ID ';'  */
#line 185 "splparser.y"
                                            {
                                                if(lookup_constant(node_getName((yyvsp[-1].n)))!=NULL)/*if the address to jump to is a predefined value in constants file*/
                                                {
                                                    (yyval.n)=create_tree((yyvsp[-2].n),substitute_id((yyvsp[-1].n)),NULL,NULL);
                                                }
                                                else
                                                {
                                                    (yyval.n)=create_tree((yyvsp[-2].n),(yyvsp[-1].n),NULL,NULL);
                                                }
                                                (yyval.n)->value=linecount;/*Hack to show line numbers in case of syntax errors*/
                                            }
#line 1674 "y.tab.c"
    break;

  case 34: /* stmt: ID ':'  */
#line 196 "splparser.y"
                                            {
                                                label_add(node_getName((yyvsp[-1].n)));
                                                (yyval.n)=create_nontermNode(NODE_LABEL_DEF,(yyvsp[-1].n),NULL);
                                            }
#line 1683 "y.tab.c"
    break;

  case 35: /* expr: expr ARITHOP1 expr  */
#line 203 "splparser.y"
                                            {
                                                (yyval.n)=create_tree((yyvsp[-1].n),(yyvsp[-2].n),(yyvsp[0].n),NULL);
                                            }
#line 1691 "y.tab.c"
    break;

  case 36: /* expr: expr ARITHOP2 expr  */
#line 206 "splparser.y"
                                            {
                                                (yyval.n)=create_tree((yyvsp[-1].n),(yyvsp[-2].n),(yyvsp[0].n),NULL);
                                            }
#line 1699 "y.tab.c"
    break;

  case 37: /* expr: expr RELOP expr  */
#line 209 "splparser.y"
                                            {
                                                (yyval.n)=create_tree((yyvsp[-1].n),(yyvsp[-2].n),(yyvsp[0].n),NULL);
                                            }
#line 1707 "y.tab.c"
    break;

  case 38: /* expr: expr LOGOP expr  */
#line 212 "splparser.y"
                                            {
                                                (yyval.n)=create_tree((yyvsp[-1].n),(yyvsp[-2].n),(yyvsp[0].n),NULL);
                                            }
#line 1715 "y.tab.c"
    break;

  case 39: /* expr: ARITHOP1 NUM  */
#line 215 "splparser.y"
                                            {
                                                if(node_getType((yyvsp[-1].n))==NODE_SUB)
                                                    (yyvsp[0].n)->value=(yyvsp[0].n)->value*-1;
                                                (yyval.n)=(yyvsp[0].n);
                                            }
#line 1725 "y.tab.c"
    break;

  case 40: /* expr: NOTOP expr  */
#line 220 "splparser.y"
                                            {
                                                (yyval.n)=create_tree((yyvsp[-1].n),(yyvsp[0].n),NULL,NULL);
                                            }
#line 1733 "y.tab.c"
    break;

  case 41: /* expr: '[' expr ']'  */
#line 223 "splparser.y"
                                            {
                                                (yyval.n)=create_nontermNode(NODE_ADDR_EXPR,(yyvsp[-1].n),NULL);
                                            }
#line 1741 "y.tab.c"
    break;

  case 42: /* expr: '(' expr ')'  */
#line 226 "splparser.y"
                                            {
                                                (yyval.n)=(yyvsp[-1].n);
                                            }
#line 1749 "y.tab.c"
    break;

  case 43: /* expr: NUM  */
#line 229 "splparser.y"
                                            {    
                                                (yyval.n)=(yyvsp[0].n);
                                            }
#line 1757 "y.tab.c"
    break;

  case 44: /* expr: ids  */
#line 232 "splparser.y"
                                            {
                                                (yyval.n)=(yyvsp[0].n);
                                            }
#line 1765 "y.tab.c"
    break;

  case 45: /* expr: STRING  */
#line 235 "splparser.y"
                                            {
                                                (yyval.n)=(yyvsp[0].n);
                                            }
#line 1773 "y.tab.c"
    break;

  case 46: /* ifpad: IF  */
#line 240 "splparser.y"
                                            {
                                                depth++;
                                                (yyval.n)=(yyvsp[0].n);
                                            }
#line 1782 "y.tab.c"
    break;

  case 47: /* elsepad: ELSE  */
#line 245 "splparser.y"
                                            {
                                                pop_alias();
                                            }
#line 1790 "y.tab.c"
    break;

  case 48: /* whilepad: WHILE  */
#line 250 "splparser.y"
                                            {
                                                depth++;
                                                flag_break++;
                                                (yyval.n)=(yyvsp[0].n);
                                            }
#line 1800 "y.tab.c"
    break;

  case 49: /* ids: ID  */
#line 257 "splparser.y"
                                            {                            
                                                (yyval.n)=substitute_id((yyvsp[0].n));
                                            }
#line 1808 "y.tab.c"
    break;

  case 50: /* ids: REG  */
#line 260 "splparser.y"
                                            {
                                                (yyval.n)=(yyvsp[0].n);
                                            }
#line 1816 "y.tab.c"
    break;


#line 1820 "y.tab.c"

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

#line 264 "splparser.y"


int yyerror (char *msg) 
{
    return fprintf (stderr, "%d: %s\n",linecount,msg);
}
