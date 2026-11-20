#include <iostream>
#include <fstream>
#include <string>

using namespace std;



int main() {
    ofstream outFile("marks.txt");
    outFile << "Math:85" << endl;
    outFile << "English:90" << endl;
    outFile.close();

    ifstream inFile("marks.txt");
    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }
    inFile.close();
    return 0;
}