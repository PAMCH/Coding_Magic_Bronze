#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	string str;

	cin >> str;
	sort(str.begin(), str.end());
	cout << str << "\n";

	return 0;
}
