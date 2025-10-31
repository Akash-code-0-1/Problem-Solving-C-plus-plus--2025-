#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size()-1;
        int res= (nums[n]*nums[n-1]- nums[0]*nums[1]);
        return res;
    }
};

int main() {
    vector<int> nums = {5,6,2,7,4};
    
    Solution sol;
    int result = sol.maxProductDifference(nums);
    
    cout << result <<endl;
    return 0;
}