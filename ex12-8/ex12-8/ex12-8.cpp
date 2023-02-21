#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int n;
string str[101];

void input()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> str[i];
		reverse(str[i].begin(), str[i].end());
	}
}

void core()
{
	for (int i = 1; i <= n; i++)
	{
		cout << str[i] << endl;
	}
}

int main()
{
	input();
	core();

	return 0;
}
