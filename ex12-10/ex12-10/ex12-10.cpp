#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int n, idx=0;
string str[101];

void input()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> str[i];
		if (str[idx].length() < str[i].length())
			idx = i;
	}
}

void core()
{
	cout << str[idx] << endl;
}

int main()
{
	input();
	core();

	return 0;
}
