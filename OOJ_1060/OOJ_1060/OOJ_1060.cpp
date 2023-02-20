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
	int koi = 0, ioi = 0, len = str.length();

	for (int i = 0; i <= len - 3; i++)
	{
		if (str.substr(i, 3) == string("KOI"))
			koi++;
		if (str.substr(i, 3) == string("IOI"))
			ioi++;
	}

	cout << koi << endl << ioi << endl;
}


int main()
{
	input();
	core();

	return 0;
}
