
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
	sort(nums.begin(), nums.end(), compare);//从大到小排序
	nums.erase(unique(nums.begin(), nums.end()), nums.end());//删除重复元素
	if (nums.size() < 3)
		return nums[0];
	return nums[2];
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
	nums.clear();
	nums.push_back(1);//1 1 2
	nums.push_back(1);
	nums.push_back(2);
	n = thirdMax(nums);
	cout << n << endl;
	return 0;
}