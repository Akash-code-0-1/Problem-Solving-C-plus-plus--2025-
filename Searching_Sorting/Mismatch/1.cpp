#include <bits/stdc++.h>
using namespace std;

vector<int> findErrorNums(vector<int> &nums)
{
    vector<int> res(2);
    unordered_set<int> seen;

    int actual_sum = 0;
    int expected_sum = (nums.size() * (nums.size() + 1)) / 2;

    for (int num : nums)
    {
        actual_sum += num;
        if (seen.count(num))
        {
            res[0] = num;
        }
        else
        {
            seen.insert(num);
        }
    }

    res[1] = expected_sum - (actual_sum - res[0]);

    return res;
}
int main()
{
    vector<int> nums = {1, 1};
    int k = 5;
    vector<int> res;
    res = findErrorNums(nums);

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << endl;
    }
}