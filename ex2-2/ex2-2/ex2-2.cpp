#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
    double money;

    std::cin >> money;

    for (int i = 1; i <= 5; i++) {
        money *= 1.05;
        std::cout.precision(2);
        std::cout << std::fixed;
        std::cout << round(money * 100) / 100.0 << std::endl;
    }

    return 0;
}