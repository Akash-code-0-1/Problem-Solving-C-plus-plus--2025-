#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> &nums)
{

    int nonZeroIndex = 0;

    // Move all non-zero elements to the front
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            nums[nonZeroIndex] = nums[i];
            nonZeroIndex++;
        }
    }

    // Fill the rest of the array with zeros
    for (int i = nonZeroIndex; i < nums.size(); i++)
    {
        nums[i] = 0;
    }

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " "; 
    }
}

int main()
{
    vector<int> nums = {0, 0, 1};
    solve(nums);
}