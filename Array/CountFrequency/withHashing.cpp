#include <bits/stdc++.h>
using namespace std;

void countFreq(int arr[], int n)
{
    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    for (auto x : mp)
    {
        cout << x.first << " " << x.second << endl;
    }

    cout << endl;

    // To print the frequency in the order of first appearance
    // in the array

    for (int i = 0; i < n; i++)
    {
        if (mp[arr[i]] != 0)
        {
            cout << arr[i] << " " << mp[arr[i]] << endl;
            mp[arr[i]] = 0;
        }
    }
}

int main()
{
    int arr[] = {10, 20, 20, 10, 10, 20, 5, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    countFreq(arr, n);
}