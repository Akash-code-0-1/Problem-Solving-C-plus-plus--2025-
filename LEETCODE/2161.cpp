#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> pivotArray(vector<int> &nums, int pivot)
    {
        vector<int> result, pivots, greater;

        for (int num : nums)
        {
            if (num < pivot)
            {
                result.push_back(num);
            }
            else if (num == pivot)
            {
                pivots.push_back(num);
            }
            else
            {
                greater.push_back(num);
            }
        }

        for (int num : pivots)
        {
            result.push_back(num);
        }

        for (int num : greater)
        {
            result.push_back(num);
        }

        return result;
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {9, 12, 5, 10, 14, 3, 10};
    int pivot = 10;
    vector<int> result = sol.pivotArray(nums, pivot);
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}