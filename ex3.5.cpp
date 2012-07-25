#include <iostream>
using namespace std;

int exercise()
{
    int x = 1, y = 2, z = 3;
    int A, A1;
    A = x + y - 2 / 2 + z;
    A1 = x + (y - 2) / (2 + z);
    cout << A << " " << A1 << endl;
    return 0;
}