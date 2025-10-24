#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& mat) {
    int top = 0, bottom = mat.size() - 1;     
    int left = 0, right = mat[0].size() - 1;  
    vector<int> ans;


    while (top <= bottom && left <= right) {

        // 1️⃣ Traverse from Left → Right across the top row
        for (int i = left; i <= right; i++)
            ans.push_back(mat[top][i]);
        top++;  

        // 2️⃣ Traverse from Top → Bottom along the right column
        for (int i = top; i <= bottom; i++)
            ans.push_back(mat[i][right]);
        right--;  
        // 3️⃣ Traverse from Right → Left along the bottom row
        if (top <= bottom) {
            for (int i = right; i >= left; i--)
                ans.push_back(mat[bottom][i]);
            bottom--; 
        }

        // 4️⃣ Traverse from Bottom → Top along the left column
        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                ans.push_back(mat[i][left]);
            left++;  
        }
    }

    return ans; 
}

int main() {
    vector<vector<int>> mat = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    vector<int> result = spiralOrder(mat);

    cout << "Spiral Order: ";
    for (int num : result)
        cout << num << " ";
    cout << endl;

    return 0;
}
