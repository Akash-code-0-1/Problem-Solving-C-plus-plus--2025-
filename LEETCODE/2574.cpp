#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> leftRightDifference(vector<int> &nums)
    {
        int leftSum;
        int rightSum;
        vector<int> res;

        for (int i = 0; i < nums.size(); i++)
        {
            if (i == 0)
            {
                leftSum = 0;
            }
            else
            {
                leftSum = accumulate(nums.begin(), nums.begin() + i,0);
            }
            if (i == nums.size())
            {
                rightSum = 0;
            }
            else
            {
                rightSum = accumulate(nums.begin() + i+1, nums.end(),0);
            }

            res.push_back(abs(leftSum - rightSum));
        }

        return res;
    }
};

int main()
{
    Solution sol;

    vector<int> nums = {10, 4, 8, 3};

    vector<int> result = sol.leftRightDifference(nums);

    cout << "Result: ";
    for (int x : result)
        cout << x << " ";
    cout << endl;

    return 0;
}
