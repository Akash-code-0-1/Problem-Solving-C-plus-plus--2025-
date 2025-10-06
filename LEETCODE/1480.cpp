#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>res;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            res.push_back(sum);
        }
        return res;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = solution.runningSum(nums);
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}