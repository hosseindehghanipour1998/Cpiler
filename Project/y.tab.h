
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
     INT = 258,
     CHAR = 259,
     FLOAT = 260,
     ASSIGN = 261,
     IF = 262,
     SEMICOLON = 263,
     ID = 264,
     OPENAKOLAD = 265,
     CLOSEAKOLAD = 266,
     OPENPARAN = 267,
     CLOSEPARAN = 268,
     WHILE = 269,
     FOR = 270,
     LE = 271,
     GE = 272,
     EQ = 273,
     LT = 274,
     GT = 275,
     NUMBER = 276
   };
#endif
/* Tokens.  */
#define INT 258
#define CHAR 259
#define FLOAT 260
#define ASSIGN 261
#define IF 262
#define SEMICOLON 263
#define ID 264
#define OPENAKOLAD 265
#define CLOSEAKOLAD 266
#define OPENPARAN 267
#define CLOSEPARAN 268
#define WHILE 269
#define FOR 270
#define LE 271
#define GE 272
#define EQ 273
#define LT 274
#define GT 275
#define NUMBER 276




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 13 "parser.y"
int ival; double dval; char str[120]; 


/* Line 1676 of yacc.c  */
#line 98 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


