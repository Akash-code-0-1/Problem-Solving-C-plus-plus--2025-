#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
const int N = 1e6; // maximum n for nCr
long long fact[N+1];

// Fast power
long long modPow(long long a, long long b, long long m) {
    long long res = 1;
    a %= m;
    while (b > 0) {
        if (b & 1) res = (res * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    return res;
}

// Fermat-based inverse
long long modInverse(long long a, long long p) {
    return modPow(a, p - 2, p);
}

// Precompute factorials
void precompute() {
    fact[0] = 1;
    for (int i = 1; i <= N; i++) {
        fact[i] = (fact[i-1] * i) % MOD;
    }
}

// Compute nCr % MOD
long long nCr(int n, int r) {
    if (r > n) return 0;
    long long num = fact[n];
    long long den = (fact[r] * fact[n-r]) % MOD;
    return (num * modInverse(den, MOD)) % MOD;
}

int main() {
    precompute();
    cout << "5C2 % MOD = " << nCr(5,2) << "\n";
    cout << "10C3 % MOD = " << nCr(10,3) << "\n";
    cout << "1000C500 % MOD = " << nCr(1000,500) << "\n";
    return 0;
}
