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

void output()
{
	for (char i = 'Z'; i >= 'A'; i--)
	{
		int idx = str.find(i);

		if (idx != -1)
		{
			str.erase(idx, 1);
			cout << str << endl;
		}
	}
}

int main()
{
	input();
	output();

	return 0;
}
