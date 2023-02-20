#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>

using namespace std;

int r, c, a, b;

void input()
{
	cin >> r >> c;
	cin >> a >> b;
}

void output()
{
	for (int i = 1; i <= r; i++)
	{
		for (int ii = 1; ii <= a; ii++)
		{
			for (int j = 1; j <= c; j++)
			{
				for (int jj = 1; jj <= b; jj++)
				{
					if ((i + j) % 2 == 0)
						cout << "X";
					else
						cout << ".";
				}
			}
			cout << "\n";
		}
	}
}

int main()
{
	input();
	output();

	return 0;
}
