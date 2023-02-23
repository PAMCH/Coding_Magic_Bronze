#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <tuple>
#define N 50000

using namespace std;

int n;
tuple<int, int, int>a[N + 1];

void input()
{
	int h, m, s;

	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> h >> m >> s;
		a[i] = { h,m,s };
	}
}

void core()
{
	sort(a + 1, a + n + 1);
}

void output()
{
	for (int i = 1; i <= n; i++)
	{
		cout << get<0>(a[i]) << " " << get<1>(a[i]) << " " << get<2>(a[i]) << endl;
	}
}

int main()
{
	input();
	core();
	output();

	return 0;
}
