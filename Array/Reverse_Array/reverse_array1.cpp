#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> &nums)
{
    reverse(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}

int main()
{
    vector<int> nums = {3, 5, 4, 1, 9};
    solve(nums);
}