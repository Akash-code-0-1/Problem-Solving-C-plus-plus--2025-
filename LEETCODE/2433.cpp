#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    vector<int> findArray(vector<int> &pref)
    {
        vector<int> result;

        for (int i = 0; i < pref.size(); i++)
        {
            if (i == 0)
            {
                result.push_back(pref[i]);
            }
            else
            {
                result.push_back(pref[i] ^ pref[i - 1]);
            }
        }

        return result;
    }
};

int main()
{
    Solution sol;
    vector<int> pref = {13};
    vector<int> output = sol.findArray(pref);
    for (int num : output)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}