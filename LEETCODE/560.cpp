#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        int subarrayCounted = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            int currentSum = 0;

            for (int j = i; j < nums.size(); j++)
            {
                currentSum += nums[j];
                if(currentSum==k) subarrayCounted++;
            }
        }

        return subarrayCounted;
    }
};

int main()
{
    vector<int> nums = {1,1,1};
    int k = 2;

    Solution sol;
    int result = sol.subarraySum(nums, k);

    cout << "Result: " << result << endl;

    return 0;
}
