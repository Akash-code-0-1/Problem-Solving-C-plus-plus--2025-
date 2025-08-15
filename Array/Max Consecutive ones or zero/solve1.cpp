#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &nums)
{
    int maxCon = 0;
    int count = 1;

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] == nums[i - 1])
        {
            count++;
        }
        else
        {
            maxCon = max(maxCon, count);
            count = 1;
        }
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