#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {

        int consistents=0;
        set<char> allowed_s(allowed.begin(), allowed.end());


        for(int i=0;i<words.size();i++){

            string word=words[i];
            set<char> s(word.begin(), word.end());

            bool flag=true;

            for(auto it=s.begin();it!=s.end();it++){
                if(allowed_s.find(*it)==allowed_s.end()){
                    flag=false;
                    break;
                }
            }

            if(flag)consistents++;

        }
        return consistents;
    }
};

int main() {
    string allowed = "ab";
    vector<string> words = {"ad","bd","aaab","baa","badab"};
    
    Solution sol;
    int result = sol.countConsistentStrings(allowed, words);
    cout << "Number of consistent strings: " << result << endl;
    return 0;
}