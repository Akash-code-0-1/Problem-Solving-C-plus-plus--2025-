#include <bits/stdc++.h>
using namespace std;

int mergeOverlap(vector<vector<int>> &nums)
{
    sort(nums.begin(), nums.end());
    int index = 0;

    for (int i = 1; i < nums.size(); i++)
    {

        if (nums[i][0] <= nums[index][1])
        {
            nums[index][1] = max(nums[index][1], nums[i][1]);
        }
        else
        {
            index++;
            nums[index] = nums[i];
        }
    }
    return (index);
}

int main()
{
    vector<vector<int>> nums = {{1, 3}, {2, 4}, {6, 8}, {9, 10}};
    int resIndex = mergeOverlap(nums);

    for (int i = 0; i <=resIndex; i++)
    {
        cout << nums[i][0] << " " << nums[i][1] << endl;
    }
}

// O(n*log(n))