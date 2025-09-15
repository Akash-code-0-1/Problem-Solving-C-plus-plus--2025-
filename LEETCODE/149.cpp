#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int maxCount = 1;
        int total = points.size();

        for (int i = 0; i < total - 1; i++) {
            map<double, int> slopeMap;

            for (int j = i + 1; j < total; j++) {
                int dx = points[j][0] - points[i][0];
                int dy = points[j][1] - points[i][1];

                double slope;
                if (dx == 0) {
                    slope = 1e9; 
                } else {
                    slope = (double)dy / dx;
                }

                slopeMap[slope]++;
            }

            int localMax = 0;
            for (auto &p : slopeMap) {
                localMax = max(localMax, p.second + 1);
            }

            maxCount = max(maxCount, localMax);
        }

        return maxCount;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> pts1 = {{1,0},{0,0}};
    cout << sol.maxPoints(pts1) << endl; // 2

    vector<vector<int>> pts2 = {{1,1},{2,2},{3,3}};
    cout << sol.maxPoints(pts2) << endl; // 3
}
