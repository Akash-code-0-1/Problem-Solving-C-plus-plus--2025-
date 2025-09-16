#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countPrimes(int n)
    {
        if(n==0) return 0;
        vector<bool> isPrime(n, true);
        isPrime[0] = isPrime[1] = false;

        for (int i = 2; i * i < n; i++)
        {
            if (isPrime[i])
            {
                for (int j = i * i; j < n; j += i)
                {
                    isPrime[j] = false;
                }
            }
        }

        vector<int> primes;
        for (int i = 2; i <n; i++)
        {
            if (isPrime[i])
            {
                primes.push_back(i);
            }
        }

        return primes.size();
    }
};

int main()
{
    Solution sol;

    int n = 10;

    int result = sol.countPrimes(n);

    cout << "Number of primes less than " << n << " = " << result << "\n";

    return 0;
}
