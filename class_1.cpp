#include <iostream>
using namespace std;


class Employee{
    public:
    int id;
    int salary;
};


int main() {
    Employee nizu;

    nizu.id=10;
    nizu.salary=1000;

    cout<<nizu.id<<endl;
    cout<<nizu.salary<<endl;
    
    return 0;
}