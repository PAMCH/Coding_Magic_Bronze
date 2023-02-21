#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

string str1, str2;

void input()
{
	cin >> str1;
	cin >> str2;
}

void core()
{
	cout << str1 << ", " << str2 << endl;
	swap(str1, str2);
	cout << str1 << ", " << str2 << endl;
}

int main()
{
	input();
	core();

	return 0;
}
