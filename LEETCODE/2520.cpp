#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countDigits(int num) {
        int tempNum=num;
        int res=0;
        while(tempNum>0){
            int digit=tempNum%10;
            if(num%digit==0){
                res++;
            }
            tempNum/=10;
        }
        return res;
    }
};

int main() {
    Solution sol;
    int num = 121;
    cout << sol.countDigits(num) << endl;
    return 0;
}