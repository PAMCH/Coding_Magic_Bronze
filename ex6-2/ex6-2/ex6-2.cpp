#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
	int a[11];

	for (int i = 1; i <= 10; i++)
		cin >> a[i];

	sort(a + 1, a + 11, greater<>());

	for (int i = 1; i <= 10; i++)
		cout << a[i] << " ";
	cout << "\n";

	return 0;
}