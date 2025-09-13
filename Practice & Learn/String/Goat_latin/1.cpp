#include <bits/stdc++.h>
using namespace std;

string toGoatLatin(string sentence)
{
    vector<string> str;
    string word;

    stringstream ss(sentence);
    while (ss >> word)
    {
        str.push_back(word);
    }

    ostringstream res_stream;
    int num_of_a = 2;
    for (size_t i = 0; i < str.size(); i++)
    {
        char fc = str[i][0];

        if (fc == 'a' || fc == 'A' || fc == 'e' || fc == 'E' ||
            fc == 'i' || fc == 'I' || fc == 'o' || fc == 'O' ||
            fc == 'u' || fc == 'U')
        {
            str[i] += 'm';
            str[i] += string(num_of_a, 'a');
            num_of_a++;
        }
        else
        {
            char firstChar = str[i][0];
            str[i] = str[i].substr(1);
            str[i] += firstChar;
            str[i] += 'm';
            str[i] += string(num_of_a, 'a');
            num_of_a++;
        }

        res_stream << str[i] << " ";
    }

    string res_string = res_stream.str();
    if (!res_string.empty())
    {
        res_string.pop_back();
    }

    return res_string;
}

int main()
{
    string str1 = "I speak Goat Latin";
    string result = toGoatLatin(str1);
    cout << result << endl;
}