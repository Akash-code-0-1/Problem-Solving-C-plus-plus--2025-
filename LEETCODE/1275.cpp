#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        
        vector<int>res;

        for(int i=0;i<prices.size();i++){
            int discount=0;
            for(int j=i+1;j<prices.size();j++){
                if(prices[j]<=prices[i]){
                    discount=prices[j];
                    break;
                }
            }
            res.push_back(prices[i]-discount);
        }
        return res;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> prices = {1,2,3,4,5};
    Solution sol;
    vector<int> ans = sol.finalPrices(prices);
    for (size_t i = 0; i < ans.size(); ++i) {
        if (i) cout << ' ';
        cout << ans[i];
    }
    cout << '\n';
    return 0;
}