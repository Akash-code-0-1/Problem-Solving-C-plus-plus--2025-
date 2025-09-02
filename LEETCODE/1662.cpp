#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool arrayStringsAreEqual(vector<string> &word1, vector<string> &word2)
    {

        string newWord1 = "";
        string newWord2 = "";

        for (int i = 0; i < word1.size(); i++)
        {
            newWord1 += word1[i];
        }
        for (int i = 0; i < word2.size(); i++)
        {
            newWord2 += word2[i];
        }

        if (newWord1 == newWord2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Solution sol;
    vector<string> word1 = {"a", "cb"};
    vector<string> word2 = {"a", "bc"};
    bool result = sol.arrayStringsAreEqual(word1, word2);
    cout << (result ? "True" : "False") << endl;
    return 0;
}