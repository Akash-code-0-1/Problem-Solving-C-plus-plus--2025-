#include <bits/stdc++.h>
using namespace std;

// Sieve helper
vector<int> sieve(int n) {
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i)
                isPrime[j] = false;
        }
    }
    vector<int> primes;
    for (int i = 2; i <= n; i++) if (isPrime[i]) primes.push_back(i);
    return primes;
}

// Divisor Count
int divisorCount(int n) {
    vector<int> primes = sieve(sqrt(n) + 1);
    int ans = 1;
    for (int p : primes) {
        if (p * p > n) break;
        int cnt = 0;
        while (n % p == 0) {
            n /= p;
            cnt++;
        }
        ans *= (cnt + 1);
    }
    if (n > 1) ans *= 2;
    return ans;
}

int main() {
    int n = 84;
    cout << "Number of divisors of " << n << " = " << divisorCount(n) << "\n";
}
