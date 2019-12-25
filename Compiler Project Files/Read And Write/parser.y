%{
#include <stdio.h>
#include <stdlib.h>

extern FILE *fp;

%}

%token INT FLOAT CHAR DOUBLE 
%token FOR WHILE 
%token IF  
%token ID
%token INT_NUM FLOAT_NUM
%token ADD SUB DIV MUL POW

%right '='
%left '<' '>' LE GE EQ NE LT GT

%%

Start : Block ;
Block :  Stmts 


Stmt : ID '=' Expr
	|IF '(' Expr ')' Stmt
	|WHILE '(' Expr ')' Stmt
	|FOR '(' Expr ';' Expr ';' Expr ')' Stmt
	|'{' Stmts '}'
	|Expr 			{printf("%d",$1);)}
	;
	
Stmts : Stmts Stmt
	| ';'
	;
Expr : Expr ADD Term {$$ = $1 + $3 ; }
	| Expr '-' Term 
	| Term
	;
Term : Term '*' Factor
	| Term '/' Factor
	| Factor {$$ = $1 ;}
	;
Factor : Digit  {$$ = $1 ;}
	| '(' Expr ')'
	;
Digit : INT_NUM ; 


%%

