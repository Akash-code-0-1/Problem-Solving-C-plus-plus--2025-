#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> nums1)
{
    vector<int> res;
    set<int> s1(nums1.begin(), nums1.end());

    for (int i = 1; i <= nums1.size(); i++)
    {
        auto it = s1.find(i);
        if (it == s1.end())
        {
            res.push_back(i);
        }
    }

    return res;
}

int main()
{
    vector<int> nums1 = {4, 3, 2, 7, 8, 2, 3, 1};

    vector<int> res;

    res = solve(nums1);

    for (const int &i : res)
    {
        cout << i << " ";
    }
}