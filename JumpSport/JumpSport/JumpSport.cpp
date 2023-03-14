// JumpSport.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
	int getMax(vector<int>& nums, int left, int right)
	{
		int max = 0;
		int now = nums[left];
		while (left <= right)
		{
			
			now = nums[left];
			
			cout <<"nums" << left << "=" << now<< "  max=" <<max << endl;
			left++;
			if (max < now) max = now;
		}
		cout << "getMax return = "<<max << endl;
		return max;
	}
	int jump(vector<int>& nums) {
		int time = 0;
		int start = 0;
		int end = nums.size() - 1;
		while (start < end)
		{
			int max = getMax(nums, start + 1, start + nums[start]);
			start += max;
			time++;
		}
		return time;
	}
};
int main()
{
	vector<int> nums;
	nums.emplace_back(2);
	nums.emplace_back(3);
	nums.emplace_back(1);
	nums.emplace_back(1);
	nums.emplace_back(4);
	Solution ans;
	int a=ans.jump(nums);
	cout << a << endl;
	return 0;
}
