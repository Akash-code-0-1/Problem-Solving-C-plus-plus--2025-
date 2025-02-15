#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string intToRoman(int num)
    {
        map<int, string, greater<int>> romanMap = {
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
            {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
            {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};

        string result = "";
        for (const pair<int, string> &entry : romanMap) 
        {
            while (num >= entry.first)
            {
                result += entry.second;
                num -= entry.first;
            }
        }
        return result;
    }
};

int main()
{
    int num = 3749;
    Solution solution;
    cout << solution.intToRoman(num) << endl; // Output: MMMDCCXLIX
}
