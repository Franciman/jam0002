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


/* Substitute the variable and function names.  */
#define yyparse         duprparse
#define yylex           duprlex
#define yyerror         duprerror
#define yydebug         duprdebug
#define yynerrs         duprnerrs
#define yylval          duprlval
#define yychar          duprchar

/* First part of user prologue.  */
#line 1 "./dupr_parser.y"

#include <iostream>
#include <vector>
#include <cstring>
#include <stdio.h>
#include <Deamer/External/Cpp/Lexer/TerminalObject.h>
#include <Deamer/External/Cpp/Ast/Node.h>
#include "dupr/Bison/Parser.h"
#define YY_NO_UNISTD_H
#include "Flex/dupr_lexer.h"
#undef YY_NO_UNISTD_H
#include "dupr/Ast/Enum/Type.h"
#include "dupr/Ast/Node/LEFT_BRACKET.h"
#include "dupr/Ast/Node/RIGHT_BRACKET.h"
#include "dupr/Ast/Node/LEFT_PARANTHESIS.h"
#include "dupr/Ast/Node/RIGHT_PARANTHESIS.h"
#include "dupr/Ast/Node/LEFT_SQUARE_BRACKET.h"
#include "dupr/Ast/Node/RIGHT_SQUARE_BRACKET.h"
#include "dupr/Ast/Node/ADD.h"
#include "dupr/Ast/Node/MINUS.h"
#include "dupr/Ast/Node/MULTI.h"
#include "dupr/Ast/Node/DIVIDE.h"
#include "dupr/Ast/Node/LT.h"
#include "dupr/Ast/Node/LE.h"
#include "dupr/Ast/Node/GT.h"
#include "dupr/Ast/Node/GE.h"
#include "dupr/Ast/Node/EQ.h"
#include "dupr/Ast/Node/EQEQ.h"
#include "dupr/Ast/Node/EQEQEQ.h"
#include "dupr/Ast/Node/OR.h"
#include "dupr/Ast/Node/AND.h"
#include "dupr/Ast/Node/OROR.h"
#include "dupr/Ast/Node/ANDAND.h"
#include "dupr/Ast/Node/WILDCARD_OP.h"
#include "dupr/Ast/Node/DOT.h"
#include "dupr/Ast/Node/COMMA.h"
#include "dupr/Ast/Node/COLON.h"
#include "dupr/Ast/Node/SEMICOLON.h"
#include "dupr/Ast/Node/SIGN.h"
#include "dupr/Ast/Node/HEKJE.h"
#include "dupr/Ast/Node/QUESTION.h"
#include "dupr/Ast/Node/EXCLAM.h"
#include "dupr/Ast/Node/PATTERN_INSERTION.h"
#include "dupr/Ast/Node/VARNAME.h"
#include "dupr/Ast/Node/NUMBER.h"
#include "dupr/Ast/Node/DECIMAL.h"
#include "dupr/Ast/Node/STRING.h"
#include "dupr/Ast/Node/ESCAPE_CHARS.h"

#include "dupr/Ast/Node/program.h"
#include "dupr/Ast/Node/deamerreserved_star__stmt__.h"
#include "dupr/Ast/Node/stmt.h"
#include "dupr/Ast/Node/pattern_execution.h"
#include "dupr/Ast/Node/pattern_constructor_array.h"
#include "dupr/Ast/Node/deamerreserved_plus__deamerreserved_or__pattern_constructor__pattern_constructor_array____.h"
#include "dupr/Ast/Node/pattern_constructor.h"
#include "dupr/Ast/Node/pattern_type.h"
#include "dupr/Ast/Node/pattern_name.h"
#include "dupr/Ast/Node/deamerreserved_arrow__VARNAME__.h"
#include "dupr/Ast/Node/deamerreserved_star__GT__VARNAME__.h"
#include "dupr/Ast/Node/pattern_constructor_content.h"
#include "dupr/Ast/Node/deamerreserved_star__pattern_constructor_content_stmt__.h"
#include "dupr/Ast/Node/pattern_constructor_content_stmt.h"
#include "dupr/Ast/Node/pattern_constructor_operator.h"
#include "dupr/Ast/Node/pattern_constructor_structure.h"
#include "dupr/Ast/Node/pattern_constructor_terminate.h"
#include "dupr/Ast/Node/pattern_constructor_encapsulation.h"

#ifndef YY_parse_NERRS
#define YY_parse_NERRS duprnerrs
#endif //YY_parse_NERRS
#ifndef YY_parse_LLOC
#define YY_parse_LLOC duprlloc
#endif //YY_parse_LLOC
#define YYERROR_VERBOSE

void duprerror(const char* s);
int duprlex();
static ::deamer::external::cpp::ast::Tree* outputTree = nullptr;

#line 159 "dupr_parser.tab.c"

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

