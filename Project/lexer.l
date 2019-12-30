%{

#include "y.tab.h"
#include <string.h>
int yyerror(char *errormsg);

%}

letter 	[a-zA-z]
digit	[0-9]
id		{letter}({letter}|{digit})*
delim 	[ \t\n]
ws		{delim}+


%%
{ws}		{}
\{			{ return OPENKR; }
\}			{ return CLOSEKR; }
\;			{ return SEMICOLON; }
\(			{ return OPENGIOM; }
\)			{ return CLOSEGIOM; }
"if"		{ return IF; }
"while"		{ return WHILE; }
"for"		{ return FOR; }
"int"		{ strcpy(yylval.str,yytext) ; return INT; }
"float"		{ strcpy(yylval.str,yytext) ; return FLOAT; }
"char"		{ strcpy(yylval.str,yytext) ; return CHAR; }
"<="		 { return LE;}
"=>"         { return GE;}
"=="         { return EQ;}
"<"          { return LT;}
">"          { return GT;}
\=			{ return ASSIGN; }		
{id}		{strcpy(yylval.str,yytext) ; return ID; }
{digit}+	{yylval.ival=atoi(yytext); return NUMBER; }
.			{yyerror("Invalid Command");}
%%



int main(void)
{
   yyparse();
   return 0;
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