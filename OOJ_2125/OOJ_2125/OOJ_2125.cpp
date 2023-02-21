#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#define N 100

using namespace std;

string str[N + 1];
int n;

void input()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> str[i];
}

void core()
{
	int ch = 1;

	while (str[ch]!=string("EULERTV1"))
	{
		cout << 1;
		ch++;
	}

	while (ch>=2)
	{
		cout << 4;
		swap(str[ch - 1], str[ch]);
		ch--;
	}

	while (str[ch]!=string("EULERTV2"))
	{
		cout << 1;
		ch++;
	}

	while (ch >= 3)
	{
		cout << 4;
		swap(str[ch - 1], str[ch]);
		ch--;
	}

	cout << endl;
}


int main()
{
	input();
	core();

	return 0;
}
