%{

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>
int yylex(void);

int while_counter = 1;
int for_counter = 1;
int if_counter = 1;
int t_counter = 1;


FILE *yyin;
FILE *output;

%}

%start Program

%union{
    char str[200];
	int label;
}

/*Keywords*/


/* LOGICAL OPERATORS */
%token <str> LOGICAL_AND LOGICAL_OR LOGICAL_NOT


/* BITWISE OPERATORS */
%token <str> BITWISE_AND BITWISE_OR BITWISE_NOT BITWISE_XOR

/* TYPES */
%token INT DOUBLE FLOAT CHAR


/* OTHERS */		
%token <label> WHILE FOR IF			
%token <str> LT LTE GT GTE EQ NEQ	

	
/* EVERY TOKEN and NON TERMINAL IS STRING */
%token <str> ID
%token <str> INTEGER_NUM
%token <str> DOUBLE_NUM
%token <str> CHAR_VAL
%type <str> Expr Term Decl Ids


/*Associativity and Precedence*/

%right '='
%left LOGICAL_OR
%left LOGICAL_AND
%left BITWISE_OR
%left BITWISE_XOR
%left BITWISE_AND
%left EQ NEQ
%left LT LTE GT GTE
%left '-' '+'
%left '*' '/' '%'
%left LOGICAL_NOT BITWISE_NOT
%left NEGATION


%%

Program:
	Block   {;}
	;

Block: 
	'{' {printf("{\n");output = fopen("output.c", "a");  fprintf(output,"{\n"); fclose(output);} Stmts '}'     {printf(";\n}\n");output = fopen("output.c", "a");  fprintf(output,";\n}\n"); fclose(output);}
	;

Stmts:
	Stmts Stmt					{;}
	|							{;}
	;

