#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        vector<int> res;

        int l = 0, r = numbers.size() - 1;

        while (l < r)
        {
            if (numbers[l] + numbers[r] == target)
            {
                res.push_back(l + 1);
                res.push_back(r + 1);
                return res;
            }
            else if (numbers[l] + numbers[r] < target)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        return res;
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {-1, 0};
    int target = -1;

    vector<int> res = solution.twoSum(nums, target);

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }

    return 0;
}