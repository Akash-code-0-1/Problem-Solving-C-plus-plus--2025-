#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &nums, int x)
{
    int low = 0;
    int high = nums.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == x)
        {
            return mid;
        }
        else if (x < nums[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return low;
}

int main()
{
    vector<int> nums = {1, 2, 8, 10, 10, 12, 19};
    int x = 3;
    int result = solve(nums, x);
    cout << nums[result] << endl;
}