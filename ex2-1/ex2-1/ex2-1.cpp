#define _CRT_SECURE_NO_WARINIGS
#include <iostream>

int main()
{
    int year, month, day;

    std::cin >> year >> month >> day;

    std::cout.width(4);
    std::cout.fill('0');
    std::cout << year << "-";

    std::cout.width(2);
    std::cout.fill('0');
    std::cout << month << "-";

    std::cout.width(2);
    std::cout.fill('0');
    std::cout << day << std::endl;

    return 0;
}