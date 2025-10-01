#include <bits/stdc++.h>
using namespace std;

void segregateEvenOdd(vector<int>& arr) {
    int left = 0, right = arr.size() - 1;
    while (left < right) {
        while (arr[left] % 2 == 0 && left < right) left++;
        while (arr[right] % 2 == 1 && left < right) right--;
        if (left < right) swap(arr[left], arr[right]);
    }
}

int main() {
    vector<int> arr = {12, 34, 45, 9, 8, 90, 3};
    segregateEvenOdd(arr);
    for (int x : arr) cout << x << " "; // 12 34 90 8 9 45 3
}
