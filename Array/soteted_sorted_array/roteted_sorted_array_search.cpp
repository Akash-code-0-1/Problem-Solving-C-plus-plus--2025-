#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &nums, int key)
{
    int low = 0;
    int high = nums.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (key == nums[mid])
        {
            return mid;
        }

        if (nums[mid] >= nums[low])
        {
            if (key < nums[mid] && key >= nums[low])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            if (key > nums[mid] && key <= nums[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int key = 0;
    int result1 = solve(nums, key);
    cout << result1 << endl;
}
