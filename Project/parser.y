%{

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int yylex(void);
int yyerror(const char *s);


%}


%union{int ival; double dval; char str[120]; }

%token<str> INT CHAR FLOAT ASSIGN IF SEMICOLON ID OPENAKOLAD CLOSEAKOLAD OPENPARAN CLOSEPARAN WHILE FOR LE GE EQ LT GT
%token<ival> NUMBER

%type <str> Type Stmt IfStmt DeclStmt Stmts
%type <ival> Expr

%error-verbose
%%

Program:
		Block
        ;

Block:
		OPENAKOLAD Stmts CLOSEAKOLAD
		;

Stmts:
		Stmts Stmt { strcat($1,"\n") ; strcat($1,$2) ; strcpy($$,$1);}
		| Stmt
		;

Stmt:
		Block
		|IfStmt
		|AssignStmt
		|DeclStmt
		;

AssignStmt:
        Type ID ASSIGN Expr SEMICOLON
        ;


IfStmt:
		IF OPENPARAN Expr CLOSEPARAN Stmts {printf("if(%d==0) goto afterIfLabel#\n%s\nafterIfLabel#;", $3 , $5);}
		;




DeclStmt:
		Type ID SEMICOLON  { strcat($1," "); strcat($1,$2) ; strcpy($$,$1);}
		;


Type:
		INT
		|FLOAT
		|CHAR
		;


Expr:
	NUMBER
	;

%%
