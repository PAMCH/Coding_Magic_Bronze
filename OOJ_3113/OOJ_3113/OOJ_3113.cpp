#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <algorithm>
#define N 100000

using namespace std;

int n, L, k, a[N + 1];

void input() {
	cin >> n >> L >> k;

	for (int i = 1; i <= n; i++)
		cin >> a[i];
}

void core() {
	auto cnt = 0;

	sort(a + 1, a + n + 1);

	for (int i = 1; i <= n && a[i] <= L; i++){
		cnt++;
		L += k;
	}

	cout << cnt << "\n";
}

int main()
{
	input();
	core();

	return 0;
}