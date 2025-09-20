#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int subtractProductAndSum(int n)
    {
        int digitProductSum = 1;
        int digitSum = 0;

        while (n > 0)
        {
            int digit = n % 10;
            digitProductSum *= digit;
            digitSum += digit;
            n /= 10;
        }
        return digitProductSum - digitSum;
    }
};

int main()
{
    Solution sol;
    int n = 234;
    int result = sol.subtractProductAndSum(n);
    cout << "Result for n = " << n << " is: " << result << std::endl;
    return 0;
}