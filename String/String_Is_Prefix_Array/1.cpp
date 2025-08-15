#include <bits/stdc++.h>
using namespace std;

bool isPrefixString(string s, vector<string> &words)
{
    string temp_str = "";
    for (const string &word : words)
    {
        temp_str += word;
        if (s == temp_str)
        {
            return true;
        }
        if (temp_str.size() > s.size())
        {
            return false;
        }
    }
    return false;
}

int main()
{
    string s = "iloveleetcode";
    vector<string> words = {"i", "love", "leetcode", "apples"};
    cout << isPrefixString(s, words);
}