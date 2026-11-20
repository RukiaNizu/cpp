#include <iostream>
using namespace std;
class person{
    public:
    string name;
    void showName(){
        cout << "Name: " << name << endl;
    }
};
class student:virtual public person{
    public:
    void study(){
        cout << "Student is studying" << endl;
    }
};
class employee:virtual public person{
    public:
    void work(){
        cout << "Employee is working" << endl;
    }
};
class manager:public student,public employee{
    public:
    void manage(){
        cout << "Manager is managing" << endl;
    }
};
int main() {
    manager m;
    m.name = "Rafi";
    m.showName();
    m.study();
    m.work();
    m.manage();
    
    return 0;
}