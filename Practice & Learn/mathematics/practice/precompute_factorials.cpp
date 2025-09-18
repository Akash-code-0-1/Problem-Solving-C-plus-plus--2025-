#include<bits/stdc++.h>
using namespace std;

const int N=1000001;
const int MOD= 1e9+7;

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

int main(){
    percompute_fact();
}