#include <bits/stdc++.h>
using namespace std;

class RandomizedSet
{
    vector<int> v;
    unordered_map<int, int> mp;

public:
    RandomizedSet()
    {
    }

    bool search(int val)
    {

        if (mp.find(val) != mp.end())
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool insert(int val)
    {

        if (search(val))
        {
            return false;
        }
        else
        {
            v.push_back(val);
            mp[val] = v.size() - 1;
            return true;
        }
    }

    bool remove(int val)
    {

        if (!search(val))
        {
            return false;
        }

        else
        {
            auto it = mp.find(val);
            v[it->second] = v.back();
            v.pop_back();
            mp[v[it->second]] = it->second;
            mp.erase(val);
            return true;
        }

    }

    int getRandom()
    {

        return v[rand() % v.size()];
    }
};

int main()
{

    RandomizedSet randomizedSet;
    vector<string> operations = {"RandomizedSet", "insert", "remove", "insert", "getRandom", "remove", "insert", "getRandom"};
    vector<vector<int>> arguments = {{}, {1}, {2}, {2}, {}, {1}, {2}, {}};

    for (size_t i = 0; i < operations.size(); ++i)
    {
        if (operations[i] == "RandomizedSet")
        {
            cout << "RandomizedSet initialized.\n";
        }
        else if (operations[i] == "insert")
        {
            int val = arguments[i][0];
            bool result = randomizedSet.insert(val);
            cout << "insert(" << val << ") -> " << (result ? "true" : "false") << "\n";
        }
        else if (operations[i] == "remove")
        {
            int val = arguments[i][0];
            bool result = randomizedSet.remove(val);
            cout << "remove(" << val << ") -> " << (result ? "true" : "false") << "\n";
        }
        else if (operations[i] == "getRandom")
        {
            int result = randomizedSet.getRandom();
            cout << "getRandom() -> " << result << "\n";
        }
    }

    return 0;
}