#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t)
{
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    return s == t;
}

int main()
{
    string str1 = "anagram";
    string str2 = "nagaram";
    cout << isAnagram(str1, str2) << endl;
}