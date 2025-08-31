#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n = s.size();
        int low = 0, high = n;
        vector<int> ans;

        for (char c : s) {
            if (c == 'I') {
                ans.push_back(low++);
            } else { 
                ans.push_back(high--);
            }
        }
        ans.push_back(low);
        return ans;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    Solution sol;
    vector<int> res = sol.diStringMatch(s);

    for (int i = 0; i < (int)res.size(); i++) {
        if (i) cout << " ";
        cout << res[i];
    }
    cout << "\n";
    return 0;
}
