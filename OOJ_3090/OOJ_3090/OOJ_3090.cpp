#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <algorithm>
#define N 1000

using namespace std;

int n, m[N + 1], w[N + 1];

void input() {
	cin >> n;

	for (auto i = 1; i <= n; i++)
		cin >> m[i];
	for (auto i = 1; i <= n; i++)
		cin >> w[i];
}

void core() {
	auto sum = 0;

	sort(m + 1, m + 1 + n);
	sort(w + 1, w + 1 + n);

	for (auto i = 1; i <= n; i++)
		sum += abs(m[i] - w[i]);

	cout << sum << "\n";
}

int main()
{
	input();
	core();

	return 0;
}