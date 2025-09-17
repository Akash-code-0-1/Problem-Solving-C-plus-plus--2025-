#include <bits/stdc++.h>
using namespace std;

// LeetCode 509: Fibonacci Number
class Solution
{
public:
    int fib(int n)
    {
        int res=0;
        if (n <= 1) {
            return n;
        }
        int first = 0, second = 1;
        for (int i = 2; i <= n; ++i) {
            res = first + second;
            first = second;
            second = res;
        }
        return res;
    }
};

int main()
{
    Solution sol;
    int n = 4;
    cout << sol.fib(n) << endl;
    return 0;
}