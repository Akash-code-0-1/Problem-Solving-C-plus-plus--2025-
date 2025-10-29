#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int largestAltitude(vector<int> &gain)
    {
        int res = 0;
        int altitude = 0;
        for (int i = 0; i < gain.size(); i++)
        {
            altitude += gain[i];
            if (altitude >= res)
                res = altitude;
        }
        return res;
    }
};

int main()
{
    vector<int> gain = {-4,-3,-2,-1,4,3,2};
    Solution sol;
    cout << sol.largestAltitude(gain) << '\n';
    return 0;
}