#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int prefixCount(vector<string> &words, string pref)
    {

        int res = 0;

        for (int i = 0; i < words.size(); i++)
        {
            if (words[i].size() >= pref.size())
            {
                bool flag = true;
                string word = words[i];
                for (int j = 0; j < pref.size(); j++)
                {
                    if (pref[j] != word[j])
                    {
                        flag = false;
                    }
                }
                if (flag)
                {
                    res++;
                }
            }
        }
        return res;
    }
};

int
main()
{
    vector<string> words = {"apple", "app", "application", "banana", "apex"};
    string pref = "app";
    Solution sol;
    int result = sol.prefixCount(words, pref);
    cout << "Number of words with prefix '" << pref << "': " << result << endl;
    return 0;
}