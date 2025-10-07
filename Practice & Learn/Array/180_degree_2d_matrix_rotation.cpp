#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    // 180° rotation = reverse rows + reverse each row
    reverse(matrix.begin(), matrix.end());
    for (auto &row : matrix)
        reverse(row.begin(), row.end());

    cout << "180 Degree Rotated Matrix:" << endl;
    for (const auto &row : matrix)
    {
        for (int val : row)
        {
            cout << val << " ";
        }
        cout << endl;
    }
}
