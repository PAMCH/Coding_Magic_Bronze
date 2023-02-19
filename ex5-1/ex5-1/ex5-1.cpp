#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

auto max2(double x, double y) -> int {
	return (x > y) ? x : y;
}

int main()
{
	auto sum = 0;

	for (auto i = 1; i <= 10; i++) {
		sum += i;
	}

	auto x = max2(10.5, 20.5);
	cout << x << "\n";

	return 0;
}