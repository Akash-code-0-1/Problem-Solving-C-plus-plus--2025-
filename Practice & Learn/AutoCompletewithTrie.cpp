#include <bits/stdc++.h>
using namespace std;

// ------------------ Trie Node ------------------
struct TrieNode {
    bool isEnd;
    TrieNode* child[26];

    TrieNode() {
        isEnd = false;
        for (int i = 0; i < 26; i++)
            child[i] = nullptr;
    }
};

// ------------------ Trie Class ------------------
class Trie {
public:
    TrieNode* root;

    Trie() {
        root = new TrieNode();
    }

    // Insert word
    void insert(string word) {
        TrieNode* node = root;
        for (char c : word) {
            int idx = c - 'a';
            if (!node->child[idx])
                node->child[idx] = new TrieNode();
            node = node->child[idx];
        }
        node->isEnd = true;
    }

    // Find node of prefix
    TrieNode* findPrefixNode(string prefix) {
        TrieNode* node = root;
        for (char c : prefix) {
            int idx = c - 'a';
            if (!node->child[idx])
                return nullptr;
            node = node->child[idx];
        }
        return node;
    }

    // DFS to collect words
    void dfs(TrieNode* node, string path, vector<string>& result) {
        if (!node) return;

        if (node->isEnd)
            result.push_back(path);

        for (int i = 0; i < 26; i++) {
            if (node->child[i]) {
                char nextChar = 'a' + i;
                dfs(node->child[i], path + nextChar, result);
            }
        }
    }

    // Autocomplete main function
    vector<string> autocomplete(string prefix) {
        TrieNode* prefixNode = findPrefixNode(prefix);
        vector<string> result;

        if (!prefixNode)
            return result; // prefix not found

        dfs(prefixNode, prefix, result);
        return result;
    }
};

// ------------------ MAIN (for testing) ------------------
int main() {
    Trie t;

    // Insert words
    t.insert("apple");
    t.insert("app");
    t.insert("apply");
    t.insert("application");
    t.insert("apt");
    t.insert("bat");
    t.insert("ball");

    string prefix;
    cout << "Enter prefix: ";
    cin >> prefix;

    vector<string> suggestions = t.autocomplete(prefix);

    cout << "\nAutocomplete Suggestions:\n";
    if (suggestions.empty()) {
        cout << "No words found!\n";
    } else {
        for (string s : suggestions)
            cout << s << endl;
    }

    return 0;
}
