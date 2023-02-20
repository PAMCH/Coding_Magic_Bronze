#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int a[11], k;

	for (int i = 1; i <= 10; i++)
		cin >> a[i];
	cin >> k;

	if (k > 0)
		rotate(a + 1, a + 1 + k, a + 10 + 1);
	else
		rotate(a + 1, a + 10 + 1 + k, a + 10 + 1);

	for (int i = 1; i <= 10; i++)
		cout << a[i] << " ";
	cout << "\n";

	return 0;
}
