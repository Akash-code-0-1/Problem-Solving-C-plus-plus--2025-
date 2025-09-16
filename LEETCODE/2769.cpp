#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        int tempNum = num;
        for(int i = 0; i < t; i++){
            num++;
        }
        return num + (num - tempNum);
    }
};

int main() {
    Solution sol;

    int num = 4;
    int t = 1;

    int result = sol.theMaximumAchievableX(num, t);

    cout << "Maximum achievable X for num = " << num << " and t = " << t << " is " << result << "\n";

    return 0;
}
