#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;
        int res;
        int prevDigit = INT_MAX;
        while (x > 0)
        {
            int digit = x % 10;
            x = x / 10;
            if (digit < prevDigit)
            {
                res = digit;
                prevDigit = digit;
            }
        }
        cout << res << endl;
    }
}