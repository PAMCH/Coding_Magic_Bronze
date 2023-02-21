#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;



int main()
{
	string str;

	cin >> str;

	if (str.length() % 2)
		cout << "odd" << endl;
	else
		cout << "even" << endl;

	return 0;
}
