#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string truncateSentence(string s, int k) {

        string res="";

        int i=0;
        int wordCount=0;

        while(i<s.size()){
            if(s[i]==' '){
                wordCount++;
                if(wordCount==k){
                    break;
                }  
            }
            res+=s[i];
            i++;
        }

        return res;
    }
};

int main() {
    Solution sol;
    string s = "Hello how are you Contestant";
    int k = 4;
    string result = sol.truncateSentence(s, k);
    cout << "Result: " << result << endl;
    return 0;
}