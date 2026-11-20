#include <iostream>
using namespace std;

class animal{
    public:
    void eat(){
        cout<<"animal is eating"<<endl;

    }
};

class mammal:public animal{
    public:
    void walk(){
        cout<<"mammal is walking"<<endl;
    }
};

class dog:public mammal{
    public:
    void bark(){
        cout<<"dog is barking"<<endl;
    }
};


int main() {
    dog d;
    d.eat();
    d.walk();
    d.bark();
    
    return 0;
}