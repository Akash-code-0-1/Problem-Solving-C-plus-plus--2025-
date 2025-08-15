#include <bits/stdc++.h>
using namespace std;

bool isPslaindrome(string s)
{
    if (s.length() == 0)
    {
        return true;
    }
    string new_str;

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for (int i = 0; i < s.length(); i++)
    {
        if (isalnum(s[i]))
        {
            new_str += s[i];
        }
    }

    string reverse_str = new_str;
    reverse(new_str.begin(), new_str.end());

    if (new_str == reverse_str)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string str = "A man, a plan, a canal: Panama";
    cout << isPslaindrome(str) << endl;
}