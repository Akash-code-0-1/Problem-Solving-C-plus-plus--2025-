#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> grid = {
        {1, 1, 0},
        {0, 1, 1},
        {0, 0, 1}
    };

    int n = grid.size(), m = grid[0].size();
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    queue<pair<int, int>> q;

    q.push({0, 0});
    visited[0][0] = true;

    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, 1, -1};

    cout << "BFS Grid Traversal Order:\n";
    while (!q.empty()) {
        auto [x, y] = q.front(); q.pop();
        cout << "(" << x << "," << y << ") ";

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i], ny = y + dy[i];
            if (nx >= 0 && ny >= 0 && nx < n && ny < m && 
                grid[nx][ny] == 1 && !visited[nx][ny]) {
                visited[nx][ny] = true;
                q.push({nx, ny});
            }
        }

    }
    cout<<endl;

}
