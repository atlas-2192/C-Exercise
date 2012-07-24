#include <iostream>
#include <cmath>
using namespace std;

int primeNumber()
{
    int n;
    float k;
    cout << "Enter a number: " << endl;
    cin >> n;
    for (int i = 2; i < n + 1; i++)
    {
        k = sqrt((float)i);
        if (i == 2)
            cout << 2 << endl;
        for (int j = 2; j < k + 1; j++)
        {
            if (i % j == 0)
                break;
            if (j > k)
            cout << i << endl;
        }
    }
}

