#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {

        //type=0
        //color=1
        //name=2

        int countMatch=0;

        for(int i=0;i<items.size();i++){
            if(ruleKey=="type"){
                if(items[i][0]==ruleValue){
                    countMatch++;
                }
            }
            else if(ruleKey=="color"){
                if(items[i][1]==ruleValue){
                    countMatch++;
                }
            }
            else if(ruleKey=="name"){
                if(items[i][2]==ruleValue){
                    countMatch++;
                }
            }
        }


        
        return countMatch;
    }
};

int main() {
    vector<vector<string>> items = {
        {"phone", "blue", "pixel"},
        {"computer", "silver", "lenovo"},
        {"phone", "gold", "iphone"}
    };
    string ruleKey = "color";
    string ruleValue = "silver";

    Solution sol;
    int result = sol.countMatches(items, ruleKey, ruleValue);
    cout << "Number of matches: " << result << endl;

    return 0;
}