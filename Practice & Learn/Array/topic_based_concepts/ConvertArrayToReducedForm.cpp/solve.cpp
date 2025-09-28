#include <bits/stdc++.h>
using namespace std;

vector<int> convert(vector<int> &arr)
{

    vector<int> res(arr.size());
    int position = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        int minValueIndex = 0;
        int minValue = INT_MAX;

        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[j] < minValue)
            {
                minValue = arr[j];
                minValueIndex = j;
            }
        }

        res[minValueIndex] = position;
        position++;

        arr[minValueIndex] = INT_MAX;
    }

    return res;
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
