#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
       int res = 0;

        for (const string& g : garbage) {
            res += g.length();
        }

        bool m = false, p = false, g = false;

        for (int i = travel.size(); i > 0; i--) {
            m = m || garbage[i].find("M") != string::npos;
            p = p || garbage[i].find("P") != string::npos;
            g = g || garbage[i].find("G") != string::npos;

            res += travel[i-1] * ((m ? 1 : 0) + (p ? 1 : 0) + (g ? 1 : 0));
        }

        return res; 
    }
};

int main() {
    Solution solution;
    
    vector<string> garbage1 = {"G", "P", "GP", "GG"};
    vector<int> travel1 = {2, 4, 3};
    cout << solution.garbageCollection(garbage1, travel1) << endl;
    
    vector<string> garbage2 = {"MMM", "PGM", "GP"};
    vector<int> travel2 = {3, 10};
    cout << solution.garbageCollection(garbage2, travel2) << endl;
    
    return 0;
}