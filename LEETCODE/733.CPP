#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {

        int match=image[sr][sc];

        for(int i=0;i<image.size();i++){
            for(int j=0;j<image[0].size();j++){
                if(match==image[i][j]){
                    image[i][j]=color;
                }
            }
        }

        return image;
    }
};

int main() {
    Solution solution;

    vector<vector<int>> image = {
        {1, 1, 1},
        {1, 1, 0},
        {1, 0, 1}
    };
    int sr = 1, sc = 1, color = 2;

    vector<vector<int>> result = solution.floodFill(image, sr, sc, color);

    cout << "Resultant Image:" << endl;
    for (const auto& row : result) {
        for (int pixel : row) {
            cout << pixel << " ";
        }
        cout << endl;
    }

    return 0;
}