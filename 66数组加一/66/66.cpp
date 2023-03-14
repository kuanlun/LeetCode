
#include <iostream>
#include<vector>

using namespace std;
#define MAX 2147483647
vector<int> plusOne(vector<int>& digits) 
{
	int sum = 0;
	for (int i = 0;i < digits.size();i++)//吧数组都放到sum里
	{
		sum *= 10;
		sum += digits[i];
		if (sum > MAX)
			return 0;
	}
	digits.clear();
	cout << sum << endl;
	sum++;
	cout << sum << endl;
	while(sum>0)//吧sum转到数组里 sum=100   digits.size()=2   digits=[9,9]  =>  digits[1,0,0]
	{
		digits.insert(digits.begin(), sum%10);
		sum /= 10;
	}
	return digits;
}
void output(vector<int> digits)
{	
	for (int i = 0;i < digits.size();i++)
	{
		cout << digits[i] << " ";
	}
	cout << endl;
}
int main()
{
	vector<int> digits;
	for (int i = 9;i >=0;i--)
		digits.emplace_back(i);
	//digits.push_back(9);
	//digits.push_back(9);
	output(digits);
	plusOne(digits);
	output(digits);
	return 0;
}

