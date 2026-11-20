#include<iostream>
using namespace std;
class teacher{
    public:
    void display(){
        cout<<"Teacher is teaching"<<endl;
    }
};
class student{
    public:
    void display(){
        cout<<"Student is studying"<<endl;
    }
};
class person:public teacher,public student{

};

int main(){
    person p;
    p.teacher::display();
    p.student::display();
    return 0;
}