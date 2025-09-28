#include <bits/stdc++.h>
using namespace std;

vector<int> solve(int row)
{
    int coef = 1;
    vector<int> res_vec;
    int i = row;

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
        res_vec.push_back(coef);
    }
    return res_vec;
}

int main()
{
    int row = 1;
    vector<int> trianglePascal = solve(row);
    cout << "[";
    for (int i = 0; i < trianglePascal.size(); i++)
    {
        cout << trianglePascal[i] << ",";
    }
    cout << "]";
}