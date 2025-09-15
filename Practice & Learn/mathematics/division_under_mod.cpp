#include <bits/stdc++.h>
using namespace std;

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

long long modInverse(long long a, long long p) {
    return modPow(a, p - 2, p); // works if p is prime
}

int main() {
    long long a = 10, b = 3, m = 7;
    long long inv = modInverse(b, m);
    long long result = (a * inv) % m;
    cout << "( " << a << " / " << b << " ) % " << m << " = " << result << "\n";
    return 0;
}
