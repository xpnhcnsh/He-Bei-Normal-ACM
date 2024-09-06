// 1094.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

/// <summary>
/// print all the combinations of size r according to a vector arr of size n.
/// </summary>
/// <param name="arr">The input array</param>
/// <param name="data">A temp vector to store current combination, mean to be printed.</param>
/// <param name="start">Starting index in arr.</param>
/// <param name="end">Ending index in arr.</param>
/// <param name="index">Current index in data.</param>
/// <param name="r">Size of each combination.</param>
void combination(vector<int> arr, vector<int> data, int start, int end, int index, int r);

int main()
{
	int n, m;
	cin >> n >> m;
	vector<int> v(n);
	iota(v.begin(), v.end(), 1);
	vector<int> data(m);
	combination(v, data, 0, n - 1, 0, m); 
}


void combination(vector<int> arr, vector<int> data, int start, int end, int index, int r) {
	// Current combination is ready to be printed.
	if (index == r) {
		for (size_t i = 0; i < r; i++)
		{
			cout << data[i] << " ";
		}
		cout << endl;
		return;
	}

	// replace index with all possible elements. The condition "end-i+1 >= r-index" makes sure that including one element 
	// at index will make a combination with remaining elements at remaining positions.
	for (int i = start; i <= end && end - i + 1 >= r - index; i++) {
		data[index] = arr[i];
		combination(arr, data, i + 1, end, index + 1, r);
	}
}


