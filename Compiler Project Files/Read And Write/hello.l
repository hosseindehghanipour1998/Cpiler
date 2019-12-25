%{
		#include <stdio.h>
		#define ID 257
		#define NUM 258
		#define INT_NUM 259
		#define FLOAT_NUM 260

		#define CHAR 261
		#define DOUBLE 262
		#define FOR 263
		#define WHILE 264
		#define IF 265
		#define LE 266
		#define GE 267
		#define EQ 268
		#define NE 269
		#define GT 270
		#define LT 271
		#define ASS 272
		#define ADD 273
		#define SUB 274
		#define MUL 275
		#define DIV 276
		#define POW 277
		#define INT 278
		#define FLOAT 279

		
%} 
alpha [a-zA-Z]
digit [0-9] 
digits {digit}+


%% 
for 										{return FOR;}
while										{return WHILE;}
if 											{return IF;}
int											{return INT;}
float										{return FLOAT;}
double										{return DOUBLE;}
{digits}									{return INT_NUM;}
{digits}(\.{digits})?(\E[+\-]?{digits})?	{return FLOAT_NUM;}
{alpha}* 									{return CHAR;}
(_)*{alpha}(_)*({alpha}|{digit}|_)* 		{return ID; }

"+"											{return ADD;}
"-"                                     	{return SUB;}
"*"                                     	{return MUL;}
"/"                                     	{return DIV;}
"^"                                     	{return POW;}
"<="    									{return LE;}
"="    										{return ASS;}
">="    									{return GE;}
"=="    									{return EQ;}
"!="    									{return NE;}
">"											{return GT;}
"<"											{return LT;}

%% 
  
 
#include"lex.yy.c"
#include<ctype.h>
int count=0;
int yywrap(){return 0 ;}
      
int main() 
{ 
	printf("Lexing Started !");
    extern FILE *yyin, *yyout; 
  
    yyin = fopen("input.txt", "r"); 
  
    //yyout = fopen("output.txt", "w"); 
  
    int i = 0 ;
	while ( i < 3 ){
	yylex(); 
	i++;
	}
    printf("Lexing Done !");
	
	   if(!yyparse())
		printf("\nParsing complete\n");
	else
		printf("\nParsing failed\n");
	printf("Hello Bithc");
	
    return 0; 
} 

yyerror(char *s) {
	printf("%d : %s %s\n", yylineno, s, yytext );
}         


