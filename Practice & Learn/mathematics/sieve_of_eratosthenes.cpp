#include <bits/stdc++.h>
using namespace std;

vector<int> sieve(int n)
{

    vector<bool> isPrime(n, true);   // intially all set to prime number by setting true
    isPrime[0] = isPrime[1] = false; // 0,1 are not prime so set those as not not prime by false

    // starting from 2 beacause, we alrady set 0,1 as not prime and we will eliminate multiples so it must be in less than or equle to n
    for (int i = 2; i * i <= n; i++)
    {
        //if current number is true it will eliminate its all multiples
        if(isPrime[i]){
            for(int j=i*i;j<=n;j+=i){
                isPrime[j]=false;
            }
        }
    }

    vector<int>primes;
    for(int i=2;i<=n;i++){
        if(isPrime[i]){
            primes.push_back(i);
        }
    }

    return primes;
}

int main()
{
    int n = 10;
    auto primes = sieve(n);
    for (int p : primes)
        cout << p << " ";
}