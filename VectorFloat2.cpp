#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<float> nums;
    float first = 0;
    float second = 0;
      
	cout << "Enter two numbers:" << endl;
    cin << first << second;
    for (int i = 0; i < 10; i++)
    {
        if (i % 2) {
            first += first + second;
            nums.push_back(first);
        }
        else 
        {
            second += first + second;
            nums.push_back(second);
        }
    }
    /*
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
    */
    for (int i = 0; i < 10; i++)
        cout << nums[i] << endl;
	return 0;
}