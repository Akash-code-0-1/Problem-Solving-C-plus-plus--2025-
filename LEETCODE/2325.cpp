#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char, char> mapping;
        char nextChar = 'a';

        for (char ch : key) {
            if (ch == ' ') continue;
            if (mapping.count(ch) == 0) {
                mapping[ch] = nextChar++;
            }
        }

        mapping[' '] = ' ';

        string result;
        result.reserve(message.size());
        for (char ch : message) {
            result.push_back(mapping[ch]);
        }

        return result;
    }
};

int main() {
    Solution sol;
    string key = "the quick brown fox jumps over the lazy dog";
    string msg = "vkbs bs t suepuv";

    cout << sol.decodeMessage(key, msg) << endl;
    return 0;
}
