#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int mostWordsFound(vector<string> &sentences)
    {

        int res = 0;

        for (int i = 0; i < sentences.size(); i++)
        {
            int tempRes = 0;

            for (const char &ch : sentences[i])
            {
                if (ch == ' ')
                {
                    tempRes++;
                }
            }
            if (tempRes > res)
            {
                res = tempRes;
            }
        }

        return res + 1;
    }
};

int main()
{
    vector<string> sentences = {
        "alice and bob love leetcode",
        "i think so too",
        "this is great thanks very much"};
    Solution sol;
    int result = sol.mostWordsFound(sentences);
    cout << "Result: " << result << endl;
    return 0;
}