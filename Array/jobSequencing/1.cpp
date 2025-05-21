#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit)
{
    int n = deadline.size();
    vector<pair<int, int>> jobs;

    for (int i = 0; i < n; i++)
    {
        jobs.push_back({profit[i], deadline[i]});
    }

    sort(jobs.begin(), jobs.end(), greater<pair<int, int>>());

    vector<int> result(n, 0);
    int counter = 0;
    int maxProfit = 0;

    for (int i = 0; i < n; i++)
    {
        int startingPoint = min(n, jobs[i].second) - 1;
        for (int j = startingPoint; j >= 0; j--)
        {
            if (result[j] == 0)
            {
                result[j] = 1;
                counter++;
                maxProfit += jobs[i].first;
                break;
            }
        }
    }

    return {counter, maxProfit};
}

int main()
{
    vector<int> deadline = {4, 1, 1, 1};
    vector<int> profit = {20, 10, 40, 30};

    vector<int> result = jobSequencing(deadline, profit);
    cout << "Number of jobs scheduled: " << result[0] << endl;
    cout << "Maximum profit: " << result[1] << endl;

    return 0;
}
