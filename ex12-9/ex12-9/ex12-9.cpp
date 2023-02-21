#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

string str[101];
int n;

void input()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> str[i];

		for (auto& ch : str[i])
			ch = toupper(ch);
	}
}

void core()
{
	for (int i = 1; i <= n; i++)
		cout << str[i].substr(str[i].length() - 3) << endl;
}

int main()
{
	input();
	core();

	return 0;
}
