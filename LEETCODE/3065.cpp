#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int op=0;
        for(int num: nums){
            if(num>=k){
                return op;
            }
            op++;
        }
        return op;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {2,11,10,1,3};
    int k = 10;
    int result = solution.minOperations(nums, k);
    cout << result << endl;
    return 0;
}