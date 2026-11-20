#include <iostream>
#include<fstream>
#include <string>
using namespace std;


int main() {
    ofstream outFile("student.txt");
    
outFile << "Name:Nizu" << endl;
    outFile << "Age:22" << endl;

    outFile.close();

ifstream inFile("student.txt");
    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }
    inFile.close();

    return 0;
}