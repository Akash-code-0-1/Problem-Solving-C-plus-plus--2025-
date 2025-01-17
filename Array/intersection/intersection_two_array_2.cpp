#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> nums1, vector<int> nums2)
{
    vector<int> res;
    int n;
    vector<int> shortvec;
    vector<int> largevec;
    if (nums1.size() < nums2.size())
    {
        n = nums1.size();
        shortvec = nums1;
        largevec = nums2;
    }
    else
    {
        n = nums2.size();
        shortvec = nums2;
        largevec = nums1;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < largevec.size(); j++)
        {
            if (shortvec[i] == largevec[j])
            {
                res.push_back(shortvec[i]);
                break;
            }
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