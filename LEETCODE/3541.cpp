#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxFreqSum(string s)
    {

        unordered_map<char, int> vc;
        unordered_map<char, int> cc;

        for (const char &ch : s)
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                vc[ch]++;
            }
            else
            {
                cc[ch]++;
            }
        }

        int max_vc = 0, max_cc = 0;
        for (const auto &p : vc)
        {
            max_vc = max(max_vc, p.second);
        }
        for (const auto &p : cc)
        {
            max_cc = max(max_cc, p.second);
        }
     
        return max_vc + max_cc;
    }
};

int main()
{
    Solution sol;
    string input = "abacaba"; // sample input
    int result = sol.maxFreqSum(input);
    cout << "Result: " << result << endl;
    return 0;
}