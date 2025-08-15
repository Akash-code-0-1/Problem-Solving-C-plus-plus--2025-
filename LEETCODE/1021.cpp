#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string removeOuterParentheses(const string &s)
    {
        string result;
        int opened = 0;
        for (char c : s)
        {
            if (c == '(')
            {
                if (opened > 0)
                    result += c; // not outermost '('
                opened++;
            }
            else
            { // c == ')'
                opened--;
                if (opened > 0)
                    result += c; // not outermost ')'
            }
        }
        return result;
    }
};

void test(const string &input, const string &expected)
{
    Solution sol;
    string output = sol.removeOuterParentheses(input);
    if (output == expected)
    {
        cout << "PASS: Input: \"" << input << "\" Output: \"" << output << "\"\n";
    }
    else
    {
        cout << "FAIL: Input: \"" << input << "\" Output: \"" << output << "\" Expected: \"" << expected << "\"\n";
    }
}

int main()
{
    test("(()())(())", "()()()");
    test("(()())(())(()(()))", "()()()()(())");
    test("()()", "");
    test("((()))", "()");
    test("()", "");
    test("((())())", "(())()");
    return 0;
}
