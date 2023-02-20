#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <string>
#define N 100

using namespace std;

int n;
string str;

void input()
{
	cin >> n >> str;
}

void output()
{
	str.erase(n - 1, 1);

	if (str.empty())
		cout << -1 << endl;
	else
		cout << str << endl;
}

int main()
{
	input();
	output();

	return 0;
}
