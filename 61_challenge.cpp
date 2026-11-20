#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    
    ofstream outFile("book.txt");//writing
    outFile<<"Name: C++ Programming" << endl;
    outFile<<"Price: 500" << endl;
    outFile.close();

    ifstream inFile("book.txt");//reading
    string line;
    while(getline(inFile,line)){
        cout<<line<<endl;
    }
    inFile.close();

    return 0;
}