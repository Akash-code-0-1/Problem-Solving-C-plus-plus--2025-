#include <bits/stdc++.h>
using namespace std;

void solve(long long target_distance, vector<int> nums)
{
    long long sum = 0;
    int res = 0;

    for (int i = 0; sum < target_distance; i++)
    {
        sum += nums[i % 3];
        res++;
    }

    cout << res << endl;
}

int main()
{
    int t;
    cin >> t;
    vector<int> nums(3);

    for (int j = 0; j < t; j++)
    {
        long long n;
        cin >> n;
        cin >> nums[0] >> nums[1] >> nums[2];
        solve(n, nums);
    }

    return 0;
}
