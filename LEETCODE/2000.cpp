#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reversePrefix(string word, char ch)
    {
        int pos = word.find(ch);  
        if (pos == string::npos) return word; 

        reverse(word.begin(), word.begin() + pos + 1);
        return word;
    }
};

int main()
{
    Solution sol;
    string word = "abcdefd";
    char ch = 'd';
    string result = sol.reversePrefix(word, ch);
    cout << "Result: " << result << endl;
    return 0;
}