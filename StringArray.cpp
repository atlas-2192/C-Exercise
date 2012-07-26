#include <iostream>
#include <string>
using namespace std;

int StringArray()
{
    string s[10];
    cout << "Enter ten strings:" << endl;
    for (int i = 0; i < 10;i++)
    {
        cin >> s[i];
    }
    for (int i = 0;i < 10;i++)
    {
        cout << "s[" << i << "] = " << s[i] << endl;
    }
    return 0;
}