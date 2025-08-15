#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int calPoints(vector<string> &operations)
    {

        vector<int> scores;

        for (const string &op : operations)
        {

            if (op == "C")
            {
                if (!scores.empty())
                {
                    scores.pop_back();
                }
            }
            else if (op == "D")
            {
                if (!scores.empty())
                {
                    scores.push_back(scores.back() * 2);
                }
            }
            else if (op == "+")
            {
                int sum = 0;
                if (scores.size() >= 2)
                {
                    sum = scores[scores.size() - 1] + scores[scores.size() - 2];
                }
                else if (scores.size() == 1)
                {
                    sum = scores.back();
                }
                scores.push_back(sum);
            }
            else
            {
                scores.push_back(stoi(op));
            }
        }

        return accumulate(scores.begin(), scores.end(), 0);
    }
};

int main()
{
    vector<string> ops = {"5", "2", "C", "D", "+"};
    Solution sol;
    int result = sol.calPoints(ops);
    cout << "Result: " << result << endl;
    return 0;
}