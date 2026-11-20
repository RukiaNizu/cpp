#include <iostream>
using namespace std;

class Vehicle{
    public:
    virtual void start(){
        cout<<"Vehicle is starting"<<endl;
    }
};

class Car: public Vehicle{
    public:
    void start() {
        cout<<"Car engine is starting"<<endl;
    }
};
int main() {
    Car c;
    Vehicle *ptr;
    ptr=&c;
    ptr->start();
    
    return 0;
}