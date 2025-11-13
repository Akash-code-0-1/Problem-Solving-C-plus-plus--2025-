#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll P = 31;
const ll MOD = 1e9 + 9;

ll compute_hash(const string &s) {
    ll hash = 0;
    ll p_pow = 1;
    for (char c : s) {
        hash = (hash + (c - 'a' + 1) * p_pow) % MOD;
        p_pow = (p_pow * P) % MOD;
    }
    return hash;
}

vector<int> rabin_karp(const string &text, const string &pattern) {
    int n = text.size(), m = pattern.size();
    ll pattern_hash = compute_hash(pattern);
    vector<ll> prefix_hash(n + 1, 0), power(n + 1, 1);

    for (int i = 1; i <= n; i++) {
        power[i] = (power[i - 1] * P) % MOD;
        prefix_hash[i] = (prefix_hash[i - 1] + (text[i - 1] - 'a' + 1) * power[i - 1]) % MOD;
    }

    vector<int> matches;
    for (int i = 0; i + m <= n; i++) {
        ll curr_hash = (prefix_hash[i + m] - prefix_hash[i] + MOD) % MOD;
        if (curr_hash == (pattern_hash * power[i]) % MOD)
            matches.push_back(i);
    }

    return matches;
}

int main() {
    string text = "abdabcfabc";
    string pattern = "abc";
    vector<int> res = rabin_karp(text, pattern);

    for (int pos : res)
        cout << "Found at index " << pos << endl;
}
