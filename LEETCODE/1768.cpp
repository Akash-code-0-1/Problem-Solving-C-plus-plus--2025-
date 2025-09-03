#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        int w1_lenght=word1.size();
        int w2_lenght=word2.size();
        int n;
        string merged_string="";

        if(w1_lenght<w2_lenght){
            n=w2_lenght;
        }
        else{
            n=w1_lenght;
        }

        for(int i=0;i<n;i++){
            if(i<w1_lenght){
                merged_string+=word1[i];
            }
            if(i<w2_lenght){
                merged_string+=word2[i];
            }

        }


        return merged_string;
    }
};

int main() {
    Solution sol;
    string word1 = "abc";
    string word2 = "pqr";
    string result = sol.mergeAlternately(word1, word2);
    cout << "Merged string: " << result << endl;
    return 0;
}