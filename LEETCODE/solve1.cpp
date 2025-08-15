#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    vector<vector<string>> mainVec;

    for (int i = 0; i < strs.size(); i++)
    {
        vector<string> temp;

        temp.push_back(strs[i]);

        string sortedI = strs[i];
        sort(sortedI.begin(), sortedI.end());

        for (int j = i + 1; j < strs.size(); j++)
        {
            string sortedJ = strs[j];
            sort(sortedJ.begin(), sortedJ.end());

            if (sortedI == sortedJ)
            {
                temp.push_back(strs[j]);
                strs.erase(strs.begin() + j);
                j--;
            }
        }
        mainVec.push_back(temp);
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