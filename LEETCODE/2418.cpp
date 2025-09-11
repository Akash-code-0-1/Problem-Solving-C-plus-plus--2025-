#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> sortPeople(vector<string> &names, vector<int> &heights)
    {

        map<int, string, greater<int>> person;

        for (int i = 0; i < names.size(); i++)
        {
            person[heights[i]] = names[i];
        }

        vector<string> res;
        for (auto &p : person)
        {
            res.push_back(p.second); 
        }

        return res;
    }
};

int main()
{
    vector<string> names = {"Mary", "John", "Emma"};
    vector<int> heights = {180, 165, 170};

    Solution sol;
    vector<string> sortedNames = sol.sortPeople(names, heights);

    // Output the result
    for (const string &name : sortedNames)
    {
        cout << name << " ";
    }
    cout << endl;

    return 0;
}