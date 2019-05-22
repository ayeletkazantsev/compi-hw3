%{

#include "source.hpp"
#include "parser.tab.hpp"
#include "output.hpp"
using namespace output;


#include <iostream>
using namespace std;

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
BINOP (\+|\-|\*|\/)
ID ([a-zA-Z][a-zA-Z0-9]*)
NUM (0|[1-9][0-9]*)
STRING (\"([^\n\r\"\\]|\\[rnt"\\])+\")
COMMENT (\/\/[^\r\n]*[\r|\n|\r\n]?)
WHITESPACE ([\n\t\f\r\v ])
NO_ELSE (^((?!^else).)*$)

%%

{VOID} {return VOID;}
{INT} {return INT;}
{BYTE} {return BYTE;}
{B} {return B;}
{BOOL} {return BOOL;}
{AND} {return AND;}
{OR} {return OR;}
{NOT} {return NOT;}
{TRUE} {return TRUE;}
{FALSE} {return FALSE;}
{RETURN} {return RETURN;}
{IF} {return IF;}
{ELSE} {return ELSE;}
{WHILE} {return WHILE;}
{BREAK} {return BREAK;}
{CONTINUE} {return CONTINUE;}
{PRECOND} {return PRECOND;}
{SC} {return SC;}
{COMMA} {return COMMA;}
{LPAREN} {return LPAREN;}
{RPAREN} {return RPAREN;}
{LBRACE} {return LBRACE;}
{RBRACE} {return RBRACE;}
{ASSIGN} {return ASSIGN;}
{RELOP} {return RELOP;}
{BINOP} {yylval = new NameTypeInfo("BINOP",yytext); return BINOP;}
{ID} {yylval = new NameTypeInfo("ID",yytext); return ID;}
{NUM} {yylval = new NameTypeInfo("INT",yytext); return NUM;}
{STRING} {return STRING;}
{COMMENT} {}
{WHITESPACE} {}
. {errorLex(yylineno);};


%%


