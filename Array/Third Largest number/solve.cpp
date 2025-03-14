#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &nums)
{
    int first = INT_MIN;
    int second = INT_MIN;
    int third = INT_MIN;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > first)
        {
            third = second;
            second = first;
            first = nums[i];
        }
        else if (nums[i] > second)
        {
            third = second;
            second = nums[i];
        }
        else if (nums[i] > third)
        {
            third = nums[i];
        }
    }
    return third;
}

int main()
{
    // initializing vector array
    vector<int> nums1 = {12, 35, 1, 10, 34, 1};

    // calling solve function and sending the vector
    cout << solve(nums1) << endl;
}