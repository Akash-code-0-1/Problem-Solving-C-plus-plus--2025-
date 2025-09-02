#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string res(s.size(), ' ');
        for (int i = 0; i < indices.size(); i++) {
            res[indices[i]] = s[i];
        }
        return res;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // Demo input
    string s = "codeleet";
    vector<int> indices = {4, 5, 6, 7, 0, 2, 1, 3};

    Solution sol;
    cout << sol.restoreString(s, indices) << '\n';

    return 0;
}
