#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {2, 4, 5, 7, 9};

    // build prefix sum
    vector<int> prefix(nums.size());
    prefix[0] = nums[0];

    for (int i = 1; i < nums.size(); i++)
    {
        prefix[i] = prefix[i - 1] + nums[i];
    }

    int l = 1, r = 3;
    int sum = prefix[r] - (l > 0 ? prefix[l - 1] : 0);

    cout << "Prefix sum of range 1 to 3 of (2,4,5,7,9) is: " << sum << endl;
}