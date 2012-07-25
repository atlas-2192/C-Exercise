#include <iostream>
#include <string>
using namespace std;

typedef struct
{
    string s1;
    string s2;
    int i;
}Exercise;

int main()
{
    Exercise e;
    Exercise* ep = &e;
    e.s1 = "a";
    e.s2 = "b";
    e.i = 1;
    cout << "e.s1 = " << e.s1 << " "
         << "e.s2 = " << e.s2 << " "
         << "e.i = " << e.i << endl;
    ep->s1 = "c";
    ep->s2 = "d";
    ep->i = 2;
    cout << "e.s1 = " << e.s1 << " "
         << "e.s2 = " << e.s2 << " "
         << "e.i = " << e.i << endl;
    return 0;
}