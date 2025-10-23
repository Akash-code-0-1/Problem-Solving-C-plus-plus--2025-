
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countPairs(vector<int> &nums, int k)
    {
        int res=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j] && i*j%k==0){
                    res++;
                }
            }
        }

        return res;
    }
};

int main()
{
    Solution solution;

    vector<int> nums1 = {3, 1, 2, 2, 2, 1, 3};
    int k1 = 2;
    cout << "Test Case 1: " << solution.countPairs(nums1, k1) << endl;

    vector<int> nums2 = {1, 2, 3, 4};

    int k2 = 1;
    cout << "Test Case 2: " << solution.countPairs(nums2, k2) << endl;

    return 0;
}
