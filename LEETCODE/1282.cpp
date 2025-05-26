#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> groupThePeople(vector<int> &groupSizes)
    {

        vector<vector<int>> result;

        for (int i = 0; i < groupSizes.size(); i++)
        {

            if (groupSizes[i] == 0)
                continue;

            vector<int> temp;

            int groupSize = groupSizes[i];

            for (int j = 0; j < groupSizes.size(); j++)
            {
                if (groupSize == groupSizes[j])
                {
                    temp.push_back(j);
                    groupSizes[j] = 0;

                    if (temp.size() == groupSize)
                    {
                        break;
                    }
                }
            }
            result.push_back(temp);
        }

        return result;
    }
};

int main()
{
    Solution sol;

    vector<int> groupSizes = {3, 3, 3, 3, 3, 1, 3};

    vector<vector<int>> grouped = sol.groupThePeople(groupSizes);

    cout << "Grouped People:" << endl;
    for (const auto &group : grouped)
    {
        cout << "[ ";
        for (int person : group)
        {
            cout << person << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}
