
#include <bits/stdc++.h>
using namespace std;

vector<int> computeLPS(string pattern)
{
    int m = pattern.size();
    vector<int> lps(m, 0);

    int len = 0;
    int i = 1;

    while (i < m)
    {
        if (pattern[i] == pattern[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if (len != 0)
            {
                len = lps[len - 1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
    return lps;
}

int main()
{
    string pattern;

    cout << "Enter pattern: ";
    getline(cin, pattern);

    vector<int> result = computeLPS(pattern);

    for (int x : result)
        cout << x << endl;

}