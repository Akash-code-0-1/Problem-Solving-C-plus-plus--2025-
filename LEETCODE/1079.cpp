#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int res = 0;
    int freq[26];

    void dfs() {
        for (int i = 0; i < 26; i++) {
            if (freq[i] > 0) {
                res++;
                freq[i]--;
                dfs();
                freq[i]++;
            }
        }
    }

    int numTilePossibilities(string tiles) {
        memset(freq, 0, sizeof(freq));

        for (char c : tiles) {
            freq[c - 'A']++;
        }

        dfs();
        return res;
    }
};

int main() {
    Solution sol;

    string tiles = "AAB";

    int result = sol.numTilePossibilities(tiles);

    cout << "Tiles: " << tiles << endl;
    cout << "Number of tile possibilities: " << result << endl;

    return 0;
}
