#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeIntervals(vector<vector<int>>& intervals) {
    if(intervals.empty()) return {};

    //sort interval by start time
    sort(intervals.begin(),intervals.end());

    vector<vector<int>> merged;
    merged.push_back(intervals[0]);

    //tavarse and merge
    for(int i=1;i<intervals.size();i++){
        //getting last interval from merged
        auto &last=merged.back();

        //checking overlap or not
        if(intervals[i][0]<=last[1]){
            //means Overlap -> so need to merge by updating end
            last[1]=max(last[1],intervals[i][1]);
        }
        //Not overlap
        else{
            //just pushing the inteval to the merged vector
            merged.push_back(intervals[i]);
        }
    }
    return merged;
}

int main() {
    vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};
    auto ans = mergeIntervals(intervals);
    
    for(auto &v : ans) cout << "[" << v[0] << "," << v[1] << "] ";
}
