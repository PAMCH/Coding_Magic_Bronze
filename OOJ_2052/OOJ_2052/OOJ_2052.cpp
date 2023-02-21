#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

string str;
char a[17][6];
int n;

void input()
{
	cin >> str;
	n = str.length() / 5;
}

void core()
{
	for (int j = 1; j <= 5; j++)
		for (int i = 1; i <= n; i++)
			a[i][j] = str[(j - 1) * n + (i - 1)];
}

void output()
{
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= 5; j++)
			cout << a[i][j];
	cout << endl;
}

int main()
{
	input();
	core();
	output();

	return 0;
}
