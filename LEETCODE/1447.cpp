#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int gcd(int a, int b)
    {
        return (b == 0) ? a : gcd(b, a % b);
    }

    pair<int, int> reduce_fraction(int a, int b)
    {
        int g = gcd(abs(a), abs(b));
        a /= g;
        b /= g;
        if (b < 0)
        {
            a = -a;
            b = -b;
        }
        return {a, b};
    }

    vector<string> simplifiedFractions(int n)
    {
        vector<string> res;

        for (int i = 2; i <= n; i++)
        {
            for (int j = 1; j < i; j++)
            {

                auto p = reduce_fraction(j, i);

                if (p.first == j && p.second == i)
                {
                    res.push_back(to_string(j) + "/" + to_string(i));
                }
            }
        }

        return res;
    }
};

int main()
{
    Solution sol;
    int n = 4;

    cout << "Input: n = " << n << endl;
    auto res = sol.simplifiedFractions(n);

    cout << "Output fractions: ";
    for (auto &s : res)
        cout << s << " ";
    cout << endl;

    return 0;
}
