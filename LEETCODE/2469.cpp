#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<double> convertTemperature(double celsius) {

        vector<double> result;
        result.push_back(celsius+273.15);
        result.push_back(celsius*1.80+32.00);

        return result; 
    }
};

int main() {
    Solution sol;

    double celsius = 36.50;

    vector<double> result = sol.convertTemperature(celsius);

    cout << "Converted temperatures: ";
    for(double temp : result) {
        cout << temp << " ";
    }
    cout << "\n";

    return 0;
}
