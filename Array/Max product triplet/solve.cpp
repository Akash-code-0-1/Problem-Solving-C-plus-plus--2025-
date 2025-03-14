#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &nums)
{
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    int max3 = INT_MIN;

    int min1 = INT_MAX;
    int min2 = INT_MAX;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > max1)
        {
            max3 = max2;
            max2 = max1;
            max1 = nums[i];
        }
        else if (nums[i] > max2)
        {
            max3 = max2;
            max2 = nums[i];
        }
        else if (nums[i] > max3)
        {
            max3 = nums[i];
        }

        if (nums[i] < min1)
        {
            min2 = min1;
            min1 = nums[i];
        }
        else if (nums[i] < min2)
        {
            min2 = nums[i];
        }
    }
    return max(min1 * min2 * max1, max1 * max2 * max3);
}

int main()
{
    // initializing vector array
    vector<int> nums1 = {10, 3, 5, 6, 20};
    vector<int> nums2 = {-10, -3, -5, -6, -20};
    vector<int> nums3 = {1, -4, 3, -6, 7, 0};

    // calling solve function and sending the vector
    cout << solve(nums1) << endl;
    cout << solve(nums2) << endl;
    cout << solve(nums3) << endl;
}