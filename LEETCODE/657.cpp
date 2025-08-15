#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool judgeCircle(string moves) {
        int i=0, j=0;
        for(const char &ch: moves){
            if(ch=='L'){
                j--;
            }
            else if(ch=='R'){
                j++;
            }
            else if(ch=='U'){
                i--;
            }
            else{
                i++;
            }
        }

        if(i==0 && j==0){
            return true;
        }
        else{
            return false;
        }
    }
};

int main() {
    Solution sol;
    string sampleInput = "LL";
    bool result = sol.judgeCircle(sampleInput);
    cout << "Result for input \"" << sampleInput << "\": " << (result ? "true" : "false") << endl;
    return 0;
}