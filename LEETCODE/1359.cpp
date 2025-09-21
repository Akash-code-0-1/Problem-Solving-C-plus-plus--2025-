#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long mod = 1e9 + 7;

    long long modPow(long long a, long long b) {
        long long res = 1;
        while (b > 0) {
            if (b & 1) res = res * a % mod;
            a = a * a % mod;
            b >>= 1;
        }
        return res;
    }

    int countOrders(int n) {
        long long fact = 1;
        for (int i = 1; i <= 2 * n; i++) fact = fact * i % mod;

        long long denom = modPow(2, n);   // 2^n
        long long inv = modPow(denom, mod - 2); // modular inverse of 2^n

        return fact * inv % mod;
    }
};

int main() {
    Solution s;
    cout << s.countOrders(1) << endl; 
    cout << s.countOrders(2) << endl; 
    cout << s.countOrders(3) << endl; 
    return 0;
}
