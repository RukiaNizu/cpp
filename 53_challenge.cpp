#include <iostream>
using namespace std;

class Employee{
    private:
    int salary;

    public:
    void setSalary(int salary){
        this->salary=salary;
    }
    void display(){
        cout<<"Salary: "<<this->salary<<endl;
    }
};
int main() {
    Employee e1;
    Employee e2;

    e1.setSalary(50000);
    e2.setSalary(60000);

    e1.display();
    e2.display();
    
    return 0;
}