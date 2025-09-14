#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int distinctSubseqII(string s) {
        const long m = 1e9 + 7;
        vector<long> endsWith(26, 0);
        long res = 0;

        for (char c : s) {
            long newSub_seq = (res + 1) % m;
            res = (res + newSub_seq - endsWith[c - 'a'] + m) % m;
            endsWith[c - 'a'] = newSub_seq;
        }

        return res;
    }
};

int main() {
    Solution sol;
    cout << sol.distinctSubseqII("aba") << endl; 
}
