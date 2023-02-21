#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#define N 100

using namespace std;

int n;
string a[N + 1];

void input()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		for (auto& ch : a[i])
			ch = toupper(ch);
	}
	sort(a + 1, a + n + 1);
	
}

void core()
{
	int cnt = 0;

	for (int i = 1; i <= n; i++)
	{
		string str(a[i]);
		reverse(str.begin(), str.end());
		if (a[i] == str)
		{
			cout << a[i] << endl;
			cnt++;
		}
	}

	if (cnt == 0)
		cout << "NOT FOUND" << endl;
}


int main()
{
	input();
	core();

	return 0;
}
