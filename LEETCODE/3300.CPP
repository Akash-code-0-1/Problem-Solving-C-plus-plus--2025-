#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minElement(vector<int>& nums) {

        for(int i=0;i<nums.size();++i){
            int tempNum=nums[i];
            int digitSum=0;
            while(tempNum>0){
                int digit=tempNum%10;
                digitSum+=digit;
                tempNum/=10;
            }
            nums[i]=digitSum;
        }
        
        auto minEl= *min_element(nums.begin(),nums.end());
         return minEl;
        
    }
};

int main() {
    Solution s;
    vector<int> nums = {10,12,13,14};
    cout << s.minElement(nums) << endl;
    return 0;
}
