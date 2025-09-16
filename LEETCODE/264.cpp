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

    int nthUglyNumber(int n)
    {
        int count = 0;
        int num = 1;
        while (true)
        {
            if (isUgly(num))
            {
                count++;
                if (count == n)
                    return num;
            }
            num++;
        }
    }
};
int main()
{
    Solution sol;

    int n = 10;
    cout << "The " << n << "th ugly number is " << sol.nthUglyNumber(n) << "\n";

    return 0;
}
