%{

#include "y.tab.h"
#include <string.h>
int yyerror(char *errormsg);
FILE *yyin;
extern FILE *yyout; 
%}

digit [0-9]
letter [a-zA-Z]
whitespace [ \t\n\r]

%%

{whitespace}+			{;}
{digit}+				{strcpy(yylval.str, yytext); return INTEGER_NUM;}
{digit}+"."{digit}+		{strcpy(yylval.str, yytext); return DOUBLE_NUM;}
\'{letter}\' 			{strcpy(yylval.str, yytext); return CHAR_VAL;}
[+-/*%=,;(){}]			{return *yytext;}	

"<"         {strcpy(yylval.str, yytext); return LT;}
"<="        {strcpy(yylval.str, yytext); return LTE;}
">"         {strcpy(yylval.str, yytext); return GT;}
">="        {strcpy(yylval.str, yytext); return GTE;}
"=="        {strcpy(yylval.str, yytext); return EQ;}
"!="        {strcpy(yylval.str, yytext); return NEQ;}
"&&"        {strcpy(yylval.str, yytext); return LOGICAL_AND;}
"||"		{strcpy(yylval.str, yytext); return LOGICAL_OR;}
"~"         {strcpy(yylval.str, yytext); return BITWISE_NOT;}
"&"			{strcpy(yylval.str, yytext); return BITWISE_AND;}
"|"			{strcpy(yylval.str, yytext); return BITWISE_OR;}
"^"			{strcpy(yylval.str, yytext); return BITWISE_XOR;}

"int"       {return INT;}
"double"    {return DOUBLE;}
"float"		{return FLOAT;}
"char"		{return CHAR;}
"for"       {return FOR;}
"while"     {return WHILE;}
"if"        {return IF;}


{letter}({letter}|{digit})*     {strcpy(yylval.str, yytext); return ID;}
.                               { yyerror("Invalid Command");}

%%
