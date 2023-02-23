#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <tuple>
#define N 25000

using namespace std;

int n;
tuple<double, int, int>a[N + 1];

void input()
{
	int j, p;

	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> j >> p;
		a[i] = { double(j) / p,p,i };
	}
}

void core()
{
	partial_sort(a + 1, a + 4, a + n + 1, greater<tuple<double, int, int>>());
}

void output()
{
	int sum = 0;

	for (int i = 1; i <= 3; i++)
	{
		sum += get<1>(a[i]);
	}

	cout << sum << endl;

	for (int i = 1; i <= 3; i++)
	{
		cout << get<2>(a[i]) << endl;
	}
}

int main()
{
	input();
	core();
	output();

	return 0;
}
