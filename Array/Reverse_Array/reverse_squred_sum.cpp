#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        long int n;
        cin >> n;

        bool opFlag = true;

        vector<int> nums(n);
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }

        long int sum = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            if (opFlag)
            {
                sum += nums[i] * nums[i];
                opFlag = false;
            }
            else
            {
                sum -= nums[i] * nums[i];
                opFlag = true;
            }
        }
        cout << sum << endl;
    }
}