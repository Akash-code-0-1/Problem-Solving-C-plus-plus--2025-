#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &nums, int k)
{
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] == nums[j] && abs(i - j) <= k)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    vector<int> nums = {1, 0, 1, 2};
    int k = 2;
    bool res = solve(nums, k);
    if (res)
        cout << "true";
    else
        cout << "false";
}

//O(n*n)