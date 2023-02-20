#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#define N 100

using namespace std;

int n, f1[N + 1], r1[N + 1];
int f2[N + 1], r2[N + 1];

void input()
{
	cin >> n;

	int x;

	for (int i = 1; i <= n; i++)
	{
		cin >> x;
		f1[x]++;
		for (int j = 1; j <= x; j++)
		{
			f2[j]++;
		}
	}

	for (int i = 1; i <= n; i++)
	{
		cin >> x;
		r1[x]++;
		for (int j = 1; j <= x; j++)
		{
			r2[j]++;
		}
	}
}

void core()
{
	int minv = 0, maxv = 0;

	for (int i = 1; i <= n; i++)
	{
		minv += max(f1[i], r1[i]) * i;
		maxv += (f2[i] * r2[i]);
	}

	cout << minv << " " << maxv << "\n";
}

int main()
{
	input();
	core();

	return 0;
}
