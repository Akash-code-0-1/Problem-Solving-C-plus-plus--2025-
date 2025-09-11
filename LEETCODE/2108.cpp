#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string firstPalindrome(vector<string>& words) {

        string palimStr="";

        for(int i=0;i<words.size();i++){
            string currentWord=words[i];

            string revCurrentWord=currentWord;
            reverse(revCurrentWord.begin(),revCurrentWord.end());

            if(currentWord==revCurrentWord){
                palimStr+=currentWord;
                break;
            }
        }

        return palimStr;
    }
};

int main() {
    Solution sol;
    vector<string> words = {"abc", "car", "ada", "racecar", "cool"};
    string result = sol.firstPalindrome(words);
    cout << "First palindrome: " << result << endl;
    return 0;
}