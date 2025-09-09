#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string smallestNumber(string p) {
        int n = p.size();
        string ans;
        int pos = 0;
        for (int i = 0; i <= n; i++) {
            ans += char('1' + i);
            if (i == n || p[i] == 'I') {
                reverse(ans.begin() + pos, ans.end());
                pos = i + 1;
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    string pattern = "IIIDIDDD";
    string result = sol.smallestNumber(pattern);
    cout << "Pattern: " << pattern << endl;
    cout << "Smallest Number: " << result << endl;
    return 0;
}
