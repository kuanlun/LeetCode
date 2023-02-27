
#include <iostream>
#include<string>
using namespace std;
string multiply(string num1, string num2) {
	int n1 = atoi(num1.c_str());
	int n2 = atoi(num2.c_str());
	int n = n1 * n2;
	string num = to_string(n);
	return num;
}
int main()
{
	string num1, num2;
	num1 = "2";
	num2 = "5";
	string a=multiply(num1, num2);
	cout << num1 << "*" << num2 << "=" << a << endl;
	return 0;
}
