// 412 FizzBuzz游戏.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<string>
#include<vector>
using namespace std;
vector<string> fizzBuzz(int n) {
	vector<string> fb;
	string f;
	for (int i = 1;i <= n;i++)
	{
		if (i % 3 == 0)
		{
			if (i % 5 == 0)
				fb.emplace_back("FizzBuzz");
			else
				fb.emplace_back("Fizz");
		}
		else if (i % 5 == 0)
			fb.emplace_back("Buzz");
		else
		{
			f = to_string(i);
			fb.emplace_back(f);
		}
	}
	return fb;
}
void output(vector<string> fb)
{
	cout << "[";
	int i;
	for (i = 0;i < fb.size()-1;i++)
	{
		cout << fb[i] << ",";
	}
	cout << fb[i] << "]";
}
int main()
{
	int n=15;
	vector<string> fb;
	fb = fizzBuzz(n);
	output(fb);
}
