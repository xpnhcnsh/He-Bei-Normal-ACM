// 1086.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
long long factorial(long long n);
int main()
{
    // n!/m!/(n-m)!
    long long n;
    long long m;
    while (cin >> n >> m) {
        long long res = factorial(n) / factorial(m) / factorial(n - m);
        cout << res << endl;
    }
}


long long  factorial(long long n) {
    if (n == 1)
        return 1;
    return factorial(n - 1) * n;
}