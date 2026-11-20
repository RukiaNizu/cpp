#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ofstream file("notes.txt");
    file<<"Hello C++"<<endl;
    file<<"I am learning File I/O";
    
    
    file.close();
    cout<<"Data written to file successfully."<<endl;
    return 0;
}