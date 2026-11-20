#include<iostream>
using namespace std;

class Student{
    public:
    Student(){
        cout<<"constructor called"<<endl;
    }
    ~Student(){
        cout<<"destructor called"<<endl;
    }
};
int main(){
    Student s1;
    cout<<"inside main"<<endl;
    return 0;

}