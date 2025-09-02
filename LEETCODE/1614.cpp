#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDepth(string s) {

        int maxDepth=0;
        int countDepth=0;

        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                countDepth++;
                if(countDepth>maxDepth) maxDepth=countDepth;
            }
            else if(s[i]==')') countDepth--;
 
        }
        return maxDepth;
    }
};

int main() {
    Solution sol;
    string input = "(1+(2*3)+((8)/4))+1";
    int result = sol.maxDepth(input);
    cout << "Max Depth: " << result << endl;
    return 0;
}