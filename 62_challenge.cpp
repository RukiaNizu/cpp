#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main() {
    ofstream outFile;
    outFile.open("numbers.txt");
    
    outFile<<"10" << endl;
    outFile<<"20" << endl;
    outFile<<"30" << endl;
    outFile.close();

    ifstream inFile;
    inFile.open("numbers.txt");
    string line;
    while(getline(inFile, line)) {
        cout<<line<<endl;
    }
  

    if(inFile.eof()){
        cout<<"End of file reached."<<endl;
    }
      inFile.close();
    return 0;
}