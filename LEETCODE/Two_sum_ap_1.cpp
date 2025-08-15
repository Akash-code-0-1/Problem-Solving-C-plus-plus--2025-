#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        vector<int> res;
        bool flag = true;
        int l = 0, r = 1;

        while (flag)
        {
            if (numbers[l] + numbers[r] == target)
            {
                res.push_back(l + 1);
                res.push_back(r + 1);
                flag = false;
            }
            else if (numbers[l] + numbers[r] < target)
            {
                r++;
                if (r == numbers.size())
                {
                    l++;
                    r = l + 1;
                }
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