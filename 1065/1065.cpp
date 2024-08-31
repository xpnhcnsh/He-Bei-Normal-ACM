#include <iostream>
#include <string>
#include <vector>
using namespace std;

void constructDNA(int a, int b);

int main()
{
    int n, a, b;
    while (cin >> n)
    {
        while (n--)
        {
            cin >> a >> b;
            constructDNA(a, b);
        }
    }
    return 0;
}

void constructDNA(int a, int b)
{
    int rows = a * b;
    int cols = a;
    for (size_t i = 0; i < rows; i++)
    {
        if (i > 0 && i % a == 0)
            continue;
        vector<char> l(a);
        for (size_t j = 0; j < a; j++)
        {
            l[j] = ' ';
        }
        int first = i % a;
        int second = a - 1 - first;
        l[first] = 'X';
        l[second] = 'X';
        for (char i : l)
        {
            cout << i;
        }

        cout << endl;
    }
    cout << endl;
}