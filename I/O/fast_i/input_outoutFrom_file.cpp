#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // // Create and open a text file
    // ofstream MyFile("input.txt");

    // // Write to the file
    // MyFile << "Files can be tricky, but it is fun enough!";

    // Open the file for reading
    ifstream MyReadFile("input.txt");

    // Read the file line by line
    string line;
    while (getline(MyReadFile, line))
    {
        // Output the text from the file
        cout << line << endl;
    }

    // Close the file
    MyReadFile.close();
}
