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
private:
    TrieNode* root;

public:
    Trie() {
        root = new TrieNode();
    }

    // Insert a word into the Trie
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

    // Search exact word
    bool search(string word) {
        TrieNode* node = root;
        for (char c : word) {
            int idx = c - 'a';
            if (!node->child[idx])
                return false;
            node = node->child[idx];
        }
        return node->isEnd;
    }

    // Check prefix
    bool startsWith(string prefix) {
        TrieNode* node = root;
        for (char c : prefix) {
            int idx = c - 'a';
            if (!node->child[idx])
                return false;
            node = node->child[idx];
        }
        return true;
    }
};

// ------------------ MAIN (for testing) ------------------
int main() {
    Trie t;

    t.insert("apple");
    t.insert("app");
    t.insert("apply");

    cout << boolalpha;

    cout << "Search 'apple': " << t.search("apple") << endl;
    cout << "Search 'app':   " << t.search("app") << endl;
    cout << "Search 'appl':  " << t.search("appl") << endl;

    cout << "StartsWith 'ap': " << t.startsWith("ap") << endl;
    cout << "StartsWith 'bat': " << t.startsWith("bat") << endl;

    return 0;
}
