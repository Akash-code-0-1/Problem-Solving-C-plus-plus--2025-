#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &nums)
{
    int maxCon = 0;
    int count = 0;
    int prev = -1;

    for (int num : nums)
    {
        if ((prev ^ num) == 0)
        {
            count++;
        }
        else
        {
            maxCon = max(maxCon, count);
            count = 1;
        }
        prev = num;
    }
    return max(maxCon, count);
}

int main()
{
    // initializing vector array
    vector<int> nums1 = {1, 1, 0, 0, 1, 0, 1, 0, 1, 1, 1, 1};

    // calling solve function and sending the vector
    cout << solve(nums1) << endl;
}