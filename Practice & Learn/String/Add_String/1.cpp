#include <bits/stdc++.h>
using namespace std;

string addStrings(string num1, string num2)
{
    long long newnum1 = stoll(num1);
    long long newnum2 = stoll(num2);

    long long addition_int = newnum1 + newnum2;

    return to_string(addition_int);
}





int main()
{
    string num1 = "11";
    string num2 = "123";

    string result = addStrings(num1, num2);
    cout << result << endl;
}