#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> &nums)
{
    int last = nums.size();
    int j = last;
    int transition = last / 2;
    for (int i = 0; i < transition; i++)
    {
        int temp = nums[i];
        nums[i] = nums[j - 1];
        nums[j - 1] = temp;
        j--;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}

int main()
{
    vector<int> nums = {3, 5, 4, 1, 9, 10};
    solve(nums);
}