#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numberOfEmployeesWhoMetTarget(vector<int> &hours, int target)
    {
        sort(hours.begin(), hours.end());
        int res=0;
        for (int i = 0; i < hours.size(); i++)
        {
            if (hours[i] >= target)
            {
                res = hours.size()-i;
                return res;
            }
        }
        return res;
    }
};

int main()
{
    Solution sol;

    vector<int> hours = {5, 8, 7, 10, 3};
    int target = 7;

    int result = sol.numberOfEmployeesWhoMetTarget(hours, target);

    cout << "Number of employees meeting target: " << result << endl;

    return 0;
}
