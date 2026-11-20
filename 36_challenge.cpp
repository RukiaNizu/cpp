#include <iostream>
using namespace std;
class Vehicle{
    public:
    void start(){
        cout<<"vehicle is starting"<<endl;

    }
};
class Car:public Vehicle{
    public:
    void drive(){
        cout<<"car is driving"<<endl;
    }
};

int main() {
    Car c;
    c.start();
    c.drive();
    
    return 0;
}