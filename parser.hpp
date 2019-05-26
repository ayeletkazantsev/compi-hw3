#ifndef _PARSER_HPP
#define _PARSER_HPP
#include <string>
#include <vector>
#include <utility>
#include "source.hpp"

namespace Parser {
    using namespace std;

    void openGlobalScope();

    void openScope();

    void closeScope();

    void pushIdentifierToStack(string type, string name);

    void pushFunctionDeclarationWithoutOpenScope(string retType, string name);

    void pushFunctionDeclarationToStackAndOpenScope(string retType, string name, vector<pair<string, string> > args);

    void checkExpressionType(YYSTYPE exp, string type, int line);

    int getIdIndex(vector<SymbolTableEntry *> entries, string id);

    bool checkIdFree(string id);

    bool checkFuncIdFree(string id);

    string getIdType(string id);

    SymbolTableEntry* getIdEntry(string id);

    bool checkMainFuncLegal();

    string getExpType(YYSTYPE exp);

    bool isValidAssigment(YYSTYPE lval,YYSTYPE rval);

    bool checkProrotypeOfFunction(string funcID, vector<string> args_types);
}

#endif