#include "dupr_parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_LEFT_BRACKET = 3,               /* LEFT_BRACKET  */
  YYSYMBOL_RIGHT_BRACKET = 4,              /* RIGHT_BRACKET  */
  YYSYMBOL_LEFT_PARANTHESIS = 5,           /* LEFT_PARANTHESIS  */
  YYSYMBOL_RIGHT_PARANTHESIS = 6,          /* RIGHT_PARANTHESIS  */
  YYSYMBOL_LEFT_SQUARE_BRACKET = 7,        /* LEFT_SQUARE_BRACKET  */
  YYSYMBOL_RIGHT_SQUARE_BRACKET = 8,       /* RIGHT_SQUARE_BRACKET  */
  YYSYMBOL_ADD = 9,                        /* ADD  */
  YYSYMBOL_MINUS = 10,                     /* MINUS  */
  YYSYMBOL_MULTI = 11,                     /* MULTI  */
  YYSYMBOL_DIVIDE = 12,                    /* DIVIDE  */
  YYSYMBOL_LT = 13,                        /* LT  */
  YYSYMBOL_LE = 14,                        /* LE  */
  YYSYMBOL_GT = 15,                        /* GT  */
  YYSYMBOL_GE = 16,                        /* GE  */
  YYSYMBOL_EQ = 17,                        /* EQ  */
  YYSYMBOL_EQEQ = 18,                      /* EQEQ  */
  YYSYMBOL_EQEQEQ = 19,                    /* EQEQEQ  */
  YYSYMBOL_OR = 20,                        /* OR  */
  YYSYMBOL_AND = 21,                       /* AND  */
  YYSYMBOL_OROR = 22,                      /* OROR  */
  YYSYMBOL_ANDAND = 23,                    /* ANDAND  */
  YYSYMBOL_WILDCARD_OP = 24,               /* WILDCARD_OP  */
  YYSYMBOL_DOT = 25,                       /* DOT  */
  YYSYMBOL_COMMA = 26,                     /* COMMA  */
  YYSYMBOL_COLON = 27,                     /* COLON  */
  YYSYMBOL_SEMICOLON = 28,                 /* SEMICOLON  */
  YYSYMBOL_SIGN = 29,                      /* SIGN  */
  YYSYMBOL_HEKJE = 30,                     /* HEKJE  */
  YYSYMBOL_QUESTION = 31,                  /* QUESTION  */
  YYSYMBOL_EXCLAM = 32,                    /* EXCLAM  */
  YYSYMBOL_PATTERN_INSERTION = 33,         /* PATTERN_INSERTION  */
  YYSYMBOL_VARNAME = 34,                   /* VARNAME  */
  YYSYMBOL_NUMBER = 35,                    /* NUMBER  */
  YYSYMBOL_DECIMAL = 36,                   /* DECIMAL  */
  YYSYMBOL_STRING = 37,                    /* STRING  */
  YYSYMBOL_YYACCEPT = 38,                  /* $accept  */
  YYSYMBOL_program = 39,                   /* program  */
  YYSYMBOL_deamerreserved_star__stmt__ = 40, /* deamerreserved_star__stmt__  */
  YYSYMBOL_stmt = 41,                      /* stmt  */
  YYSYMBOL_pattern_execution = 42,         /* pattern_execution  */
  YYSYMBOL_pattern_constructor_array = 43, /* pattern_constructor_array  */
  YYSYMBOL_deamerreserved_plus__deamerreserved_or__pattern_constructor__pattern_constructor_array____ = 44, /* deamerreserved_plus__deamerreserved_or__pattern_constructor__pattern_constructor_array____  */
  YYSYMBOL_pattern_constructor = 45,       /* pattern_constructor  */
  YYSYMBOL_pattern_type = 46,              /* pattern_type  */
  YYSYMBOL_pattern_name = 47,              /* pattern_name  */
  YYSYMBOL_deamerreserved_arrow__VARNAME__ = 48, /* deamerreserved_arrow__VARNAME__  */
  YYSYMBOL_deamerreserved_star__GT__VARNAME__ = 49, /* deamerreserved_star__GT__VARNAME__  */
  YYSYMBOL_pattern_constructor_content = 50, /* pattern_constructor_content  */
  YYSYMBOL_deamerreserved_star__pattern_constructor_content_stmt__ = 51, /* deamerreserved_star__pattern_constructor_content_stmt__  */
  YYSYMBOL_pattern_constructor_content_stmt = 52, /* pattern_constructor_content_stmt  */
  YYSYMBOL_pattern_constructor_operator = 53, /* pattern_constructor_operator  */
  YYSYMBOL_pattern_constructor_structure = 54, /* pattern_constructor_structure  */
  YYSYMBOL_pattern_constructor_terminate = 55, /* pattern_constructor_terminate  */
  YYSYMBOL_pattern_constructor_encapsulation = 56 /* pattern_constructor_encapsulation  */
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
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   63

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  58
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  79

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   292


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
      35,    36,    37
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   200,   200,   208,   212,   219,   223,   227,   234,   241,
     248,   252,   256,   260,   267,   274,   281,   288,   295,   299,
     306,   313,   317,   324,   328,   332,   336,   343,   347,   351,
     355,   359,   363,   367,   371,   375,   379,   383,   387,   391,
     395,   399,   403,   410,   414,   418,   422,   426,   430,   434,
     438,   445,   449,   453,   457,   461,   468,   472,   476
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
  "\"end of file\"", "error", "\"invalid token\"", "LEFT_BRACKET",
  "RIGHT_BRACKET", "LEFT_PARANTHESIS", "RIGHT_PARANTHESIS",
  "LEFT_SQUARE_BRACKET", "RIGHT_SQUARE_BRACKET", "ADD", "MINUS", "MULTI",
  "DIVIDE", "LT", "LE", "GT", "GE", "EQ", "EQEQ", "EQEQEQ", "OR", "AND",
  "OROR", "ANDAND", "WILDCARD_OP", "DOT", "COMMA", "COLON", "SEMICOLON",
  "SIGN", "HEKJE", "QUESTION", "EXCLAM", "PATTERN_INSERTION", "VARNAME",
  "NUMBER", "DECIMAL", "STRING", "$accept", "program",
  "deamerreserved_star__stmt__", "stmt", "pattern_execution",
  "pattern_constructor_array",
  "deamerreserved_plus__deamerreserved_or__pattern_constructor__pattern_constructor_array____",
  "pattern_constructor", "pattern_type", "pattern_name",
  "deamerreserved_arrow__VARNAME__", "deamerreserved_star__GT__VARNAME__",
  "pattern_constructor_content",
  "deamerreserved_star__pattern_constructor_content_stmt__",
  "pattern_constructor_content_stmt", "pattern_constructor_operator",
  "pattern_constructor_structure", "pattern_constructor_terminate",
  "pattern_constructor_encapsulation", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-29)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-20)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -28,    35,    46,   -29,   -28,   -29,   -29,   -29,    20,    45,
     -29,    15,   -29,   -29,   -29,    17,     0,    37,    37,     1,
       0,     0,     0,   -29,   -29,   -29,   -29,   -29,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,
     -29,   -29,    49,   -29,     0,   -29,   -29,   -29,   -29,   -29,
       0,    21,    50,    51,    48,   -29,   -29,    54,   -29,    21,
      52,    21,   -29,   -29,   -29,   -29,   -29,   -29,   -29
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,    15,     0,     2,     4,     7,     6,     5,     0,     0,
      16,     0,    17,     1,     3,     0,    22,    19,    19,     0,
      22,    22,    22,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    38,    39,    37,    36,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,     0,    20,    22,    23,    26,    24,    25,    18,
      22,     0,     0,     0,     0,     8,    21,     0,    15,    11,
       0,    10,    56,    57,    58,    14,    13,     9,    12
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -29,   -29,    55,   -29,   -29,    39,   -27,    41,   -29,    47,
     -29,    44,   -20,     9,   -29,   -29,   -29,   -29,   -29
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     3,     4,     5,    69,    70,    71,     8,     9,
      10,    12,    52,    53,    54,    55,    56,    57,    58
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      62,    63,    64,    20,    60,    21,     1,    22,    61,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,   -19,     6,
      67,     7,    76,     6,    78,     7,    13,    15,    16,    17,
      11,    18,    11,    65,    72,    68,    74,    73,    75,    14,
      77,    59,    19,    66
};

