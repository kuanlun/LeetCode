
#include <iostream>
#include<string>
#include<unordered_set>
#include<algorithm>
using namespace std;
int lengthOfLongestSubstring(string s) {
	unordered_set<char> character;
	int maxLen = 0, left = 0;
	for (int i = 0;i < s.size();i++)
	{
		while (character.find(s[i]) != character.end())//存在字符 while(防止很多重复字符串)
		{
			character.erase(s[left]);//删除窗口左边
			left++;//left向左
		}
		maxLen = max(maxLen, i - left + 1);//判断最长子串的长度
		character.insert(s[i]);//窗口右边加一
	}
	return maxLen;
}
int main()
{
	string s = "bbbbb";
	cout << s << ":" << lengthOfLongestSubstring(s) << endl;
	s = "pwwkew";
	cout << s << ":" << lengthOfLongestSubstring(s) << endl;
	s = "abcabcbb";
	cout << s << ":" << lengthOfLongestSubstring(s) << endl;
	return 0;
}
