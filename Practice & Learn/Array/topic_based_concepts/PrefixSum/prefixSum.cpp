#include <bits/stdc++.h>
using namespace std;

vector<int> findPrefixSum(vector<int> &arr)
{
    vector<int> prefixSum(arr.size());

    prefixSum[0] = arr[0];

    for (int i = 1; i < arr.size(); i++)
    {
        prefixSum[i] = arr[i] + prefixSum[i - 1];
    }

    return prefixSum;
}

int main()
{

    vector<int> arr = {10, 20, 30, 15, 25};
    vector<int> prefixSum = findPrefixSum(arr);

    for (auto i : prefixSum)
    {
        cout << i << " ";
    }

    return 0;
}