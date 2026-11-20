#include <iostream>
using namespace std;

class employee {
    
    private:
    string name;
    int salary;
   public:
    employee(string n="unknown", int s=10000){
        name=n;
        salary=s;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};

int main() {
    employee e1;
    employee e2("Rakib");

    employee e3("Rakib", 50000);

    e1.display();
    e2.display();
    e3.display();
    
    return 0;
}