#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int smallestEvenMultiple(int n) {
        return (n % 2 == 0) ? n : n * 2;
    }
};

int main() {
    Solution sol;
    int n=5;
    cout << sol.smallestEvenMultiple(n) << endl;
    return 0;
}