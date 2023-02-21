#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

string str, y, m, d;

void input()
{
	cin >> str;
}

void core()
{
	y = str.substr(0, 4);
	m = str.substr(4, 2);
	d = str.substr(6, 2);
}

void output()
{
	cout << y << "-" << m << "-" << d << "\n";
}

int main()
{
	input();
	core();
	output();

	return 0;
}
