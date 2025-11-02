#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int res = 0;
        for (int i = 0; i < arr.size(); i++) {
            int l = 1;
            int cs = 0;
            for (int j = i; j < arr.size(); j++) {
                cs += arr[j];
                if (l % 2 == 1) res += cs;
                l++;
            }
        }
        return res;
    }
};

int main() {
    Solution s;

    vector<int> arr = {1, 4, 2, 5, 3};

    int result = s.sumOddLengthSubarrays(arr);

    cout << "Sum of all odd-length subarrays: " << result << endl;

}
