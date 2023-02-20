#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>

using namespace std;

void prime(const int& x)
{
	int cnt = 0;

	for (int i = 1; i <= x; i++)
	{
		if (x % i == 0)
		{
			cnt++;
		}
	}

	if (cnt == 2)
	{
		cout << x << " ";
	}

}


int main()
{
	int a[11];

	for (int i = 1; i <= 10; i++)
	{
		cin >> a[i];
	}

	for_each(a + 1, a + 11, prime);

	cout << "\n";

	return 0;
}
