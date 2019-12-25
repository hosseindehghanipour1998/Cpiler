%{

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int yylex(void);
int yyerror(const char *s);


struct Node{
	char str[100];
	struct Node * next;
};
struct Node *add(struct Node *head , char * str);
struct Node *addend(struct Node *head , char * str);
void printTAC();
struct Node * head = NULL;

int temp = 0;

%}


%union{int ival; double dval; char str[120]; }

%token<str> INT CHAR FLOAT ASSIGN IF SEMICOLON ID OPENKR CLOSEKR OPENGIOM CLOSEGIOM
%token<ival> NUMBER

%type <str> Type
%type <ival> Expr

%error-verbose
%%

Program: 
        Block {  printTAC() ;}
        ;

Block:
		OPENKR Stmts CLOSEKR
		;
		
Stmts:
		Stmts Stmt
		| Stmt 
		;
		
Stmt:
		Block
		|IfStmt { 
				char buf[256];
				sprintf(buf, "afterIfLabel%d:\n" , temp);
				temp++;
				head = add(head,buf); 
			
				}
		|AssignStmt
		|DeclStmt
		;
		
AssignStmt:     
        Type ID ASSIGN Expr SEMICOLON 		{ 
												char buf[256];
												sprintf(buf, "%s %s = %d;", $1 , $2 , $4);
												head = add(head,buf); 
												
											}
        ;

		
IfStmt:
		IF OPENGIOM Expr CLOSEGIOM Stmt {
											
												char buf[256];
												sprintf(buf,"if(%d==0) goto afterIfLabel%d", $3 , temp);
												head = add(head , buf);
												
										}
		;
		
		

		
DeclStmt:
		Type ID SEMICOLON { printf("%s %s;\n" , $1 , $2); }
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

int isTrue(int number){
	if(number>0)
		return 1;
	return 0;
}

struct Node *add(struct Node *head , char * str){
	struct Node *temp = head;
    struct Node *new_node;
    new_node = (struct Node *)malloc(sizeof(struct Node));
    strcpy(new_node->str,str);
    new_node->next = NULL;

    if(head == NULL)
        return new_node;
    else{
		new_node->next = head;
		head = new_node;
        return new_node;
    }

}

struct Node *addend(struct Node *head , char * str){
	struct Node *temp = head;
    struct Node *new_node;
    new_node = (struct Node *)malloc(sizeof(struct Node));
    strcpy(new_node->str,str);
    new_node->next = NULL;

    if(head == NULL)
        return new_node;
    else{
		
		while(temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
		return head;
    }

}


void printTAC(){
	struct Node *temp = head;
	while(temp != NULL){
		printf("%s\n" , temp->str);
		temp = temp->next;
	}
		
}