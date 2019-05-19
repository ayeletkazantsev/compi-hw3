#include <string>
#include <vector>
#include <utility>

namespace Parser {
    using namespace std;

    void openGlobalScope();

    void openScope();

    void closeScope();

    void pushIdentifierToStack(string type, string name);

    void pushFunctionDeclarationToStack(string retType, string name, vector<pair<string, string> > args);

    void checkExpressionType(string exp, string type, int line);
}