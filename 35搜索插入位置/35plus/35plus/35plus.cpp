
#include <iostream>
#include<vector>

using namespace std;
void output(vector<int> nums)
{
	int i = 0;
	cout << "[";
	for (;i < nums.size() - 1;i++)
	{
		cout << nums[i] << ",";
	}
	cout << nums[i] << ']'<<endl;
}
int searchInsert(vector<int>& nums, int target)
{
	int i = 0, j, len = nums.size();
	for (;i < nums.size();i++)//在中间
	{
		if (nums[i] >= target)
		{
			nums.push_back(nums[len-1]);

				for (j =nums.size() - 3;j > i;j--)
				{
					nums[j + 1] = nums[j];
				}

			nums[j]=target;
			return i;
		}
	}
	nums.push_back(target);//在尾部
	return i;
}

int main()
{
	int target = 4;
	vector<int> nums;//size=len=4  [0 1 2 3]
	nums.push_back(1);
	nums.push_back(3);
	nums.push_back(5);
	nums.push_back(6);
	output(nums);
	//cout << searchInsert(nums, target) << endl;
	searchInsert(nums, target);
	output(nums);
	return 0;
}