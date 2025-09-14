#include <bits/stdc++.h>
using namespace std;

int main() {
    const long long MOD = 1e9+7;
    long long fact = 1;
    for (int i = 1; i <= 1000; i++) {
        fact = (fact * i) % MOD; // reduce every step
    }
    cout << "1000! % 1e9+7 = " << fact << endl;
}
