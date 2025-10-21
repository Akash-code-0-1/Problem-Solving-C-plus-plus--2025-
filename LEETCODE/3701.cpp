#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        bool addition = true;
        int res = 0;
        for (int i = 0; i < (int)nums.size(); i++) {
            if (addition) {
                res += nums[i];
                addition = false;
            } else {
                res -= nums[i];
                addition = true;
            }
        }
        return res;
    }
};

static void printVec(const vector<int>& v) {
    cout << "[";
    for (size_t i = 0; i < v.size(); ++i) {
        if (i) cout << ", ";
        cout << v[i];
    }
    cout << "]";
}

int main() {
    Solution sol;

    vector<int> a1 = {4, 2, 5, 3};        // 4 - 2 + 5 - 3 = 4
    vector<int> a2 = {1, 2, 3, 4, 5};     // 1 - 2 + 3 - 4 + 5 = 3


    vector<vector<int>> tests = {a1, a2};

    for (const auto& t : tests) {
        vector<int> tmp = t; 
        printVec(t);
        cout << " -> " << sol.alternatingSum(tmp) << "\n";
    }

    return 0;
}