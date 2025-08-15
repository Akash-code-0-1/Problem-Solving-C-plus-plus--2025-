#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string intToRoman(int num)
    {
        string M[] = {"", "M", "MM", "MMM"};                                       // Thousands place
        string C[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"}; // Hundreds
        string X[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"}; // Tens
        string I[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"}; // Ones

        return M[num / 1000] + C[(num % 1000) / 100] + X[(num % 100) / 10] + I[num % 10];
    }
};

int main()
{
    int num = 3749;
    Solution solution;
    cout << solution.intToRoman(num) << endl; // Output: MMMDCCXLIX
}
