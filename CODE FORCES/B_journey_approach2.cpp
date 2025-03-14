#include <bits/stdc++.h>
using namespace std;

void solve(long long target_distance, vector<int> nums)
{
    long long sum_of_cycle = nums[0] + nums[1] + nums[2];
    long long full_cycles = target_distance / sum_of_cycle;
    long long covered_distance = full_cycles * sum_of_cycle;
    int res = full_cycles * 3;

    for (int i = 0; covered_distance < target_distance; i++)
    {
        covered_distance += nums[i % 3];
        res++;
    }
    cout << res << endl;
}

int main()
{
    int t;
    vector<int> nums(3);
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        long long n;
        cin >> n;
        cin >> nums[0] >> nums[1] >> nums[2];
        solve(n, nums);
    }
}
