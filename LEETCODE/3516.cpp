#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findClosest(int x, int y, int z) {
        int p1Steps = abs(x - z);
        int p2Steps = abs(y - z);

        if (p1Steps < p2Steps) {
            return 1;
        }
        else if (p1Steps > p2Steps) {
            return 2;
        }
        else {
            return 0;
        }
    }
};

int main() {
    Solution sol;
    int x = 5, y = 10, z = 7;

    int result = sol.findClosest(x, y, z);
    cout<<result<<endl;

    return 0;
}
