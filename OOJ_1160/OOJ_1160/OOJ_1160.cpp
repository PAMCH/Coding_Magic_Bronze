#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#define N 100

using namespace std;

int n, m, k;
bool c[N + 1][N + 1];

void input()
{
	cin >> n >> m >> k;
}

void core()
{
	int r, s, p, t;

	for (int i = 1; i <= k; i++)
	{
		cin >> r >> s >> p >> t;

		int y1 = max(1, r - p / 2);
		int x1 = max(1, s - p / 2);
		int y2 = min(n, r + p / 2);
		int x2 = min(m, s + p / 2);

		if (t == 0)
		{
			for (int i = y1; i <= y2; i++)
			{
				for (int j = x1; j <= x2; j++)
				{
					c[i][j] = true;
				}
			}
		}
		else
		{
			for (int i = 1; i <= n; i++)
			{
				for (int j = 1; j <= m; j++)
				{
					if (!(i >= y1 && i <= y2 && j >= x1 && j <= x2))
					{
						c[i][j] = true;
					}
				}
			}
		}
	}
}

void output()
{
	int cnt = 0;

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			cnt += !c[i][j];
	cout << cnt << "\n";
}

int main()
{
	input();
	core();
	output();

	return 0;
}
