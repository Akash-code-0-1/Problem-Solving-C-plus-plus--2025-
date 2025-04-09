#include <bits/stdc++.h>
using namespace std;

void reverse(vector<int> &arr, int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

bool nextPermutation(vector<int> &arr)
{
    int n = arr.size();
    int i = n - 2;

    while (i >= 0 && arr[i] >= arr[i + 1])
    {
        i--;
    }

    if (i < 0)
        return false;

    int j = n - 1;
    while (arr[j] <= arr[i])
    {
        j--;
    }

    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;

    reverse(arr, i + 1, n - 1);

    return true;
}

void generatePermutations(vector<int> arr)
{
    bool hasMore = true;
    while (hasMore)
    {
        for (int num : arr)
        {
            cout << num << " ";
        }
        cout << endl;

        hasMore = nextPermutation(arr);
    }
}

int main()
{
    vector<int> arr = {1, 2, 3};
    generatePermutations(arr);
    return 0;
}