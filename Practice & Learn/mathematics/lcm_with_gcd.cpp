#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

long long lcm(int a, int b) {
    return (1LL * a * b) / gcd(a, b); 
}

int main() {
    int a = 12, b = 18;
    cout << "GCD = " << gcd(a, b) << endl; // 6
    cout << "LCM = " << lcm(a, b) << endl; // 36
    return 0;
}
