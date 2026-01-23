#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &nums, int find)
{
    int l = 0, r = nums.size() - 1;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (nums[mid] == find)
            return mid;
        else if (nums[mid] < find)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return -1;
}

int main()
{
    vector<int> nums = {1, 4, 5, 10, 20, 30, 70};

    int res = binarySearch(nums, 4);

    cout << res << endl;

    return 0;
}
