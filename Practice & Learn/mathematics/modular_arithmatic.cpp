#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 25, b = 37, m = 12;

    // Modular addition
    int add = ( (a % m) + (b % m) ) % m;

    // Modular subtraction
    int sub = ( (a % m) - (b % m) + m ) % m;  // +m to avoid negative

    // Modular multiplication
    int mul = ( (a % m) * (b % m) ) % m;

    cout << "Addition: " << add << endl;
    cout << "Subtraction: " << sub << endl;
    cout << "Multiplication: " << mul << endl;
}
