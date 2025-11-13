#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll P = 31, MOD = 1e9 + 9;

bool hasDuplicate(const string &s, int len) {
    if (len == 0) return true;
    int n = s.size();
    ll hash = 0, p_pow = 1;
    for (int i = 0; i < len; i++) {
        hash = (hash + (s[i] - 'a' + 1) * p_pow) % MOD;
        if (i < len - 1) p_pow = (p_pow * P) % MOD;
    }

    unordered_set<ll> seen;
    seen.insert(hash);

    ll invP = 128613632; // precomputed modular inverse of P under MOD

    for (int i = len; i < n; i++) {
        hash = (hash - (s[i - len] - 'a' + 1) + MOD) % MOD;
        hash = (hash * invP) % MOD;
        hash = (hash + (s[i] - 'a' + 1) * p_pow) % MOD;

        if (seen.count(hash)) return true;
        seen.insert(hash);
    }

    return false;
}

int main() {
    string s = "banana";
    int n = s.size(), ans = 0;
    int low = 0, high = n;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (hasDuplicate(s, mid)) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << "Longest duplicate substring length: " << ans << endl;
}
