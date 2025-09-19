#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int res=0;

        sort(piles.begin(), piles.end());

        int myCoin=piles.size()-2;
        
        for(int i=0;i<piles.size()/3;i++){
            res+=piles[myCoin];
            myCoin-=2;
        }

        return res;
    }
};

int main() {
    vector<int> piles = {2,4,5}; 
    Solution sol;
    int result = sol.maxCoins(piles);
    cout << "Maximum coins: " << result << endl;
    return 0;
}