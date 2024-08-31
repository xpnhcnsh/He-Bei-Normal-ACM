#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
// in some case reference to <cmath> is compulsory.
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
    string input1;
    string input2;
    vector<int> input1Tokens;
    vector<int> input2Tokens;
    string delimiter = " ";
    getline(cin, input1);
    getline(cin, input2);
    string token;
    size_t pos = 0;
    while ((pos = input1.find(delimiter)) != string::npos)
    {
        token = input1.substr(0, pos);
        input1Tokens.push_back(stoi(token));
        input1.erase(0, pos + delimiter.length());
    }
    input1Tokens.push_back(stoi(input1));

    while ((pos = input2.find(delimiter)) != string::npos)
    {
        token = input2.substr(0, pos);
        input2Tokens.push_back(stoi(token));
        input2.erase(0, pos + delimiter.length());
    }
    input2Tokens.push_back(stoi(input2));
    std::sort(input1Tokens.begin(), input1Tokens.end());
    std::sort(input2Tokens.begin(), input2Tokens.end());
    vector<int> res;
    set_intersection(input1Tokens.begin(), input1Tokens.end(), input2Tokens.begin(), input2Tokens.end(), back_inserter(res));
    for (const int &i : res)
    {
        cout << i << endl;
    }
}