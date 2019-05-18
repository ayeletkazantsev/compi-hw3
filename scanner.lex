%{

#include "source.hpp"
#include "parser.tab.hpp"
#include "output.hpp"
using namespace std;
using namespace output;

//#define (TOKEN) {yylval=sp(new Node(TOKEN, yytext)); return TOKEN;}

%}

%option yylineno
%option noyywrap


VOID 	(void)
INT 	(int)
BYTE 	(byte)
B 	(b)
BOOL (bool)
AND (and)
OR (or)
NOT (not)
TRUE (true)
FALSE (false)
RETURN (return)
IF	(if)
ELSE (else)
WHILE (while)
BREAK (break)
CONTINUE (continue)
PRECOND (@pre)
SC (;)
COMMA (\,)
LPAREN (\()
RPAREN (\))
LBRACE (\{)
RBRACE (\})
ASSIGN (=)
RELOP (==|!=|<|>|<=|>=)
BINOP (+|-|*|/)
ID ([a-zA-Z][a-zA-Z0-9]*)
NUM (0 | [1-9][0-9]*)
STRING (\"([^\n\r\"\\]|\\[rnt"\\])+\")
COMMENT (\/\/[^\r\n]*[\r|\n|\r\n]?)
WHITESPACE ([\n\t\f\r\v ])
NO_ELSE (^((?!^else).)*$)

%%

{COMMENT}													{}
{WHITESPACE}												{}
. 														{errorLex(yylineno);};


%%


void showToken(char* name) {
	printf("%d %s %s\n", yylineno, name, yytext);
}
