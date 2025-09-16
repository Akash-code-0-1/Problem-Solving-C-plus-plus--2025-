#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isUgly(int n)
    {
        for (int i = 2; i < 6 && n; i++)
            while (n % i == 0)
                n /= i;
        return n == 1;
    }
};

int main()
{
    Solution sol;

    int n = 6;

    bool result = sol.isUgly(n);

    cout << "Is " << n << " an ugly number? " << (result ? "Yes" : "No") << "\n";

    return 0;
}
