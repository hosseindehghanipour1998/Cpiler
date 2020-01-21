%{

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int yylex(void);
int yyerror(const char *s);

int ifBlockCounter = 0 ;


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
		IDs , ID 									{sprintf($$,"%s , %s",$1,$3);}
		| ID											{sprintf($$,"%s",$1);}
		| IDs , ID ASSIGN Expr 		{sprintf($$,"%s , %s = %s",$1,$2,$3);}
		|ID ASSIGN Expr						{sprintf($$,"%s = %s",$1,$3);}	


DeclStmt:
				Type IDs SEMICOLON  { printf("%s %s ; \n" , $1 , $2); }
				;


Stmts:
		Stmts Stmt
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

IfStmt:
		IF 							{;}
		OPENPARAN 			{;}
		Expr						{
										printf("if(%s == 0) goto afterIfLabel%d;\n",$3,$1 = ifBlockCounter++)
										printf("goto ifLabel%d:",$1);
										printf("ifLabel%d:",$1);
										}
		CLOSEPARAN
		 Stmts					{printf("afterIfLabel%d",$1);}
		;



AssignStmt:
        Type
				ID
				ASSIGN  		{printf("%s %s =  " , $1 , $2 );}
				Expr 				{printf("%s",$4);}
				SEMICOLON 	{printf(";");}
        ;

Expr :
















Expr:
	NUMBER
	;

%%
