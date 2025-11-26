#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string finalString(string s)
    {

        string res = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != 'i')
            {
                res += s[i];
            }
            else{
                reverse(res.begin(),res.end());
            }
        }
        return res;

        
    }
};

int main()
{
    Solution sol;
    string s = "string";
    cout << sol.finalString(s) << endl;
    return 0;
}
