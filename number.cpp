#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

int WordNumber()
{
	vector<string> words;
	ifstream in ("exp2.3.cpp");
	string word;
	int i = 0;
	while (in >> word)
	{
		words.push_back(word);
		i++;
	}
	cout << "The number of words is " << i << endl;
	return 0;
}