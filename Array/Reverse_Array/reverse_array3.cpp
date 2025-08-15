#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> &nums)
{
    int left = 0;
    int right = nums.size() - 1;

    while (left < right)
    {
        swap(nums[left], nums[right]);
        left++;
        right--;
    }

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}

int main()
{
    vector<int> nums = {3, 5, 4, 1, 9};
    solve(nums);
}