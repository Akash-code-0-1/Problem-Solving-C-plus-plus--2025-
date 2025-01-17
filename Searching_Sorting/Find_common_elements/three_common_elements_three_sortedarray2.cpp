#include <bits/stdc++.h>
using namespace std;

vector<int> commonElements(int A[], int B[], int C[],
                           int n1, int n2, int n3)
{
    int i = 0, j = 0, k = 0;

    vector<int> common;

    while (i < n1 && j < n2 && k < n3)
    {
        if (A[i] == B[j] && B[j] == C[k])
        {
            common.push_back(A[i]);
            i++;
            j++;
            k++;

            while (i < n1 && A[i] == A[i - 1])
                i++;

            while (j < n2 && B[j] == B[j - 1])
                j++;

            while (k < n3 && C[k] == C[k - 1])
                k++;
        }

        else if (A[i] < B[j])
            i++;

        else if (B[j] < C[k])
            j++;
        else
            k++;
    }

    return common;
}

int main()
{

    int A[] = {1, 5, 10, 20, 30};
    int B[] = {5, 13, 15, 20};
    int C[] = {5, 20};
    int n1 = sizeof(A) / sizeof(A[0]);
    int n2 = sizeof(B) / sizeof(B[0]);
    int n3 = sizeof(C) / sizeof(C[0]);

    vector<int> common = commonElements(A, B, C, n1, n2, n3);

    cout << "Common Elements: ";
    for (int ele : common)
    {
        cout << ele << " ";
    }

}
