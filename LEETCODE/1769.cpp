#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> minOperations(string boxes)
    {

        vector<int> result(boxes.size(), 0);

        for (int i = 0; i < boxes.size(); i++)
        {
            int sum = 0;
            for (int j = 0; j < boxes.size(); j++)
            {
                if (boxes[j] == '1')
                {
                    sum += abs(i - j);
                }
            }

            result[i] = sum;
        }

        return result;
    }
};

int main()
{
    Solution sol;
    string boxes = "001011";
    vector<int> result = sol.minOperations(boxes);

    cout << "Output: [";
    for (size_t i = 0; i < result.size(); ++i)
    {
        cout << result[i];
        if (i + 1 < result.size())
            cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}