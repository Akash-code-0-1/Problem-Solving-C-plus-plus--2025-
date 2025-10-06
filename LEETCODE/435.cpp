#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int eraseOverlapIntervals(vector<vector<int>> &intervals)
    {
        if (intervals.empty())
            return 0;

        sort(intervals.begin(), intervals.end());

        vector<vector<int>> merged;
        merged.push_back(intervals[0]);
        int countNonOverlap = 1;

        for (int i = 1; i < intervals.size(); i++)
        {
            auto &last = merged.back();

            if (intervals[i][0] < last[1])
            {
                if (intervals[i][1] < last[1])
                {
                    last[1] = intervals[i][1];
                }
            }
            else
            {
                merged.push_back(intervals[i]);
                countNonOverlap++;
            }
        }
        return intervals.size() - countNonOverlap;
    }
};

int main()
{
    Solution solution;

    vector<vector<int>> intervals = {{1, 2}, {2, 3}};

    int result = solution.eraseOverlapIntervals(intervals);
    cout << "Result: " << result << endl;

    return 0;
}