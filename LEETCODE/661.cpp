#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int rows = img.size();
        if (rows == 0) return {};
        int cols = img[0].size();

        vector<vector<int>> result(rows, vector<int>(cols, 0));

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                int sum = 0, count = 0;

                // Check all 9 possible positions
                for (int di = -1; di <= 1; ++di) {
                    for (int dj = -1; dj <= 1; ++dj) {
                        int ni = i + di, nj = j + dj;
                        if (ni >= 0 && ni < rows && nj >= 0 && nj < cols) {
                            sum += img[ni][nj];
                            count++;
                        }
                    }
                }

                result[i][j] = sum / count;
            }
        }



        return result;
    }
};

int main() {
    vector<vector<int>> img = {
        {100, 200, 100},
        {200,  50, 200},
        {100, 200, 100}
    };

    Solution sol;
    vector<vector<int>> result = sol.imageSmoother(img);

    for (const auto& row : result) {
        for (int val : row)
            cout << val << " ";
        cout << endl;
    }
    return 0;
}
