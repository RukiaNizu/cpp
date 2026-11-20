#include <iostream>
using namespace std;

class student{
    private:
    string name;
    int age;
    public:
    student(string n,int a){
        name =n;
        age=a;
    } 
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
int main() {
    string name;
    int age;
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter age: ";
    cin>>age;
    student s1(name,age);
    s1.display();
    
    return 0;
}