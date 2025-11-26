#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countKeyChanges(string s) {
        int count=0;

        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for(int i=0;i<s.size()-1;i++){
            if(s[i]!=s[i+1]) count++;
        }

        return count;
        
    }
};

int main() {
    Solution sol;
    string s = "aAbBcC";
    cout << sol.countKeyChanges(s) << endl;
    return 0;
}
