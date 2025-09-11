#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minPartitions(string n) {

        char maxDig='0';

        for(const char &c : n){
            if(c>maxDig){
                maxDig=c;
            }
        }

        return maxDig-'0';
    }
};

int main() {
    Solution sol;
    string input = "82734"; 
    int result = sol.minPartitions(input);
    cout << "Result: " << result << endl;
    return 0;
}