#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#define N 100000

using namespace std;

int n, x[N + 1], y[N + 1];
int drow[6] = { 0,-1,-1,0,1,1 }, dcol[6] = { 1,1,0,-1, -1,0 };

void input() {
	cin >> n;
}

void core() {
	auto cnt = 0, p = 2;

	while (p <= n)
	{
		cnt++;
		for (auto dir = 0; dir < 6 && p <= n; dir++) {
			auto k = (dir == 1 ? cnt - 1 : cnt);

			for (auto i = 1; i <= k && p <= n; i++, p++) {
				x[p] = x[p - 1] + drow[dir];
				y[p] = y[p - 1] + dcol[dir];
			}
		}
	}
}

void output() {
	cout << x[n] << " " << y[n] << "\n";
}

int main()
{
	input();
	core();
	output();

	return 0;
}