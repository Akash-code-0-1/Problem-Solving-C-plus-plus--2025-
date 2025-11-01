#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        
        for(int i = 0; i < nums.size() - 1; i++) {
            if ((nums[i] % 2) == (nums[i + 1] % 2)) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    Solution sol;
    

    vector<int> nums1 = {1, 2, 3, 4};
    cout << "Test Case 1: " << (sol.isArraySpecial(nums1) ? "true" : "false") << endl;
    

    vector<int> nums2 = {2, 4, 6, 8};
    cout << "Test Case 2: " << (sol.isArraySpecial(nums2) ? "true" : "false") << endl;
    
}