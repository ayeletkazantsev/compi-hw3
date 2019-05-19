#include <string>

namespace Parser {
    using namespace std;
    void openGlobalScope();

    void openScope();

    void closeScope();
    void pushIdentifierToStack(string type, string name);

}