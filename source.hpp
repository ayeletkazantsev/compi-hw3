#include <vector>
#include <string>
#include <string.h>
#include <iostream>
#include <stdlib.h>
#include <map>
#include <stack>
#define YYSTYPE Node*

using namespace std;

struct Node {
    Node();
    virtual ~Node();
};

struct TypeNode : public Node {
    string type;

    TypeNode(string type) : type(type) {}
};

struct ValueNode : public Node {
    string type;
    string value;

    ValueNode(string type, string value) : type(type), value(value) {}
};
