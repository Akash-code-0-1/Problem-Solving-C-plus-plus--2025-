#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size(), total = n * n;
        unordered_set<int> seen;
        int repeat = 0, sum = 0;

        for (auto& row : grid) {
            for (int v : row) {
                if (seen.count(v))
                    repeat = v;
                seen.insert(v);
                sum += v;
            }
        }

        int expected = total * (total + 1) / 2;
        int missing = expected - (sum - repeat);
        return {repeat, missing};
    }
};

int main() {
    Solution sol;
    vector<vector<int>> grid = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 8}
    };
    auto res = sol.findMissingAndRepeatedValues(grid);
    cout << res[0] << " " << res[1] << "\n";
    return 0;
}