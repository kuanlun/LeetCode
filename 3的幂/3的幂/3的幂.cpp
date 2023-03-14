
#include <iostream>
using namespace std;
bool isPowerOfThree(int n) {
	if (n == 0) return false;
	while (n % 3 == 0) n /= 3;
	if (n == 1)
		return true;
	return false;
}
int main()
{
	int n;
	cin >> n;
	if (isPowerOfThree(n))
		cout << n << "是3的幂";
	else
		cout << n << "不是3的幂";

}
