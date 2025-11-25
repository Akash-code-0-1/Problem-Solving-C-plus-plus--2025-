#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string replaceDigits(string s) {
        for (int i = 1; i < s.size(); i += 2) {
            if (isdigit(s[i])) {
                int charIndx = s[i] - '0';
                s[i] = s[i - 1] + charIndx;
            }
        }
        return s;
    }
};

int main() {
    Solution sol;
    std::string s = "a1c1e1";
    std::cout << sol.replaceDigits(s) << '\n';
    return 0;
}