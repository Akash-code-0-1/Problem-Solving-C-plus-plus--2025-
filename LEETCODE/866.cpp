#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPrime(int n) {
        if (n < 2) return false;
        if (n % 2 == 0) return n == 2;
        for (int i = 3; i * 1LL * i <= n; i += 2) {
            if (n % i == 0) return false;
        }
        return true;
    }

    bool isPalindrome(int n) {
        string s = to_string(n);
        string r = s;
        reverse(r.begin(), r.end());
        return s == r;
    }

    int primePalindrome(int n) {
        while (true) {
            if (isPalindrome(n) && isPrime(n)) {
                return n;
            }
            n++;
            // optimization: skip even-length palindromes except 11
            if (10000000 < n && n < 100000000)
                n = 100000000;
        }
    }
};



int main()
{
    Solution sol;
    int n = 13;
    int result = sol.primePalindrome(n);
    cout << "Result: " << result << endl;
    return 0;
}
