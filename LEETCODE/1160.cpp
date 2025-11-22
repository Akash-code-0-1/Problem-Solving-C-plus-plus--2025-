#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countCharacters(vector<string> &words, string chars)
    {
        int sum = 0;

        unordered_map<char, int> patternFrq;

        for (int i = 0; i < chars.size(); i++)
        {
            patternFrq[chars[i]]++;
        }

        for (int i = 0; i < words.size(); i++)
        {

            unordered_map<char, int> wordfreq;

            for (int j = 0; j < words[i].size(); j++)
            {
                wordfreq[words[i][j]]++;
            }

            bool flag = true;

            for (auto &p : wordfreq)
            {
                char ch = p.first;
                int cnt = p.second;

                if (patternFrq[ch] < cnt)
                {
                    flag = false;
                    break;
                }
            }

            if(flag){
                sum+=words[i].size();
            }
        }
        return sum;
    }
};

int main()
{
    vector<string> words = {"cat", "bt", "hat", "tree"};
    string chars = "atach";
    Solution sol;
    cout << sol.countCharacters(words, chars) << endl;
    return 0;
}