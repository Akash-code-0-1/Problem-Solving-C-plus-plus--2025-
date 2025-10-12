#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
    {
        vector<vector<int>> matrix = image;
        int rows = matrix.size();
        int cols = matrix[0].size();

        // Add 0 to the beginning and end of each row (new columns)
        for (int i = 0; i < rows; i++)
        {
            matrix[i].insert(matrix[i].begin(), 0); 
            matrix[i].push_back(0);                
        }

        // Create a new row full of 0s (with new column count)
        vector<int> zeroRow(cols + 2, 0);

        // Step 3: Add top and bottom zero rows
        matrix.insert(matrix.begin(), zeroRow);
        matrix.push_back(zeroRow);

        // Prepare result matrix with same size as image
        vector<vector<int>> res = image;

        int match = image[sr][sc];

        for (int i = 1; i <= rows; i++)
        {
            for (int j = 1; j <= cols; j++)
            {
                // Check if the current pixel or any 4-neighbor matches the target
                if (matrix[i][j] == match &&
                    (matrix[i - 1][j] == match ||
                     matrix[i + 1][j] == match ||
                     matrix[i][j - 1] == match ||
                     matrix[i][j + 1] == match))
                {
                    res[i - 1][j - 1] = color; // map back to original (unpadded) position
                }
                else
                {
                    res[i - 1][j - 1] = matrix[i][j]; // keep original value
                }
            }
        }

        return res;
    }
};

int main()
{
    Solution solution;

    vector<vector<int>> image = {
        {1, 1, 1},
        {1, 1, 0},
        {1, 0, 1}};
    int sr = 1, sc = 1, color = 2;

    vector<vector<int>> result = solution.floodFill(image, sr, sc, color);

    cout << "Resultant Image:" << endl;
    for (const auto &row : result)
    {
        for (int pixel : row)
        {
            cout << pixel << " ";
        }
        cout << endl;
    }

    return 0;
}
