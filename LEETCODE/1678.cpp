#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string interpret(string command) {

        string resStr="";

        for(int i=0;i<command.size();i++){
            if(command[i]=='(' && command[i+1]==')'){
                resStr+='o';
            }
            else if(command[i]=='(' || command[i]==')'){
                continue;
            }
            else{
                resStr+=command[i];
            }
        }

        
        return resStr;
    }
};

int main() {
    Solution sol;
    string command = "(al)G(al)()()G"; // Sample input
    string result = sol.interpret(command);
    cout << "Output: " << result << endl;
    return 0;
}