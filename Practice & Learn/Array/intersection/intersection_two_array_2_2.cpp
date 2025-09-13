#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> nums1, vector<int> nums2)
{
    vector<int> res;
    unordered_map<int, int> count;
    for (int num : nums1)
    {
        count[num]++;
    }
    for (int num : nums2)
    {
        if (count[num] > 0)
        {
            res.push_back(num);
            count[num]--;
        }
    }
    return res;
}

int main()
{
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};

    vector<int> res;

    res = solve(nums1, nums2);

    for (const int &i : res)
    {
        cout << i << " ";
    }
}