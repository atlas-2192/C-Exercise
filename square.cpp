#include <iostream>
using namespace std;

int square()
{
	float r,s;
	cout << "Enter the radius of a circle:" << endl;
	cin >> r;
	s = 3.14 * r * r;
    cout << "The sqaure of the circle is " << s << endl;
	return 0;
}