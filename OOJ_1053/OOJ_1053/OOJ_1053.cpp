#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>

using namespace std;

int n, even, odd;

void input()
{
	string str;

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> str;
		if (str.length() % 2 == 0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
}

void output()
{
	cout << even << endl << odd << endl;
}

int main()
{
	input();
	output();

	return 0;
}
