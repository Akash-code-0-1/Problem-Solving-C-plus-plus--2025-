#include <bits/stdc++.h>
using namespace std;

int min_merge_operationto_Palndrom(vector<int> &nums)
{
    int res = 0;
    for (int i = 0, j = nums.size() - 1; i <= j;)
    {
        if (nums[i] == nums[j])
        {
            i++;
            j--;
        }
        else if (nums[i] > nums[j])
        {
            j--;
            nums[j] += nums[j + 1];
            res++;
        }
        else
        {
            i++;
            nums[i] += nums[i - 1];
            res++;
        }
    }
    return res;
}

int main()
{
    vector<int> nums = {1, 4, 5, 9, 1};
    int result = min_merge_operationto_Palndrom(nums);
    cout << result << endl;
}
