#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n, m;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> m;
        int res = 0;
        int temp_res = 0;
        for (int j = 0; j < n; j++)
        {
            string str;
            cin >> str;

            if (res < m)
            {
                temp_res += str.length();
                if (temp_res <= m)
                {
                    res++;
                }
            }
        }
        cout << res << endl;
    }
}