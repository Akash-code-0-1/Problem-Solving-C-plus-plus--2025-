#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int hIndex(vector<int> &citations)
    {
        sort(citations.rbegin(), citations.rend()); // Sort in descending order

        int hindex = 0;
        for (int i = 0; i < citations.size(); i++)
        {
            if (citations[i] >= i + 1)
            {
                hindex = i + 1;
            }
            else
            {
                break;
            }
        }

        return hindex;
    }
};

int main()
{
    vector<int> citations = {3, 0, 6, 1, 5};

    Solution solution;
    int result = solution.hIndex(citations);

    cout << result << endl;
}
