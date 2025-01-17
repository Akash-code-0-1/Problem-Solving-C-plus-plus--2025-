#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] == nums[j])
            {
                return true;
            }
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

//O(n*n)