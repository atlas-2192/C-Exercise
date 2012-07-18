#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int OnceALine()
{
  vector<string> v;
  ifstream in("OnceALine.cpp");
  string line;
  char input;
  int i = 0;
  while(getline(in, line))
	  v.push_back(line);
  while(i < v.size())
  {
	  cout << i << ":" << v[i] << endl;
	  do
	  {
		  cout << "press ENTER to display next line.." << endl;
		  input = getchar();
	  }while(input != '\n');
	  i++;
  }
  return 0;
}
	  