// 509斐波那契数列.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

int fib(int n) {
	if (n == 0) return 0;
	if (n == 1) return 1;
	else
	{
		return fib(n - 1) + fib(n - 2);
	}
}
int main()
{
	int a[5] = { 0,1,4,7,12 };
	for (int i = 0;i < 5;i++)
	{
		cout<<a[i]<<"=>"<<fib(a[i])<<endl;
	}
	return 0;

}

