#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double minimumAverage(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        double avg = 100.0;
        int l = 0;
        int r = nums.size() - 1;

        while (l <= r)
        {
            double currentAvg = (nums[l] + nums[r]) / 2.0;
            if (currentAvg < avg)
                avg = currentAvg;

            l++;
            r--;
        }

        return avg;
    }
};

int main()
{
    Solution solution;

    vector<int> nums = {7, 8, 3, 4, 15, 13, 4, 1};

    double result = solution.minimumAverage(nums);

    cout << "Average: " << result << endl;

    return 0;
}
