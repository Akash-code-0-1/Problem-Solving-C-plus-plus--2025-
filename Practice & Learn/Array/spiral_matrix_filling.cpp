#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> generateSpiral(int n) {
    vector<vector<int>> mat(n, vector<int>(n, 0));
    int top = 0, bottom = n - 1, left = 0, right = n - 1;
    int val = 1;
    while (top <= bottom && left <= right) {
        for (int j = left; j <= right; ++j) mat[top][j] = val++;
        ++top;
        for (int i = top; i <= bottom; ++i) mat[i][right] = val++;
        --right;
        if (top <= bottom) {
            for (int j = right; j >= left; --j) mat[bottom][j] = val++;
            --bottom;
        }
        if (left <= right) {
            for (int i = bottom; i >= top; --i) mat[i][left] = val++;
            ++left;
        }
    }
    return mat;
}

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;
    vector<vector<int>> mat = generateSpiral(n);
    for (auto& row : mat) {
        for (int x : row) cout << x << " ";
        cout << endl;
    }
    return 0;
}
