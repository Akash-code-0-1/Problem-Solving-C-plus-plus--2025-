#include <bits/stdc++.h>
using namespace std;

void printWords(string str)
{
    string words, word;
    vector<string> wordList;

    stringstream iss(str);
    while (iss >> word)
    {
        wordList.push_back(word);
    }

    for (int i = wordList.size() - 1; i >= 0; i--)
    {
        words += wordList[i];
        if (i != 0)
            words += " ";
    }

    cout << words << endl;
}

int main()
{
    string s = " sky is  blue ";
    printWords(s);
    return 0;
}
