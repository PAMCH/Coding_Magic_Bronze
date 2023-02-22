#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <tuple>
#define N 50000

using namespace std;

int t, n;
pair<int, int>a[N + 1];

void input()
{
	int x;

	cin >> t >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> x;
		a[i] = { abs(x),x };
	}
}

void core()
{
	int sum = 0, i;
	sort(a + 1, a + n + 1);
	for (i = 1; i <= n; i++)
	{
		int dist = abs(a[i].second - a[i - 1].second);
		if (t < sum + dist)
		{
			break;
		}
		sum += dist;
	}
	cout << i-1 << endl;
}

int main()
{
	input();
	core();

	return 0;
}
