#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string newStr = "";
        for(char c : s) {
            if(isalpha(c) || isdigit(c)) {
                newStr += tolower(c);
            }
        }
        
        int l = 0, r = newStr.size() - 1;
        while(l < r) {
            if(newStr[l] != newStr[r]) return false;
            l++;
            r--;
        }
        return true;
    }
};

int main() {
    Solution sol;
    
    string test1 = "A man, a plan, a canal: Panama";
    cout << sol.isPalindrome(test1) << endl;
    
    string test2 = "race a car";
    cout << sol.isPalindrome(test2) << endl;
    
    string test3 = " ";
    cout << sol.isPalindrome(test3) << endl;
    
    return 0;
}