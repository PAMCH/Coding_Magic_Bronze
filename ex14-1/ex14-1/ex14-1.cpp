#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <tuple>


using namespace std;

tuple<int, int, string>a[101];
string name;
int n, c, t;

void input()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> name >> c >> t;
		a[i] = {c,t,name};
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
		cout << get<2>(a[i]) << " " << get<0>(a[i]) << " " << get<1>(a[i]) << endl;
	}
}

int main()
{
	input();
	core();
	output();

	return 0;
}
