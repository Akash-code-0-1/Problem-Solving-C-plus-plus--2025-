#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minOperations(int n)
    {
        return n*n/4;
    }
};

int main()
{
    Solution sol;
    int n = 6;
    cout << "Minimum operations for n = " << n << " is: " << sol.minOperations(n) << endl;
    return 0;
}