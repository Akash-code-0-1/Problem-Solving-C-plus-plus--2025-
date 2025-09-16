#include <bits/stdc++.h>
using namespace std;

// Sieve of Eratosthenes (helper)
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

// Prime Factorization
vector<int> factorize(int n) {
    vector<int> primes = sieve(sqrt(n) + 1);
    vector<int> factors;
    for (int p : primes) {
        while (n % p == 0) {
            factors.push_back(p);
            n /= p;
        }
    }
    if (n > 1) factors.push_back(n);
    return factors;
}

int main() {
    int n = 84;
    vector<int> f = factorize(n);
    cout << "Prime factors of " << n << ": ";
    for (int x : f) cout << x << " ";
    cout << "\n";
}
