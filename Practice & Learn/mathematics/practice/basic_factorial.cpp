#include<bits/stdc++.h>
using namespace std;

unsigned int factorial(int n){
    unsigned int res=1;

    for(int i=2;i<=n;++i){
        res*=i;
    }

    return res;
}

int main(){
    cout<<factorial(5)<<endl;
}