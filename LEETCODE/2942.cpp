#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findWordsContaining(vector<string> &words, char x)
    {
        vector<int> result;

        for (int i = 0; i < words.size(); i++)
        {
            for (const &ch : words[i])
            {
                if (ch == x)
                {
                    result.push_back(i);
                    break;
                }
            }
        }

        return result;
    }
};

int main()
{
    Solution sol;

    vector<string> words = {"leet", "code"};
    char x = 'e';

    vector<int> result = sol.findWordsContaining(words, x);

    cout << "Indices of words containing '" << x << "': [ ";
    for (int index : result)
    {
        cout << index << " ";
    }
    cout << "]" << endl;

    return 0;
}
