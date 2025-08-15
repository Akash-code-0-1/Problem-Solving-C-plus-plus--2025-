#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> getConcatenation(vector<int> &nums)
    {

        // vector<int> res = nums;

        // for (int i = 0; i < nums.size(); i++)
        // {
        //     res.push_back(nums[i]);
        // }

        nums.insert(nums.end(), nums.begin(), nums.end());

        return nums;
    }
};

int main()
{
    // Sample input
    vector<int> nums = {1, 2, 1};
    Solution sol;
    vector<int> output = sol.getConcatenation(nums);

    // Print output
    for (int num : output)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}