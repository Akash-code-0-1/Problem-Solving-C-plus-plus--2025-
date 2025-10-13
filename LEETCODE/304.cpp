#include <bits/stdc++.h>
using namespace std;

class NumMatrix
{
private:
    vector<vector<int>> prefix;
public:
    NumMatrix(vector<vector<int>> &matrix)
    {
        int n = matrix.size(), m = matrix[0].size();
        prefix =vector<vector<int>>(n + 1, vector<int>(m + 1, 0));

        // prefix sum
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                prefix[i][j] = matrix[i - 1][j - 1] + prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1];
            }
        }
    }

    int sumRegion(int row1, int col1, int row2, int col2)
    {
        int sum = prefix[row2 + 1][col2 + 1] - prefix[row1][col2 + 1] - prefix[row2 + 1][col1] + prefix[row1][col1];

        return sum;
    }
};

int main()
{
    vector<vector<int>> matrix = {
        {3, 0, 1, 4, 2},
        {5, 6, 3, 2, 1},
        {1, 2, 0, 1, 5},
        {4, 1, 0, 1, 7},
        {1, 0, 3, 0, 5}};

    NumMatrix *obj = new NumMatrix(matrix);
    cout << obj->sumRegion(2, 1, 4, 3) << endl; // Example call
    cout << obj->sumRegion(1, 1, 2, 2) << endl; // Example call
    cout << obj->sumRegion(1, 2, 2, 4) << endl; // Example call

    delete obj;
    return 0;
}