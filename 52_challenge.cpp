#include <iostream>
#include<string>
using namespace std;

class Employee{
    string name;
    int salary;

    public:
    void setData(string n,int s){
        name=n;
        salary=s;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};
int main() {
  Employee *ptr=new Employee[3];
  ptr[0].setData("John",50000);
    ptr[1].setData("Jane",60000);
    ptr[2].setData("Bob",70000);
    ptr[0].display();
    cout<<endl;
    ptr[1].display();
    cout<<endl;
    ptr[2].display();
delete[] ptr;  
ptr=nullptr;
    return 0;
}