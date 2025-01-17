#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 2;
    int b = 10;

    int range = abs(b - a) + 1;
    int *nums = new int[range];

    for (int i = a; i <= b; i++)
    {
        if (i % 2 == 0 || i % 5 == 0)
        {
            nums[i - a] = 1;
        }
    }

    for (int i = a; i <= b; i++)
    {
        if (nums[i - a] == 1)
        {
            cout << i << " ";
        }
    }
}