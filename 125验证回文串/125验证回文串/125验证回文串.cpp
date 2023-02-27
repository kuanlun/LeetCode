// 125验证回文串.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool isPalindrome(string s) {
	if (s.length() == 0)
		return true;
	string str;
	int i = 0;
	while (i < s.length())
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			str += s[i];
		else if (s[i] >= 'A' && s[i] <= 'Z')
			str += (s[i] + 32);
		else if (s[i] >= '0' && s[i] <= '9')
			str += s[i];
		i++;
	}
	int j = 0;
	for (j = 0,i=str.length()-1;j <= i;i--, j++)
	{
		if (str[i] != str[j])
			return false;
	}
	return true;
}
int main()
{
	string s = "A man, a plan, a canal : Panama";
	if (isPalindrome(s))
		cout << "true";
	else
		cout << "false";
	return 0;
}