#include <bits/stdc++.h>
using namespace std;

vector<string> cellsInRange(string s) {
    vector<string> ans;
    char startCol = s.front();
    char endCol   = s[3];
    int startRow  = s[1] - '0';
    int endRow    = s.back() - '0';

    for (char col = startCol; col <= endCol; col++) {
        for (int row = startRow; row <= endRow; row++) {
            string cell;
            cell.push_back(col);
            cell += to_string(row);
            ans.emplace_back(cell);
        }
    }
    return ans;
}

int main() {
    string s = "A1:C3";
    auto result = cellsInRange(s);
    for (auto &x : result) cout << x << " ";
    return 0;
}
