#include <bits/stdc++.h>
using namespace std;

int maxSum(vector<int> &arr, int k)
{

    int max_sum = INT_MIN;

    for (int i = 0; i < arr.size() - k; i++)
    {
        int currentSum = 0;

        for (int j = i; j < i + k; j++)
        {
            currentSum += arr[j];
        }

        // for (int j = 0; j < k; j++)
        // {
        //     currentSum += arr[i + j];
        // }

        max_sum = max(max_sum, currentSum);
    }

    return max_sum;
}

int main()
{
    vector<int> arr = {1, 4, 2, 10, 2, 3, 1, 0, 20};
    int k = 4;

    cout << maxSum(arr, k) << endl;
    return 0;
}