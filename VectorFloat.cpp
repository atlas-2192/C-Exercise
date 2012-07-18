#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<float> nums;
	float num;
	cout << "Enter ten numbers:" << endl;
	for (int i = 0; i <= 9; i++)
	{
		cin >>  num;
		nums.push_back(num);
	}
	for (int i = 0; i <= 9; i++)
		cout << nums[i] << endl;
	return 0;
}
