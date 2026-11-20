#include <iostream>
using namespace std;

class person{
    public:
    person(string n, int age){
        cout<<"Person class constructor:"<<n<<endl<<"Age:"<<age<<endl;
    }
};

class student:public person{
    public:
    student(string y, int age):person(y, age){
        cout<<"Student class constructor"<<endl;
    }
};
int main() {
    
    student s("rafi", 22);
    return 0;
}