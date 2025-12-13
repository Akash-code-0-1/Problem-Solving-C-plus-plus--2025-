#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    struct TrieNode {
        bool isEnd;
        TrieNode* child[26];
        TrieNode() {
            isEnd = false;
            for (int i = 0; i < 26; i++) child[i] = nullptr;
        }
    };

    TrieNode* root = new TrieNode();

    void insert(string &word) {
        TrieNode* node = root;
        for (char c : word) {
            int idx = c - 'a';
            if (!node->child[idx]) node->child[idx] = new TrieNode();
            node = node->child[idx];
        }
        node->isEnd = true;
    }

    string findRoot(string &word) {
        TrieNode* node = root;
        string prefix = "";

        for (char c : word) {
            int idx = c - 'a';
            if (!node->child[idx]) return word;
            node = node->child[idx];
            prefix += c;
            if (node->isEnd) return prefix;
        }
        return word;
    }

    string replaceWords(vector<string>& dictionary, string sentence) {
        for (string &w : dictionary) insert(w);

        stringstream ss(sentence);
        string word, ans = "";

        while (ss >> word) {
            if (!ans.empty()) ans += " ";
            ans += findRoot(word);
        }
        return ans;
    }
};

int main() {
    Solution s;

    vector<string> dictionary = {"cat", "bat", "rat"};
    string sentence = "the cattle was rattled by the battery";

    string result = s.replaceWords(dictionary, sentence);

    cout << "Output: " << result << endl;

    return 0;
}
