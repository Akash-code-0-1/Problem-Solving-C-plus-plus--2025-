#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {

        unordered_map<char, int> freq;
        int left = 0, res = 0;

        for (int right = 0; right < s.size(); right++)
        {
            freq[s[right]]++;

            while (freq[s[right]] > 1)
            {
                freq[s[left]]--;
                left++;
            }
            res = max(res, right - left + 1);
        }
        return res;
    }
};

int main()
{
    Solution sol;

    string test1 = "abcabcbb";
    string test2 = "bbbbb";
    string test3 = "pwwkew";
    string test4 = "";

    cout << sol.lengthOfLongestSubstring(test1) << endl;
    cout << sol.lengthOfLongestSubstring(test2) << endl;
    cout << sol.lengthOfLongestSubstring(test3) << endl;
    cout << sol.lengthOfLongestSubstring(test4) << endl;

    return 0;
}