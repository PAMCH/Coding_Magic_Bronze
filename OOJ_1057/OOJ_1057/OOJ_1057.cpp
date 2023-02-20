#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <string>
#define N 100

using namespace std;

string a[N + 1];
int n;

void input()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		for (auto& ch : a[i])
			ch = tolower(ch);
	}
}

void output()
{
	sort(a + 1, a + n + 1);
	for (int i = 1; i <= n; i++)
		cout << a[i] << endl;
}

int main()
{
	input();
	output();

	return 0;
}
