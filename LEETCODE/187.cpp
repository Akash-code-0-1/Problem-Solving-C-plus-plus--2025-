#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {

        const long long P = 31;
        const long long MOD = 1e9 + 9;

        int len = 10;
        int n = s.size();
        vector<string> result;
        if (n < len)
            return result;

        long long hash = 0;
        long long power = 1; // P^(len-1)
        for (int i = 0; i < len - 1; i++)
            power = (power * P) % MOD;

        // compute hash for first window
        for (int i = 0; i < len; i++) {
            hash = (hash * P + (s[i] - 'A' + 1)) % MOD;
        }

        unordered_map<long long, vector<int>> seen;
        seen[hash].push_back(0);

        for (int i = len; i < n; i++) {
            // slide window
            hash = (hash - (s[i - len] - 'A' + 1) * power % MOD + MOD) % MOD;
            hash = (hash * P + (s[i] - 'A' + 1)) % MOD;

            if (seen.count(hash)) {
                for (int start : seen[hash]) {
                    string prev = s.substr(start, len);
                    string curr = s.substr(i - len + 1, len);
                    if (prev == curr) {
                        result.push_back(curr);
                        break;
                    }
                }
            }
            seen[hash].push_back(i - len + 1);
        }

        sort(result.begin(), result.end());
        result.erase(unique(result.begin(), result.end()), result.end());
        return result;
    }
};

int main() {
    Solution sol;

    vector<string> tests = {
        "AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT",
        "AAAAAAAAAAAAA",
        "AAGCTAGCT"
    };

    for (int t = 0; t < tests.size(); ++t) {
        cout << "Test " << t + 1 << ":\n";
        vector<string> res = sol.findRepeatedDnaSequences(tests[t]);
        if (res.empty()) cout << "No repeated substrings found.\n";
        else {
            for (string &sub : res)
                cout << sub << "\n";
        }
        cout << "-------------------------\n";
    }
}
