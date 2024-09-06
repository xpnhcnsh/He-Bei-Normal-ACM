// 1006.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
#include <numeric> 
using namespace std;

int main()
{
    int N;
    cin >> N;
    // cin.ignore() is to make getline() run properly when it appears after cin.
    cin.ignore();
    while (N--) {
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
        cout << accumulate(inputTokens.begin()+1, inputTokens.end(), 0) << endl;
    }
}

