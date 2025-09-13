#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int sumOfMultiples(int n)
    {
        int res = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i % 3==0 || i % 5==0 || i % 7==0)
            {
                res += i;
            }
        }
        return res;
    }
};

int main()
{
    Solution sol;
    int n = 7;
    int result = sol.sumOfMultiples(n);
    cout << "Sum of multiples for n = " << n << " is: " << result << endl;
    return 0;
}