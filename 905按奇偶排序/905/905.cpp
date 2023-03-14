// 905.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<vector>
using namespace std;
vector<int> sortArrayByParity(vector<int>& nums) {
	vector<int> newNum;
	for (int i = 0;i < nums.size();i++)
	{
		if (nums[i] % 2 == 0)
			newNum.insert(newNum.begin(), nums[i]);
		else
			newNum.emplace_back(nums[i]);
	}
	return newNum;
}
void output(vector<int> &nums)
{
	for (int i = 0;i < nums.size();i++)
		cout << nums[i] << " ";
	cout << endl;
}
int main()
{
	vector<int> nums;
	nums.emplace_back(3);
	nums.emplace_back(1);
	nums.emplace_back(2);
	nums.emplace_back(4);
	nums=sortArrayByParity(nums);
	output(nums);
	return 0;
}

