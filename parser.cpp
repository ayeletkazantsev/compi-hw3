#include <string>

#include "parser.hpp"
#include "source.hpp"
#include "output.hpp"
#include <algorithm>

using namespace output;

const string not_found = "NOT FOUND";

// Global Variables:
stack<SymbolTable *> *tables_stack = new stack<SymbolTable *>();
stack<int> *offsets_stack = new stack<int>();


void Parser::openGlobalScope() {
    // create symbol table for global scope
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
    SymbolTable *current = tables_stack->top();
    vector<SymbolTableEntry *> entries = *current;

    // print content of scope
    for (int i = 0; i < entries.size(); ++i) {
        SymbolTableEntry *entry = entries[i];
        if (entry) {
            if (!entry->isFunc) { // identifier entry
                printID(entry->name, entry->offset, entry->type);
            } else { // function entry
                vector<string> types;
                vector<pair<string, string> > args = entry->args;
                for (int i = 0; i < args.size(); ++i) {
                    types.push_back(args[i].first);
                }
                printID(entry->name, 0, makeFunctionType(entry->type, types));
            }
        }
    }

    // clear symbol table from closed scope
    offsets_stack->pop();
    tables_stack->pop();
}

void Parser::pushIdentifierToStack(string type, string name) {

    //push identifier to current symbol table
    SymbolTable *current = tables_stack->top();
    int offset = offsets_stack->top();
    SymbolTableEntry *e = new SymbolTableEntry(type, name, offset);
    current->push_back(e);

    //update offset
    offsets_stack->pop();
    offsets_stack->push(offset + 1);
}

void Parser::pushFunctionDeclarationWithoutOpenScope(string retType, string name) {
    SymbolTable *current = tables_stack->top();
    vector<pair<string, string> > types_names;
    pair <string, string> pair;
    if (name == "print") {
        pair.first = "STRING"; //string isn't a part of the grammer; just "internal" type
        pair.second = "str";
    }
    else if (name == "printi") {
        pair.first = "INT";
        pair.second = "num";
    }
    else {
        // todo throw exception; shouldn't get here
    }

    types_names.push_back(pair);
//
    SymbolTableEntry *e = new SymbolTableEntry(retType, name, types_names);
    current->push_back(e);
}

void
Parser::pushFunctionDeclarationToStackAndOpenScope(string retType, string name, vector<pair<string, string> > args) {

    // push function declaration entry to global scope
    SymbolTable *current = tables_stack->top();
    SymbolTableEntry *e = new SymbolTableEntry(retType, name, args);
    current->push_back(e);

    // make new symbol table (scope) for function arguments
    SymbolTable *argsSymTable = new SymbolTable();
    tables_stack->push(argsSymTable);
    offsets_stack->push(0);

    int offset = -1;
    reverse(args.begin(), args.end());
    // push each argument to symbol table
    for (int i = 0; i < args.size(); ++i) {
        string argType = args[i].first;
        string argName = args[i].second;
        SymbolTableEntry *e = new SymbolTableEntry(argType, argName, offset);
        argsSymTable->push_back(e);
        offset--;
    }
}

void Parser::checkExpressionType(YYSTYPE exp, string type, int line) {
    if (getExpType(exp) == type) return;
    errorMismatch(line);
    exit(0);
}

string Parser::getIdType(string id) {
    SymbolTableEntry *e = getIdEntry(id);
    if (e != NULL) return e->type; // return id type from symbol table
    return not_found; // id was not found
}

bool Parser::checkIdFree(string id) {
    SymbolTableEntry *e = getIdEntry(id);
    if (e == NULL) return true; // id was not defined before, id is free
    return false; // id was found in symbol table, id is not free
}

int Parser::getIdIndex(vector<SymbolTableEntry *> entries, string id) {
    //find id in scope
    for (int i = 0; i < entries.size(); ++i) {
        SymbolTableEntry *entry = entries[i];
        if (entry) {
            if (entry->name == id)
                return i;
        }
    }
    return -1;
}


SymbolTableEntry *Parser::getIdEntry(string id) {
    stack<SymbolTable *> tmp_tables_stack(*tables_stack);

    // go through all symbol tables in tmp stack
    while (!tmp_tables_stack.empty()) {

        // get symbol table of top scope
        SymbolTable *symTable = tmp_tables_stack.top();
        vector<SymbolTableEntry *> entries = *symTable;
        int idx = getIdIndex(entries, id);
        if (idx != -1) {
            return entries[idx]; // found in symbol table
        }
        tmp_tables_stack.pop();
    }
    return NULL; // id was not defined before
}

bool Parser::checkMainFuncLegal()
{
    SymbolTableEntry* e = getIdEntry("main");

    if (e == NULL || e->type!="VOID" ||e->args.size()!=0)
        return false;
    return true;
}

string Parser::getExpType(YYSTYPE exp)
{
    NameTypeInfo* e = dynamic_cast<NameTypeInfo*>(exp);
    if (e)
    {
        if (e->type == "ID") return getIdType(e->name);
        return e->type;
    }
    return exp->type;
}

bool Parser::isValidAssigment(YYSTYPE lval,YYSTYPE rval) {
    //check expressions types
    string type_id = getExpType(lval);
    string type_exp = getExpType(rval);
    if (type_id != type_exp)
    {
        // allow byte to int assignment
        return type_id == "INT" && type_exp == "BYTE";
    }
    return true;
}