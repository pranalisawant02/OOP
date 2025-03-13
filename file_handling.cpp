#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Writing to a file
    ofstream outFile("example.txt");
    outFile << "Hello, File Handling in C++!" << endl;
    outFile.close();

    // Reading from the file
    string line;
    ifstream inFile("example.txt");
    while (getline(inFile, line)) {
        cout << line << endl;
    }
    inFile.close();

    return 0;
}
