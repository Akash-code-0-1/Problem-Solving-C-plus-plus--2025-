#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> computeLPS(string pattern)
    {
        vector<int> lps(pattern.size(), 0);
        int len = 0;
        int i = 1;

        while (i < pattern.size())
        {
            if (pattern[i] == pattern[len])
            {
                len++;
                lps[i] = len;
                i++;
            }
            else
            {
                if (len != 0)
                {
                    len = lps[len - 1];
                }
                else
                {
                    lps[i] = 0;
                    i++;
                }
            }
        }
        return lps;
    }

    int strStr(string haystack, string needle)
    {
        if(needle=="") return 0;

        vector<int> lps = computeLPS(needle);
        int i = 0, j = 0;

        while (i < haystack.size())
        {
            if (haystack[i] == needle[j])
            {
                i++;
                j++;
            }
            if (j == needle.size())
            {
                return i - j;
            }
            else if (i < haystack.size() && haystack[i] != needle[j])
            {
                if (j != 0)
                    j = lps[j - 1];
                else
                    i++;
            }
        }
        return -1;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string haystack = "hello";
    string needle = "ll";
    Solution sol;
    cout << sol.strStr(haystack, needle) << "\n";
    return 0;
}