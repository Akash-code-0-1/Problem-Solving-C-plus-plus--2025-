#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> &nums)
{
    // int n = nums.size();
    // set<int> n2(nums.begin(), nums.end());
    // int n2size = n2.size();

    // if (n != n2size)
    // {
    //     return true;
    // }
    // else
    // {
    //     return false;
    // }

    // above code in just 1 line

    return nums.size() > set<int>(nums.begin(), nums.end()).size();
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