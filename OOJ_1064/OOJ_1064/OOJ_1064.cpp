#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <string>
#define N 100

using namespace std;

int n;
string a[N + 1];

void input()
{
	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> a[i];
}

void output()
{
	for (int i = 1; i <= n; i++)
	{
		char ch = a[i].front();
		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
		{
			cout << a[i] << "euler" << endl;
		}
		else
		{
			cout << a[i].substr(1) << ch << "edu" << endl;
		}
	}
}

int main()
{
	input();
	output();

	return 0;
}
