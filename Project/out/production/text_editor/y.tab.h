
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     LOGICAL_AND = 258,
     LOGICAL_OR = 259,
     LOGICAL_NOT = 260,
     BITWISE_AND = 261,
     BITWISE_OR = 262,
     BITWISE_NOT = 263,
     BITWISE_XOR = 264,
     INT = 265,
     DOUBLE = 266,
     FLOAT = 267,
     CHAR = 268,
     WHILE = 269,
     FOR = 270,
     IF = 271,
     LT = 272,
     LTE = 273,
     GT = 274,
     GTE = 275,
     EQ = 276,
     NEQ = 277,
     ID = 278,
     INTEGER_NUM = 279,
     DOUBLE_NUM = 280,
     CHAR_VAL = 281,
     NEGATION = 282
   };
#endif
/* Tokens.  */
#define LOGICAL_AND 258
#define LOGICAL_OR 259
#define LOGICAL_NOT 260
#define BITWISE_AND 261
#define BITWISE_OR 262
#define BITWISE_NOT 263
#define BITWISE_XOR 264
#define INT 265
#define DOUBLE 266
#define FLOAT 267
#define CHAR 268
#define WHILE 269
#define FOR 270
#define IF 271
#define LT 272
#define LTE 273
#define GT 274
#define GTE 275
#define EQ 276
#define NEQ 277
#define ID 278
#define INTEGER_NUM 279
#define DOUBLE_NUM 280
#define CHAR_VAL 281
#define NEGATION 282




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 22 "parser.y"

    char str[200];
	int label;



/* Line 1676 of yacc.c  */
#line 113 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


