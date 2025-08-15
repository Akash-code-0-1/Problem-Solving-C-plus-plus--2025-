#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> &nums)
{
    unordered_set<int> st;

    for (int i = 0; i < nums.size(); i++)
    {
        if (st.find(nums[i]) != st.end())
        {
            return true;
        }
        else
        {
            st.insert(nums[i]);
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

//O(n)