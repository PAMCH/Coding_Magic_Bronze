#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int a[11];

	for (int i = 1; i <= 10; i++)
		cin >> a[i];

	cout << *max_element(a + 1, a + 10 + 1) << "\n";
	cout << max_element(a + 1, a + 10 + 1) -a<< "\n";


	return 0;
}
