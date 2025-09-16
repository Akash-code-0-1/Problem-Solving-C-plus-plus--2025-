#include <bits/stdc++.h>
using namespace std;

// Simple primality check
bool isPrime(long long n) {
    if (n < 2) return false;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    long long n = 97;
    cout << n << (isPrime(n) ? " is prime\n" : " is not prime\n");
}
