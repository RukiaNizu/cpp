#include <iostream>
using namespace std;
class student{
    private:
    int age;
    public:
    student(int a):age(a){
        cout<<"Student class constructor"<<endl;
    }
    void display(){
        cout<<"age:"<<age<<endl;
    }
};


int main() {
  student s(22);
  s.display();

    return 0;
}