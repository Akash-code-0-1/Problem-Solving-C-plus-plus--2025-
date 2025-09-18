// How Many Ways to Choose 3 Items from 10?
#include <bits/stdc++.h>
using namespace std;

const int N = 1000001;
const int MOD = 1e9 + 7;
long long fact[N];

void percompute_fact(){
    fact[0]=1;
    long long res;
    for(int i=1;i<N;++i){
        fact[i]=(fact[i-1]*i)%MOD;
        res=fact[i];
    }
    cout<<res<<endl;
}

long long mod_pow(long long a, long long exp, long long p)
{
    long long res = 1;

    while (exp > 0)
    {
        if (exp & 1)
            res = (res * a) % p;
        a = (a * a) % p;
        exp >>= 1;
    }
    return res;
}

long long mod_inv(long long a, long long p)
{
    return mod_pow(a, p - 2, MOD);
}

long long ncr_mod(int n, int r)
{
    if (r > n)
        return 0;
    long long denom = (fact[r] * fact[n - r]) % MOD;
    return (fact[n] * mod_inv(denom, MOD)) % MOD;
}

int main()
{
    percompute_fact();
    int n = 10, r = 3;
    cout << "10C3 = " << ncr_mod(n, r) << endl;
}