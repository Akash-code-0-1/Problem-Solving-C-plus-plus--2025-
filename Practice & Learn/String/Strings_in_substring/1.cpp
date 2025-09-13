#include <bits/stdc++.h>
using namespace std;

int numOfStrings(vector<string> &patterns, string word)
{
    int res = 0;
    for (const string &str : patterns)
    {
        if (word.find(str) != string::npos)
        {
            res++;
        }
    }
    return res;
}

int main()
{
    string word = "ab";
    vector<string> patterns = {"a", "a", "a"};
    cout << numOfStrings(patterns, word);
}