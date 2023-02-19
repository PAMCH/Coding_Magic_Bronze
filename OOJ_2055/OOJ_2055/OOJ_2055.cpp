#define _CRT_SECURE_NO_WARINIGS
#include <iostream>

using namespace std;

int a, b;

void input() {
    cin >> a >> b;
}

void printNum(int w, int  num) {
    cout.width(w);
    cout << num << endl;
}

void printBar() {
    cout << "------" << "\n";
}

void output() {
    printNum(6, a);
    printNum(6, b);
    printBar();
    printNum(6, a*(b%10));
    printNum(5, a * ((b / 10) % 10));
    printNum(4, a * (b / 100));
    printBar();
    printNum(6, a * b);
}

int main()
{
    input();
    output();

    return 0;
}