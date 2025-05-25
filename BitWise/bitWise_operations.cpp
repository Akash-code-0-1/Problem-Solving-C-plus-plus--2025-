#include <iostream>
#include <bitset>
using namespace std;

void showBitwiseXOR(int a, int b) {
    cout << "a = " << a << " (" << bitset<8>(a) << ")\n";
    cout << "b = " << b << " (" << bitset<8>(b) << ")\n";

    int result = a ^ b;
    cout << "a ^ b = " << result << " (" << bitset<8>(result) << ")\n";
}

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "\n=== Bitwise XOR Operation ===\n";
    showBitwiseXOR(a, b);

    cout << "\n=== Other Bitwise Operations ===\n";
    cout << "a & b = " << (a & b) << " (" << bitset<8>(a & b) << ")\n";
    cout << "a | b = " << (a | b) << " (" << bitset<8>(a | b) << ")\n";
    cout << "~a = " << (~a) << " (" << bitset<8>(~a) << ")\n";
    cout << "~b = " << (~b) << " (" << bitset<8>(~b) << ")\n";

    return 0;
}
