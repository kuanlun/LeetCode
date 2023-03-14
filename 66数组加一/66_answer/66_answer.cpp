#include <iostream>
#include<vector>

using namespace std;

vector<int> plusOne(vector<int>& digits) {
	int n = digits.size();
	for (int i = n - 1; i >= 0; i--) {
		digits[i] = (digits[i] + 1) % 10;
		//若等于0 => 进位了 判断下一个数需不需要进位
		//若不等于0 => 没有进位 =>直接返回
		if (digits[i]) 
		{
			return digits;
		}
	}
	vector<int> ans(n + 1, 0);//若遍历数组还没有输出，就代表这个数为100.......
	ans[0] = 1;
	return ans;
}

void output(vector<int> digits)
{
	for (int i = 0;i < digits.size();i++)
	{
		cout << digits[i] << " ";
	}
	cout << endl;
}
int main()
{
	vector<int> digits;
	/*for (int i = 9;i >= 0;i--)
		digits.emplace_back(i);*/
	digits.push_back(9);
	digits.push_back(9);
	output(digits);
	plusOne(digits);
	output(digits);
	return 0;
}