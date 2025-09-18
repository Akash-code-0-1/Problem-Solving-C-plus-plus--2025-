#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>res;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    res.push_back(nums[i]);
                    break;
                }
            }
        }
        return res;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int> result = sol.getSneakyNumbers(nums);

    cout << "Sneaky Numbers: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}