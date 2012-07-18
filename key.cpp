#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

int key()
{
	vector<string> words;
	ifstream in("special.cpp");
	string word, key;
	int j = 0;
	cout << "Enter the word you want:" << endl;
	cin >> key;
	while (in >> word)
		words.push_back (word);
	for (int i = 0; i < words.size(); i++)
	{
		if (words[i] == word)
			j++;
	}
	cout << "The number of the word \"" << key << "\" is " << j << endl;
	return 0;
}
