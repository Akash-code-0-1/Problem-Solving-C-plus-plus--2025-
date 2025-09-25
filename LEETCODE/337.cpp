#include <iostream>
using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) 
    {
        if (num < 2) return true;
        long long x = num;
        while (x * x > num) {
            x = (x + num / x) / 2;
        }
        return x * x == num;
    }
};

int main() {
    Solution sol;
    int nums[] = {16, 14, 1, 0, 25, 26};
    int size = sizeof(nums) / sizeof(nums[0]);
    for (int i = 0; i < size; i++) {
        cout << "Is " << nums[i] << " a perfect square? "
             << (sol.isPerfectSquare(nums[i]) ? "Yes" : "No") 
             << endl;
    }
    return 0;
}
