#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> decode(vector<int> &encoded, int first)
    {

        vector<int> res(encoded.size()+1);
        res[0]=first;
        for (int i = 0; i < encoded.size(); i++)
        {
            res[i+1]=encoded[i]^res[i];
        }
        return res;
    }
};

int main()
{
    Solution sol;

    vector<int> encoded = {6,2,7,3};
    int first = 4;

    vector<int> result = sol.decode(encoded, first);

    cout << "Decoded array: ";
    for (int x : result)
        cout << x << " ";
    cout << endl;

    return 0;
}
