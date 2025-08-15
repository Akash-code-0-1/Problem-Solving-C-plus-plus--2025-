#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int num)
{

    if (num == 0)
    {
        return 0;
    }

    return (num % 10) + sumOfDigits(num / 10);
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int result = sumOfDigits(n);
    cout << "The sum of digits is: " << result << endl;
}
