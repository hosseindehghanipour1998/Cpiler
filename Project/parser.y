%{

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int yylex(void);
int yyerror(const char *s);


%}



%union{int ival; double dval; char str[120]; }

%token<str> INT CHAR FLOAT DOUBLE ASSIGN IF SEMICOLON ID OPENAKOLAD CLOSEAKOLAD OPENPARAN CLOSEPARAN WHILE FOR LE GE EQ LT GT
%token<ival> NUMBER

%type <str> Type Stmt IfStmt DeclStmt Stmts
%type <ival> Expr

%error-verbose
%%




Program:
			  Block
        ;

Block:
		OPENAKOLAD { printf("{\n")} Stmts CLOSEAKOLAD {printf("}")}
		;

IDs :
		IDs , ID {sprintf($$,"%s , %s",$1,$3);}
		| ID		{sprintf($$,"%s",$1);}


DeclStmt:
				Type IDs SEMICOLON  { printf("%s %s ; \n" , $1 , $2); }
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

Type:
		INT {strcpy($$,"int");}
		|FLOAT {strcpy($$,"float");}
		|CHAR {strcpy($$,"char");}
		|DOUBLE {strcpy($$,"double");}
		;


AssignStmt:
        Type ID ASSIGN Expr SEMICOLON
        ;


IfStmt:
		IF OPENPARAN Expr CLOSEPARAN Stmts {printf("if(%d==0) goto afterIfLabel#\n%s\nafterIfLabel#;", $3 , $5);}
		;











Expr:
	NUMBER
	;

%%
