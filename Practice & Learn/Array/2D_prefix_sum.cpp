#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> matrix = {
        {3, 0, 1, 4, 2},
        {5, 6, 3, 2, 1},
        {1, 2, 0, 1, 5},
        {4, 1, 0, 1, 7},
        {1, 0, 3, 0, 5}};

    int n = matrix.size(), m = matrix[0].size();
    vector<vector<int>> prefix(n + 1, vector<int>(m + 1, 0));

    // Build prefix sum
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            prefix[i][j] = matrix[i - 1][j - 1] + prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1];
        }
    }

    // Query sum of submatrix (2,1) to (4,3)
    int r1 = 2, c1 = 1, r2 = 4, c2 = 3;
    int sum = prefix[r2 + 1][c2 + 1] - prefix[r1][c2 + 1] - prefix[r2 + 1][c1] + prefix[r1][c1];

    cout << "Sum of submatrix = " << sum << endl;
}