#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#define N 100

using namespace std;

string a[N + 1];
int n, childCnt, c[N + 1];

void input()
{
	cin >> n;
}

int getNum(string name)
{
	for (int i = 1; i <= childCnt; i++)
	{
		if (a[i] == name)
		{
			return i;
		}
	}
	a[++childCnt] = name;
	return childCnt;
}

void core()
{
	int warning = 0;

	for (int i = 1; i <= n; i++)
	{
		string name;

		cin >> name;
		int num = getNum(name);

		if ((i - 1) - c[num] < c[num])
			warning++;
		c[num]++;
	}

	cout << warning << endl;
}

int main()
{
	input();
	core();

	return 0;
}
