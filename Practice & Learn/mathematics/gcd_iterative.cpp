#include <bits/stdc++.h>
using namespace std;

int gcd_iterative(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a = 48, b = 18;
    cout << "GCD (iterative) = " << gcd_iterative(a, b) << endl;
    return 0;
}