static const yytype_int8 yycheck[] =
{
      20,    21,    22,     3,     3,     5,    34,     7,     7,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,     3,     0,
      60,     0,    69,     4,    71,     4,     0,    27,     3,    34,
      15,    34,    15,     4,     4,    34,     8,     6,     4,     4,
       8,    17,    15,    54
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    34,    39,    40,    41,    42,    43,    45,    46,    47,
      48,    15,    49,     0,    40,    27,     3,    34,    34,    47,
       3,     5,     7,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    50,    51,    52,    53,    54,    55,    56,    49,
       3,     7,    50,    50,    50,     4,    51,    50,    34,    43,
      44,    45,     4,     6,     8,     4,    44,     8,    44
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    38,    39,    40,    40,    41,    41,    41,    42,    43,
      44,    44,    44,    44,    45,    46,    47,    48,    49,    49,
      50,    51,    51,    52,    52,    52,    52,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    54,    54,    54,    54,    54,    54,    54,
      54,    55,    55,    55,    55,    55,    56,    56,    56
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     1,     4,     6,
       1,     1,     2,     2,     6,     1,     1,     2,     3,     0,
       1,     2,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     3
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
  case 2: /* program: deamerreserved_star__stmt__  */
#line 200 "./dupr_parser.y"
                                    {
		auto* const newNode = new dupr::ast::node::program({::dupr::ast::Type::program, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].dupr_deamerreserved_star__stmt__) });
		(yyval.dupr_program) = newNode;
		outputTree = new ::deamer::external::cpp::ast::Tree(newNode);
	}
#line 1261 "dupr_parser.tab.c"
    break;

  case 3: /* deamerreserved_star__stmt__: stmt deamerreserved_star__stmt__  */
#line 208 "./dupr_parser.y"
                                         {
		auto* const newNode = new dupr::ast::node::deamerreserved_star__stmt__({::dupr::ast::Type::deamerreserved_star__stmt__, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-1].dupr_stmt), (yyvsp[0].dupr_deamerreserved_star__stmt__) });
		(yyval.dupr_deamerreserved_star__stmt__) = newNode;
	}
#line 1270 "dupr_parser.tab.c"
    break;

  case 4: /* deamerreserved_star__stmt__: %empty  */
#line 212 "./dupr_parser.y"
          {
		auto* const newNode = new dupr::ast::node::deamerreserved_star__stmt__({::dupr::ast::Type::deamerreserved_star__stmt__, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, {  });
		(yyval.dupr_deamerreserved_star__stmt__) = newNode;
	}
#line 1279 "dupr_parser.tab.c"
    break;

  case 5: /* stmt: pattern_constructor  */
#line 219 "./dupr_parser.y"
                            {
		auto* const newNode = new dupr::ast::node::stmt({::dupr::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].dupr_pattern_constructor) });
		(yyval.dupr_stmt) = newNode;
	}
#line 1288 "dupr_parser.tab.c"
    break;

  case 6: /* stmt: pattern_constructor_array  */
#line 223 "./dupr_parser.y"
                                    {
		auto* const newNode = new dupr::ast::node::stmt({::dupr::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].dupr_pattern_constructor_array) });
		(yyval.dupr_stmt) = newNode;
	}
#line 1297 "dupr_parser.tab.c"
    break;

  case 7: /* stmt: pattern_execution  */
#line 227 "./dupr_parser.y"
                            {
		auto* const newNode = new dupr::ast::node::stmt({::dupr::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, {2, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].dupr_pattern_execution) });
		(yyval.dupr_stmt) = newNode;
	}
#line 1306 "dupr_parser.tab.c"
    break;

  case 8: /* pattern_execution: pattern_name LEFT_BRACKET pattern_constructor_content RIGHT_BRACKET  */
#line 234 "./dupr_parser.y"
                                                                            {
		auto* const newNode = new dupr::ast::node::pattern_execution({::dupr::ast::Type::pattern_execution, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-3].dupr_pattern_name), new dupr::ast::node::LEFT_BRACKET({::dupr::ast::Type::LEFT_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal)}), (yyvsp[-1].dupr_pattern_constructor_content), new dupr::ast::node::RIGHT_BRACKET({::dupr::ast::Type::RIGHT_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.dupr_pattern_execution) = newNode;
	}
#line 1315 "dupr_parser.tab.c"
    break;

  case 9: /* pattern_constructor_array: pattern_type COLON pattern_name LEFT_SQUARE_BRACKET deamerreserved_plus__deamerreserved_or__pattern_constructor__pattern_constructor_array____ RIGHT_SQUARE_BRACKET  */
