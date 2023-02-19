#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <algorithm>
#define N 100000

using namespace std;

int n, k, a[N + 1], q[101];

void input() {
	char tmp[10];

	cin >> n;

	for (auto i = 1; i <= n; i++)
		cin >> a[i];
	cin >> tmp;
	cin >> k;

	for (int i = 1; i <= k; i++)
		cin >> q[i];
}

void core() {
	sort(a + 1, a + n + 1);
}

void output() {
	for (int i = 1; i <= k; i++)
		cout << a[q[i]] << "\n";
}

int main()
{
	input();
	core();
	output();

	return 0;
}