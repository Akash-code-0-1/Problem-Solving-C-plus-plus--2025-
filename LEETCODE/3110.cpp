#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int scoreOfString(string s)
    {

        int totalSum = 0;

        for (int i = 0; i < s.size() - 1; i++)
        {
            int j = i + 1;

            totalSum += abs(s[i] - s[j]);
        }

        return totalSum;
    }
};

int main()
{
    Solution sol;

    // Sample input
    string input = "hello";
    int result = sol.scoreOfString(input);

    // Output
    cout << "Input string: " << input << endl;
    cout << "Score of string: " << result << endl;

    return 0;
}
