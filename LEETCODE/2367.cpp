#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool search(int l, int r, vector<int>&nums, int x){
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==x) return true;
            else if(nums[mid]<x) l=mid+1;
            else r=mid-1;
        }
        return false;
    }
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int res=0;
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[j]-nums[i]==diff && search(j+1,nums.size()-1,nums,nums[j]+diff)) res++;
            }
        }
        return res;
    }
};

int main() {
    Solution sol;
    
    // Test case 1
    vector<int> nums1 = {0,1,4,6,7,10};
    int diff1 = 3;
    cout << "Test case 1: " << sol.arithmeticTriplets(nums1, diff1) << endl; // Expected output: 2
    
    // Test case 2
    vector<int> nums2 = {4,5,6,7,8,9};
    int diff2 = 2;
    cout << "Test case 2: " << sol.arithmeticTriplets(nums2, diff2) << endl; // Expected output: 2
    
    return 0;
}