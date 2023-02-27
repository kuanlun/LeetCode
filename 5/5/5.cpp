// 5.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

//#include <bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
//中心扩散法
string longestPalindrome(string s) {
	if (s.size() == 1) return s;
	string maxStr = "";
	int left = 0, right = 0, len = 0, maxLen = 0, maxStart = 0;
	for (int i = 0;i < s.size();i++)
	{
		left = i - 1;
		right = i + 1;
		while (left >= 0 && s[left] == s[i])
		{
			left--;
			len++;
		}
		while (right < s.size() && s[right] == s[i])
		{
			right++;
			len++;
		}
		while (left >= 0 && right < s.size() && s[left] == s[right])
		{
			len += 2;
			right++;
			left--;
		}
		if (maxLen < len)
		{
			maxLen = len;
			maxStart = left;
		}
		len = 1;//从下一个cur开始 所以长度重置
	}
	for (int i = maxStart + 1;i < maxStart + maxLen + 1;i++)
	{
		maxStr += s[i];
	}
	return maxStr;
}
int main()
{
	string s = "babad";
	cout << s << " : " << longestPalindrome(s) << endl;
	s = "cbbd";
	cout << s << " : " << longestPalindrome(s) << endl;
	s = "lasiasiucbdasadb";
	cout << s << " : " << longestPalindrome(s) << endl;
	return 0;
}
