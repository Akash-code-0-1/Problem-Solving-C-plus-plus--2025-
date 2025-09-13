#include <bits/stdc++.h>
using namespace std;

int gcd_recursive(int a, int b) {
    if (b == 0)
        return a;           // Base case
    return gcd_recursive(b, a % b);  // Recurse
}

int main() {
    int a = 48, b = 18;
    cout << "GCD (recursive) = " << gcd_recursive(a, b) << endl;
    return 0;
}
