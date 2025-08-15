#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> decompressRLElist(vector<int> &nums)
    {
        vector<int> res;

        for (int i = 0; i < nums.size(); i += 2)
        {
            res.insert(res.end(), nums[i], nums[i + 1]);
        }
        return res;
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {1, 1, 2, 3};
    vector<int> result = solution.decompressRLElist(nums);

    cout << "Decompressed List: ";
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}