#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>

using namespace std;



int main()
{
	int a[11], s, e;

	for (int i = 1; i <= 10; i++)
		cin >> a[i];
	cin >> s >> e;

	reverse(a + s, a + e + 1);

	for (int i = 1; i <= 10; i++)
		cout << a[i] << " ";
	cout << "\n";

	return 0;
}
