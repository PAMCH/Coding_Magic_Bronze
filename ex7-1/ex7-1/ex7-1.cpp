#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
	int a[11], f;

	for (int i = 1; i <= 10; i++)
		cin >> a[i];
	cin >> f;

	auto* p = find(a + 1, a + 11, f);

	if (p == a + 11)
		cout << "0" << "\n";
	else
		cout << p - a << "\n";

	return 0;
}