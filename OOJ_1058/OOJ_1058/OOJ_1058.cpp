#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string str;

void input()
{
	cin >> str;
}

void core()
{
	int idx = (str.length() - 1) % 3 + 1;

	for (int i = idx; i < str.length(); i += 4)
		str.insert(i, ",");

	cout << str << endl;
}

int main()
{
	input();
	core();

	return 0;
}
