#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {2, 3, 4, 5, 5, 2, 3, 7, 8, 9, 0};

    vector<int> res;
    for (int i = 0; i < nums.size(); i++)
    {
        int idx = abs(nums[i]) - 1;
        if (nums[idx] < 0)
            res.push_back(idx + 1);
        else
            nums[idx] = -nums[idx];
    }

    for (int dup : res)
        cout << dup << " ";
    cout<<endl;
}