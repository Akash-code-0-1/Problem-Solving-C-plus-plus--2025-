#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x;
        cin >> x;
        int sum = 0;
        while (x > 0)
        {
            sum += x % 10;
            x = x / 10;
        }
        cout << sum << endl;
    }
}