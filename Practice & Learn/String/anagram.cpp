#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string a, string b) {
    if(a.size()!=b.size()) return false;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    return a==b;

}

int main() {
    string s1 = "listen", s2 = "silent";
    cout << (isAnagram(s1, s2) ? "Anagram" : "Not Anagram")<<endl;
}
