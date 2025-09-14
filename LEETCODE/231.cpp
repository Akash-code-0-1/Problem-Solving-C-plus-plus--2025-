#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) return false;
        return (n & (n - 1)) == 0;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {1, 2, 3, 4, 5, 8, 16, 18};

    for (int n : nums) {
        if (sol.isPowerOfTwo(n)) {
            cout << n << " is a power of 2." << endl;
        } else {
            cout << n << " is NOT a power of 2." << endl;
        }
    }

    return 0;
}
