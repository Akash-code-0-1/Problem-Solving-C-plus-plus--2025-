#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isStrictlyPalindromic(int n)
    {

        for (int b = 2; b <= n - 2; b++)
        {

            string digits = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
            string res = "";

            int temp_n=n;

            if (temp_n == 0)
                return "0";

            while (temp_n > 0)
            {
                int temp = temp_n % b;
                temp_n /= b;
                res += to_string(temp);
            }

            reverse(res.begin(), res.end());

            string orderRes=res;

            string revRes=orderRes;
            reverse(revRes.begin(), revRes.end());

            if(orderRes != revRes) return false;

        }

        return true;
    }
};

int main()
{
    Solution sol;

    int n1 = 9;
    cout << "n = " << n1 << " -> " << (sol.isStrictlyPalindromic(n1) ? "true" : "false") << endl;

    int n2 = 4;
    cout << "n = " << n2 << " -> " << (sol.isStrictlyPalindromic(n2) ? "true" : "false") << endl;
}
