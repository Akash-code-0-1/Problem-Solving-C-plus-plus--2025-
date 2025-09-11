#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Main function: computes the maximum score for a list of words
    int maxScoreWords(vector<string>& words, vector<char>& letters,
                      vector<int>& scores) {
        // Step 1: Build frequency table of available letters
        // available[i] = number of times letter 'a'+i is present in letters
        vector<int> available(26, 0);
        for (char c : letters) {
            available[c - 'a']++;
        }

        // Step 2: Start recursive backtracking to compute maximum score
        return solve(words, scores, available, 0);
    }

private:
    // Recursive helper function to compute max score starting from position 'pos'
    int solve(vector<string>& words, vector<int>& scores, vector<int>& avail,
              int pos) {
        // Base case: if we have processed all words, return 0
        if (pos >= words.size())
            return 0;

        // Option 1: skip the current word, move to next
        int best = solve(words, scores, avail, pos + 1);

        // Option 2: try to include the current word
        int wordScore = 0;       // sum of scores for this word
        bool ok = true;          // flag to check if we have enough letters
        vector<int> used;        // track letters used to backtrack later
        used.reserve(words[pos].size());  // reserve space for efficiency

        // Check each letter in the current word
        for (char c : words[pos]) {
            int idx = c - 'a';   // convert char to index 0-25
            avail[idx]--;        // use one occurrence of this letter
            used.push_back(idx); // remember used letter
            if (avail[idx] < 0)  // if we overused, mark invalid
                ok = false;
            wordScore += scores[idx]; // add letter score
        }

        // If the word is valid (enough letters available), include it
        if (ok) {
            best = max(best, wordScore + solve(words, scores, avail, pos + 1));
        }

        // Backtrack: restore letter counts for next recursion branch
        for (int idx : used) {
            avail[idx]++;
        }

        // Return the maximum score possible from this position
        return best;
    }
};

int main() {
    Solution sol;

    // Sample input words
    vector<string> words = {"dog","cat","dad","good"};

    // Available letters (can be used to form words)
    vector<char> letters = {'a','a','c','d','d','d','g','o','o'};

    // Scores for letters 'a' to 'z' (index 0='a', 1='b', ..., 25='z')
    vector<int> scores = {
        1,0,9,5,0,0,3,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0
    };
    // Example: 'a'=1, 'c'=9, 'd'=5, 'g'=3, 'o'=2, others=0

    // Compute maximum score using all valid combinations of words
    int result = sol.maxScoreWords(words, letters, scores);

    // Print result
    cout << "Maximum Score: " << result << endl;

    return 0;
}
