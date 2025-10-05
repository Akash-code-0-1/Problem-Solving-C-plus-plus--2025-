#include <bits/stdc++.h>
using namespace std;

int subarraySum(vector<int> &nums, int k)
{
    unordered_map<int, int> prefixCount;
    prefixCount[0] = 1;

    int sum = 0, count = 0;

    for (int num : nums)
    {
        // maintaing running sum
        sum += num;
        if (prefixCount.find(sum - k) != prefixCount.end())
        {
            count += prefixCount[sum - k];
        }
        prefixCount[sum]++;
    }

    return count;
}

int main()
{
    vector<int> nums = {1, 2, 3};
    int k = 3;
    cout << subarraySum(nums, k)<<endl;
}

// Iterations:

// Init: prefixCount = {0:1}, sum=0, count=0.

// First num = 1 →
// sum = 0+1 = 1.
// Check sum-k = 1-3 = -2 → not in map.
// Update prefixCount = {0:1, 1:1}.
// count=0.

// Second num = 2 →
// sum = 1+2 = 3.
// Check sum-k = 3-3 = 0 → found in map (1 time).
// Add → count=0+1=1.
// Update prefixCount = {0:1, 1:1, 3:1}.

// Third num = 3 →
// sum = 3+3 = 6.
// Check sum-k = 6-3 = 3 → found in map (1 time).
// Add → count=1+1=2.
// Update prefixCount = {0:1,1:1,3:1,6:1}.

// ✅ Final Answer = 2 subarrays.
