#include <bits/stdc++.h>
using namespace std;

bool canConstruct(string ransomNote, string magazine)
{
    map<char, int> mp1;
    map<char, int> mp2;
    if(ransomNote.size()==0){
        return false;
    }

    for (char c : ransomNote)
    {
        if (c != ' ')
        {
            mp1[c]++;
        }
    }
    for (char c : magazine)
    {
        if (c != ' ')
        {
            mp2[c]++;
        }
    }

    for (const auto &pair : mp1)
    {
        char c = pair.first;
        int countInRansomNote = pair.second;
        int countInMagazine = mp2[c];

        if (countInMagazine < countInRansomNote)
        {

            return false;
        }
    }
    return true;
}

int main()
{
    string ransomNote = "aa", magazine = "aab";

    cout<<canConstruct(ransomNote, magazine)<<endl;
}