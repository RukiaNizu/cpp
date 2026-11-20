#include <iostream>
using namespace std;

class Student{
    int age;


public:
    void setAge(int a){
        this->age=a;
    }
    void display(){
        cout<<"Age: "<<this->age<<endl;
    }
};
int main() {
    Student s1;
    Student s2;
    
    s1.setAge(22);
    s2.setAge(25);


    s1.display();
    s2.display();
    return 0;
}