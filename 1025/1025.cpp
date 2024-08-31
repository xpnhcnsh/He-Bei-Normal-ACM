#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    long long sum = 0;
    long long factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
        sum = sum + factorial;
    }
    printf("%lld", sum);
}