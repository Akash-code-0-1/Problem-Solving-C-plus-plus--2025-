#include <bits/stdc++.h>
using namespace std;
vector<int> solve(vector<int> &nums, int target)
{
    multiset<int> myset;
    vector<int> result;

    if (nums.size() == 0)
    {
        result.push_back(-1);
        result.push_back(-1);
        return result;
    }

    for (int num : nums)
    {
        myset.insert(num);
    }

    auto it = myset.find(target);

    if (it != myset.end())
    {

        auto range = myset.equal_range(target);

        // Calculate the starting index
        int startIndex = distance(myset.begin(), range.first);

        int lastIndex = distance(range.first, range.second);

        result.push_back(startIndex);
        result.push_back(startIndex + lastIndex - 1);

        return result;
    }
    else
    {
        result.push_back(-1);
        result.push_back(-1);
        return result;
    }
}

int main()
{
    vector<int> nums = {};
    int target = 6;
    vector<int> result = solve(nums, target);
    for (const int &num : result)
    {
        cout << num << " ";
    }
}