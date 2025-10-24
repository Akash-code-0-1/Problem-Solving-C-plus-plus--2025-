#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> generateMatrix(int n)
    {
        vector<vector<int>> mat(n, vector<int>(n, 0));
        int top = 0, bottom = n - 1, left = 0, right = n - 1;
        int val = 1;
        while (top <= bottom && left <= right)
        {
            for (int j = left; j <= right; ++j)
                mat[top][j] = val++;
            ++top;
            for (int i = top; i <= bottom; ++i)
                mat[i][right] = val++;
            --right;
            if (top <= bottom)
            {
                for (int j = right; j >= left; --j)
                    mat[bottom][j] = val++;
                --bottom;
            }
            if (left <= right)
            {
                for (int i = bottom; i >= top; --i)
                    mat[i][left] = val++;
                ++left;
            }
        }
        return mat;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    if (!(cin >> n))
        n = 3;
    Solution sol;
    vector<vector<int>> res = sol.generateMatrix(n);
    cout << res.size() << '\n';
    for (const auto &row : res)
    {
        for (size_t i = 0; i < row.size(); ++i)
        {
            if (i)
                cout << ' ';
            cout << row[i];
        }
        cout << '\n';
    }
    return 0;
}