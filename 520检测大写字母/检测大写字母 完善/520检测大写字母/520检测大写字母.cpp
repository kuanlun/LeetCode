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
bool isCapital(char word)//判断是大写还是小写
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
		i++;//判断下一个字母
		if (isCapital(word[i]) == true)//后面全是大写
		{
			for (i = 2;i < len;i++)
			{
				if (isCapital(word[i]) == false)//发现小写
					return false;
			}
		}
		else if (isCapital(word[i]) == false)//后面全是小写
		{
			for (i = 2;i < len;i++)
			{
				if (isCapital(word[i]) == true)//发现大写
					return false;
			}
		}
	}
	else if (isCapital(word[i]) == false)//全是小写
	{
		for (i = 1;i < len;i++)
		{
			if (isCapital(word[i]) == true)//发现大写
				return false;
		}
	}
	return true;
}
int main()
{
	string s[4];
	s[0] = "Leetcode";
	s[1] = "USA";
	s[2] = "FlaG";
	s[3] = "apple";
	for (int i = 0;i < 4;i++)
	{
		bool flag = detectCapitalUse(s[i]);
		if (flag)
			cout << s[i] << " is correct used!"<<endl;
		else
			cout << s[i] << "is incorrext used!"<<endl;
	}
	return 0;
}

