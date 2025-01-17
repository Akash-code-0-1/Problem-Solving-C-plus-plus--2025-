#include <bits/stdc++.h>
using namespace std;
int getLucky(string s, int k)
{
    string strNum = "";
    for (int i = 0; i < s.size(); i++)
    {
        int num = 26 - (122 - s[i]);
        strNum += to_string(num);
    }
    int res;
    for (int i = 1; i <= k; i++)
    {
        res = 0;
        for (char c : strNum)
        {
            res += (c - '0');
            // cout << res << endl;
        }
        if (i != k)  
        {
            strNum = to_string(res);
        }
    }
    return res;
}
int main()
{
    string str = "leetcode";
    int k = 2;
    int res = getLucky(str, k);
}