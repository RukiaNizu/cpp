#include <iostream>
using namespace std;


class Person{
    protected:
    string name;

};
class Student:public Person{
    public:
    void setName(string n){
        name=n;
    }
    void display(){
        cout<<"My name is "<<name<<endl;
    }
};
int main() {
    Student s;
    s.setName("Rafi");
    s.display();
    return 0;
}