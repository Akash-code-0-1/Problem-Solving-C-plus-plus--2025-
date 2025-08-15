#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int hIndex(vector<int> &citations)
    {
        int n = citations.size();
        vector<int> count(n + 1, 0);

        // Step 1: Count citations
        for (int c : citations)
        {
            if (c >= n)
                count[n]++;
            else
                count[c]++;
        }

        // Step 2: Compute H-index
        int totalPapers = 0;
        for (int h = n; h >= 0; h--)
        {
            totalPapers += count[h];
            if (totalPapers >= h)
                return h;
        }
        return 0;
    }
};

int main()
{
    vector<int> citations = {3, 0, 6, 1, 5};
    Solution solution;
    cout << solution.hIndex(citations) << endl;
}
