#include<bits/stdc++.h>
using namespace std;

struct TrieNode {
    bool isEnd;
    TrieNode* child[26];

    TrieNode() {
        isEnd = false;
        for (int i = 0; i < 26; i++)
            child[i] = nullptr;
    }
};

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

int main() {
    Trie trie;
    
    // Insert sample words
    trie.insert("apple");
    trie.insert("app");
    trie.insert("apricot");
    trie.insert("banana");
    
    // Test search
    cout << "search('apple'): " << (trie.search("apple") ? "true" : "false") << endl;
    cout << "search('app'): " << (trie.search("app") ? "true" : "false") << endl;
    cout << "search('appl'): " << (trie.search("appl") ? "true" : "false") << endl;
    cout << "search('banana'): " << (trie.search("banana") ? "true" : "false") << endl;
    cout << "search('bat'): " << (trie.search("bat") ? "true" : "false") << endl;
    
    // Test startsWith
    cout << "startsWith('app'): " << (trie.startsWith("app") ? "true" : "false") << endl;
    cout << "startsWith('appl'): " << (trie.startsWith("appl") ? "true" : "false") << endl;
    cout << "startsWith('ban'): " << (trie.startsWith("ban") ? "true" : "false") << endl;
    cout << "startsWith('bat'): " << (trie.startsWith("bat") ? "true" : "false") << endl;
    
    return 0;
}