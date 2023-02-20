#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <string>
#define N 5

using namespace std;

string a[N + 1];
char b[N + 1];


void input()
{
	for (int i = 1; i <= N; i++)
	{
		cin >> a[i] >> b[i];
		
		for (auto& ch : a[i])
		{
			ch = toupper(ch);
		}
		b[i] = toupper(b[i]);
	}
}

void core()
{
	for (int i = 1; i <= N; i++)
	{
		int idx = a[i].find(b[i]);
		cout << idx + 1 << endl;
	}
}

void output()
{

}

int main()
{
	input();
	core();

	return 0;
}
