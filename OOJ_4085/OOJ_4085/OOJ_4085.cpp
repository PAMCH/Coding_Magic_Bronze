#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <algorithm>
#define N 20000

using namespace std;

int n, a[N + 1];

void input() {
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
}

void core() {
	auto sum = 0;

	sort(a + 1, a + 1 + n);

	for (auto i = 1; i <= n; i++)
		sum += abs(a[n / 2 + 1] - a[i]);
	cout << sum << "\n";
}

void output() {

}

int main()
{
	input();
	core();

	return 0;
}