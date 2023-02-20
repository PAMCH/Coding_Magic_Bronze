#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <string>
#define N 100

using namespace std;

string a[N + 1];
int n;
char c;

void input()
{
	cin >> n >> c;

	c = tolower(c);

	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		for (auto& ch : a[i])
		{
			ch = tolower(ch);
		}
	}
}

void core()
{
	int cnt = 0;

	for(int i=1;i<=n;i++)
		if (a[i].front() == c)
		{
			cout << a[i] << endl;
			cnt++;
		}

	if (!cnt)
		cout << "NOT FOUND" << endl;
}

int main()
{
	input();
	core();

	return 0;
}
