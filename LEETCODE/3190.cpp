#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int res=0;
        for(int i=0;i<nums.size();++i){
            if(nums[i]%3!=0){
                res+=min(nums[i]%3, 3- (nums[i]%3));
            }
        }
        return res;
        
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4, 5};

    int result = sol.minimumOperations(nums);
    cout << "Minimum operations: " << result << endl;

    return 0;
}
