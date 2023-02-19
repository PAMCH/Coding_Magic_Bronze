#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
	int a[11], k;

	for (auto i = 1l; i <= 10; i++)
		cin >> a[i];
	cin >> k;

	nth_element(a + 1, a + k + 1, a + 11, greater<>());
	
	cout << a[k] << "\n";

	return 0;
}