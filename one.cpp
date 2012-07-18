#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int one()
{
  vector<string> v;
  ifstream in("string.cpp");
  string line;
  string s1 = "";
  while(getline(in, line))
    v.push_back(line); // Add the line to the end
  // Add line numbers:
  for(int i = 0; i < v.size(); i++)
	  s1 += v[i];
    cout << s1 << endl;
	return 0;
} 