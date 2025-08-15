#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string toLowerCase(string s) {
        string resStr="";
        for(const char &ch: s){

            resStr += tolower(ch);
        }
        return resStr;
    }
};

int main() {
    Solution sol;
    string input = "HeLLo WoRLd";
    string output = sol.toLowerCase(input);
    cout << "Input: " << input << endl;
    cout << "Output: " << output << endl;
    return 0;
}
