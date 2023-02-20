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
		int len = a[i].length();
		if (len > 10)
			cout << a[i].front() << len - 2 << a[i].back() << endl;
		else
			cout << a[i] << endl;
	}
}

int main()
{
	input();
	output();

	return 0;
}
