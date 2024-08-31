#include <iostream>
#include <string>
#include <cmath>
// in some case reference to <cmath> is compulsory.
#include <iomanip>
using namespace std;

int main()
{
    int a1 = 2, d = 3;
    int n;
    cin >> n;
    cout << fixed << setprecision(0) << a1 * n + n * (n - 1) * d * 0.5;
    return 0;
}