#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <algorithm>
#define N 50000

using namespace std;

int n, k;
double a[N + 1];

void input() {
	cin >> n;
	for (auto i = 1; i <= n; i++)
		cin >> a[i];
	cin >> k;
}

void core() {
	nth_element(a + 1, a + k, a + n + 1, greater<double>());
}

void output() {
	cout.precision(2);
	cout << fixed << a[k] << "\n";
}

int main()
{
	input();
	core();
	output();

	return 0;
}