#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main() {
    ofstream outFile;
    outFile.open("student.txt");
    
    outFile<<"Rafu" << endl;
    outFile<<"Jon" << endl;
    outFile<<"Mr. Beast" << endl;

    outFile.close();

    ifstream inFile;
    inFile.open("student.txt");
    string line;
    while(getline(inFile, line)) {
        cout<<line<<endl;
    }

    if (inFile.eof()){
        cout<<"End of file reached."<<endl;
    }
    inFile.close();
    return 0;
}