#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findDiagonalOrder(vector<vector<int>> &mat)
    {
        vector<int> res;
        vector<vector<int>> diogs;

        int trow = mat.size();
        int tcol = mat[0].size();

        for (int k = 0; k < trow + tcol - 1; k++)
        {
            vector<int>temp;
            int row, col;

            if (k < tcol)
            {
                row = 0;
                col = k;
            }
            else
            {
                row = k - tcol + 1;
                col = tcol - 1;
            }

            while (row < trow && col >= 0)
            {
                temp.push_back(mat[row][col]);
                row++;
                col--;
            }
            diogs.push_back(temp);
        }

        for(int i=0;i<diogs.size();i++){
            if(i%2==0){
                reverse(diogs[i].begin(), diogs[i].end());
            }
            for(int num: diogs[i]){
                res.push_back(num);
            }

        }

        return res;
    }
};

int main()
{
    Solution solution;

    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    vector<int> result = solution.findDiagonalOrder(matrix);

    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}