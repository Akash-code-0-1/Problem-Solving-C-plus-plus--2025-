#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverseDegree(string s) {

        int res=0;

        for(int i=0;i<s.size();i++){
            int tempalpha= 97 - s[i] + 26;
            int tempres=(i+1)*tempalpha;
            res+=tempres;
        }

        return res;
    }
};

int main() {
    Solution sol;
    string input = "abc"; 
    int result = sol.reverseDegree(input);
    cout << "Result: " << result << endl;
    return 0;
}