#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {2, 3, 4, 5, 5, 2, 3, 7, 8, 9, 0};

    unordered_map<int, int> freq;

    for (int x : nums)
    {
        freq[x]++;
    }

    // convert to vector pairs
    vector<pair<int, int>> freqVec(freq.begin(), freq.end());

    // sorting by frequecy (deescending order)
    sort(freqVec.begin(), freqVec.end(), [](auto &a, auto &b)
         {
        if(a.second==b.second) return a.first<b.first;
        return a.second>b.second; });
        

    // printing vector
    for (auto [num, count] : freqVec)
        cout << num << ": " << count << endl;

}