#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> &nums)
{
    sort(nums.begin(), nums.end());

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] == nums[i - 1])
        {
            return true;
        }
    }
    return false;
}

int main()
{
    vector<int> nums = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    bool flag = solve(nums);
    if (flag)
    {
        cout << "Contains Duplicate" << endl;
    }
    else
    {
        cout << "Distinct" << endl;
    }
}


//O(nlogn)