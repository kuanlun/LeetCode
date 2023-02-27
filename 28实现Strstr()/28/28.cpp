#include <iostream>
#include<string>

using namespace std;

int strStr(string haystack, string needle) {
	int n = haystack.size(), m = needle.size();
	int i, j = 0;
	for (int i = 0;i <= n - m;i++)//n-m可以减少遍历haystack次数
	{
		bool flag = true;
		for (j = 0;j < m;j++)
		{
			if (haystack[i + j] != needle[j])
			{
				flag = false;
				break;
			}
		}
		if (flag)
			return i;
	}
	return -1;
}
int main()
{
	string haystack;
	string needle;
	haystack = "helltllo";//5
	needle = "llo";
	int n=strStr(haystack, needle);
	cout << n << endl;
	return 0;
}