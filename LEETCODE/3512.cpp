#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minOperations(vector<int> &nums, int k)
    {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        return sum % k;
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {1, 2, 3, 4};
    int k = 2;
    int result = sol.minOperations(nums, k);
    cout << "Result: " << result << endl;
    return 0;
}