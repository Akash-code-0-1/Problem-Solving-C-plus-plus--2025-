#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> &nums)
{
    int maxsum = INT_MIN;
    int currentsum = nums[0];
    for (int i = 0; i < nums.size(); i++)
    {
        currentsum += nums[i];
        if (maxsum < currentsum)
        {
            maxsum = currentsum;
        }
        if (currentsum < 0)
        {
            currentsum = 0;
        }
    }
    return maxsum;
}

int main()
{
    vector<int> nums = {2, 3, -8, 7, -1, 2, 3};
    int max_sum = solve(nums);
    cout << max_sum << endl;
}