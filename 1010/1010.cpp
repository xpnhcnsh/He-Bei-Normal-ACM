#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string input;
    vector<int> inputTokens;
    string delimiter = " ";
    getline(cin, input);
    string token;
    size_t pos = 0;
    while ((pos = input.find(delimiter)) != string::npos)
    {
        token = input.substr(0, pos);
        inputTokens.push_back(stoi(token));
        input.erase(0, pos + delimiter.length());
    }
    inputTokens.push_back(stoi(input));
    int count = 0;
    int sum = 0;
    for (int i : inputTokens)
    {
        if (i < 0)
        {
            count += 1;
        }
        if (i >= 0)
        {
            sum += i;
        }
    }
    float avg = (float)sum / (float)(inputTokens.size() - count);
    if (count == inputTokens.size())
        avg = 0.00;
    cout << count << endl;
    cout << fixed << setprecision(2) << avg;
}