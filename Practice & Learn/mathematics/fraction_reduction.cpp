#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a % b);
}

pair<int,int> reduce_fraction(int a, int b) {
    int g = gcd(abs(a), abs(b));
    a /= g;
    b /= g;
    if (b < 0) { 
        a = -a;
        b = -b;
    }
    return {a, b};
}

int main() {
    int a = 42, b = 56;

    auto p = reduce_fraction(a, b);

    cout << "Original: " << a << "/" << b << endl;
    cout << "Reduced: " << p.first << "/" << p.second << endl;

    return 0;
}
