#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>res(nums.size());
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(nums[i]>nums[j]){
                    res[i]++; 
                }
            }
        }
        return res;
    }
};

int main() {
    vector<int> nums = {8, 1, 2, 2, 3};
    Solution obj;
    vector<int> ans = obj.smallerNumbersThanCurrent(nums);
    for(int x : ans) cout << x << " ";
    return 0;
}
