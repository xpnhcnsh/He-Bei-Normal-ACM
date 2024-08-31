#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string input1;
    vector<int> input1Tokens;
    string delimiter = " ";
    getline(cin, input1);
    string token;
    size_t pos = 0;
    while ((pos = input1.find(delimiter)) != string::npos)
    {
        token = input1.substr(0, pos);
        input1Tokens.push_back(stoi(token));
        input1.erase(0, pos + delimiter.length());
    }
    input1Tokens.push_back(stoi(input1));
    int indexMax = 0;
    int indexMin = 0;
    int max = input1Tokens[indexMax];
    int min = input1Tokens[indexMin];
    for (int i = 1; i < input1Tokens.size(); i++)
    {
        if (input1Tokens[i] < min)
        {
            min = input1Tokens[i];
            indexMin = i;
        }
    }
    for (int i = 1; i < input1Tokens.size(); i++)
    {
        if (input1Tokens[i] > max)
        {
            max = input1Tokens[i];
            indexMax = i;
        }
    }

#pragma region std::swap method
    // swap(input1Tokens[0], input1Tokens[indexMin]);
    // swap(input1Tokens.back(), input1Tokens[indexMax]);
#pragma endregion

#pragma region use temp value
    int temp = input1Tokens[indexMin];
    input1Tokens[indexMin] = input1Tokens[0];
    input1Tokens[0] = temp;

    temp = input1Tokens[indexMax];
    input1Tokens[indexMax] = input1Tokens.back();
    input1Tokens.back() = temp;
#pragma endregion

    for (const int &i : input1Tokens)
    {
        cout << i << " ";
    }
}