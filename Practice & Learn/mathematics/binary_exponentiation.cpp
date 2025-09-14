#include <bits/stdc++.h>
using namespace std;

// Function to compute (a^b) % m using binary exponentiation
long long mod_pow(long long a, long long b, long long m) {
    long long res = 1;   // Start with result = 1
    a %= m;              // Reduce base modulo m (in case a is very large)

    while (b > 0) {
        if (b & 1) {     // If the current bit of b is 1 (i.e. b is odd)
            res = (res * a) % m;  // Multiply result by current base
        }
        a = (a * a) % m; // Square the base for the next bit
        b >>= 1;         // Shift b right (divide by 2, move to next bit)
    }

    return res;
}

int main() {
    // Sample input
    long long a = 3, b = 13, m = 7;

    cout << a << "^" << b << " % " << m << " = " << mod_pow(a, b, m) << endl;

    return 0;
}
