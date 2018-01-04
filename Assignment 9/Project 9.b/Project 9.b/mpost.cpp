#include <iostream>

using namespace std;

double postfixEval(char []);

int main()
{

    
    char expression[] = "25 12 7 - 2 * /";
    
    cout<< "The result of this postfix expression is. "<<endl<<postfixEval(expression)<<endl;
    

    return 0;
}
