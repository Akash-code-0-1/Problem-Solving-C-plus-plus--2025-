#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> &nums)
{
    int min = INT_MAX;
    int max = INT_MIN;

    int i;

    if (nums.size() % 2 == 0)
    {
        if (nums[0] > nums[1])
        {
            max = nums[0];
            min = nums[1];
        }
        else
        {
            max = nums[1];
            min = nums[0];
        }
        i = 2;
    }
    else
    {
        max = nums[0];
        min = nums[0];

        i = 1;
    }

    while (i < nums.size() - 1)
    {
        if (nums[i] > nums[i + 1])
        {
            if (nums[i] > max)
            {
                max = nums[i];
            }
            if (nums[i + 1] < min)
            {
                min = nums[i + 1];
            }
        }
        else
        {
            if (nums[i + 1] > max)
            {
                max = nums[i + 1];
            }
            if (nums[i] < min)
            {
                min = nums[i];
            }
        }

        i += 2;
    }

    cout << "max= " << max << endl;
    cout << "min= " << min << endl;
}

int main()
{
    vector<int> nums = {3, 5, 4, 1, 9};
    solve(nums);
}