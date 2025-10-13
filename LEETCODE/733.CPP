#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>> &grid, int sr, int sc, int color) {
        int n = grid.size(), m = grid[0].size();
        vector<vector<bool>> visited(n, vector<bool>(m, false));
        queue<pair<int, int>> q;

        int originalColor = grid[sr][sc];
        if (originalColor == color) return grid; 

        q.push({sr, sc});
        visited[sr][sc] = true;

        vector<vector<int>> res = grid;
        int dx[] = {1, -1, 0, 0};
        int dy[] = {0, 0, 1, -1};

        while (!q.empty()) {
            auto [x, y] = q.front();
            q.pop();

            // Change color
            res[x][y] = color;

            for (int i = 0; i < 4; i++) {
                int nx = x + dx[i], ny = y + dy[i];
                if (nx >= 0 && ny >= 0 && nx < n && ny < m &&
                    !visited[nx][ny] && grid[nx][ny] == originalColor) {
                    visited[nx][ny] = true;
                    q.push({nx, ny});
                }
            }
        }

        return res;
    }
};

int main() {
    Solution solution;

    vector<vector<int>> image = {
        {1, 1, 1},
        {1, 1, 0},
        {1, 0, 1}};
    int sr = 1, sc = 1, color = 2;

    vector<vector<int>> result = solution.floodFill(image, sr, sc, color);

    cout << "Resultant Image:\n";
    for (const auto &row : result) {
        for (int pixel : row) cout << pixel << " ";
        cout << endl;
    }

    return 0;
}
