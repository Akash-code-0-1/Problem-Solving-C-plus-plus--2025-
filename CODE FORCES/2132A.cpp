#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        string a, b, c;
        cin >> n >> a;
        cin >> m >> b >> c;


        //solving logic
        string result=a;
        int i=0;
        for(const char &ch: c){
            if(ch=='V'){
                result.insert(result.begin(),b[i]);
            }
            else{
                result.push_back(b[i]);
            }
            i++;
        }
        
        cout << result << endl;
    }
    return 0;
}
