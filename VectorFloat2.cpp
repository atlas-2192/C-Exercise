#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<float> nums;
	float num;
	cout << "Enter two numbers:" << endl;
	for (int i = 0; i <= 9; i++)
	{
		if (i <= 1)
            cin >> num;
        else
            num = 0;
        nums.push_back(num);
	}
	for (int i = 2; i <= 9; i++)
        nums[i] = nums[i-1] + nums[i-2];
    for (int i = 0; i <= 9;i++)
		cout << nums[i] << endl;
	return 0;
}