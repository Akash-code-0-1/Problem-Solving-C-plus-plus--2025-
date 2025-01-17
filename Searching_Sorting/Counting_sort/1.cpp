#include <bits/stdc++.h>
using namespace std;

vector<int> countSort(vector<int> &nums)
{
     auto maxi = *max_element(nums.begin(), nums.end());
     
    vector<int> countArray(maxi + 1, 0);

    for (int i = 0; i < nums.size(); i++)
        countArray[nums[i]]++;

    for (int i = 1; i <= maxi; i++)
        countArray[i] += countArray[i - 1];

    vector<int> outputArray(nums.size());

    for (int i = nums.size() - 1; i >= 0; i--)

    {
        outputArray[countArray[nums[i]] - 1] = nums[i];

        countArray[nums[i]]--;
    }

    return outputArray;
}

int main()

{

    vector<int> nums = {4, 3, 12, 1, 5, 5, 3, 9};

    vector<int> result = countSort(nums);

    for (int i = 0; i < nums.size(); i++)
        cout << result[i] << " ";
}
