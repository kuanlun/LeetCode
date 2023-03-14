// 4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
	for (int i = 0;i < nums2.size();i++)
	{
		nums1.push_back(nums2[i]);
	}
	sort(nums1.begin(), nums1.end());
	int len = nums1.size();
	double num;
	if (len % 2 == 1)
	{
		num = nums1[len / 2];
	}
	else if (len % 2 == 0)
	{
		int len1 = (len / 2) - 1;
		double n1, n2;
		n1 = nums1[len / 2];
		n2 = nums1[len1];
		num = (n1 + n2) / 2;
	}
	return num;
}
int main()
{
	vector<int> nums1;
	nums1.push_back(1);
	nums1.push_back(3);
	vector<int> nums2;
	nums2.push_back(2);
	nums2.push_back(4);
	double num=findMedianSortedArrays(nums1, nums2);
	cout << num << endl;
	return 0;
}
