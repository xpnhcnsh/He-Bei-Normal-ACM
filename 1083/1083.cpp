// 1069.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iomanip>
#include <iostream>
using namespace std;

int run(int n);

int main()
{
	int n = 1;
	cin >> n;
	cout << run(n);
}

int run(int n) {
	if (n < 4 && n > 0) {
		return 1;
	}
	else {
		return run(n - 1) + run(n - 3);
	}
}