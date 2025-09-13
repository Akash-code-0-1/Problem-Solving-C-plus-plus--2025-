#include <bits/stdc++.h>
using namespace std;

// Extended Euclidean Algorithm
int extended_gcd(int a, int b, int &x, int &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a; // gcd(a,0) = a
    }
    int x1, y1;
    int g = extended_gcd(b, a % b, x1, y1);

    x = y1;
    y = x1 - (a / b) * y1;

    return g;
}

int main() {
    int a = 30, b = 12;
    int x, y;
    int g = extended_gcd(a, b, x, y);
    cout << "GCD = " << g << endl;
    cout << "x = " << x << ", y = " << y << endl;

    // Check
    cout << "ax + by = " << a*x + b*y << endl;

    return 0;
}
