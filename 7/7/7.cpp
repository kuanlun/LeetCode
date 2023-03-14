#include <iostream>
using namespace std;
#define INT_MAX 2147483647
#define INT_MIN -2147483647
int reverse(int x) {
	long n = 0;
	while (x != 0)
	{
		n = n * 10 + x % 10;
		x /= 10;
	}
	return n > INT_MAX || n < INT_MIN ? 0 : n;
}

int main()
{
	int x;
	x = 1534236469; //96463243 51
	int x1 = 964632430;
	//x = 123;
	cout << reverse(x) << endl;
	return 0;
}