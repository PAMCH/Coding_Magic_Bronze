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
	for (int i = 0; i < str.length(); i++)
		cout << str.substr(i) << endl;
}

int main()
{
	input();
	core();

	return 0;
}
