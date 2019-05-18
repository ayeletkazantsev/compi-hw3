#include <string>

namespace Parser {
    using namespace std;
    void openGlobalScope();

    void openScope();

    void closeScope();
    void declareIdentifier(string type, string name);

}