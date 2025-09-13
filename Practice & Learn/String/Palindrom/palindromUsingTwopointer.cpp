#include <bits/stdc++.h>
using namespace std;

#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

bool is_palindrome(const string &s)
{
    int left = 0;
    int right = s.length() - 1;

    while (left < right)
    {

        if (s[left] != s[right])
        {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

int main()
{
    fast_io;

    string str;
    cin >> str;

    is_palindrome(str) ? cout << "YES" : cout << "NO";

    return 0;
}