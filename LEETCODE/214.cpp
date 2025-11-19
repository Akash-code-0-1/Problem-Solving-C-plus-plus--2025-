#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPalindrome(string &s)
    {

        int l = 0, r = s.size() - 1;
        while (l < r)
        {
            if (s[l] != s[r])
                return false;
            l++;
            r--;
        }
        return true;
    }

    string shortestPalindrome(string s)
    {
        // int index=1;
        string tempstr = s;

        for (int i = 1; i < s.size(); i++)
        {
            if (isPalindrome(tempstr))
            {
                return tempstr;
            }
            else
            {
                tempstr.insert(tempstr.begin(), s[i]);
                // index++;
            }
        }
        return tempstr;
    }
};

int main()
{
    Solution sol;

    vector<string> samples = {
        "aacecaaa",
        "abcd",
        ""};

    for (const auto &s : samples)
    {
        cout << "Input: \"" << s << "\"\n";
        cout << "Output: \"" << sol.shortestPalindrome(s) << "\"\n";
        cout << "----\n";
    }

    return 0;
}
