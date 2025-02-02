#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int eliminateMaximum(vector<int> &dist, vector<int> &speed)
    {
        int n = dist.size();
        vector<double> time(n);

        for (int i = 0; i < n; i++)
        {
            time[i] = (double)dist[i] / speed[i];
        }

        sort(time.begin(), time.end());

        for (const double &num : time)
        {
            cout << num << " ";
        }

        for (int i = 0; i < n; i++)
        {
            if (time[i] <= i)
            {
                return i;
            }
        }

        return n;
    }
};

int main()
{
    Solution sol;

    vector<int> dist1 = {1, 3, 4}, speed1 = {1, 1, 1};
    cout << sol.eliminateMaximum(dist1, speed1) << endl;

    vector<int> dist2 = {1, 1, 2, 3}, speed2 = {1, 1, 1, 1};
    cout << sol.eliminateMaximum(dist2, speed2) << endl;
    vector<int> dist3 = {3, 2, 4}, speed3 = {5, 3, 2};
    cout << sol.eliminateMaximum(dist3, speed3) << endl;

    return 0;
}
