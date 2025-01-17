#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &nums, int k)
{
    int max_length = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        int sum = 0;
        for (int j = i; j < nums.size(); j++)
        {
            sum += nums[j];
            if (sum % k == 0)
            {
                max_length = max(max_length, j - i + 1);
            }
        }
    }
    return max_length;
}

int main()
{
    vector<int> nums = {2, 7, 6, 1, 4, 5};
    int k = 3;
    int max_length = solve(nums, k);
    cout << max_length << endl;
}