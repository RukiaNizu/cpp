#include <iostream>
using namespace std;
class person{
    private:
    string name;
    int age;
    public:
    person(string n,int a):name(n),age(a){
        cout<<"Person constructor called"<<endl;
    }
    void display(){
        cout<<"Name:"<<name<<endl<<"Age:"<<age<<endl;
    }
    };

int main() {
    person p("Rafi",22);
    p.display();
    return 0;
}