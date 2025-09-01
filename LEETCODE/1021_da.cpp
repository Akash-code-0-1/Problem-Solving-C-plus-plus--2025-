#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        string answer;
        int depthCounter = 0;

        for (char ch : s) {
            if (ch == '(') {
                if (depthCounter > 0) answer += ch;
                depthCounter++;
            } else {
                depthCounter--;
                if (depthCounter > 0) answer += ch;
            }
        }

        return answer;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string input;
    cin >> input;

    Solution solver;
    cout << solver.removeOuterParentheses(input) << '\n';
    return 0;
}
