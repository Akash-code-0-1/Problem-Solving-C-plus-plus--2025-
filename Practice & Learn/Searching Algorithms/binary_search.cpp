#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> nums = {10, 20, 30, 40, 50, 55, 60, 70, 80, 90, 100};

    int start = 0;
    int end = nums.size() - 1;
    int key = 90;
    bool flag = false;
    int iteration = 0;

    while (start <= end && flag == false)
    {
        iteration++;
        int mid = (start + end) / 2;

        if (key == nums[mid])
        {
            cout << "Traget Found" << endl;
            cout << "Found in index: " << mid << endl;
            flag = true;
        }
        else if (key > nums[mid])
        {
            start++;
        }
        else
        {
            end--;
        }
    }
    if (!flag)
    {
        cout << "Target not Found" << endl;
    }

    cout << "Total Iteration: " << iteration << endl;

    return 0;
}