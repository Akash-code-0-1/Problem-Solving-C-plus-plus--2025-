#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {

        int res = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] == nums[j])
                {
                    res++;
                }
            }
        }
        return res;
    }
};

int main()
{
    // Sample input
    vector<int> nums = {1,1,1,1};

    Solution sol;
    int result = sol.numIdenticalPairs(nums);

    // Output
    cout << "Number of good pairs: " << result << endl;
    return 0;
}