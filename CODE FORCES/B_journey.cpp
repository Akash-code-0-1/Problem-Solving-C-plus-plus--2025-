#include <bits/stdc++.h>
using namespace std;

void solve(long long target_distance, vector<int> nums)
{
    int res = 0;
    long long sum = 0;

    for (int i = 0;; i++)
    {
        sum += nums[i % 3];
        res++;
        if (sum >= target_distance)
        {
            break;
        }
    }

    cout << res << endl;
}

int main()
{
    int t;
    vector<int> nums(3);
    long int a, b, c;
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        long long n;
        cin >> n;
        cin >> nums[0] >> nums[1] >> nums[2];
        solve(n, nums);
    }
}