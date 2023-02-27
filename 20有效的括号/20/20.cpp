// 20.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<unordered_map>
#include<stack>
using namespace std;
class Solution {
public:
	bool isValid(string s) {
		unordered_map<char, char> pair = { {'(',')'} , {'[',']'} , {'{','}'} };
		stack<char> stt;
		for (int i = 0;i < s.length();i++)
		{
			if (pair.find(s[i]) != pair.end())
			{
				stt.push(pair[s[i]]);
			}
			else
			{
				if (stt.empty() || stt.top() != s[i])
				{
					return false;
				}
				stt.pop();
			}
		}
		return stt.empty();
	}
};
int main()
{
    std::cout << "Hello World!\n";
}