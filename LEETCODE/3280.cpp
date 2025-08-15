#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string convertDateToBinary(string date)
    {
        int year, month, day;
        sscanf(date.c_str(), "%d-%d-%d", &year, &month, &day);

        string y = removeLeadingZeros(bitset<16>(year).to_string());
        string m = removeLeadingZeros(bitset<8>(month).to_string());
        string d = removeLeadingZeros(bitset<8>(day).to_string());

        return y + "-" + m + "-" + d;
    }

    string removeLeadingZeros(const string &s)
    {
        size_t pos = s.find_first_not_of('0');
        if (pos == string::npos)
            return "0";
        return s.substr(pos);
    }
};

int main()
{
    Solution solution;

    string date = "2025-06-01";
    cout << solution.convertDateToBinary(date) << endl;

    return 0;
}
