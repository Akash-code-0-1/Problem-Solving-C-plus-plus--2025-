#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> stableMountains(vector<int>& height, int threshold) {
        if(height.size()<=1) return {0};
        vector<int> res;
        for (int i = 1; i < height.size(); i++) {
            if (height[i - 1] > threshold)
                res.push_back(i);
        }
        return res;
    }
};

int main() {
    Solution solution;

    // Sample input
    vector<int> height = {1,2,3,4,5};
    int threshold = 2;

    // Call the function
    vector<int> result = solution.stableMountains(height, threshold);

    // Output the result
    cout << "Stable Mountains: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}