#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {2,3,1,2,4,3};
    int target = 7, n = arr.size();

    int left = 0, sum = 0, minLen = INT_MAX;

    for (int right = 0; right < n; right++) {
        sum += arr[right];
        while (sum >= target) {
            minLen = min(minLen, right - left + 1);
            sum -= arr[left++];
        }
    }

    cout << "Smallest length subarray with sum >= " << target << " = "
         << (minLen == INT_MAX ? 0 : minLen) << endl;
}
