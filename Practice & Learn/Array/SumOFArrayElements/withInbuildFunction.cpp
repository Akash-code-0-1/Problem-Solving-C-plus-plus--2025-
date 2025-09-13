#include <bits/stdc++.h>
using namespace std;

#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

int main()
{
    fast_io;

    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    // Using inbuilt function to calculate the sum of array elements
    // The accumulate function is part of the <numeric> header
    // and is used to calculate the sum of elements in a range.
    // It takes three arguments: the beginning of the range, the end of the range,
    // and the initial value (0 in this case).
    // The function will return the sum of all elements in the vector.

    cout << accumulate(nums.begin(), nums.end(), 0) << endl;
}