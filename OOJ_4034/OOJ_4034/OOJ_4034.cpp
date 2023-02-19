#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

int s;
long long d;

void input() {
	cin >> s >> d;
}

void core() {
	long long day = 0;

	while (true)
	{
		day += s;
		if (d <= day)
			break;
		s++;
	}
}

void output() {
	cout << s << "\n";
}

int main()
{
	input();
	core();
	output();


	return 0;
}