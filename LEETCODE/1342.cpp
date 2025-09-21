#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfSteps(int num) {
        int stepCount=0;
        while(num!=0){
            if(num%2==0){
                num/=2;
            }
            else{
                num--;
            }
            stepCount++;
        }
        return stepCount;
    }
};

int main() {
    Solution sol;
    int num = 14;
    cout << sol.numberOfSteps(num) << endl;
    return 0;
}