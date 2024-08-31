#include <iostream>
#include <string>
#include <cmath>
// in some case reference to <cmath> is compulsory.
#include <iomanip>
using namespace std;

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        double area = 3.14 * pow(i, 2);
        if (area >= 40 && area <= 90)
        {
            cout << "r=" << i << " area=" << area << fixed << setprecision(2) << endl;
        }
    }
    return 0;
}