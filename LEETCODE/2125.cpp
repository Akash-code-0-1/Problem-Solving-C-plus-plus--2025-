#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numberOfBeams(vector<string> &bank)
    {

        vector<int> secDev;

        for (int i = 0; i < bank.size(); ++i)
        {
            int count = 0;
            for (int j = 0; j < bank[i].size(); ++j)
            {
                if (bank[i][j] == '1')
                {
                    count++;
                }
            }

            if (count > 0)
            {
                secDev.push_back(count);
            }
        }


        if(secDev.size()<=1){
            return 0;
        }

        int res=0;

        for(int i=0;i<secDev.size()-1;i++){
            res+=secDev[i]*secDev[i+1];
        }

        return res;
    }
};

int main()
{
    vector<string> bank = {
        "000","111","000"};
    Solution sol;
    int result = sol.numberOfBeams(bank);
    cout << result << endl;
    return 0;
}