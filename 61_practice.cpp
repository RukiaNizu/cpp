#include<iostream>
#include<fstream>
#include<string>

using namespace std;
int main(){
    ofstream outFile("student.txt");//writing
    outFile<<"Name: John Doe" << endl;
    outFile<<"Age: 20" << endl;
    outFile.close();

    ifstream inFile("student.txt");//reading
    string line;
    while(getline(inFile,line)){
        cout<<line<<endl;
    }
    inFile.close();

    return 0;
}
