#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findGCD(vector<int>& nums) {
        
        
        auto max=*max_element(nums.begin(),nums.end());
        auto min=*min_element(nums.begin(),nums.end());


        while(min!=0){
            int temp=min;
            min=max%min;
            max=temp;
        }

        return max;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 5, 6, 9, 10}; 
    int result = sol.findGCD(nums);
    cout << "GCD: " << result << endl;
    return 0;
}