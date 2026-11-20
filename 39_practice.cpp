#include <iostream>
using namespace std;

class Parent{
    protected:
    int number=50;
};

class Child:public Parent{
    public:
    void show(){
        cout<<"The number is "<<number<<endl;
    }
};
int main() {
    Child c;
    c.show();
    return 0;
}