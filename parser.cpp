#include <string>

#include "parser.hpp"
#include "source.hpp"
#include "output.hpp"

static int i = 0;

using namespace output;

// Global Variables:
stack<SymbolTable *> *tables_stack = new stack<SymbolTable *>();
stack<int> *offsets_stack = new stack<int>();


void Parser::openGlobalScope() {
    // create symbol table for global scope
    cout << "global scope opended" << endl;
    SymbolTable *table = new SymbolTable();
    tables_stack->push(table);
    offsets_stack->push(0);
}


void Parser::openScope() {
    // create symbol table for new scope

    SymbolTable *table = new SymbolTable();
    tables_stack->push(table);
    offsets_stack->push(offsets_stack->top());
}

void Parser::closeScope() {
    // get symbol table of current scope
//    SymbolTable* current = tables_stack->top();
    SymbolTable* current = tables_stack->top();
    vector<SymbolTableEntry*> entries = *current;
    // print content of scope
    for (int i = 0; i < entries.size(); ++i) {
        SymbolTableEntry *entry = entries[i];
        if (entry) {
            if (!entry->isFunc) { //identifier entry
                printID(entry->name, entry->offset, entry->type);
            }
            else { // function
                vector<string> types;
                vector<pair<string, string> > args = entry->args;
                for (int i=0; i<args.size(); ++i)
                {
                    types.push_back(args[i].first);
                }
                printID(entry->name, 0 ,makeFunctionType(entry->type,types));
            }
        }
    }

    // clear symbol table from closed scope
    offsets_stack->pop();
    tables_stack->pop();

    endScope(); //print ---end scope---
}

void Parser::pushIdentifierToStack(string type, string name) {
    //TODO: check if identifier is free

    //push identifier to current symbol table
    SymbolTable *current = tables_stack->top();
    int offset = offsets_stack->top();
    SymbolTableEntry *e = new SymbolTableEntry(type, name, offset);
    current->push_back(e);

    //update offset
    offsets_stack->pop();
    offsets_stack->push(offset + 1);

}

void Parser::pushFunctionDeclarationToStack(string retType, string name, vector<pair<string, string> > args) {
    //TODO: check if identifier is free

    // push function declaration entry to global scope
    SymbolTable *current = tables_stack->top();
    SymbolTableEntry *e = new SymbolTableEntry(retType, name, args);

    current->push_back(e);

    // make new symbol table for function arguments
    // todo check case of num of arg. == 0
    int offset = -1;
    cout << "local function scope opened" << endl;
    SymbolTable *argsSymTable = new SymbolTable();
    tables_stack->push(argsSymTable);

    // push each argument to symbol table
    for (int i = 0; i < args.size(); ++i) {
        string argType = args[i].first;
        string argName = args[i].second;
        SymbolTableEntry *e = new SymbolTableEntry(argType, argName, offset);
        argsSymTable->push_back(e);
        offset--;
    }
}

void Parser::checkExpressionType(string exp, string type, int line) {
    if (exp == type) return;
    errorMismatch(line);
    exit(0);
}

