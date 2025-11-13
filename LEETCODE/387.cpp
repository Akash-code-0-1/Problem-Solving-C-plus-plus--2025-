#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> freq(26,0);
        for(char c: s) freq[c-'a']++;

        for(int i=0;i<s.size();i++){
            if(freq[s[i]-'a']==1)
                return i;
        }
        return -1;
    }
};

int main() {
    Solution sol;
    
    string s1 = "leetcode";
    cout << sol.firstUniqChar(s1) << endl;
    
    string s2 = "loveleetcode";
    cout << sol.firstUniqChar(s2) << endl;
    
    string s3 = "aabb";
    cout << sol.firstUniqChar(s3) << endl;
    
    return 0;
}
