#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {

        unordered_map<int,int> cardsFreq;

        for(int i=0;i<deck.size();i++){
            cardsFreq[deck[i]]++;
        }

        int g = cardsFreq.begin()->second;

        for(auto &p: cardsFreq){
            if(g==0){
                g= p.second;
            }
            else{
                g=gcd(g,p.second);
            }
        }

        return g>1;
    }
};

int main() {
    Solution sol;
    vector<int> deck = {1,2,3,4,4,3,2,1}; 
    bool result = sol.hasGroupsSizeX(deck);
    cout << (result ? "true" : "false") << endl;
    return 0;
}