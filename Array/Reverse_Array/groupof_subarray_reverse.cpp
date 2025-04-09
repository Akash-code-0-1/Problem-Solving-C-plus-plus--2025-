#include <bits/stdc++.h>
using namespace std;

void reverseInGroups(vector<int> &arr, int k)
{
    for (int i = 0; i < arr.size(); i += k)
    {
        int left = i;
        int right = std::min(i + k - 1, (int)arr.size() - 1);

        while (left < right)
        {
            swap(arr[left++], arr[right--]);
        }
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    int k = 3;

    reverseInGroups(arr, k);

    for (int num : arr)
        cout << num << " ";

    return 0;
}
