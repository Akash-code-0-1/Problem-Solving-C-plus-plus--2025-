#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int finalValueAfterOperations(vector<string> &operations)
    {

        int res = 0;

        for (const string &oprt : operations)
        {
            if (oprt == "++X" || oprt == "X++")
            {
                res++;
            }
            else
            {
                res--;
            }
        }

        return res;
    }
};

int main()
{
    Solution solution;

    vector<string> operations = {"--X", "X++", "X++"};

    int result = solution.finalValueAfterOperations(operations);
    cout << "Final value: " << result << endl;

}
