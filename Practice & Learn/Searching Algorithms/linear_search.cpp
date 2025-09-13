#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> nums = {10, 20, 30, 40, 50, 55, 60, 70, 80, 90, 100};

    int key = 90;
    int iteration = 0;
    bool flag = false;

    for (int i = 0; i < nums.size() && flag == false; i++)
    {

        iteration++;
        if (key == nums[i])
        {
            cout << "Traget Found" << endl;
            cout << "Found in index: " << i << endl;
            flag = true;
        }
    }
    if (!flag)
    {
        cout << "Target not Found" << endl;
    }

    cout << "Total Iteration: " << iteration << endl;

    return 0;
}