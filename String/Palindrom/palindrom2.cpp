#include <bits/stdc++.h>
using namespace std;

#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

bool is_palindrome(const string &s)
{

    string revStr = "";

    for (int i = 0; i < s.length(); i++)
    {

        revStr += s[s.length() - 1 - i];
     }

    return strcmp(s.c_str(), revStr.c_str()) == 0;
}

int main()
{
    fast_io;

    string str;
    cin >> str;

    is_palindrome(str) ? cout << "YES" : cout << "NO";

    return 0;
}