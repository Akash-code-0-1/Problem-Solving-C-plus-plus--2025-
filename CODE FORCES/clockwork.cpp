// greedy , math

#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> clocks_time)
{
    int m = 0, l;
    int n = clocks_time.size();
    for (int k = 0; k < n * 2; k++)
    {

        for (int l = 0; l < n; l++)
        {
            // decrease 1 from each clocks time except the current clock
            // current clock will be reset it original value
            // peform this only the k > 0
        }
        // after moving to the second iteration of k check the current clock time is 0 or not if 0 print no
        // if the process can be inefinitely print yes.
    }
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        vector<int> clocks_time(n);

        for (int j = 0; j < n; j++)
        {
            cin >> clocks_time[j];
        }
        solve(clocks_time);
    }
}