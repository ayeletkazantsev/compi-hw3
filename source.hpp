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
    string type; //name of token
    string name; //value of token

    Node(string type, string name) : type(type), name(name) {}
};

//struct IdentifierNode : public Node {
//    string type;
//    string name;
//
//    IdentifierNode(string type, string name) : type(type), name(name) {}
//};



struct SymbolTableEntry {
    string type;
    string name;
    int offset;

    SymbolTableEntry(string type, string name, int offset) : type(type), name(name), offset(offset) {}

    ~SymbolTableEntry();
};


typedef vector<SymbolTableEntry*> SymbolTable;