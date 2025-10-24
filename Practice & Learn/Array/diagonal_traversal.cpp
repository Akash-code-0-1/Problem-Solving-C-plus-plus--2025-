#include <bits/stdc++.h>
using namespace std;

void diagonalTopLeftToBottomRight(vector<vector<int>>& mat) {

    int trow=mat.size();
    int tcolumn=mat[0].size();

    for(int k=0; k<trow+tcolumn-1;k++){
        int row, column;

        if(k<tcolumn){
            row=0;
            column=k;
        }
        else{
            row=k-tcolumn+1;
            column=tcolumn-1;
        }

        while (row< trow && column>=0)
        {
            cout<<mat[row][column]<<" ";
            row++;
            column--;
        }
        cout<<endl;
        
    }

}

int main() {
    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Diagonal Traversal (Top-Left → Bottom-Right):\n";
    diagonalTopLeftToBottomRight(mat);

    return 0;
}
