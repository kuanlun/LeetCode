// 寻找比目标字符大的最小字符 一版本.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<vector>
using namespace std;
char nextGreatestLetter(vector<char>& letters, char target) {
	int min = 27;
	char minCharacter;
	for (int i = 0;i < letters.size();i++)
	{
		int dis = letters[i] - target;
		if (dis < min && letters[i] != target)
		{
			min = dis;
			minCharacter = letters[i];
		}
	}
	return minCharacter;
}
int main()
{
	char target = 'c';
	vector<char> letters;
	letters.push_back('c');
	letters.push_back('f');
	letters.push_back('j');
	char min = nextGreatestLetter(letters,target);
	cout << min << endl;
	return 0;
}

