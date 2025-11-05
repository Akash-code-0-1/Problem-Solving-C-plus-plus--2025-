#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || numRows >= s.size()) return s;

        string result;
        int cycle = 2 * numRows - 2;

        for (int r = 0; r < numRows; ++r) {
            for (int j = 0; j + r < s.size(); j += cycle) {
                result += s[j + r];
                if (r != 0 && r != numRows - 1 && j + cycle - r < s.size()) {
                    result += s[j + cycle - r];
                }
            }
        }

        return result;
    }
};

int main() {
    Solution sol;

    string s = "PAYPALISHIRING";
    int numRows = 3;

    string result = sol.convert(s, numRows);
    cout << "Input: " << s << endl;
    cout << "Rows: " << numRows << endl;
    cout << "Converted Zigzag String: " << result << endl;

    return 0;
}
