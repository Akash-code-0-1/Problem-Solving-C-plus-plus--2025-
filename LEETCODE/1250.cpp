#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isGoodArray(vector<int>& nums) {
        int g = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            g = gcd(g, nums[i]);
            if (g == 1) return true;  
        }
        return g == 1;
    }
};

int main() {
    Solution sol;
    
    vector<int> nums1 = {12, 5, 7, 23};
    cout << (sol.isGoodArray(nums1) ? "true" : "false") << endl;  // true
    
    vector<int> nums2 = {29, 6, 10};
    cout << (sol.isGoodArray(nums2) ? "true" : "false") << endl;  // true
    
    vector<int> nums3 = {3, 6};
    cout << (sol.isGoodArray(nums3) ? "true" : "false") << endl;  // false
    
    return 0;
}
