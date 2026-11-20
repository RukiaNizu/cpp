#include<iostream>
using namespace std;

class Person{
    public:
    string name;
    void introduce(){
        cout<<"My name is "<<name<<endl;
    }
};

class Student:public Person{
    public:
    void study(){
        cout<<name<<" is studying"<<endl;
    }
};
int main(){
    Student s;
    s.name="Nafi"; // This will work
    s.introduce(); // This will work
    s.study(); // This will work
    return 0;
}