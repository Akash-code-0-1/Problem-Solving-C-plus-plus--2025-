// difference array ___ for fast range updates
// add 5 to range [1 to 3]
// add 2 to range [2 to 4]
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    vector<int> diff(n + 1, 0);

    // update add 5 to range [1 to 3]
    diff[1] += 5;
    diff[3 + 1] -= 5;

    vector<int> nums(n);
    nums[0] = diff[0];
    for (int i = 1; i < n; i++)
    {
        nums[i] = nums[i - 1] + diff[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    // update add 2 to range [0 to 4]
    diff[0] += 2;
    diff[4 + 1] -= 2;

    cout<<endl;

    nums[0] = diff[0];
    for (int i = 1; i < n; i++)
    {
        nums[i] = nums[i - 1] + diff[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
}