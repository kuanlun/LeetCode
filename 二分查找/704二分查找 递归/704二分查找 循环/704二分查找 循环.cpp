// 704二分查找 循环.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<vector>
using namespace std;
int search(vector<int>& nums,int low,int high, int target) {
	if (low > high)
		return -1;
	int mid= (low + high) / 2;
	if (nums[mid] > target)
		return search(nums, low, mid - 1, target);
	else if (nums[mid] < target)
		return search(nums, mid + 1, high, target);
	else
		return mid;
}
int main()
{
	int target = -1;
	vector<int> nums;
	nums.emplace_back(-1);
	nums.emplace_back(0);
	nums.emplace_back(3);
	nums.emplace_back(5);
	nums.emplace_back(9);
	nums.emplace_back(12);
	int len = nums.size()-1;
	int n=search(nums, 0,len,target);
	cout << target << "的位置是:" << n;
	return 0;
}

