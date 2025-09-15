#include <bits/stdc++.h>
using namespace std;

// Extended Euclidean Algorithm
int gcdExtended(int a, int b, int &x, int &y) {
    if (b == 0) {
        x = 1; y = 0;
        return a;
    }
    int x1, y1;
    int g = gcdExtended(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return g;
}

// Modular Inverse (works for any modulus if gcd(a,m)=1)
int modInverse(int a, int m) {
    int x, y;
    int g = gcdExtended(a, m, x, y);
    if (g != 1) return -1; // inverse doesn't exist
    return (x % m + m) % m;
}

int main() {
    int a = 3, m = 7;
    int inv = modInverse(a, m);
    if (inv == -1) cout << "Inverse does not exist\n";
    else cout << "Inverse of " << a << " mod " << m << " = " << inv << "\n";
    return 0;
}
