#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i = 0; i < matrix.size(); i++) {
            for(int j = i; j < matrix.size(); j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        for(int i = 0; i < matrix.size(); i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};

int main() {
    Solution solution;

    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Original Matrix:" << endl;
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    solution.rotate(matrix);

    cout << "90 Degree Rotated Matrix:" << endl;
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}