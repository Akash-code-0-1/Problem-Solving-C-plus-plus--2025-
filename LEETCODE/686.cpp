#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int n = a.length();
        int m = b.length();
        
        for (int i = 1; i <= m / n + 2; i++) {
            string temp = "";
            for (int j = 0; j < i; j++) {
                temp += a;
            }
            if (temp.find(b) != string::npos) {
                return i;
            }
        }
        
        return -1;
    }
};

int main() {
    Solution sol;
    string a = "ab";
    string b = "cabab";
    cout << sol.repeatedStringMatch(a, b) << endl;
    
    return 0;
}