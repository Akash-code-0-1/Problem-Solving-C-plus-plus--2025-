#include <bits/stdc++.h>
using namespace std;

int hikeCalculation(vector<int> &weather, int hikeLenght)
{

    int totalHike = 0;
    if (weather.size() < hikeLenght)
    {
        return totalHike;
    }
    // int k = 0;
    for (int i = 0; i <= weather.size() - hikeLenght;)
    {
        bool flag = true;
        for (int j = i; j < i + hikeLenght; j++)
        {
            if (weather[j] == 1)
            {
                flag = false;
                // continue;
                break;
            }
        }
        if (flag)
        {
            totalHike++;
            i += hikeLenght + 1;
        }
        // k = hikeLenght + 1;
        else
        {
            i++;
        }
    }

    return totalHike;
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> weather(n);
        for (int i = 0; i < n; i++)
        {
            cin >> weather[i];
        }
        int res = hikeCalculation(weather, k);
        cout << res << endl;
    }
}