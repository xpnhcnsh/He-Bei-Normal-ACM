#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string a;
    cin >> a;
    reverse(a.begin(), a.end());
    cout << a;
    return 0;
}