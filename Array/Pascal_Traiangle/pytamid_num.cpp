#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row = 3;
    int space;

    int counter = 1;

    for (int i = 1, k = 0; i <= row; i++, k = 0)
    {

        for (space = 1; space <= row - i; space++)
        {
            cout << "  ";
        }
        while (k != 2 * i - 1)
        {
            cout << counter << " ";
            k++;
            counter++;
        }
        cout << endl;
    }
}