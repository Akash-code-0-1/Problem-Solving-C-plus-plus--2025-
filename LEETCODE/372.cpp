#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    const int m = 1337;

    int mod_pow(long long a, long long expoInt)
    {
        long long res = 1;

        a %= m;

        while (expoInt > 0)
        {
            if (expoInt & 1)
            {
                res = (res * a) % m;
            }
            a = (a * a) % m;
            expoInt >>= 1;
        }

        return (int)res;
    }

    int superPow(int a, vector<int> &b)
    {
        long long res = 1;

        for (int digit : b)
        {
            res = mod_pow(res, 10);
            res = (res * mod_pow(a, digit)) % m;
        }

        return (int)res;
    }
};

int main()
{
    Solution sol;

    int a = 1;
    vector<int> b = {4, 3, 3, 8, 5, 2};

    cout << "a = " << a << endl;
    cout << "b = ";
    for (int digit : b)
        cout << digit;
    cout << endl;

    int result = sol.superPow(a, b);
    cout << "superPow(a, b) = " << result << endl;

    return 0;
}
