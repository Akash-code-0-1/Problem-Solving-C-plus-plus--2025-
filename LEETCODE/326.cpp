#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPowerOfThree(int n)
    {
        if (n <= 0)
            return false;

        // while (n >1)
        // {
        //     if(n%3!=0) return false;
        //     n/=3;
        // }

        // return true ;

        long long max_power_of_3 = 1162261467;
        return max_power_of_3 % n == 0;
    }
};

int main()
{
    Solution sol;

    vector<int> nums = {27, 0, -1};

    for (int n : nums)
    {
        if (sol.isPowerOfThree(n))
        {
            cout << "true" << endl;
        }
        else
        {
            cout << "false" << endl;
        }
    }

    return 0;
}
