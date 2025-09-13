#include <bits/stdc++.h>
using namespace std;

int findLUSlength(string a, string b)
{
    if (a == b)
    {
        return -1;
    }
    else
    {
        return max(a.size(), b.size());
    }
}

int main()
{
    string a = "aefawfawfawfaw", b = "aefawfeawfwafwaef";
    int res = findLUSlength(a, b);
    cout << res << endl;
}