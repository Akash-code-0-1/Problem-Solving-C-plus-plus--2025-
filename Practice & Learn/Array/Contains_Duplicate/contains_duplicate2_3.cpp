#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &nums, int k)
{
    unordered_map<int, int> numMap; // To store the last index of each number

    for (int i = 0; i < nums.size(); i++) {
        if (numMap.find(nums[i]) != numMap.end() && abs(i - numMap[nums[i]]) <= k) {
            return true; // Found a duplicate within range k
        }
        numMap[nums[i]] = i; // Update the last index of the current number
    }
    return false; // No duplicates found within range k
}
int main()
{
    vector<int> nums = {1, 0, 1, 1};
    int k = 2;
    bool res = solve(nums, k);
    if (res)
        cout << "true";
    else
        cout << "false";
}

//O(n*k)