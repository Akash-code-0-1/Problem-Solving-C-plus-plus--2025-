#include <bits/stdc++.h>
using namespace std;
bool isIsomorphic(std::string s, std::string t)
{
    if (s.length() != t.length())
    {
        return false;
    }

    map<char, char> mapS;
    map<char, char> mapT;

    for (int i = 0; i < s.length(); i++)
    {
        char charS = s[i];
        char charT = t[i];
 
        if (mapS.find(charS) == mapS.end())
        {
            mapS[charS] = charT;
        }
        else if (mapS[charS] != charT)
        {
            return false;
        }

        if (mapT.find(charT) == mapT.end())
        {
            mapT[charT] = charS;
        }
        else if (mapT[charT] != charS)
        {
            return false;
        }
    }

    return true;
}
int main()
{
    string s = "egg";
    string t = "add";
    cout << isIsomorphic(s, t) << endl;
}