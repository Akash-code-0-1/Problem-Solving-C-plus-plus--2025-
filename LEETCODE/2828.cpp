#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isAcronym(vector<string> &words, string s)
    {
        if (s.size() != words.size())
            return false;
        for (int i = 0, j = 0; i < words.size(); i++, j++)
        {
            if (s[j] != words[i][0])
                return false;
        }
        return true;
    }
};

int main()
{
    Solution sol;

    vector<pair<vector<string>, string>> tests = {
        {{"never", "eat", "soggy", "waffles"}, "news"},
        {{"john", "fitzgerald", "kennedy"}, "jfk"},
        {{"portable", "network", "graphics"}, "png"}};

    for (auto &t : tests)
    {
        vector<string> words = t.first;
        string s = t.second;
        bool result = sol.isAcronym(words, s);
        cout << "words = [";
        for (size_t i = 0; i < words.size(); ++i)
        {
            if (i)
                cout << ", ";
            cout << '"' << words[i] << '"';
        }
        cout << "], s = \"" << s << "\" -> ";
        cout << (result ? "true" : "false") << '\n';
    }

    return 0;
}
