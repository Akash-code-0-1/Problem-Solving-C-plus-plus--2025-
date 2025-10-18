#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> numberGame(vector<int> &nums)
    {
        vector<int> res;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 1; i+=2)
        {
            res.push_back(nums[i + 1]);
            res.push_back(nums[i]);
        }
        return res;
    }
};

static void printVector(const vector<int> &v)
{
    cout << "[";
    for (size_t i = 0; i < v.size(); ++i)
    {
        if (i)
            cout << ", ";
        cout << v[i];
    }
    cout << "]";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;

    // Sample input 1
    vector<int> nums1 = {5,4,2,3};
    vector<int> ans1 = sol.numberGame(nums1);
    cout << "Input: ";
    printVector(nums1);
    cout << " -> Output: ";
    printVector(ans1);
    cout << "\n";

    // Sample input 2
    vector<int> nums2 = {5, 5, 5};
    vector<int> ans2 = sol.numberGame(nums2);
    cout << "Input: ";
    printVector(nums2);
    cout << " -> Output: ";
    printVector(ans2);
    cout << "\n";

    // Sample input 3
    vector<int> nums3 = {2, 7, 1, 8, 2};
    vector<int> ans3 = sol.numberGame(nums3);
    cout << "Input: ";
    printVector(nums3);
    cout << " -> Output: ";
    printVector(ans3);
    cout << "\n";

    return 0;
}