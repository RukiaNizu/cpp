#include <iostream>
using namespace std;

class Employee{
    private:
    string name;
    int salary;
    public:
    Employee(string n, int a){
        name=n;
        salary=a;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Salary: "<<salary<<endl;

    }
};
int main() {
    string name;
    int salary;
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enater salary: ";
    cin>>salary;
    Employee e1(name,salary);
    e1.display();
    
  
    
    return 0;
}