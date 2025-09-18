#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points,
                            vector<vector<int>>& queries) {
        vector<int> res;
        for (int i = 0; i < queries.size(); ++i) {
            int count = 0;
            int radius = queries[i][2] * queries[i][2];

            for (int j = 0; j < points.size(); ++j) {
                count +=
                    (queries[i][0] - points[j][0]) * (queries[i][0] - points[j][0]) +
                        (queries[i][1] - points[j][1]) * (queries[i][1] - points[j][1]) <=
                    radius;
            }
            res.push_back(count);
        }

        return res;
    }
};

int main() {
    vector<vector<int>> points = {{1,3},{3,3},{5,3},{2,2}};
    vector<vector<int>> queries = {{2,3,1},{4,3,1},{1,1,2}};

    Solution sol;
    vector<int> result = sol.countPoints(points, queries);

    for (int cnt : result) {
        cout << cnt << " ";
    }
    cout << endl;

    return 0;
}