#line 241 "./dupr_parser.y"
                                                                                                                                                                            {
		auto* const newNode = new dupr::ast::node::pattern_constructor_array({::dupr::ast::Type::pattern_constructor_array, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-5].dupr_pattern_type), new dupr::ast::node::COLON({::dupr::ast::Type::COLON, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-4].Terminal)}), (yyvsp[-3].dupr_pattern_name), new dupr::ast::node::LEFT_SQUARE_BRACKET({::dupr::ast::Type::LEFT_SQUARE_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal)}), (yyvsp[-1].dupr_deamerreserved_plus__deamerreserved_or__pattern_constructor__pattern_constructor_array____), new dupr::ast::node::RIGHT_SQUARE_BRACKET({::dupr::ast::Type::RIGHT_SQUARE_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.dupr_pattern_constructor_array) = newNode;
	}
#line 1324 "dupr_parser.tab.c"
    break;

  case 10: /* deamerreserved_plus__deamerreserved_or__pattern_constructor__pattern_constructor_array____: pattern_constructor  */
#line 248 "./dupr_parser.y"
                            {
		auto* const newNode = new dupr::ast::node::deamerreserved_plus__deamerreserved_or__pattern_constructor__pattern_constructor_array____({::dupr::ast::Type::deamerreserved_plus__deamerreserved_or__pattern_constructor__pattern_constructor_array____, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].dupr_pattern_constructor) });
		(yyval.dupr_deamerreserved_plus__deamerreserved_or__pattern_constructor__pattern_constructor_array____) = newNode;
	}
#line 1333 "dupr_parser.tab.c"
    break;

  case 11: /* deamerreserved_plus__deamerreserved_or__pattern_constructor__pattern_constructor_array____: pattern_constructor_array  */
#line 252 "./dupr_parser.y"
                                    {
		auto* const newNode = new dupr::ast::node::deamerreserved_plus__deamerreserved_or__pattern_constructor__pattern_constructor_array____({::dupr::ast::Type::deamerreserved_plus__deamerreserved_or__pattern_constructor__pattern_constructor_array____, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].dupr_pattern_constructor_array) });
		(yyval.dupr_deamerreserved_plus__deamerreserved_or__pattern_constructor__pattern_constructor_array____) = newNode;
	}
#line 1342 "dupr_parser.tab.c"
    break;

  case 12: /* deamerreserved_plus__deamerreserved_or__pattern_constructor__pattern_constructor_array____: pattern_constructor deamerreserved_plus__deamerreserved_or__pattern_constructor__pattern_constructor_array____  */
#line 256 "./dupr_parser.y"
                                                                                                                         {
		auto* const newNode = new dupr::ast::node::deamerreserved_plus__deamerreserved_or__pattern_constructor__pattern_constructor_array____({::dupr::ast::Type::deamerreserved_plus__deamerreserved_or__pattern_constructor__pattern_constructor_array____, ::deamer::external::cpp::ast::NodeValue::nonterminal, {2, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-1].dupr_pattern_constructor), (yyvsp[0].dupr_deamerreserved_plus__deamerreserved_or__pattern_constructor__pattern_constructor_array____) });
		(yyval.dupr_deamerreserved_plus__deamerreserved_or__pattern_constructor__pattern_constructor_array____) = newNode;
	}
#line 1351 "dupr_parser.tab.c"
    break;

  case 13: /* deamerreserved_plus__deamerreserved_or__pattern_constructor__pattern_constructor_array____: pattern_constructor_array deamerreserved_plus__deamerreserved_or__pattern_constructor__pattern_constructor_array____  */
#line 260 "./dupr_parser.y"
                                                                                                                               {
		auto* const newNode = new dupr::ast::node::deamerreserved_plus__deamerreserved_or__pattern_constructor__pattern_constructor_array____({::dupr::ast::Type::deamerreserved_plus__deamerreserved_or__pattern_constructor__pattern_constructor_array____, ::deamer::external::cpp::ast::NodeValue::nonterminal, {3, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-1].dupr_pattern_constructor_array), (yyvsp[0].dupr_deamerreserved_plus__deamerreserved_or__pattern_constructor__pattern_constructor_array____) });
		(yyval.dupr_deamerreserved_plus__deamerreserved_or__pattern_constructor__pattern_constructor_array____) = newNode;
	}
#line 1360 "dupr_parser.tab.c"
    break;

  case 14: /* pattern_constructor: pattern_type COLON pattern_name LEFT_BRACKET pattern_constructor_content RIGHT_BRACKET  */
#line 267 "./dupr_parser.y"
                                                                                               {
		auto* const newNode = new dupr::ast::node::pattern_constructor({::dupr::ast::Type::pattern_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-5].dupr_pattern_type), new dupr::ast::node::COLON({::dupr::ast::Type::COLON, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-4].Terminal)}), (yyvsp[-3].dupr_pattern_name), new dupr::ast::node::LEFT_BRACKET({::dupr::ast::Type::LEFT_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal)}), (yyvsp[-1].dupr_pattern_constructor_content), new dupr::ast::node::RIGHT_BRACKET({::dupr::ast::Type::RIGHT_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.dupr_pattern_constructor) = newNode;
	}
#line 1369 "dupr_parser.tab.c"
    break;

  case 15: /* pattern_type: VARNAME  */
