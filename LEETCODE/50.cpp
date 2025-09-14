#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double myPow(double x, int n)
    {
        long long exp = n;
        double res = 1.0;

        if (exp < 0)
        {
            x = 1 / x;
            exp = -exp;
        }

        while (exp > 0)
        {
            if (exp % 2 == 1)
                res = (res * x);
            x = (x * x);
            exp /= 2;
        }
        return res;
    }
};

int main()
{
    Solution sol;

    double x = 2.0;
    int n = 10;

    cout << "x = " << x << ", n = " << n << endl;

    double result = sol.myPow(x, n);

    cout << "myPow(x, n) = " << result << endl;

    return 0;
}
