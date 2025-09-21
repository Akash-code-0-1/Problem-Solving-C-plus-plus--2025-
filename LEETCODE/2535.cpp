#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elementSum=accumulate(nums.begin(),nums.end(),0);
        int digitSum=0;
        for(int i=0;i<nums.size();i++){
            while(nums[i]>0){
                int digit=nums[i]%10;
                digitSum+=digit;
                nums[i]/=10;
            }
        }
        return abs(elementSum-digitSum);
    }
};

int main() {
    vector<int> nums = {1, 15, 6, 3};
    Solution sol;
    cout << sol.differenceOfSum(nums) << endl;
    return 0;
}