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
	if (str1.length() > str2.length())
		cout << "MMM BRAINS" << endl;
	else if(str1.length() < str2.length())
		cout << "NO BRAINS" << endl;
	else
	{
		if (str1 >= str2)
			cout << "MMM BRAINS" << endl;
		else
			cout << "NO BRAINS" << endl;
	}
}

int main()
{
	for (int i = 1; i <= 3; i++)
	{
		input();
		core();
	}

	return 0;
}
