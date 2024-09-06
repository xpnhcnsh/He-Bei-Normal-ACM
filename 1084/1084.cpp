// 1084.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	// (1 + 2 + 3 +... n) + (n - 1)
	int v, d;
	int n = 1;
	cin >> v >> d;
	while (((1 + n) * n / 2) * d < v) {
		n += 1;
	}
	int residualV = v - (1 + n - 1) * (n - 1) / 2 * d;
	// int residualSec = ceil(residualV / d);
	// if ceil() meets a compile error, use ceil(x/y) = ((x-1)/y)+1 instead.
	int residualSec = residualV == 0 ? 0 : ((residualV - 1) / d) + 1;
	cout << ((1 + n - 1) * (n - 1) / 2) + n - 1 + residualSec;
}

