#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	string x, str;

	int n, sum = 0;

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> x;
		sum += stoi(x);
		str += x;
	}

	cout << sum << "\n";

	reverse(str.begin(), str.end());
	cout << str << endl;

	return 0;
}
