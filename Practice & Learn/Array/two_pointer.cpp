#include <bits/stdc++.h>
using namespace std;

bool twoSumSorted(vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) return true;
        else if (sum < target) left++;   // need bigger sum
        else right--;                    // need smaller sum
    }
    return false;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 6};
    int target = 9;
    cout << (twoSumSorted(arr, target) ? "Found" : "Not Found")<<endl;
}
