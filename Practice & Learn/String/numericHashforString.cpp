#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll P = 31;        // base
const ll MOD = 1e9 + 9; // large prime

// Compute prefix hash and power array
void compute_prefix_hash(const string &s, vector<ll> &hash, vector<ll> &power) {
    int n = s.size();
    hash[0] = s[0] - 'a' + 1;
    for (int i = 1; i < n; i++) {
        hash[i] = (hash[i - 1] * P + (s[i] - 'a' + 1)) % MOD;
    }

    power[0] = 1;
    for (int i = 1; i < n; i++) {
        power[i] = (power[i - 1] * P) % MOD;
    }
}

// Get hash of substring [l, r]
ll get_hash(int l, int r, const vector<ll> &hash, const vector<ll> &power) {
    if (l == 0) return hash[r];
    ll val = (hash[r] - (hash[l - 1] * power[r - l + 1]) % MOD + MOD) % MOD;
    return val;
}

int main() {
    string s = "abacaba";
    int n = s.size();

    vector<ll> hash(n), power(n);
    compute_prefix_hash(s, hash, power);

    // Compare substrings "aba" (0..2) and "aba" (4..6)
    ll hash1 = get_hash(0, 2, hash, power);
    ll hash2 = get_hash(4, 6, hash, power);

    cout << "Hash of s[0..2] = " << hash1 << endl;
    cout << "Hash of s[4..6] = " << hash2 << endl;

    if (hash1 == hash2)
        cout << "Substrings are equal!" << endl;
    else
        cout << "Substrings are NOT equal." << endl;

    return 0;
}
