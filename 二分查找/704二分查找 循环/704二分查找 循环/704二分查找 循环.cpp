// 704二分查找 循环.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<vector>
using namespace std;
int search(vector<int>& nums, int target) {
	int low = 0, high = nums.size() - 1;
	while (low <= high)
	{
		int mid = (low + high) / 2;
		if (nums[mid] == target)
			return mid;
		if (nums[mid] > target)
		{
			high = mid - 1;
		}
		else
			low = mid + 1;
	}
	return -1;
}
int main()
{
	int target = 9;
	vector<int> nums;
	nums.emplace_back(-1);
	nums.emplace_back(0);
	nums.emplace_back(3);
	nums.emplace_back(5);
	nums.emplace_back(9);
	nums.emplace_back(12);
	int n=search(nums, target);
	cout << target << "的位置是:" << n;
	return 0;
}

