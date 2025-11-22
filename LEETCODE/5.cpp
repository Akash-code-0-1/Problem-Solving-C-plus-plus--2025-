#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string longestPalindrome(string s)
    {
        int n = s.size();
        int maxLen = 1, start = 0;

        auto expand = [&](int l, int r)
        {
            while (l >= 0 && r < n && s[l] == s[r])
            {
                l--, r++;
            }
            return r - l - 1;
        };

        for (int i = 0; i < n; i++)
        {
            int len1 = expand(i, i);
            int len2 = expand(i, i + 1);

            int len = max(len1, len2);
            if (len > maxLen)
            {
                maxLen = len;
                start = i - (len - 1) / 2;
            }
        }

        return s.substr(start, maxLen);
    }
};

int main()
{
    Solution sol;

    string s1 = "babad";
    cout << sol.longestPalindrome(s1) << endl;

    string s2 = "cbbd";
    cout << sol.longestPalindrome(s2) << endl;

    string s3 = "a";
    cout << sol.longestPalindrome(s3) << endl;

    string s4 = "ac";
    cout << sol.longestPalindrome(s4) << endl;

    return 0;
}
