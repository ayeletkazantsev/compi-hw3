#include <vector>
#include <string>
#include <string.h>
#include <iostream>
#include <stdlib.h>
#include <map>
#include <stack>
#include <utility>
#include <climits>
#define YYSTYPE Type*

using namespace std;

const int UNDEFINED = INT_MAX;


struct Type { // INT, VOID, DOUBLE etc.
    string type;

    Type() {}
    Type(string type) : type(type) {}
    virtual ~Type() {}
};

struct NameTypeInfo : public Type{ // ID, "X"
    string type;
    string name;

    NameTypeInfo(string type, string name) : type(type), name(name) {}
};

struct MultiNameTypeInfo : public Type { // list of token names
    string type;
    vector<string> names;

    MultiNameTypeInfo(string type, vector<string> names) : type(type), names(names) {}
};

struct MultiNameMultiTypeInfo : public Type{ //list of token types and names
    vector<pair<string, string> > types_names;

    MultiNameMultiTypeInfo() {}
    MultiNameMultiTypeInfo(vector<pair<string, string> > types_names) : types_names(types_names) {}
};

struct FuncInfo : public Type {
    string name;
    string retType;
    vector<pair<string, string> > types_names;

    FuncInfo(string name, string retType,vector<pair<string, string> > types_names) : name(name), retType(retType), types_names(types_names) {}
};

struct SymbolTableEntry {
    string type; //for id - type; for function - return type
    string name;
    int offset;
    vector<pair<string, string> > args; //only for functions

    SymbolTableEntry(string type, string name, int offset) : type(type), name(name), offset(offset), args() {}

    /*
    SymbolTableEntry(string retType, string name, int offset, vector<pair<string, string> > args) : type(retType), name(name), offset(offset), args(args) {} //for function implementation
    */

    SymbolTableEntry(string retType, string name, vector<pair<string, string> > args) : type(retType), name(name), offset(UNDEFINED), args(args) {} //for function declaration only

    ~SymbolTableEntry();
};


typedef vector<SymbolTableEntry*> SymbolTable;