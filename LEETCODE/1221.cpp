#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int balancedStringSplit(string s) {
        int count = 0, balance = 0;
        for (char c : s) {
            if (c == 'L') balance++;
            else balance--;
            if (balance == 0) count++;
        }
        return count;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;

    Solution sol;
    cout << sol.balancedStringSplit(s) << "\n";

    return 0;
}