#line 274 "./dupr_parser.y"
                {
		auto* const newNode = new dupr::ast::node::pattern_type({::dupr::ast::Type::pattern_type, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new dupr::ast::node::VARNAME({::dupr::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.dupr_pattern_type) = newNode;
	}
#line 1378 "dupr_parser.tab.c"
    break;

  case 16: /* pattern_name: deamerreserved_arrow__VARNAME__  */
#line 281 "./dupr_parser.y"
                                        {
		auto* const newNode = new dupr::ast::node::pattern_name({::dupr::ast::Type::pattern_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].dupr_deamerreserved_arrow__VARNAME__) });
		(yyval.dupr_pattern_name) = newNode;
	}
#line 1387 "dupr_parser.tab.c"
    break;

  case 17: /* deamerreserved_arrow__VARNAME__: VARNAME deamerreserved_star__GT__VARNAME__  */
#line 288 "./dupr_parser.y"
                                                   {
		auto* const newNode = new dupr::ast::node::deamerreserved_arrow__VARNAME__({::dupr::ast::Type::deamerreserved_arrow__VARNAME__, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new dupr::ast::node::VARNAME({::dupr::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal)}), (yyvsp[0].dupr_deamerreserved_star__GT__VARNAME__) });
		(yyval.dupr_deamerreserved_arrow__VARNAME__) = newNode;
	}
#line 1396 "dupr_parser.tab.c"
    break;

  case 18: /* deamerreserved_star__GT__VARNAME__: GT VARNAME deamerreserved_star__GT__VARNAME__  */
#line 295 "./dupr_parser.y"
                                                      {
		auto* const newNode = new dupr::ast::node::deamerreserved_star__GT__VARNAME__({::dupr::ast::Type::deamerreserved_star__GT__VARNAME__, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new dupr::ast::node::GT({::dupr::ast::Type::GT, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal)}), new dupr::ast::node::VARNAME({::dupr::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal)}), (yyvsp[0].dupr_deamerreserved_star__GT__VARNAME__) });
		(yyval.dupr_deamerreserved_star__GT__VARNAME__) = newNode;
	}
#line 1405 "dupr_parser.tab.c"
    break;

  case 19: /* deamerreserved_star__GT__VARNAME__: %empty  */
#line 299 "./dupr_parser.y"
          {
		auto* const newNode = new dupr::ast::node::deamerreserved_star__GT__VARNAME__({::dupr::ast::Type::deamerreserved_star__GT__VARNAME__, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, {  });
		(yyval.dupr_deamerreserved_star__GT__VARNAME__) = newNode;
	}
#line 1414 "dupr_parser.tab.c"
    break;

  case 20: /* pattern_constructor_content: deamerreserved_star__pattern_constructor_content_stmt__  */
#line 306 "./dupr_parser.y"
                                                                {
		auto* const newNode = new dupr::ast::node::pattern_constructor_content({::dupr::ast::Type::pattern_constructor_content, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].dupr_deamerreserved_star__pattern_constructor_content_stmt__) });
		(yyval.dupr_pattern_constructor_content) = newNode;
	}
#line 1423 "dupr_parser.tab.c"
    break;

  case 21: /* deamerreserved_star__pattern_constructor_content_stmt__: pattern_constructor_content_stmt deamerreserved_star__pattern_constructor_content_stmt__  */
#line 313 "./dupr_parser.y"
                                                                                                 {
		auto* const newNode = new dupr::ast::node::deamerreserved_star__pattern_constructor_content_stmt__({::dupr::ast::Type::deamerreserved_star__pattern_constructor_content_stmt__, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-1].dupr_pattern_constructor_content_stmt), (yyvsp[0].dupr_deamerreserved_star__pattern_constructor_content_stmt__) });
		(yyval.dupr_deamerreserved_star__pattern_constructor_content_stmt__) = newNode;
	}
#line 1432 "dupr_parser.tab.c"
    break;

  case 22: /* deamerreserved_star__pattern_constructor_content_stmt__: %empty  */
#line 317 "./dupr_parser.y"
          {
		auto* const newNode = new dupr::ast::node::deamerreserved_star__pattern_constructor_content_stmt__({::dupr::ast::Type::deamerreserved_star__pattern_constructor_content_stmt__, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, {  });
		(yyval.dupr_deamerreserved_star__pattern_constructor_content_stmt__) = newNode;
	}
#line 1441 "dupr_parser.tab.c"
    break;

  case 23: /* pattern_constructor_content_stmt: pattern_constructor_operator  */
#line 324 "./dupr_parser.y"
                                     {
		auto* const newNode = new dupr::ast::node::pattern_constructor_content_stmt({::dupr::ast::Type::pattern_constructor_content_stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].dupr_pattern_constructor_operator) });
		(yyval.dupr_pattern_constructor_content_stmt) = newNode;
	}
#line 1450 "dupr_parser.tab.c"
    break;

  case 24: /* pattern_constructor_content_stmt: pattern_constructor_terminate  */
#line 328 "./dupr_parser.y"
                                        {
		auto* const newNode = new dupr::ast::node::pattern_constructor_content_stmt({::dupr::ast::Type::pattern_constructor_content_stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].dupr_pattern_constructor_terminate) });
		(yyval.dupr_pattern_constructor_content_stmt) = newNode;
	}
#line 1459 "dupr_parser.tab.c"
    break;

  case 25: /* pattern_constructor_content_stmt: pattern_constructor_encapsulation  */
#line 332 "./dupr_parser.y"
                                            {
		auto* const newNode = new dupr::ast::node::pattern_constructor_content_stmt({::dupr::ast::Type::pattern_constructor_content_stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, {2, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].dupr_pattern_constructor_encapsulation) });
		(yyval.dupr_pattern_constructor_content_stmt) = newNode;
	}
#line 1468 "dupr_parser.tab.c"
    break;

  case 26: /* pattern_constructor_content_stmt: pattern_constructor_structure  */
#line 336 "./dupr_parser.y"
                                        {
		auto* const newNode = new dupr::ast::node::pattern_constructor_content_stmt({::dupr::ast::Type::pattern_constructor_content_stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, {3, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].dupr_pattern_constructor_structure) });
		(yyval.dupr_pattern_constructor_content_stmt) = newNode;
	}
#line 1477 "dupr_parser.tab.c"
    break;

  case 27: /* pattern_constructor_operator: ADD  */
