#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int>res(nums.size());
        for(int i=0;i<nums.size();i++){
            res[i]=nums[nums[i]];
        }
        return res;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {5,0,1,2,3,4}; 
    vector<int> result = solution.buildArray(nums);

    cout << "Result: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}