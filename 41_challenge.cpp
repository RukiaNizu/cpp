#include<iostream>
using namespace std;
class Teacher{
    public:
    void teach(){
        cout<<"Teacher is teaching"<<endl;
    }
};

class Coach{
    public:
    void train(){
        cout<<"Coach is training"<<endl;
    }
};

class Student:public Teacher,public Coach{
    public:
    void study(){
        cout<<"Student is studying"<<endl;
    }
};
int main() {
  Student s;
    // Your code here
   s.teach();
   s.train();
   s.study();
    return 0;
}