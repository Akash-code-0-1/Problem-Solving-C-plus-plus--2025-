#include <bits/stdc++.h>
using namespace std;

vector<int> simpleSieve(int limit) {
    vector<bool> mark(limit+1, true);
    mark[0] = mark[1] = false;
    for (int i = 2; i*i <= limit; i++) {
        if (mark[i]) {
            for (int j = i*i; j <= limit; j += i)
                mark[j] = false;
        }
    }
    vector<int> primes;
    for (int i = 2; i <= limit; i++) if (mark[i]) primes.push_back(i);
    return primes;
}

vector<int> segmentedSieve(long long L, long long R) {
    int limit = sqrt(R) + 1;
    vector<int> primes = simpleSieve(limit);

    vector<bool> mark(R - L + 1, true);

    for (int p : primes) {
        long long start = max((long long)p * p, (L + p - 1) / p * 1LL * p);
        for (long long j = start; j <= R; j += p)
            mark[j - L] = false;
    }

    vector<int> result;
    for (long long i = L; i <= R; i++) {
        if (i > 1 && mark[i - L]) result.push_back(i);
    }
    return result;
}

int main() {
    long long L = 100, R = 120;
    auto primes = segmentedSieve(L, R);
    for (int p : primes) cout << p << " ";
}
