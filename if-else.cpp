#include <iostream>
using namespace std;

int ifelse() 
{
  int i;
  cout << "type a number and 'Enter'" << endl;
  cin >> i;
  i > 5 ? cout << " i > 5 " << endl : i < 5 ? cout << "i < 5" << endl :
      cout << "i = 5" << endl;
  return 0;
}