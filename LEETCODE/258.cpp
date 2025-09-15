#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int digitSum(int n)
    {
        int dsum=0;
        while(n!=0){
            dsum+=n%10;
            n/=10;
        }
        return dsum;
    }
    int addDigits(int num)
    {

        if (num < 10)
            return num;

        while (num > 9)
        {
            num = digitSum(num);
        }

        return num;
    }
};

int main()
{
    Solution sol;
    int num = 0;
    int result = sol.addDigits(num);
    cout << "Result: " << result << endl;
    return 0;
}