#include <bits/stdc++.h>
using namespace std;
using u64 = uint64_t;
using u128 = __uint128_t;

// Fast modular multiplication (to avoid overflow)
u64 mulmod(u64 a, u64 b, u64 mod) {
    return (u128)a * b % mod;
}

// Fast modular exponentiation
u64 modpow(u64 base, u64 exp, u64 mod) {
    u64 res = 1;
    while (exp > 0) {
        if (exp & 1) res = mulmod(res, base, mod);
        base = mulmod(base, base, mod);
        exp >>= 1;
    }
    return res;
}

// Miller-Rabin primality test
bool millerRabin(u64 n) {
    if (n < 2) return false;

    // Small primes (quick check)
    for (u64 p : {2,3,5,7,11,13,17,19,23,29,31,37}) {
        if (n % p == 0) return n == p;
    }

    // Write n-1 = 2^s * d (d odd)
    u64 d = n - 1, s = 0;
    while ((d & 1) == 0) {
        d >>= 1;
        s++;
    }

    // Deterministic bases for 64-bit integers
    vector<u64> bases = {2,325,9375,28178,450775,9780504,1795265022};

    for (u64 a : bases) {
        if (a % n == 0) continue; // skip if base equals n
        u64 x = modpow(a, d, n);
        if (x == 1 || x == n-1) continue;

        bool composite = true;
        for (u64 r = 1; r < s; r++) {
            x = mulmod(x, x, n);
            if (x == n-1) {
                composite = false;
                break;
            }
        }
        if (composite) return false;
    }
    return true; // probably prime (actually guaranteed for 64-bit!)
}

int main() {
    vector<u64> tests = {2, 3, 5, 17, 19, 20, 21, 97, 561, 7919, 1ULL<<61};
    for (u64 n : tests) {
        cout << n << (millerRabin(n) ? " is prime\n" : " is composite\n");
    }
}
