
#include <iostream>
using namespace std;
bool isPowerOfThree(int n, int m) {
	if (n == 0) return false;
	while (n % m == 0) n /= m;
	if (n == 1)
		return true;
	return false;
}
int main()
{
	int n, m;
	cin >> n >> m;
	if (isPowerOfThree(n, m))
		cout << n << "是" << m << "的幂";
	else
		cout << n << "不是" << m << "的幂";

}