Stmt:

	Decl ';'	{printf(";\n");output = fopen("output.c", "a");  fprintf(output,";\n"); fclose(output);}
	
	|Expr ';'	{;}


	|IF
	{
		printf("ifLabelNo%dStart:\n", $1=if_counter++); output = fopen("output.c", "a");  fprintf(output,"ifLabelNo%dStart:\n", $1); fclose(output);
		printf("{\n");output = fopen("output.c", "a");  fprintf(output,"{\n"); fclose(output);
	}
	'(' 
	{
		printf("ifLabelNo%dCondition:\n", $1);output = fopen("output.c", "a");  fprintf(output,"ifLabelNo%dCondition:\n", $1); fclose(output);
		printf("{\n");output = fopen("output.c", "a");  fprintf(output,"{\n"); fclose(output);
	}
	Expr ')' 
	{
		printf("if (%s==0) goto afterIfNo%d;\n", $5, $1);output = fopen("output.c", "a");  fprintf(output,"if (%s==0) goto afterIfNo%d;\n", $5, $1); fclose(output);
		printf("goto bodyIfNo%d;\n", $1);output = fopen("output.c", "a");  fprintf(output,"goto bodyIfNo%d;\n", $1); fclose(output);
		printf("}\n");output = fopen("output.c", "a");  fprintf(output,"}\n"); fclose(output);
	}
	{
		printf("bodyIfNo%d:\n", $1); output = fopen("output.c", "a");  fprintf(output,"bodyIfNo%d:\n", $1); fclose(output);
	}
	Stmt	
	{
		printf("}\n");output = fopen("output.c", "a");  fprintf(output,"}\n"); fclose(output);
		printf("afterIfNo%d:\n", $1);output = fopen("output.c", "a");  fprintf(output,"afterIfNo%d:\n", $1); fclose(output);
	}


	|WHILE 
	{
		printf("whileLabelNo%dStart:\n", $1=while_counter++); output = fopen("output.c", "a");  fprintf(output,"whileLabelNo%dStart:\n", $1); fclose(output);
		printf("{\n"); output = fopen("output.c", "a");  fprintf(output,"{\n"); fclose(output);
	}
	'(' 
	{
		printf("whileLabelNo%dCondition:\n", $1); output = fopen("output.c", "a");  fprintf(output,"whileLabelNo%dCondition:\n", $1); fclose(output);
		printf("{\n"); output = fopen("output.c", "a");  fprintf(output,"{\n"); fclose(output);
	}
	Expr ')'
	{
		printf("if (%s==0) goto afterWhileNo%d;\n", $5, $1); output = fopen("output.c", "a");  fprintf(output,"if (%s==0) goto afterWhileNo%d;\n", $5, $1); fclose(output);
		printf("goto bodyWhileNo%d;\n", $1); output = fopen("output.c", "a");  fprintf(output,"goto bodyWhileNo%d;\n", $1); fclose(output);
		printf("}\n"); output = fopen("output.c", "a");  fprintf(output,"}\n"); fclose(output);
		printf("bodyWhileNo%d:\n", $1); output = fopen("output.c", "a");  fprintf(output,"bodyWhileNo%d:\n", $1); fclose(output);
	}
	Stmt                   
	{
		printf("goto whileLabelNo%dCondition;\n", $1); output = fopen("output.c", "a");  fprintf(output,"goto whileLabelNo%dCondition;\n", $1); fclose(output);
		printf("}\n");  output = fopen("output.c", "a");  fprintf(output,"}\n"); fclose(output);
		printf("afterWhileNo%d:\n", $1); output = fopen("output.c", "a");  fprintf(output,"afterWhileNo%d:\n", $1); fclose(output);
	}


	|FOR 
	{
		printf("forNo%dStart:\n", $1=for_counter++); output = fopen("output.c", "a");  fprintf(output,"forNo%dStart:\n", $1); fclose(output);
		printf("{\n"); output = fopen("output.c", "a");  fprintf(output,"{\n"); fclose(output);
	}
	'(' Expr ';' 
	{
		printf("forNo%dCondition:\n", $1); output = fopen("output.c", "a");  fprintf(output,"forNo%dCondition:\n", $1); fclose(output);
		printf("{\n"); output = fopen("output.c", "a");  fprintf(output,"{\n"); fclose(output);
	}
	Expr 
	{
		printf("if(%s==0) goto afterForNo%d;\n", $7, $1);output = fopen("output.c", "a");  fprintf(output,"if(%s==0) goto afterForNo%d;\n", $7, $1); fclose(output);
		printf("goto forNo%dBody;\n", $1);output = fopen("output.c", "a");  fprintf(output,"goto forNo%dBody;\n", $1); fclose(output);
		printf("}\n");output = fopen("output.c", "a");  fprintf(output,"}\n"); fclose(output);
	}
	';' 
	{
		printf("forNo%dStep:\n", $1);output = fopen("output.c", "a");  fprintf(output,"forNo%dStep:\n", $1); fclose(output);
		printf("{\n");output = fopen("output.c", "a");  fprintf(output,"{\n"); fclose(output);
	}
	Expr
	{
		printf("goto forNo%dCondition;\n", $1);output = fopen("output.c", "a");  fprintf(output,"goto forNo%dCondition;\n", $1); fclose(output);
		printf("}\n");output = fopen("output.c", "a");  fprintf(output,"}\n"); fclose(output);
	}
	')'
	{
		printf("forNo%dBody:\n", $1);output = fopen("output.c", "a");  fprintf(output,"forNo%dBody:\n", $1); fclose(output);
	}
	Stmt    
	{
		printf("goto forNo%dStep;\n", $1);output = fopen("output.c", "a");  fprintf(output,"goto forNo%dStep;\n", $1); fclose(output);
		printf("}\n");output = fopen("output.c", "a");  fprintf(output,"}\n"); fclose(output);
		printf("afterForNo%d:\n", $1);output = fopen("output.c", "a");  fprintf(output,"afterForNo%d:\n", $1); fclose(output);
	}


	|Block			{;}
	;

Decl:
	INT Ids			{printf("int %s", $2);output = fopen("output.c", "a");  fprintf(output,"int %s", $2); fclose(output);}
	| DOUBLE Ids	{printf("double %s", $2);output = fopen("output.c", "a");  fprintf(output,"double %s", $2); fclose(output);}
	| FLOAT Ids		{printf("float %s", $2);output = fopen("output.c", "a");  fprintf(output,"float %s", $2); fclose(output);}
	| CHAR Ids		{printf("char %s", $2);output = fopen("output.c", "a");  fprintf(output,"char %s", $2); fclose(output);}
	;

