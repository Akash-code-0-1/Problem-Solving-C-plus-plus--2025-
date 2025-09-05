#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long a, b, k;
        cin >> a >> b >> k;

        long long g = __gcd(a, b);
        long long dx = a / g;
        long long dy = b / g;
        if (dx <= k && dy <= k) {
            cout << 1 << "\n";
        } else {
            cout << 2 << "\n";
        }
    }
    return 0;
}
