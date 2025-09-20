#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int xorOperation(int n, int start) {
        int res=0;
        for(int i=0;i<n;i++){
        res^=start + 2 * i;
        }
        return res;
    }
};

int main() {
    Solution sol;
    int n = 5;
    int start = 0;
    int result = sol.xorOperation(n, start);
    cout << "xorOperation(" << n << ", " << start << ") = " << result << endl;
    return 0;
}