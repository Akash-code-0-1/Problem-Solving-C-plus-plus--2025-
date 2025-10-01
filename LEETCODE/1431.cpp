#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        vector<bool> res;

        int maxCandies = *max_element(candies.begin(), candies.end());
        for (int i = 0; i < candies.size(); i++)
        {
            if (candies[i] + extraCandies >= maxCandies)
            {
                res.push_back(true);
            }
            else
            {
                res.push_back(false);
            }
        }

        return res;
    }
};

int main()
{
    Solution sol;

    vector<int> candies = {2, 3, 5, 1, 3};
    int extraCandies = 3;

    vector<bool> result = sol.kidsWithCandies(candies, extraCandies);

    cout << "Result: ";
    for (bool val : result)
    {
        cout << (val ? "true " : "false ");
    }
    cout << endl;

    return 0;
}
