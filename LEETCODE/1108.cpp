#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string defangIPaddr(string address)
    {

        string res = "";

        for (const char &add : address)
        {
            if (add == '.')
            {
                res += "[.]";
            }
            else
            {
                res += add;
            }
        }

        return res;
    }
};

int main()
{
    Solution sol;
    string input = "1.1.1.1"; 
    string output = sol.defangIPaddr(input);

    cout << "Original IP Address: " << input << endl;
    cout << "Defanged IP Address: " << output << endl;

    return 0;
}
