#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {

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

        vector<int> res;
        for(int i=0;i<k;i++){
            res.push_back(freqVec[i].first);
        }


        return res;
    }
};

int main()
{
    Solution sol;

    vector<int> nums = {1, 1, 1, 2, 2, 3};
    int k = 2;

    vector<int> result = sol.topKFrequent(nums, k);

    cout << "Top " << k << " frequent elements: ";
    for (int x : result)
        cout << x << " ";
    cout << endl;

    return 0;
}
