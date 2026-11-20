#include<iostream>
using namespace std;
class Student{
    private:
    string name;
    int age;
    public:
    Student(string n,int a){
        name=n;
        age=a;
    }
    Student(const Student & obj){
        name=obj.name;
        age=obj.age;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
int main(){
    Student s1("Hasan",22);
    Student s2(s1);

    s1.display();
    cout<<endl;
    s2.display();
    return 0;
}