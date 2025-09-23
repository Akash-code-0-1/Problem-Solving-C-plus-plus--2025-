#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int>res;
        for(int i=0;i<arr.size()-1;i++){
            auto maxVal=*max_element(arr.begin()+(i+1),arr.end());
            res.push_back(maxVal);
        }
        res.push_back(-1);
        return res;
    }
};

int main() {
    Solution sol;
    vector<int> input = {400};
    vector<int> output = sol.replaceElements(input);
    
    cout << "Output: ";
    for (int x : output) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
