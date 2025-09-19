#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sum(int num1, int num2) {
        return num1+num2;
    }
};

int main() {
    Solution sol;
    int num1 = 3;
    int num2 = 5;
    int result = sol.sum(num1, num2);
    cout << "Sum: " << result << endl;
    return 0;
}