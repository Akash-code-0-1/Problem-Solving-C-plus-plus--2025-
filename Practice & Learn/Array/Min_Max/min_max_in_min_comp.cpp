#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> &nums)
{
    int min = INT_MAX;
    int max = INT_MIN;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > max)
        {
            max = nums[i];
        }
        if (nums[i] < min)
        {
            min = nums[i];
        }
    }
    cout << "max= " << max << endl;
    cout << "min= " << min << endl;
}

int main()
{
    vector<int> nums = {3, 5, 4, 1, 9};
    solve(nums);
}