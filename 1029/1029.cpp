#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    int sum = 0;
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i % 1000;
        sum = (sum + factorial) % 1000;
    }
    printf("%d", sum);
}