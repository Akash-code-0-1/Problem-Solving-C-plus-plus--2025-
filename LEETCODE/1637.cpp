#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxWidthOfVerticalArea(vector<vector<int>> &points)
    {
        sort(points.begin(), points.end());
        int a = 0;
        int b = 1;
        int maxDiff = INT_MIN;
        for (int i = 0; i < points.size() - 1; i++)
        {
            int diff = abs(points[a][0] - points[b][0]);
            if (diff > maxDiff)
                maxDiff = diff;
            a = b;
            b++;
        }
        return maxDiff;
    }
};

int main()
{
    Solution solution;
    vector<vector<int>> points = {{8, 7}, {9, 9}, {7, 4}, {9, 7}};
    cout << solution.maxWidthOfVerticalArea(points) << endl;
    return 0;
}