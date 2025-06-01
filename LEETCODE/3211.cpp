#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> validStrings(int n)
    {
        vector<string> res;

        int total = 1 << n; 
        for (int i = 0; i < total; ++i)
        {
            string binary = bitset<32>(i).to_string().substr(32 - n);

            bool isValid = true;
            for (int j = 0; j < n - 1; ++j)
            {
                if (binary[j] == '0' && binary[j + 1] == '0')
                {
                    isValid = false;
                    break;
                }
            }

            if (isValid)
            {
                res.push_back(binary);
            }
        }

        return res;
    }
};

int main()
{
    Solution solution;

    int n = 3;

    vector<string> result = solution.validStrings(n);

    cout << "Valid strings of length " << n << ":" << endl;
    for (const string &str : result)
    {
        cout << str << endl;
    }

    return 0;
}
