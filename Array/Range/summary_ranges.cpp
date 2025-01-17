#include <bits/stdc++.h>
using namespace std;

vector<string> solve(vector<int> nums)
{
    vector<string> result;

    if (nums.empty())
        return result;

    long int a = nums[0];
    long int b = nums[0];

    for (long int i = 1; i < nums.size(); i++)
    {
        if (nums[i] - b == 1)
        {
            b = nums[i];
        }
        else
        {
            if (a == b)
            {
                result.push_back(to_string(a));
            }
            else
            {
                result.push_back(to_string(a) + "->" + to_string(b));
            }
            a = nums[i];
            b = nums[i];
        }
    }

    if (a == b)
    {
        result.push_back(to_string(a));
    }
    else
    {
        result.push_back(to_string(a) + "->" + to_string(b));
    }

    return result;
}

int main()
{
    vector<int> nums = {0, 2, 3, 4, 6, 8, 9};
    vector<string> ranges = solve(nums);

    for (const string &range : ranges)
    {
        cout << "\"" << range << "\", ";
    }

    return 0;
}