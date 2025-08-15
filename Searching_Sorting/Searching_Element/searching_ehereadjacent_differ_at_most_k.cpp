#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &nums, int k, int x)
{
    for (int i = 0; i < nums.size();)
    {
        if (nums[i] == x)
        {
            return i;
        }

        i = i + max(1, abs(nums[i] - x) / k);
    }
    return -1;
}
int main()
{
    vector<int> nums = {4, 5, 6, 7, 6};

    int k = 5;
    int x = 6;
    int res = solve(nums, k, x);
    cout << res << endl;
}