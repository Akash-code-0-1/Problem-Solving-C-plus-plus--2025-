#include <bits/stdc++.h>
using namespace std;

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

int mod_inverse(int a, int m) {
    int x, y;
    int g = extended_gcd(a, m, x, y);
    if (g != 1) return -1; 
    return (x % m + m) % m; 
}

int main() {
    int a = 3, m = 7; 

    int inv = mod_inverse(a, m);

    cout << "a = " << a << ", m = " << m << endl;
    if (inv == -1) {
        cout << "Inverse doesn't exist (gcd(a,m) != 1)" << endl;
    } else {
        cout << "Modular Inverse of " << a << " modulo " << m 
             << " is: " << inv << endl;

        // Check correctness
        cout << a << " * " << inv << " % " << m 
             << " = " << (1LL * a * inv % m) << endl;
    }

    return 0;
}
