#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumSum(int num) {
        vector<int>digits;
        while(num>0){
            int digit=num%10;
            digits.push_back(digit);
            num/=10;
        }
        reverse(digits.begin(),digits.end());
        sort(digits.begin(),digits.end());

        string num1=to_string(digits[0])+to_string(digits[3]);
        string num2=to_string(digits[1])+to_string(digits[2]);

        return stoi(num1)+stoi(num2);
    }
};

int main() {
    Solution sol;
    int input = 2932;
    cout << sol.minimumSum(input) << endl;
    return 0;
}