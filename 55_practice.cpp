#include <iostream>
using namespace std;

class Base{
    public:
    int baseValue=10;
    void displayBase(){
        cout<<"Base Value: "<<baseValue<<endl;
    }
};

class Derived: public Base{
    public:
    int derivedValue=20;
    void displayDerived(){
        cout<<"Derived Value: "<<derivedValue<<endl;
    }
};
int main() {
    Base *ptr;
    Derived d;
    ptr=&d;

    ptr->displayBase();
    return 0;
}