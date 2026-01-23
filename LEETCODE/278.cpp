#include <bits/stdc++.h>
using namespace std;

// ---- Mock API (sample implementation) ----
int firstBad = 4;

bool isBadVersion(int version) {
    return version >= firstBad;
}

class Solution {
public:
    int firstBadVersion(int n) {
        int l = 1, r = n, res = n;

        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (isBadVersion(mid)) {
                res = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return res;
    }
};

int main() {
    Solution solution;

    int n = 5; 
    int result = solution.firstBadVersion(n);

    cout << "First bad version is: " << result << endl;
    return 0;
}
