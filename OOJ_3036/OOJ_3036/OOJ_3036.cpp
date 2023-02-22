#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <tuple>
#define N 100000

using namespace std;

int n, m;
pair<int, int>a[N + 1];


void input()
{
	int woman, man;

	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> woman >> man;
		a[i] = { -(woman + man),i };
	}
}

void core()
{
	sort(a + 1, a + n + 1);
}

void output()
{
	for (int i = 1; i <= m; i++)
	{
		cout << a[i].second << endl;
	}
}

int main()
{
	input();
	core();
	output();

	return 0;
}
