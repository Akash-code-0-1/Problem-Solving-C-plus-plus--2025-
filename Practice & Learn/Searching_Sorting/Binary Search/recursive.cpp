#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &nums,int l, int r, int find)
{
    if(l>r) return -1;

    int mid=l+(r-l)/2;
    if(nums[mid]==find) return mid;
    else if(nums[mid]< find){
        return binarySearch(nums,mid+1,r,find);
    }
    else return binarySearch(nums,l,mid-1,find);
}

int main()
{
    vector<int> nums = {1, 4, 5, 10, 20, 30, 70};

    int res = binarySearch(nums,0,nums.size()-1, 5);

    cout << res << endl;

    return 0;
}
