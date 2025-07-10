#include <iostream>
#include <string>
using namespace std;

//  i have to set each character along with those words
//check it mathces or not
// if all matches return true else false


class Solution {
public:
    bool wordPattern(string pattern, string s) {

        
        
        return false;
    }
};

int main() {
    Solution sol;
    string pattern, s;
    // Example input
    pattern = "abba";
    s = "dog cat cat dog";
    bool result = sol.wordPattern(pattern, s);
    cout << (result ? "True" : "False") << endl;
    return 0;
}