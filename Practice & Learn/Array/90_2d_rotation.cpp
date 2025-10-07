#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    // Step 1: Transpose
    for (int i = 0; i < 3; i++)
    {
        for (int j = i; j < 3; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Step 2: Reverse each row
    for (int i = 0; i < 3; i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }

    cout << "90 Degree Totated Matrix:" << endl;
    for (const auto &row : matrix)
    {
        for (int val : row)
        {
            cout << val << " ";
        }
        cout << endl;
    }
}