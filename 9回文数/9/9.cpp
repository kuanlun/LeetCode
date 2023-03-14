
#include <iostream>
#include <string>
#include<vector>
using namespace std;
bool get(int &x)
{
	int i = 0, j;
	if (x < 0)
		return false;
	else
	{
		vector<int> arry(10);
		while (x > 0)
		{
			arry[i] = x % 10;
			i++;
			x /= 10;

		}

		j = i - 1;
		i = 0;
		while (i < j)
		{
			if (i == j)
				break;
			if (arry[i] != arry[j])
				return false;
			else
			{
				i++;j--;
			}

		}
	}
	return true;
}
int main()
{
	int x = 10;
	if (get(x))
	{
		cout << "ok";
	}
	else
		cout << "no";
	return 0;
}

