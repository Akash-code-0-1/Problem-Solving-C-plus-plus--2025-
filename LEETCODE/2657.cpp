#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findThePrefixCommonArray(vector<int> &A, vector<int> &B)
    {
        vector<int> result;

        for (int i = 0; i < A.size(); i++)
        {

            int count = 0;

            for (int j = i; j >= 0; j--)
            {

                for (int k = i; k >= 0; k--)
                {

                    if (A[j] == B[k])
                    {
                        count++;
                    }
                }
            }

            result.push_back(count);
        }

        return result;
    }
};

int main()
{
    Solution sol;

    vector<int> A = {1, 3, 2, 4};
    vector<int> B = {3, 1, 2, 4};

    vector<int> result = sol.findThePrefixCommonArray(A, B);

    cout << "Prefix Common Array: [ ";
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << "]" << endl;

    return 0;
}
