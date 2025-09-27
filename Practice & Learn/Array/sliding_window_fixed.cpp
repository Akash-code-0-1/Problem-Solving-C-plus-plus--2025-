#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {2, 1, 5, 1, 3, 2};
    int k = 4;
    int wS = 0, mS = 0;

    for (int i = 0; i < k; i++)
    {
        wS += nums[i];
    }

    mS = wS;
    
    // Sliding Window
    for (int i = k; i < nums.size(); i++)
    {
        wS += nums[i] - nums[i - k];
        mS = max(mS, wS);
    }

    cout << "Max sum of any subarry of size " << k << " : " << mS << endl;
}
