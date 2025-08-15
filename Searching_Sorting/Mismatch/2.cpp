#include <bits/stdc++.h>
using namespace std;

vector<int> findErrorNums(vector<int> &nums)
{
    int N = nums.size();
    int duplicate, missing;

    // Use a set to find the duplicate
    unordered_set<int> seen;
    int actual_sum = 0; // To store the sum of unique elements

    for (int num : nums)
    {
        if (seen.count(num)) // Duplicate found
            duplicate = num;
        else
            seen.insert(num);

        actual_sum += num; // Sum of all elements in nums
    }

    // Calculate the expected sum of 1 to N
    int expected_sum = N * (N + 1) / 2;

    // Calculate the missing number
    missing = expected_sum - (actual_sum - duplicate);

    return {duplicate, missing};
}
int main()
{
    vector<int> nums = {1, 1};
    int k = 5;
    vector<int> res;
    res = findErrorNums(nums);

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << endl;
    }
}