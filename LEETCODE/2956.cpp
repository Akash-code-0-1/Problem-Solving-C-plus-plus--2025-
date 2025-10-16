#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {

        vector<int> res;
        int ans1 = 0, ans2 = 0;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    ans1++;
                    break;
                }
            }
        }
        res.push_back(ans1);
        for(int i=0;i<nums2.size();i++){
            for(int j=0;j<nums1.size();j++){
                if(nums2[i]==nums1[j]){
                    ans2++;
                    break;
                }
            }
        }
        res.push_back(ans2);

        return res;
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {1, 2, 2, 3};
    vector<int> nums2 = {2, 2, 4};

    vector<int> result = sol.findIntersectionValues(nums1, nums2);

    cout << "Intersection counts: [" << result[0] << ", " << result[1] << "]\n";

    return 0;
}