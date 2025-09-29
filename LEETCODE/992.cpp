#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int atMostK(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        int left = 0, res = 0;
        for (int right = 0; right < nums.size(); right++) {
            freq[nums[right]]++;
            if (freq[nums[right]] == 1) k--;  
            
            while (k < 0) {21`
                freq[nums[left]]--;
                if (freq[nums[left]] == 0) k++; 
                left++;
            }
            res += right - left + 1; 
        }
        return res;
    }

    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atMostK(nums, k) - atMostK(nums, k - 1);
    }
};

int main()
{
    Solution solution;

    vector<int> nums = {1, 2, 1, 2, 3};
    int k = 2;

    int result = solution.subarraysWithKDistinct(nums, k);
    cout << "Result: " << result << endl;

    return 0;
}