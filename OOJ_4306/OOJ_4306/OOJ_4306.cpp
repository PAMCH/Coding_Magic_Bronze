#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <tuple>
#define N 50000

using namespace std;

int n, k;
tuple<int, int, int>a[N + 1];

void input()
{
	int s1, s2;

	cin >> n >> k;
	for (int i = 1; i <= n; i++)
	{
		cin >> s1 >> s2;
		a[i] = { s1,s2,i };
	}
}

bool cmp(const tuple<int, int, int>& x, const tuple<int, int, int>& y)
{
	return get<1>(x) > get<1>(y);
}

void core()
{
	sort(a + 1, a + n + 1, greater<tuple<int, int, int>>());
	sort(a + 1, a + k + 1, cmp);
	cout << get<2>(a[1]) << endl;
}

void output()
{

}

int main()
{
	input();
	core();
	output();

	return 0;
}
