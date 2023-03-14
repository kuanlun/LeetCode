#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
void Output(vector<int> &nums)
{
	for (int i = 0;i < nums.size();i++)
	{
		cout << nums[i] << " ";
	}
}
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
{
	for (int i = 0;i < n;i++)
	{
		nums1.push_back(nums2[i]);
	}
	sort(nums1.begin(), nums1.end());
	Output(nums1);
}	
int main()
{
	int n, m;
	vector<int> num1;
	num1.push_back(1);
	num1.push_back(4);
	num1.push_back(18);
	num1.push_back(43);
	vector<int> num2;
	num2.push_back(2);
	num2.push_back(0);
	num2.push_back(2);
	num2.push_back(100);
	n = num2.size();
	m = num1.size();
	merge(num1,n,num2,m);
	return 0;
}
