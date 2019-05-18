#include <string>

#include "parser.hpp"
#include "source.hpp"
#include "output.hpp"



using namespace output;

// Global Variables:
stack<SymbolTable *> *tables_stack = new stack<SymbolTable *>();
stack<int> *offsets_stack = new stack<int>();


void Parser::openGlobalScope() {
    SymbolTable *table = new SymbolTable();
    tables_stack->push(table);
    offsets_stack->push(0);
}


void Parser::openScope() {
    SymbolTable *table = new SymbolTable();
    tables_stack->push(table);
    offsets_stack->push(offsets_stack->top());
}

void Parser::closeScope() {
    endScope();

    SymbolTable current = (SymbolTable)* tables_stack->top();

    for (int i=0; i<current.size(); ++i)
    {
        SymbolTableEntry* entry = current[i];
        if (entry)
        {
            printID(entry->name, entry->offset, entry->type);
        }
    }


    offsets_stack->pop();
    tables_stack->pop();
}

void Parser::declareIdentifier(string type, string name) {
    SymbolTable *current = tables_stack->top();
    int offset = offsets_stack->top();
    offsets_stack->pop();
    SymbolTableEntry* entry = new SymbolTableEntry(type,name,offset);
    offsets_stack->push(offset+1);
    current->push_back(entry);
}