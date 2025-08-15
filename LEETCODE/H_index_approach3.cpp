#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int hIndex(vector<int> &citations)
    {
        priority_queue<int, vector<int>, greater<int>> minHeap;

        for (int c : citations)
        {
            minHeap.push(c);
            if (minHeap.size() > c)
                minHeap.pop();
                
        }

        return minHeap.size();
    }
};

int main()
{
    vector<int> citations = {3, 0, 6, 1, 5};
    Solution solution;
    cout << solution.hIndex(citations) << endl;
}