Ids:    
	Ids ',' ID				{sprintf($$, "%s, %s", $1, $3);} 
	|Ids ',' ID '=' Expr	{sprintf($$, "%s, %s = %s", $1, $3, $5);}
	|ID						{sprintf($$, "%s",$1);}
	|ID '=' Expr			{sprintf($$, "%s = %s", $1, $3);}
	;

Expr:
	ID '=' Expr 	{strcpy($$, $3); printf("%s = %s;\n", $1, $3);}
	|Term			{strcpy($$, $1);}
	|				{;}
	;

Term:
    Term LT Term				{sprintf($$, "t%d", t_counter++); printf("int %s = %s %s %s;\n", $$, $1, $2, $3);output = fopen("output.c", "a");  fprintf(output,"int %s = %s %s %s;\n", $$, $1, $2, $3); fclose(output);}
	|Term LTE Term				{sprintf($$, "t%d", t_counter++); printf("int %s = %s %s %s;\n", $$, $1, $2, $3);output = fopen("output.c", "a");  fprintf(output,"int %s = %s %s %s;\n", $$, $1, $2, $3); fclose(output);}
	|Term GT Term				{sprintf($$, "t%d", t_counter++); printf("int %s = %s %s %s;\n", $$, $1, $2, $3);output = fopen("output.c", "a");  fprintf(output,"int %s = %s %s %s;\n", $$, $1, $2, $3); fclose(output);}
	|Term GTE Term				{sprintf($$, "t%d", t_counter++); printf("int %s = %s %s %s;\n", $$, $1, $2, $3);output = fopen("output.c", "a");  fprintf(output,"int %s = %s %s %s;\n", $$, $1, $2, $3); fclose(output);}
	|Term EQ Term				{sprintf($$, "t%d", t_counter++); printf("int %s = %s %s %s;\n", $$, $1, $2, $3);output = fopen("output.c", "a");  fprintf(output,"int %s = %s %s %s;\n", $$, $1, $2, $3); fclose(output);}
	|Term NEQ Term				{sprintf($$, "t%d", t_counter++); printf("int %s = %s %s %s;\n", $$, $1, $2, $3);output = fopen("output.c", "a");  fprintf(output,"int %s = %s %s %s;\n", $$, $1, $2, $3); fclose(output);}
	|Term LOGICAL_AND Term		{sprintf($$, "t%d", t_counter++); printf("int %s = %s %s %s;\n", $$, $1, $2, $3);output = fopen("output.c", "a");  fprintf(output,"int %s = %s %s %s;\n", $$, $1, $2, $3); fclose(output);}
	|Term LOGICAL_OR Term		{sprintf($$, "t%d", t_counter++); printf("int %s = %s %s %s;\n", $$, $1, $2, $3);output = fopen("output.c", "a");  fprintf(output,"int %s = %s %s %s;\n", $$, $1, $2, $3); fclose(output);}
	|LOGICAL_NOT Term			{sprintf($$, "t%d", t_counter++); printf("int %s = %s %s;\n", $$, $1, $2);output = fopen("output.c", "a");  fprintf(output,"int %s = %s %s;\n", $$, $1, $2); fclose(output);}
	|Term BITWISE_AND Term		{sprintf($$, "t%d", t_counter++); printf("int %s = %s %s %s;\n", $$, $1, $2, $3);output = fopen("output.c", "a");  fprintf(output,"int %s = %s %s %s;\n", $$, $1, $2, $3); fclose(output);}
	|Term BITWISE_OR Term		{sprintf($$, "t%d", t_counter++); printf("int %s = %s %s %s;\n", $$, $1, $2, $3);output = fopen("output.c", "a");  fprintf(output,"int %s = %s %s %s;\n", $$, $1, $2, $3); fclose(output);}
	|BITWISE_NOT Term			{sprintf($$, "t%d", t_counter++); printf("int %s = %s %s;\n", $$, $1, $2);output = fopen("output.c", "a");  fprintf(output,"int %s = %s %s;\n", $$, $1, $2); fclose(output);}
	|Term BITWISE_XOR Term		{sprintf($$, "t%d", t_counter++); printf("int %s = %s %s %s;\n", $$, $1, $2, $3);output = fopen("output.c", "a");  fprintf(output,"int %s = %s %s %s;\n", $$, $1, $2, $3); fclose(output);}
	|Term '*' Term				{
								sprintf($$, "t%d", t_counter++);
								if(containsDot($1) || containsDot($3)){
									printf("float %s = %s * %s;\n", $$, $1, $3);output = fopen("output.c", "a");  fprintf(output,"float %s = %s * %s;\n", $$, $1, $3); fclose(output);
									}
								else{
									printf("int %s = %s * %s;\n", $$, $1, $3);output = fopen("output.c", "a");  fprintf(output,"int %s = %s * %s;\n", $$, $1, $3); fclose(output);}
								}
	|Term '/' Term				{
								sprintf($$, "t%d", t_counter++); 
								if(containsDot($1) || containsDot($3)){
									printf("float %s = %s / %s;\n", $$, $1, $3);output = fopen("output.c", "a");  fprintf(output,"float %s = %s / %s;\n", $$, $1, $3); fclose(output);}
								else{
									printf("int %s = %s / %s;\n", $$, $1, $3);output = fopen("output.c", "a");  fprintf(output,"int %s = %s / %s;\n", $$, $1, $3); fclose(output);}
								}
	|Term '%' Term				{
								sprintf($$, "t%d", t_counter++);
								if(containsDot($1) || containsDot($3)){
									printf("float %s = %s % %s;\n", $$, $1, $3);output = fopen("output.c", "a");  fprintf(output,"float %s = %s % %s;\n", $$, $1, $3); fclose(output);}
								else{
									printf("int %s = %s % %s;\n", $$, $1, $3);output = fopen("output.c", "a");  fprintf(output,"int %s = %s % %s;\n", $$, $1, $3); fclose(output);}
								}
	|Term '+' Term				{sprintf($$, "t%d", t_counter++); 
								if(containsDot($1) || containsDot($3)){
									printf("float %s = %s + %s;\n", $$, $1, $3);output = fopen("output.c", "a");  fprintf(output,"float %s = %s + %s;\n", $$, $1, $3); fclose(output);}
								else{
									printf("int %s = %s + %s;\n", $$, $1, $3);output = fopen("output.c", "a");  fprintf(output,"int %s = %s + %s;\n", $$, $1, $3); fclose(output);}
								}
	|Term '-' Term				{
								sprintf($$, "t%d", t_counter++);
								if(containsDot($1) || containsDot($3)){
									printf("float %s = %s - %s;\n", $$, $1, $3);output = fopen("output.c", "a");  fprintf(output,"float %s = %s - %s;\n", $$, $1, $3); fclose(output);}
								else{
									printf("int %s = %s - %s;\n", $$, $1, $3);output = fopen("output.c", "a");  fprintf(output,"int %s = %s - %s;\n", $$, $1, $3); fclose(output);}
								}
	|'-' Term %prec NEGATION	{sprintf($$, "t%d", t_counter++); 
								if(containsDot($2)){
									printf("float %s = -%s;\n", $$, $2);output = fopen("output.c", "a");  fprintf(output,"float %s = -%s;\n", $$, $2); fclose(output);}
								else{
								printf("int %s = -%s;\n", $$, $2);output = fopen("output.c", "a");  fprintf(output,"int %s = -%s;\n", $$, $2); fclose(output);}
								}
	|'(' Expr ')'    			{strcpy($$, $2);}
	|INTEGER_NUM   				{strcpy($$, $1);}
	|DOUBLE_NUM					{strcpy($$, $1);}
	|CHAR_VAL					{strcpy($$, $1);}
	|ID             			{strcpy($$, $1);}
	;


%%

int containsDot(char * string){
	int i = 0 ;
	for(i = 0 ; i <strlen(string) ; i++)
		if(string[i] == '.')
			return 1;
	return 0;
}

int main(int argc, char *argv[])
{
	printf("Hello\n");
    yyin = fopen("input.c", "r");
	//output = fopen("output.c" , "w");
    yyparse();
    fclose(yyin);
	//fclose(output);
	return 0 ;
}



int yywrap(void)
{
   return 0;
}

int yyerror(char *errormsg)
{
    fprintf(stderr, "hey!%s\n", errormsg);
    exit(1);
}