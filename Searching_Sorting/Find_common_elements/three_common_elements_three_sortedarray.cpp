#include <bits/stdc++.h>
using namespace std;

vector<int> commonElements(vector<int> &A, vector<int> &B,
                           vector<int> &C)
{
    map<int, int> mp;

    for (int ele : A)
    {
        mp[ele] = 1;
    }

    for (int ele : B)
    {
        if (mp.find(ele) != mp.end() && mp[ele] == 1)
            mp[ele] = 2;
    }

    for (int ele : C)
    {
        if (mp.find(ele) != mp.end() && mp[ele] == 2)
            mp[ele] = 3;
    }

    vector<int> commonElements;
    for (auto ele : mp)
    {
        if (ele.second == 3)
            commonElements.push_back(ele.first);
    }

    return commonElements;
}

int main()
{
    vector<int> A = {1, 5, 10, 20, 30};
    vector<int> B = {5, 13, 15, 20};
    vector<int> C = {5, 20};

    vector<int> ans = commonElements(A, B, C);

    cout << "Common elements: ";

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
