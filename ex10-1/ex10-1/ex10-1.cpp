#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int a, b, c;

	cin >> a >> b >> c;

	cout << min(min(a, b), c) << "\n";
	cout << max(max(a, b), c) << "\n";


	return 0;
}
