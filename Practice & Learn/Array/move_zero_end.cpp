#include <bits/stdc++.h>
using namespace std;

void moveZeroToEnd(vector<int> &nums)
{
    int index = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
            swap(nums[i], nums[index++]);
    }
}

int main()
{

    vector<int> nums = {1, 0, 2, 0, 4, 33, 6};
    moveZeroToEnd(nums);
    for (int x : nums)
        cout << x << " ";
}