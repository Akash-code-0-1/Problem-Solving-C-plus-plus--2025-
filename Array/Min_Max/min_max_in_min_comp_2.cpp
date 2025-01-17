#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> &nums)
{
    sort(nums.begin(), nums.end());

    cout << "max= " << nums[nums.size() - 1] << endl;
    cout << "min= " << nums[0] << endl;
}

int main()
{
    vector<int> nums = {3, 5, 4, 1, 9};
    solve(nums);
}