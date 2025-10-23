#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int res = 0;
        for(int i=0; i < (int)nums.size(); i++) {
            for(int j = i + 1; j < (int)nums.size(); j++) {
                if(abs(nums[i] - nums[j]) == k) {
                    res++;
                }
            }
        }
        return res;
    }
};

int main() {
    Solution sol;
    
    // Test Case 1
    vector<int> nums1 = {1,2,2,1};
    int k1 = 1;
    cout << "Test Case 1: " << sol.countKDifference(nums1, k1) << endl;  // Expected: 4
    
    // Test Case 2
    vector<int> nums2 = {1,3};
    int k2 = 3;
    cout << "Test Case 2: " << sol.countKDifference(nums2, k2) << endl;  // Expected: 0
    
    // Test Case 3
    vector<int> nums3 = {3,2,1,5,4};
    int k3 = 2;
    cout << "Test Case 3: " << sol.countKDifference(nums3, k3) << endl;  // Expected: 3
    
    return 0;
}