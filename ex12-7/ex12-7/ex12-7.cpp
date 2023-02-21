#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

string str1, str2;

void input()
{
	cin >> str1 >> str2;
}

void core()
{
	if (str1.find(str2) == -1)
		cout << 0 << endl;
	else
		cout << str1.substr(str1.find(str2)) << endl;
}


int main()
{
	input();
	core();

	return 0;
}
