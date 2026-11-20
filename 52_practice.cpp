#include <iostream>
#include<string>
using namespace std;

class student{
    string name;
    int age;

    public:
    void setData(string n,int a){
        name=n;
        age=a;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
int main() {
  student *ptr=new student[2];
  
  ptr[0].setData("Alice",20);
    ptr[1].setData("Bob",22);

    ptr[0].display();

    cout<<endl;

    ptr[1].display();
delete[] ptr;
ptr=nullptr;
    return 0;
}