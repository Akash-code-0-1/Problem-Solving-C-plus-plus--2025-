#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countSeniors(vector<string>& details) {
        int pc=0;
        for(int i=0;i<details.size();i++){

            string tempAge="";
            tempAge+=details[i][11];
            tempAge+=details[i][12];

            int age= stoi(tempAge);
            if(age>60) pc++;

        }
        return pc;
    }
};

int main() {
    Solution sol;
    vector<string> details = {"7868190130M5049","9659500456M7560","7664989006F8169","8914489106F9070"};
    cout << sol.countSeniors(details) << endl;
    return 0;
}