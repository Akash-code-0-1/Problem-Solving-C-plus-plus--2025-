//Useful when solving problems like "find first/last occurrence", "group elements", etc.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {2, 3, 4, 5, 5, 2, 3, 7, 8, 9, 0};

    unordered_map<int, vector<int>> indexMap;
    for (int i = 0; i < nums.size(); i++)
    {
        indexMap[nums[i]].push_back(i);
    }

    for (auto [num, idxs] : indexMap)
    {
        cout << num << " at indices: ";
        for (int idx : idxs)
            cout << idx << " ";
        cout << endl;
    }
}