// 1069.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    double r;
    const double PI = 3.1415926;
    while (cin >> r) {
        cout << fixed << setprecision(3) << PI * r * r * r * 4 / 3 << endl;
    }
} 

