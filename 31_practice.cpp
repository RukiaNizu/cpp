#include<iostream>
using namespace std;
class student{
    private:
    string name;
    int age;
    public:
    student(){
        name="unknown";
        age=0;
    }
    // Parameterized constructor
    student(string n,int a){
        name=n;
        age=a;
    }
    void display(){
        cout<<"name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
    }
};

int main(){
    student s1; // Default constructor
    student s2("John",20); // Parameterized constructor
    student s3("Rahim", 25);

    s1.display();

    cout<<endl;
    s2.display();
    s3.display();

    return 0;
}