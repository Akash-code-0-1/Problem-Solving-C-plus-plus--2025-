#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &nums, int m)
{
    int min_diff = INT_MAX;
    for (int i = 0; i < nums.size() - m - 1; i++)
    {
        int max_val = *max_element(nums.begin() + i, nums.begin() + i + m);
        int min_val = *min_element(nums.begin() + i, nums.begin() + i + m);

        int temp_min_diff = max_val - min_val;
        if (temp_min_diff < min_diff)
        {
            min_diff = temp_min_diff;
        }
    }
    return min_diff;
}

int main()
{
    vector<int> nums = {7, 3, 2, 4, 9, 12, 56};
    int m = 5;
    int min_diff = solve(nums, m);
    cout << min_diff << endl;
}