
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

bool compare(int a, int b)
{
	return a > b;
}
int thirdMax(vector<int>& nums) 
{
	if (nums.size() < 3)//返回最大的数
	{
		sort(nums.begin(), nums.end(), compare);
		return nums[0];
	}
	int i = 0, flag = 0;
	sort(nums.begin(), nums.end(), compare);//从大到小排序
	while (i<nums.size())
	{
		if (flag == 2)
			return nums[i];
		if (nums[i] != nums[i + 1])
		{
			flag++;
			i++;
		}
		else
			i++;
	}
}
int main()
{
	vector<int> nums;//6 5 4 3 2 2 2 2 1
	nums.push_back(2);
	nums.push_back(2);
	nums.push_back(2);
	nums.push_back(2);
	nums.push_back(3);
	nums.push_back(5);
	nums.push_back(4);
	nums.push_back(6);
	nums.push_back(1);
	int n=thirdMax(nums);
	cout << n << endl;
	return 0;
}