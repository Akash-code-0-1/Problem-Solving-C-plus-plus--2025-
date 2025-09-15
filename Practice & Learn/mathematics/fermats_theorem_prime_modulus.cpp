#include <bits/stdc++.h>
using namespace std;

long long modPow(long long a, long long b, long long p) {
    long long res = 1;
    a %= p;
    while (b > 0) {
        if (b & 1) res = (res * a) % p;
        a = (a * a) % p;
        b >>= 1;
    }
    return res;
}

// Fermat's Theorem for modular inverse (only if p is prime)
long long modInverse(long long a, long long p) {
    return modPow(a, p - 2, p);
}

int main() {
    long long a = 3, p = 7;
    cout << "Inverse of " << a << " mod " << p << " = " << modInverse(a, p) << "\n";
    return 0;
}
