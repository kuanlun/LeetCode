// 520检测大写字母.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<string>
using namespace std;
//第一个字大写 -> 后面全部大写
//			   -> 后面全部小写
//第一个字小写 -> 后面全部小写
//				  ->返回true
//其他->返回false
bool isCapital(char word)
{
	if (word >= 'A' && word <= 'Z')
		return true;
	return false;
}
bool detectCapitalUse(string word) 
{
	int len = word.length(), i = 0;
	if (isCapital(word[i]) == true)
	{
		if (isCapital(word[i]) == true)//后面全是大写
			;
		else if (isCapital(word[i]) == false)//后面全是小写
			;
	}
	else if (isCapital(word[i]) == false)//全是小写
	{
		for (i = 1;i < len;i++)
		{

		}
	}
	return true;
}
int main()
{
	string s;
	s = "Leetcode";
	//s = "USA";
	//s = "FlaG";
	//s = "apple";
	bool flag=detectCapitalUse(s);
	cout << s << " is " << flag;
	return 0;
}

