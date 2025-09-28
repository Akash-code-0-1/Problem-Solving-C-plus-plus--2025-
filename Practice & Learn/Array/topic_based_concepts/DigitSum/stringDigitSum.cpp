#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(string &str)
{
    int strDigitsSum = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (isdigit(str[i]))
        {
            strDigitsSum += (str[i] - '0');
        }
    }

    return strDigitsSum;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;

    int result = sumOfDigits(str);
    cout << "The sum of digits is: " << result << endl;
}
