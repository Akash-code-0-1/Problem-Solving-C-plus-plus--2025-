#include <bits/stdc++.h>
using namespace std;

// Custom comparator to compare concatenated strings
bool myCompare(const string& X, const string& Y)
{
    return (X + Y) > (Y + X);
}

// Function to return the largest concatenated number
string largestNumber(const vector<string>& arr)
{
    string res;
    vector<string>sortedArr=arr;
    sort(sortedArr.begin(),sortedArr.end(),myCompare);

    for( const string&num: sortedArr){
        res+=num;
    }

    return res;
}

int main()
{
    vector<string> arr1 = { "3", "30", "34", "5", "9" };
    cout << largestNumber(arr1)
         << endl; // Output: "9534330"

    vector<string> arr2 = { "54", "546", "548", "60" };
    cout << largestNumber(arr2)
         << endl; 
}
