#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

string str;

void input()
{
	cin >> str;
}

void core()
{
	reverse(str.begin(), str.end());
}

void output()
{
	cout << str << endl;
}

int main()
{
	input();
	core();
	output();

	return 0;
}
