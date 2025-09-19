#include <bits/stdc++.h>
using namespace std;

int main() {
    // Possible outcomes and probabilities of dice roll (uniform)
    int outcomes[] = {1, 2, 3, 4, 5, 6};
    double probability = 1.0 / 6;

    double expectedValue = 0;
    for (int i = 0; i < 6; i++) {
        expectedValue += outcomes[i] * probability;
    }
    
    cout << "Expected value of dice roll: " << expectedValue << endl;
    return 0;
}
