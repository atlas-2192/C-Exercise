#include <iostream>
using namespace std;

void function()
{
    cout << "This function is void" << endl;
}

char function1(const char op1)
{
    cout << "This function is char. The parameter is " 
         << op1 << endl;
    return op1;
}

int function2(const int op2)
{
    cout << "This function is int. The parameter is "
         << op2 << endl;
    return op2;
}

float function3(const float op3)
{
    cout << "This function is float. The parameter is "
        << op3 << endl;
    return op3;
}