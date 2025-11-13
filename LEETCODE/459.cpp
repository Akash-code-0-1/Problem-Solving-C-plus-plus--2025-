#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        if (s.empty()) return false;
        string t = (s + s).substr(1, s.size() * 2 - 2);
        return t.find(s) != string::npos;
    }
};

int main() {
    Solution sol;
    vector<string> samples = {
        "abab",        // true: "ab"
        "aba",         // false
        "abcabcabc",   // true: "abc"
        "bb",          // true: "b"
        "babbabbab"    // true: "babbab"
    };

    for (const auto &s : samples) {
        cout << s << " -> " << (sol.repeatedSubstringPattern(s) ? "true" : "false") << '\n';
    }

    // Optional: read a single input from stdin
    // string input; if (cin >> input) cout << input << " -> " << (sol.repeatedSubstringPattern(input) ? "true" : "false") << '\n';

    return 0;
}