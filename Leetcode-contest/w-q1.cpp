#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int> res;
        long long place = 1;

        while (n > 0) {
            long long digit = n % 10;
            if (digit != 0) {
                res.push_back(digit * place);
            }
            n /= 10;
            place *= 10;
        }
        reverse(res.begin(), res.end()); 
        return res;
    }
};

int main() {
    Solution sol;

    int num = 5082;

    vector<int> result = sol.decimalRepresentation(num);

    cout << "Decimal representation of " << num << " is: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}