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

#ifndef YY_CONF_PARSE_CONF_HPP_INCLUDED
# define YY_CONF_PARSE_CONF_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int conf_debug;
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
    SEMI = 258,                    /* ";"  */
    COLON = 259,                   /* ":"  */
    COMMA = 260,                   /* ","  */
    EQUAL = 261,                   /* "="  */
    CPU = 262,                     /* "cpu"  */
    MACH = 263,                    /* "machine"  */
    MEM = 264,                     /* "mem_bank"  */
    MAP = 265,                     /* "map"  */
    TYPE = 266,                    /* "type"  */
    ADDR = 267,                    /* "address"  */
    SIZE = 268,                    /* "size"  */
    PRE = 269,                     /* "preload"  */
    FLE = 270,                     /* FLE  */
    IMG = 271,                     /* "image"  */
    ELF = 272,                     /* "elf32"  */
    VAL = 273,                     /* "value"  */
    REG = 274,                     /* "reginit"  */
    STR = 275,                     /* "ascii string"  */
    PATH = 276,                    /* "filename"  */
    IDENT = 277,                   /* "identifier"  */
    HCONST = 278,                  /* "heximal constant"  */
    DCONST = 279                   /* "decimal constant"  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define SEMI 258
#define COLON 259
#define COMMA 260
#define EQUAL 261
#define CPU 262
#define MACH 263
#define MEM 264
#define MAP 265
#define TYPE 266
#define ADDR 267
#define SIZE 268
#define PRE 269
#define FLE 270
#define IMG 271
#define ELF 272
#define VAL 273
#define REG 274
#define STR 275
#define PATH 276
#define IDENT 277
#define HCONST 278
#define DCONST 279

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 42 "parse_conf.y"

	unsigned uval;
	char *strval;
	std::vector<char>     *nnstr;
	struct membank_info_t *mem_t;
	struct preload_info_t *pre_t;
	struct reginit_info_t *reg_t;

#line 124 "parse_conf.hpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE conf_lval;


int conf_parse (void);


#endif /* !YY_CONF_PARSE_CONF_HPP_INCLUDED  */
