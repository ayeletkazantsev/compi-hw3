#include <vector>
#include <string>
#include <string.h>
#include <iostream>
#include <stdlib.h>
#include <map>
#include <stack>
#define YYSTYPE Node*

using namespace std;

//struct Node {
//    Node();
//    virtual ~Node();
//};

struct Node {
    string type;
    string name;

    Node(string type, string name) : type(type), name(name) {}
};

//struct IdentifierNode : public Node {
//    string type;
//    string name;
//
//    IdentifierNode(string type, string name) : type(type), name(name) {}
//};



struct SymbolTableEntry {
    string name;
    string type;
    int offset;

    SymbolTableEntry(string name, string type, int offset) : name(name), type(type), offset(offset) {}

    ~SymbolTableEntry();
};


typedef vector<SymbolTableEntry*> SymbolTable;