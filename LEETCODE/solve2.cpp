#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    unordered_map<string, vector<string>> anagramGroups;

    for (const string &word : strs)
    {
        string sortedWord = word;
        sort(sortedWord.begin(), sortedWord.end());
        anagramGroups[sortedWord].push_back(word);
    }

    vector<vector<string>> mainVec;
    for (auto &group : anagramGroups)
    {
        mainVec.push_back(group.second);
    }

    return mainVec;
}

int main()
{
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};

    vector<vector<string>> groupedAnagrams = groupAnagrams(strs);

    for (const auto &group : groupedAnagrams)
    {
        cout << "[ ";
        for (const string &word : group)
        {
            cout << word << " ";
        }
        cout << "]\n";
    }

    return 0;
}