#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {

        if (ransomNote.size() > magazine.size())
            return false;

        string tempMag = "";
        for (int i = 0; i < magazine.size(); i++)
        {
            bool found = ransomNote.find(magazine[i]) != string::npos;
            if (found)
                tempMag += magazine[i];
        }

        sort(ransomNote.begin(), ransomNote.end());
        sort(tempMag.begin(), tempMag.end());

        vector<int> freq1(26, 0);
        vector<int> freq2(26, 0);

        for (char c : ransomNote)
            freq1[c - 'a']++;
        for (char c : magazine)
            freq2[c - 'a']++;

        for(int i=0;i<freq1.size();i++){
            if(freq1[i]>freq2[i]) return false;
        }

        return true;
    }
};

int main()
{
    Solution sol;
    string ransomNote = "aa";
    string magazine = "aab";
    cout << boolalpha << sol.canConstruct(ransomNote, magazine) << '\n';
    return 0;
}