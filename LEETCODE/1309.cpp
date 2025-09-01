#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string freqAlphabets(string s)
    {

        string res="";
        int i = 0;
        while (i < s.size())
        {
            if (i + 2 < s.size() && s[i + 2] == '#')
            {
                string temps = string(1, s[i]) + string(1, s[i + 1]);
                // cout << char(stoi(temps) + 96);
                res+=char(stoi(temps) + 96);
                i += 3;
            }
            else
            {
                string temps = string(1, s[i]);
                // cout << char(stoi(temps) + 96);
                res+=char(stoi(temps) + 96);
                i++;
            }
        }


        return res;
    }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;
    Solution sol;
    cout << sol.freqAlphabets(s) << '\n';

    return 0;
}