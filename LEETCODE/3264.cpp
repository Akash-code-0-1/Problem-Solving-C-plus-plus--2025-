#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for (int i = 0; i < k; i++) {
            auto it = min_element(nums.begin(), nums.end());
            auto minVal = *min_element(nums.begin(), nums.end());
            int minIndex = it - nums.begin();
            nums[minIndex] = multiplier * minVal;
        }
        return nums;
    }
};

int main() {
    vector<int> nums = {2,1,3,5,6};
    int k = 5;
    int multiplier = 2;
    Solution sol;
    vector<int> result = sol.getFinalState(nums, k, multiplier);

    cout << "Final state: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}