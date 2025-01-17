#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> solve(int row)
{
    int coef = 1;
    vector<vector<int>> res_vec;

    for (int i = 0; i < row; i++)
    {
        vector<int> temp;
        for (int j = 0; j <= i; j++)
        {
            if (i == 0 || j == 0)
            {
                coef = 1;
            }
            else
            {
                coef = coef * (i - j + 1) / j;
                
            }
            temp.push_back(coef);
        }
        res_vec.push_back(temp);
    }
    return res_vec;
}

void printVec(vector<int> &v)
{
    cout << "[";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ",";
    }
    cout << "]";
}

int main()
{
    int row = 6;
    vector<vector<int>> trianglePascal = solve(row);
    cout << "[";
    for (int i = 0; i < trianglePascal.size(); i++)
    {
        printVec(trianglePascal[i]);
    }
    cout << "]";
}