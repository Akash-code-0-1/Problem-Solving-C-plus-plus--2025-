#include <bits/stdc++.h>
using namespace std;

vector<int> sortArrayByParityII(vector<int> &nums)
{
    vector<int> res;

    vector<int> even_num;
    vector<int> odd_num;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] % 2 == 0)
        {
            even_num.push_back(nums[i]);
        } 
        else
        {
            odd_num.push_back(nums[i]);
        }
    }
    int j = 0;
    int k = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (i % 2 == 0)
        {
            res.push_back(even_num[j]);
            j++;
        }
        else
        {
            res.push_back(odd_num[k]);
            k++;
        }
    }

    return res;
}
int main()
{
    vector<int> nums = {2, 3};
    vector<int> res;
    res = sortArrayByParityII(nums);

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << endl;
    }
}