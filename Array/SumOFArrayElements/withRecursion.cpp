#include <bits/stdc++.h>
using namespace std;

#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

int sumOfArrayElements(vector<int> &nums, int n)
{

    if (n == 0)
        return 0;
    else
        return nums[0] + sumOfArrayElements(nums, n - 1);
}

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

    cout << sumOfArrayElements(nums, nums.size()) << endl;

    return 0;
}