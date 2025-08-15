#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> nums1, vector<int> nums2)
{
    set<int> s1(nums1.begin(), nums1.end());
    set<int> s2(nums2.begin(), nums2.end());
    vector<int> res;

    for (const int &num : s1)
    {
        auto it = s2.find(num);
        if (it != s2.end())
        {
            res.push_back(num);
        }
    }
    return res;
}  

int main()
{
    vector<int> nums1 = {4, 9, 5};
    vector<int> nums2 = {9, 4, 9, 8, 4};

    vector<int> res;

    res = solve(nums1, nums2);

    for (const int &i : res)
    {
        cout << i << " ";
    }
}