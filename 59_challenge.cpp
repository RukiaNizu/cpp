#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("student.txt");
    file << "Name:Nizu" << endl;
    file << "Age:22" << endl;
    file.close();
    cout << "Student data saved." << endl;
    return 0;
}