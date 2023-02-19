#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <algorithm>
#define N 20000

using namespace std;

int n, b, a[N + 1];

void input() {
	cin >> n >> b;
	for (auto i = 1; i <= n; i++)
		cin >> a[i];
}

void core() {
	auto i = 1, sum = 0;

	sort(a + 1, a + n + 1, greater<int>());

	while (i <= n && sum + a[i] < b)
	{
		sum += a[i];
		i++;
	}

	cout << i << "\n";
}

int main()
{
	input();
	core();

	return 0;
}