#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &nums)
{
    // initilizing both value -1
    int largest = -1;
    int second_larg = -1;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > largest)
        {
            largest = nums[i];
        }
        else if (nums[i] < largest && nums[i] > second_larg)
        {
            second_larg = nums[i];
        }
    }
    return second_larg;
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