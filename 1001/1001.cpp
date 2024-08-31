#include <iostream>
#include <string>
#include <cmath>
// in some case reference to <cmath> is compulsory.
#include <iomanip>
using namespace std;

int main()
{
    int n;
    double x1, y1, x2, y2, x3, y3;
    while (cin >> n)
    {
        while (n--)
        {
            cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
            double area = abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
            if (area != 0)
            {
                // fixed<<setprecision(3) refers to #include<iomanip>, it rounds a double to 3 decimal digits.
                cout << fixed << setprecision(3) << 0.5 * area << endl;
            }
            else
            {
                cout << "Can not form a triangle." << endl;
            }
        }
    }
    return 0;
}