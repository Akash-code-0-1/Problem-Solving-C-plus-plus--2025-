#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &nums)
{
    // sorting array in accending order
    sort(nums.begin(), nums.end());

    for (int i = nums.size() - 2; i >= 0; i--)
    {
        if (nums[i] != nums[nums.size() - 1])
        {
            return nums[i];
        }
    }
    return -1;
}

int main()
{
    // initializing vector array
    vector<int> nums1 = {12, 35, 1, 10, 34, 1};
    vector<int> nums2 = {10, 5, 10};
    vector<int> nums3 = {10, 10, 10};
    // calling solve function and sending the vector
    cout << solve(nums1) << endl;
    cout << solve(nums2) << endl;
    cout << solve(nums3);
}