#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &nums1, vector<int> nums2, int k)
{
    for (int i = 0; i < nums1.size(); i++)
    {
        if (nums1[i] + nums2[i] > k)
        {
            return true;
        }
    }

    return false;
}
int main()
{
    vector<int> nums = {1, 2, 2, 1};
    vector<int> nums2 = {3, 3, 3, 4};
    int k = 5;
    bool res = solve(nums, nums2, k);
    if (res)
        cout << "Yes";
    else
        cout << "No";
}