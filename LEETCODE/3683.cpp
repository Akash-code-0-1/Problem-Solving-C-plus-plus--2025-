#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int earliestTime(vector<vector<int>> &tasks)
    {
        int res=INT_MAX;
        for(auto task: tasks){
            int sum=0;
            for(int num: task){
                sum+=num;
            }
            if(sum<res) res=sum;
        }
        return res;
    }
};

int main() {
    Solution sol;

    vector<vector<int>> tasks = {
        {1, 6},
        {2, 3}
    };

    int result = sol.earliestTime(tasks);

    cout << "Earliest Time: " << result << endl;

    return 0;
}