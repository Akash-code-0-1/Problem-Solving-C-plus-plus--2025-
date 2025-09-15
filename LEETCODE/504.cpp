#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string convertToBase7(int num)
    {
        if(num==0) return "0";
        bool neg=(num<0);
        num=abs(num);

        string res="";

        while (num > 0)
        {
            int temp = num % 7;
            num /= 7;
            res += to_string(temp);
        }

        if(neg) {
            res+='-';
        }

        reverse(res.begin(),res.end());

        return res;
    }
};

int main()
{
    Solution sol;
    int num = 100;
    string result = sol.convertToBase7(num);
    cout << "Base 7 representation of " << num << " is: " << result << endl;
    return 0;
}