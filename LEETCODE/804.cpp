#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",
                                ".---","-.-",".-..","--","-.","---",".--.","--.-",".-.",
                                "...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string> unique;
        for (const string& word : words) {
            string code;
            for (char c : word) {
                code += morse[c - 'a'];
            }
            unique.insert(code);
        }
        return unique.size();
    }
};

int main() {
    vector<string> words = {"gin", "zen", "gig", "msg"};
    Solution sol;
    cout << sol.uniqueMorseRepresentations(words) << endl;
    return 0;
}