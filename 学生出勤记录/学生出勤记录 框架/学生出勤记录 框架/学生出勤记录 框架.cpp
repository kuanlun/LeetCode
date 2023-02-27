// 学生出勤记录 框架.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<string>
using namespace std;
bool checkRecord(string s) {
	int i = 0, len = s.length();
	int absent = 0, late = 0;
	while (i < s.length())
	{
		if (s[i] == 'A')
		{
			
		}
		if (s[i] == 'L')
		{
			
		}
		i++;
	}
	return true;
}
int main()
{
	string student = "PPALLL";
	if (checkRecord(student))
		cout <<student<< ":有奖！";
	else
		cout << student << ":不能拿奖！";
	student = "PPALLP";
	if (checkRecord(student))
		cout << student << ":有奖！";
	else
		cout << student << ":不能拿奖！";
}
