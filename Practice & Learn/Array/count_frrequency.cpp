#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {2, 3, 4, 5, 5, 2, 3, 7, 8, 9, 0};

    // unordered map for storing frequency
    unordered_map<int, int> freq;

    for (int x : nums)
    {
        freq[x]++;
    }

    for (auto [num, count] : freq)
        cout << num << " " << count << endl;
}