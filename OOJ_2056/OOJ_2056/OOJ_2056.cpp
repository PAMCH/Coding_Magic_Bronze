#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <tuple>
#define N 99

using namespace std;

pair<string, int> a[N + 1];
int m, n;
string num[10] = { "zero","one","two","three","four","five","six","seven","eight","nine" };

void input()
{
	cin >> m >> n;
}

void core()
{
	for (int i = 1; i <= n; i++)
	{
		string str;
		if (i < 10)
		{
			str = num[i];
		}
		else
		{
			str = num[i / 10] + string(" ") + num[i % 10];
		}
		a[i] = { str,i };
	}
	sort(a + m, a + n + 1);
}

void output()
{
	int cnt = 0;

	for (int i = m; i <= n; i++)
	{
		cout << a[i].second << " ";
		cnt++;
		if (cnt % 10 == 0)
			cout << endl;
	}
}

int main()
{
	input();
	core();
	output();

	return 0;
}
