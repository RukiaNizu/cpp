#include <iostream>
using namespace std;

class Parent{
    public:
    int a=10;
    protected:
    int b=20;
    private:
    int c=30;


};

class Child:public Parent{
    public:
    void show(){
        cout<<"public:"<<a<<endl;
        cout<<"protected:"<<b<<endl;
        // Cannot access private data
    }
};

int main() {
    Child c;
    c.show();   
    return 0;
}