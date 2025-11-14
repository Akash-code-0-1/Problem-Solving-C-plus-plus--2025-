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
        "abab",
        "aba",
        "abcabcabc",
        "bb",
        "babbabbab"
    };

    for (const auto &s : samples) {
        cout << s << " -> " << (sol.repeatedSubstringPattern(s) ? "true" : "false") << '\n';
    }

    return 0;
}