#line 343 "./dupr_parser.y"
            {
		auto* const newNode = new dupr::ast::node::pattern_constructor_operator({::dupr::ast::Type::pattern_constructor_operator, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new dupr::ast::node::ADD({::dupr::ast::Type::ADD, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.dupr_pattern_constructor_operator) = newNode;
	}
#line 1486 "dupr_parser.tab.c"
    break;

  case 28: /* pattern_constructor_operator: MINUS  */
#line 347 "./dupr_parser.y"
                {
		auto* const newNode = new dupr::ast::node::pattern_constructor_operator({::dupr::ast::Type::pattern_constructor_operator, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new dupr::ast::node::MINUS({::dupr::ast::Type::MINUS, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.dupr_pattern_constructor_operator) = newNode;
	}
#line 1495 "dupr_parser.tab.c"
    break;

  case 29: /* pattern_constructor_operator: MULTI  */
#line 351 "./dupr_parser.y"
                {
		auto* const newNode = new dupr::ast::node::pattern_constructor_operator({::dupr::ast::Type::pattern_constructor_operator, ::deamer::external::cpp::ast::NodeValue::nonterminal, {2, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new dupr::ast::node::MULTI({::dupr::ast::Type::MULTI, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.dupr_pattern_constructor_operator) = newNode;
	}
#line 1504 "dupr_parser.tab.c"
    break;

  case 30: /* pattern_constructor_operator: DIVIDE  */
#line 355 "./dupr_parser.y"
                 {
		auto* const newNode = new dupr::ast::node::pattern_constructor_operator({::dupr::ast::Type::pattern_constructor_operator, ::deamer::external::cpp::ast::NodeValue::nonterminal, {3, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new dupr::ast::node::DIVIDE({::dupr::ast::Type::DIVIDE, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.dupr_pattern_constructor_operator) = newNode;
	}
#line 1513 "dupr_parser.tab.c"
    break;

  case 31: /* pattern_constructor_operator: LT  */
#line 359 "./dupr_parser.y"
             {
		auto* const newNode = new dupr::ast::node::pattern_constructor_operator({::dupr::ast::Type::pattern_constructor_operator, ::deamer::external::cpp::ast::NodeValue::nonterminal, {4, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new dupr::ast::node::LT({::dupr::ast::Type::LT, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.dupr_pattern_constructor_operator) = newNode;
	}
#line 1522 "dupr_parser.tab.c"
    break;

  case 32: /* pattern_constructor_operator: LE  */
#line 363 "./dupr_parser.y"
             {
		auto* const newNode = new dupr::ast::node::pattern_constructor_operator({::dupr::ast::Type::pattern_constructor_operator, ::deamer::external::cpp::ast::NodeValue::nonterminal, {5, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new dupr::ast::node::LE({::dupr::ast::Type::LE, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.dupr_pattern_constructor_operator) = newNode;
	}
#line 1531 "dupr_parser.tab.c"
    break;

  case 33: /* pattern_constructor_operator: GT  */
#line 367 "./dupr_parser.y"
             {
		auto* const newNode = new dupr::ast::node::pattern_constructor_operator({::dupr::ast::Type::pattern_constructor_operator, ::deamer::external::cpp::ast::NodeValue::nonterminal, {6, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new dupr::ast::node::GT({::dupr::ast::Type::GT, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.dupr_pattern_constructor_operator) = newNode;
	}
#line 1540 "dupr_parser.tab.c"
    break;

  case 34: /* pattern_constructor_operator: GE  */
#line 371 "./dupr_parser.y"
             {
		auto* const newNode = new dupr::ast::node::pattern_constructor_operator({::dupr::ast::Type::pattern_constructor_operator, ::deamer::external::cpp::ast::NodeValue::nonterminal, {7, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new dupr::ast::node::GE({::dupr::ast::Type::GE, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.dupr_pattern_constructor_operator) = newNode;
	}
#line 1549 "dupr_parser.tab.c"
    break;

  case 35: /* pattern_constructor_operator: EQ  */
#line 375 "./dupr_parser.y"
             {
		auto* const newNode = new dupr::ast::node::pattern_constructor_operator({::dupr::ast::Type::pattern_constructor_operator, ::deamer::external::cpp::ast::NodeValue::nonterminal, {8, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new dupr::ast::node::EQ({::dupr::ast::Type::EQ, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.dupr_pattern_constructor_operator) = newNode;
	}
#line 1558 "dupr_parser.tab.c"
    break;

  case 36: /* pattern_constructor_operator: AND  */
#line 379 "./dupr_parser.y"
              {
		auto* const newNode = new dupr::ast::node::pattern_constructor_operator({::dupr::ast::Type::pattern_constructor_operator, ::deamer::external::cpp::ast::NodeValue::nonterminal, {9, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new dupr::ast::node::AND({::dupr::ast::Type::AND, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.dupr_pattern_constructor_operator) = newNode;
	}
#line 1567 "dupr_parser.tab.c"
    break;

  case 37: /* pattern_constructor_operator: OR  */
#line 383 "./dupr_parser.y"
             {
		auto* const newNode = new dupr::ast::node::pattern_constructor_operator({::dupr::ast::Type::pattern_constructor_operator, ::deamer::external::cpp::ast::NodeValue::nonterminal, {10, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new dupr::ast::node::OR({::dupr::ast::Type::OR, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.dupr_pattern_constructor_operator) = newNode;
	}
#line 1576 "dupr_parser.tab.c"
    break;

  case 38: /* pattern_constructor_operator: EQEQ  */
#line 387 "./dupr_parser.y"
               {
		auto* const newNode = new dupr::ast::node::pattern_constructor_operator({::dupr::ast::Type::pattern_constructor_operator, ::deamer::external::cpp::ast::NodeValue::nonterminal, {11, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new dupr::ast::node::EQEQ({::dupr::ast::Type::EQEQ, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.dupr_pattern_constructor_operator) = newNode;
	}
#line 1585 "dupr_parser.tab.c"
    break;

  case 39: /* pattern_constructor_operator: EQEQEQ  */
#line 391 "./dupr_parser.y"
                 {
		auto* const newNode = new dupr::ast::node::pattern_constructor_operator({::dupr::ast::Type::pattern_constructor_operator, ::deamer::external::cpp::ast::NodeValue::nonterminal, {12, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new dupr::ast::node::EQEQEQ({::dupr::ast::Type::EQEQEQ, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.dupr_pattern_constructor_operator) = newNode;
	}
#line 1594 "dupr_parser.tab.c"
    break;

  case 40: /* pattern_constructor_operator: OROR  */
#line 395 "./dupr_parser.y"
               {
		auto* const newNode = new dupr::ast::node::pattern_constructor_operator({::dupr::ast::Type::pattern_constructor_operator, ::deamer::external::cpp::ast::NodeValue::nonterminal, {13, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new dupr::ast::node::OROR({::dupr::ast::Type::OROR, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.dupr_pattern_constructor_operator) = newNode;
	}
#line 1603 "dupr_parser.tab.c"
    break;

  case 41: /* pattern_constructor_operator: ANDAND  */
#line 399 "./dupr_parser.y"
                 {
		auto* const newNode = new dupr::ast::node::pattern_constructor_operator({::dupr::ast::Type::pattern_constructor_operator, ::deamer::external::cpp::ast::NodeValue::nonterminal, {14, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new dupr::ast::node::ANDAND({::dupr::ast::Type::ANDAND, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.dupr_pattern_constructor_operator) = newNode;
	}
#line 1612 "dupr_parser.tab.c"
    break;

  case 42: /* pattern_constructor_operator: WILDCARD_OP  */
#line 403 "./dupr_parser.y"
                      {
		auto* const newNode = new dupr::ast::node::pattern_constructor_operator({::dupr::ast::Type::pattern_constructor_operator, ::deamer::external::cpp::ast::NodeValue::nonterminal, {15, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new dupr::ast::node::WILDCARD_OP({::dupr::ast::Type::WILDCARD_OP, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.dupr_pattern_constructor_operator) = newNode;
	}
#line 1621 "dupr_parser.tab.c"
    break;

  case 43: /* pattern_constructor_structure: DOT  */
#line 410 "./dupr_parser.y"
            {
		auto* const newNode = new dupr::ast::node::pattern_constructor_structure({::dupr::ast::Type::pattern_constructor_structure, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new dupr::ast::node::DOT({::dupr::ast::Type::DOT, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.dupr_pattern_constructor_structure) = newNode;
	}
#line 1630 "dupr_parser.tab.c"
    break;

  case 44: /* pattern_constructor_structure: COMMA  */
#line 414 "./dupr_parser.y"
                {
		auto* const newNode = new dupr::ast::node::pattern_constructor_structure({::dupr::ast::Type::pattern_constructor_structure, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new dupr::ast::node::COMMA({::dupr::ast::Type::COMMA, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.dupr_pattern_constructor_structure) = newNode;
	}
#line 1639 "dupr_parser.tab.c"
    break;

  case 45: /* pattern_constructor_structure: COLON  */
#line 418 "./dupr_parser.y"
                {
		auto* const newNode = new dupr::ast::node::pattern_constructor_structure({::dupr::ast::Type::pattern_constructor_structure, ::deamer::external::cpp::ast::NodeValue::nonterminal, {2, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new dupr::ast::node::COLON({::dupr::ast::Type::COLON, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.dupr_pattern_constructor_structure) = newNode;
	}
#line 1648 "dupr_parser.tab.c"
    break;

  case 46: /* pattern_constructor_structure: SEMICOLON  */
#line 422 "./dupr_parser.y"
                    {
		auto* const newNode = new dupr::ast::node::pattern_constructor_structure({::dupr::ast::Type::pattern_constructor_structure, ::deamer::external::cpp::ast::NodeValue::nonterminal, {3, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new dupr::ast::node::SEMICOLON({::dupr::ast::Type::SEMICOLON, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.dupr_pattern_constructor_structure) = newNode;
	}
#line 1657 "dupr_parser.tab.c"
    break;

  case 47: /* pattern_constructor_structure: SIGN  */
#line 426 "./dupr_parser.y"
               {
		auto* const newNode = new dupr::ast::node::pattern_constructor_structure({::dupr::ast::Type::pattern_constructor_structure, ::deamer::external::cpp::ast::NodeValue::nonterminal, {4, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new dupr::ast::node::SIGN({::dupr::ast::Type::SIGN, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.dupr_pattern_constructor_structure) = newNode;
	}
#line 1666 "dupr_parser.tab.c"
    break;

  case 48: /* pattern_constructor_structure: HEKJE  */
#line 430 "./dupr_parser.y"
                {
		auto* const newNode = new dupr::ast::node::pattern_constructor_structure({::dupr::ast::Type::pattern_constructor_structure, ::deamer::external::cpp::ast::NodeValue::nonterminal, {5, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new dupr::ast::node::HEKJE({::dupr::ast::Type::HEKJE, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.dupr_pattern_constructor_structure) = newNode;
	}
#line 1675 "dupr_parser.tab.c"
    break;

  case 49: /* pattern_constructor_structure: QUESTION  */
#line 434 "./dupr_parser.y"
                   {
		auto* const newNode = new dupr::ast::node::pattern_constructor_structure({::dupr::ast::Type::pattern_constructor_structure, ::deamer::external::cpp::ast::NodeValue::nonterminal, {6, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new dupr::ast::node::QUESTION({::dupr::ast::Type::QUESTION, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.dupr_pattern_constructor_structure) = newNode;
	}
#line 1684 "dupr_parser.tab.c"
    break;

  case 50: /* pattern_constructor_structure: EXCLAM  */
#line 438 "./dupr_parser.y"
                 {
		auto* const newNode = new dupr::ast::node::pattern_constructor_structure({::dupr::ast::Type::pattern_constructor_structure, ::deamer::external::cpp::ast::NodeValue::nonterminal, {7, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new dupr::ast::node::EXCLAM({::dupr::ast::Type::EXCLAM, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.dupr_pattern_constructor_structure) = newNode;
	}
#line 1693 "dupr_parser.tab.c"
    break;

  case 51: /* pattern_constructor_terminate: PATTERN_INSERTION  */
#line 445 "./dupr_parser.y"
                          {
		auto* const newNode = new dupr::ast::node::pattern_constructor_terminate({::dupr::ast::Type::pattern_constructor_terminate, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new dupr::ast::node::PATTERN_INSERTION({::dupr::ast::Type::PATTERN_INSERTION, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.dupr_pattern_constructor_terminate) = newNode;
	}
#line 1702 "dupr_parser.tab.c"
    break;

  case 52: /* pattern_constructor_terminate: VARNAME  */
#line 449 "./dupr_parser.y"
                  {
		auto* const newNode = new dupr::ast::node::pattern_constructor_terminate({::dupr::ast::Type::pattern_constructor_terminate, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new dupr::ast::node::VARNAME({::dupr::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.dupr_pattern_constructor_terminate) = newNode;
	}
#line 1711 "dupr_parser.tab.c"
    break;

  case 53: /* pattern_constructor_terminate: NUMBER  */
#line 453 "./dupr_parser.y"
                 {
		auto* const newNode = new dupr::ast::node::pattern_constructor_terminate({::dupr::ast::Type::pattern_constructor_terminate, ::deamer::external::cpp::ast::NodeValue::nonterminal, {2, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new dupr::ast::node::NUMBER({::dupr::ast::Type::NUMBER, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.dupr_pattern_constructor_terminate) = newNode;
	}
#line 1720 "dupr_parser.tab.c"
    break;

  case 54: /* pattern_constructor_terminate: DECIMAL  */
#line 457 "./dupr_parser.y"
                  {
		auto* const newNode = new dupr::ast::node::pattern_constructor_terminate({::dupr::ast::Type::pattern_constructor_terminate, ::deamer::external::cpp::ast::NodeValue::nonterminal, {3, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new dupr::ast::node::DECIMAL({::dupr::ast::Type::DECIMAL, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.dupr_pattern_constructor_terminate) = newNode;
	}
#line 1729 "dupr_parser.tab.c"
    break;

  case 55: /* pattern_constructor_terminate: STRING  */
#line 461 "./dupr_parser.y"
                 {
		auto* const newNode = new dupr::ast::node::pattern_constructor_terminate({::dupr::ast::Type::pattern_constructor_terminate, ::deamer::external::cpp::ast::NodeValue::nonterminal, {4, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new dupr::ast::node::STRING({::dupr::ast::Type::STRING, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.dupr_pattern_constructor_terminate) = newNode;
	}
#line 1738 "dupr_parser.tab.c"
    break;

  case 56: /* pattern_constructor_encapsulation: LEFT_BRACKET pattern_constructor_content RIGHT_BRACKET  */
#line 468 "./dupr_parser.y"
                                                               {
		auto* const newNode = new dupr::ast::node::pattern_constructor_encapsulation({::dupr::ast::Type::pattern_constructor_encapsulation, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new dupr::ast::node::LEFT_BRACKET({::dupr::ast::Type::LEFT_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal)}), (yyvsp[-1].dupr_pattern_constructor_content), new dupr::ast::node::RIGHT_BRACKET({::dupr::ast::Type::RIGHT_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.dupr_pattern_constructor_encapsulation) = newNode;
	}
#line 1747 "dupr_parser.tab.c"
    break;

  case 57: /* pattern_constructor_encapsulation: LEFT_PARANTHESIS pattern_constructor_content RIGHT_PARANTHESIS  */
#line 472 "./dupr_parser.y"
                                                                         {
		auto* const newNode = new dupr::ast::node::pattern_constructor_encapsulation({::dupr::ast::Type::pattern_constructor_encapsulation, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new dupr::ast::node::LEFT_PARANTHESIS({::dupr::ast::Type::LEFT_PARANTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal)}), (yyvsp[-1].dupr_pattern_constructor_content), new dupr::ast::node::RIGHT_PARANTHESIS({::dupr::ast::Type::RIGHT_PARANTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.dupr_pattern_constructor_encapsulation) = newNode;
	}
#line 1756 "dupr_parser.tab.c"
    break;

  case 58: /* pattern_constructor_encapsulation: LEFT_SQUARE_BRACKET pattern_constructor_content RIGHT_SQUARE_BRACKET  */
#line 476 "./dupr_parser.y"
                                                                               {
		auto* const newNode = new dupr::ast::node::pattern_constructor_encapsulation({::dupr::ast::Type::pattern_constructor_encapsulation, ::deamer::external::cpp::ast::NodeValue::nonterminal, {2, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new dupr::ast::node::LEFT_SQUARE_BRACKET({::dupr::ast::Type::LEFT_SQUARE_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal)}), (yyvsp[-1].dupr_pattern_constructor_content), new dupr::ast::node::RIGHT_SQUARE_BRACKET({::dupr::ast::Type::RIGHT_SQUARE_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.dupr_pattern_constructor_encapsulation) = newNode;
	}
#line 1765 "dupr_parser.tab.c"
    break;


#line 1769 "dupr_parser.tab.c"

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

#line 482 "./dupr_parser.y"


void duprerror(const char* s)
{
	std::cout << "Syntax error on line: " << s << '\n';
}

deamer::external::cpp::ast::Tree* dupr::parser::Parser::Parse(const std::string& text) const
{
	outputTree = nullptr;
	YY_BUFFER_STATE buf;
	buf = dupr_scan_string(text.c_str());
	duprparse();
	dupr_delete_buffer(buf);
	duprlex_destroy();

	return outputTree;
}

