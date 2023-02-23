#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <tuple>
#include <stack>

using namespace std;

int n, x;
stack<int>S;

void input()
{
	cin >> n;
}

void core()
{
	for (int i = 1; i <= n; i++)
	{
		cin >> x;
		S.push(x);
	}
}

void output()
{
	while (!S.empty())
	{
		cout << S.top() << endl;
		S.pop();
	}
}

int main()
{
	input();
	core();
	output();

	return 0;
}
