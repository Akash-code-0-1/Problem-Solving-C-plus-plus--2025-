#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for (int i = 0; i < image.size(); i++) {
            reverse(image[i].begin(), image[i].end());
            for (int j = 0; j < image[i].size(); j++) {
                if (image[i][j] == 1) {
                    image[i][j] = 0;
                } else {
                    image[i][j] = 1;
                }
            }
        }
        return image;
    }
};

int main() {
    vector<vector<int>> image = {{1,1,0},{1,0,1},{0,0,0}};
    Solution s;
    vector<vector<int>> ans = s.flipAndInvertImage(image);
    for (auto& row : ans) {
        for (auto& val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}
