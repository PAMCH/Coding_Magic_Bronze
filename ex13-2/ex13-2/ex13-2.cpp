#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>


using namespace std;

pair<pair<int, int>, string> a[101];
string name;
int n, c, t;

void input()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> name >> c >> t;
		a[i] = { {c,t},name };
	}
}

void core()
{
	sort(a + 1, a + n + 1, greater<>());
}

void output()
{
	for (int i = 1; i <= n; i++)
	{
		cout << a[i].second << " " << a[i].first.first << " " << a[i].first.second << endl;
	}
}

int main()
{
	input();
	core();
	output();

	return 0;
}
