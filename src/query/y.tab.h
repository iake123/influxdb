/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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
     SELECT = 258,
     FROM = 259,
     WHERE = 260,
     EQUAL = 261,
     OPERATION_EQUAL = 262,
     OPERATION_NE = 263,
     OPERATION_GT = 264,
     OPERATION_LT = 265,
     OPERATION_LE = 266,
     OPERATION_GE = 267,
     STRING_VALUE = 268,
     NAME = 269,
     OR = 270,
     AND = 271
   };
#endif
/* Tokens.  */
#define SELECT 258
#define FROM 259
#define WHERE 260
#define EQUAL 261
#define OPERATION_EQUAL 262
#define OPERATION_NE 263
#define OPERATION_GT 264
#define OPERATION_LT 265
#define OPERATION_LE 266
#define OPERATION_GE 267
#define STRING_VALUE 268
#define NAME 269
#define OR 270
#define AND 271




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 2068 of yacc.c  */
#line 10 "query.yacc"

  char character;
  char *string;
  array *arr;
  int i;
  from *f;
  condition *condition;
  bool_expression *bool_expression;
  expression *expression;
  value *v;



/* Line 2068 of yacc.c  */
#line 96 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif




