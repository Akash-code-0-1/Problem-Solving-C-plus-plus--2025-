#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int res = 0;
        for (int i = 0; i < accounts.size(); i++) {
            int sum = accumulate(accounts[i].begin(), accounts[i].end(), 0);
            if (res < sum) {
                res = sum;
            }
        }
        return res;
    }
};

int main() {
    Solution s;
    vector<vector<int>> accounts = {{1,2,3}, {3,2,1}};
    cout << s.maximumWealth(accounts) << endl;
    return 0;
}
