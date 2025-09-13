#include <bits/stdc++.h>
using namespace std;

// Extended Euclidean Algorithm
int extended_gcd(int a, int b, int &x, int &y) {
    if (b == 0) { 
        x = 1; 
        y = 0; 
        return a; 
    }
    int x1, y1;
    int g = extended_gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return g;
}

class Solution {
public:
    bool canMeasureWater(int x, int y, int target) {
        if (target > x + y) return false;

        int a, b; // coefficients from extended gcd (not needed, but we compute for connection)
        int g = extended_gcd(x, y, a, b);

        return (target % g == 0);
    }
};



// class Solution {
// public:
//     int gcd(int a, int b) {
//         return b == 0 ? a : gcd(b, a % b);
//     }

//     bool canMeasureWater(int x, int y, int target) {
//         if (target > x + y) return false;
//         return target % gcd(x, y) == 0;
//     }
// };


int main() {
    Solution sol;

    // Sample 1
    int x = 3, y = 5, target = 4;
    cout << "x=" << x << ", y=" << y << ", target=" << target 
         << " -> " << (sol.canMeasureWater(x, y, target) ? "YES" : "NO") << endl;

    // Sample 2
    x = 2, y = 6, target = 5;
    cout << "x=" << x << ", y=" << y << ", target=" << target 
         << " -> " << (sol.canMeasureWater(x, y, target) ? "YES" : "NO") << endl;

    return 0;
}
