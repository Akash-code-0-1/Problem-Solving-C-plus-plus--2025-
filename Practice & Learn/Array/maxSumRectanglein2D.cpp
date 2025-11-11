#include <bits/stdc++.h>
using namespace std;

// Kadane’s algorithm for 1D array
int kadane(vector<int>& arr, int& start, int& finish, int n) {
    int sum = 0, maxSum = INT_MIN;
    int localStart = 0;

    finish = -1; // No valid subarray yet

    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (sum < arr[i]) { // start new subarray
            sum = arr[i];
            localStart = i;
        }
        if (sum > maxSum) {
            maxSum = sum;
            start = localStart;
            finish = i;
        }
    }
    return maxSum;
}

// Main function: find max sum rectangle
void findMaxSumRectangle(vector<vector<int>>& matrix) {
    int R = matrix.size();
    int C = matrix[0].size();
    int maxSum = INT_MIN;

    int finalLeft, finalRight, finalTop, finalBottom;

    // Left column
    for (int left = 0; left < C; left++) {
        vector<int> temp(R, 0);

        // Right column
        for (int right = left; right < C; right++) {

            // Add current column to each row
            for (int i = 0; i < R; i++)
                temp[i] += matrix[i][right];

            // Apply Kadane on temp[]
            int start, finish;
            int sum = kadane(temp, start, finish, R);

            // Update maxSum
            if (sum > maxSum) {
                maxSum = sum;
                finalLeft = left;
                finalRight = right;
                finalTop = start;
                finalBottom = finish;
            }
        }
    }

    cout << "Maximum Sum = " << maxSum << endl;
    cout << "Top Left: (" << finalTop << ", " << finalLeft << ")\n";
    cout << "Bottom Right: (" << finalBottom << ", " << finalRight << ")\n";
}

int main() {
    vector<vector<int>> matrix = {
        {1,  2, -1, -4, -20},
        {-8, -3, 4, 2, 1},
        {3,  8, 10, 1, 3},
        {-4, -1, 1, 7, -6}
    };

    findMaxSumRectangle(matrix);
    return 0;
}
