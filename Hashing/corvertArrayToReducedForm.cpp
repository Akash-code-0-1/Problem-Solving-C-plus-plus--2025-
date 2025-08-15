#include <bits/stdc++.h>
using namespace std;

vector<int> convert(vector<int> &arr)
{
    vector<int> temp = arr;

    sort(temp.begin(), temp.end());

    unordered_map<int, int> unmap;

    int value = 0;

    for (int i = 0; i < temp.size(); i++)
    {
        unmap[temp[i]] = value;
        value++;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        arr[i] = unmap[arr[i]];
    }

    return arr;
}

int main()
{
    vector<int> arr = {10, 20, 15, 12, 11, 50};

    vector<int> result = convert(arr);

    for (auto i : result)
    {
        cout << i << " ";
    }

    return 0;
}
