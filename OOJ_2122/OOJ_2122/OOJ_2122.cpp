#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

string str, res;

void input()
{
	cin >> str;
}

void core()
{
	for (const auto& ch : str)
	{
		int idx = string("CAMBRIDGE").find(ch);
		if (idx == -1)
			res.push_back(ch);
	}
}

void output()
{
	cout << res << endl;
}

int main()
{
	input();
	core();
	output();

	return 0;
}
