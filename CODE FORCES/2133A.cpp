#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        set<int> st;
        bool ok = false;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (st.count(a[i])) ok = true;
            st.insert(a[i]);
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
}

