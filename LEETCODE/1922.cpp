#include <bits/stdc++.h>
using namespace std;

// Answer=5#evenpositions×4#oddpositions(mod1e9+7)

class Solution
{
public:
    const long long MOD = 1e9 + 7;

    long long modPow(long long x, long long y)
    {
        long long res = 1;
        x %= MOD;
        while (y > 0)
        {
            if (y & 1)
                res = (res * x) % MOD;
            x = (x * x) % MOD;
            y >>= 1;
        }
        return res;
    }
    int countGoodNumbers(long long n)
    {
        long long evenPos = (n + 1) / 2;        
        long long oddPos = n / 2;

        long long part1 = modPow(5, evenPos); 
        long long part2 = modPow(4, oddPos);

        return (part1 * part2) % MOD;
    }
};

int main()
{
    Solution sol;
    cout << sol.countGoodNumbers(1) << endl;
    cout << sol.countGoodNumbers(4) << endl;
    cout << sol.countGoodNumbers(50) << endl;
}
