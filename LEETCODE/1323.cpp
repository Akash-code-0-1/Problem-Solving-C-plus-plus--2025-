#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximum69Number(int num)
    {
        int tempNum = num;
        vector<int> tempNumV;
        while (tempNum > 0)
        {
            int digit = tempNum % 10;
            tempNumV.push_back(digit);
            tempNum /= 10;
        }
        reverse(tempNumV.begin(), tempNumV.end());

        int bigNum = num;
        string strTNum = to_string(num);
        string strNum = to_string(num);
        for (int i = 0; i < tempNumV.size(); i++)
        {
            strNum = strTNum;
            if (tempNumV[i] == 6)
            {
                strNum[i] = '9';
                if (bigNum < stoi(strNum))
                {
                    bigNum = stoi(strNum);
                }
            }
            if (tempNumV[i] == 9)
            {
                strNum[i] = '6';
                if (bigNum < stoi(strNum))
                {
                    bigNum = stoi(strNum);
                }
            }
        }

        return bigNum;
    }
};

int main()
{
    Solution s;
    int num = 9669;
    cout << s.maximum69Number(num) << endl;
    return 0;
}
