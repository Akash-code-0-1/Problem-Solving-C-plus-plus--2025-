#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int pivotInteger(int n) {
        int sum = n * (n + 1) / 2;
        return (int)sqrt(sum) * (int)sqrt(sum) == sum ? (int)sqrt(sum) : -1;
    }
};

int main() {
    Solution sol;
    
    int n = 8;  // sample input
    int result = sol.pivotInteger(n);
    
    cout << "Pivot integer for n = " << n << " is: " << result << endl;
    
    return 0;
}